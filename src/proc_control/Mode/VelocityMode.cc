#include "VelocityMode.h"

namespace proc_control
{

    VelocityMode::VelocityMode(std::shared_ptr<RobotState> &robotState, std::unique_ptr<ControllerIF> &controlAUV):
        robotState_{robotState},
        controlAUV_{std::move(controlAUV)},
        actualTwist_{Eigen::VectorXd::Zero(control::CARTESIAN_SPACE)},
        actualPose_{Eigen::VectorXd::Zero(control::CARTESIAN_SPACE)},
        desiredTwist_{Eigen::VectorXd::Zero(control::CARTESIAN_SPACE)}
    {
        controllerCommand_.errorPose     = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        controllerCommand_.errorVelocity = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        controllerCommand_.velocity      = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        controllerCommand_.acceleration  = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        controllerCommand_.orientation   = Eigen::Vector3d::Zero();
    }

    void VelocityMode::Process()
    {
        actualPose_   = robotState_->GetActualPose();
        actualTwist_  = robotState_->GetActualTwist();

        desiredTwist_ = robotState_->GetDesiredTwist();

        GetLocalError(desiredTwist_, controllerCommand_.errorPose);
        robotState_->PosePublisher(desiredTwist_, robotState_->GetDebugTargetPublisher());

        robotState_->TwistPublisher(controllerCommand_.errorVelocity, robotState_->GetControllerTwistErrorPublisher());

        Eigen::VectorXd actuation = Eigen::VectorXd::Zero(control::CARTESIAN_SPACE);
        actuation = controlAUV_->ComputedWrenchFromError(controllerCommand_);

        robotState_->WrenchPublisher(actuation, robotState_->GetCommandDebugPublisher());
    }

    void VelocityMode::SetTarget(bool isGlobal, Eigen::VectorXd &targetPose)
    {
        robotState_->SetDesiredTwist(targetPose);
    }

    void VelocityMode::SetDecoupledTarget(bool isGlobal, const std::vector<bool> &keepTarget, Eigen::VectorXd &targetPose)
    {
    }

    void VelocityMode::GetLocalError(Eigen::VectorXd &targetPose, Eigen::VectorXd &localError)
    {
        localError    = targetPose - actualTwist_;
        localError[2] = targetPose[2] - actualPose_[2];
    }
}
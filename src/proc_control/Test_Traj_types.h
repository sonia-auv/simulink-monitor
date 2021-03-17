//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Test_Traj_types.h
//
// Code generated for Simulink model 'Test_Traj'.
//
// Model version                  : 1.69
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Wed Mar 17 14:54:48 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 8
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Test_Traj_types_h_
#define RTW_HEADER_Test_Traj_types_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_Test_Traj_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_Test_Traj_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_sonia_common_AddPose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_sonia_common_AddPose_

// MsgType=sonia_common/AddPose
typedef struct {
  uint8_T Frame;
  uint8_T Speed;
  real_T Fine;

  // MsgType=geometry_msgs/Point
  SL_Bus_Test_Traj_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_Test_Traj_geometry_msgs_Vector3 Orientation;
} SL_Bus_Test_Traj_sonia_common_AddPose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_std_msgs_Bool_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Test_Traj_std_msgs_Bool_

// MsgType=std_msgs/Bool
typedef struct {
  boolean_T Data;
} SL_Bus_Test_Traj_std_msgs_Bool;

#endif

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_9SewJ4y3IXNs5GrZti8qkG

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef struct_tag_w39vnWYBn84tMm6zGpZhfH
#define struct_tag_w39vnWYBn84tMm6zGpZhfH

struct tag_w39vnWYBn84tMm6zGpZhfH
{
  real_T a[21];
  real_T b[21];
  real_T c[21];
  real_T d[21];
};

#endif                                 //struct_tag_w39vnWYBn84tMm6zGpZhfH

#ifndef typedef_c_matlabshared_rotations_inte_T
#define typedef_c_matlabshared_rotations_inte_T

typedef struct tag_w39vnWYBn84tMm6zGpZhfH c_matlabshared_rotations_inte_T;

#endif                                 //typedef_c_matlabshared_rotations_inte_T

#ifndef struct_emxArray_real_T_42x3
#define struct_emxArray_real_T_42x3

struct emxArray_real_T_42x3
{
  real_T data[126];
  int32_T size[2];
};

#endif                                 //struct_emxArray_real_T_42x3

#ifndef typedef_emxArray_real_T_42x3_Test_Tra_T
#define typedef_emxArray_real_T_42x3_Test_Tra_T

typedef struct emxArray_real_T_42x3 emxArray_real_T_42x3_Test_Tra_T;

#endif                                 //typedef_emxArray_real_T_42x3_Test_Tra_T

#ifndef struct_tag_nLWsDI5AtRIk14xkFAWVFE
#define struct_tag_nLWsDI5AtRIk14xkFAWVFE

struct tag_nLWsDI5AtRIk14xkFAWVFE
{
  emxArray_real_T_42x3_Test_Tra_T f1;
};

#endif                                 //struct_tag_nLWsDI5AtRIk14xkFAWVFE

#ifndef typedef_f_cell_wrap_Test_Traj_T
#define typedef_f_cell_wrap_Test_Traj_T

typedef struct tag_nLWsDI5AtRIk14xkFAWVFE f_cell_wrap_Test_Traj_T;

#endif                                 //typedef_f_cell_wrap_Test_Traj_T

#ifndef struct_tag_1ZMx2raDbazxECuXK2PYAC
#define struct_tag_1ZMx2raDbazxECuXK2PYAC

struct tag_1ZMx2raDbazxECuXK2PYAC
{
  int32_T isInitialized;
  real_T linearConvergence;
  real_T quaternionConvergence;
  real_T TargetThreshold;
  real_T poseBuffer[78013];
  real_T generationNumber;
  real_T bufferCount;
  boolean_T done;
  real_T targetReachedCount;
  real_T dummy;
  real_T emptyArray[13];
};

#endif                                 //struct_tag_1ZMx2raDbazxECuXK2PYAC

#ifndef typedef_TrajectoryManager_Test_Traj_T
#define typedef_TrajectoryManager_Test_Traj_T

typedef struct tag_1ZMx2raDbazxECuXK2PYAC TrajectoryManager_Test_Traj_T;

#endif                                 //typedef_TrajectoryManager_Test_Traj_T

#ifndef struct_tag_sCXoxZ5eAHJ4jc1Rc8eoNH
#define struct_tag_sCXoxZ5eAHJ4jc1Rc8eoNH

struct tag_sCXoxZ5eAHJ4jc1Rc8eoNH
{
  real_T i;
  real_T poseList[160];
};

#endif                                 //struct_tag_sCXoxZ5eAHJ4jc1Rc8eoNH

#ifndef typedef_AddPose_Test_Traj_T
#define typedef_AddPose_Test_Traj_T

typedef struct tag_sCXoxZ5eAHJ4jc1Rc8eoNH AddPose_Test_Traj_T;

#endif                                 //typedef_AddPose_Test_Traj_T

#ifndef struct_tag_sNwBqDHDI8zOGXFxo0o9rRC
#define struct_tag_sNwBqDHDI8zOGXFxo0o9rRC

struct tag_sNwBqDHDI8zOGXFxo0o9rRC
{
  real_T breaks[21];
  real_T coefs[80];
};

#endif                                 //struct_tag_sNwBqDHDI8zOGXFxo0o9rRC

#ifndef typedef_sNwBqDHDI8zOGXFxo0o9rRC_Test__T
#define typedef_sNwBqDHDI8zOGXFxo0o9rRC_Test__T

typedef struct tag_sNwBqDHDI8zOGXFxo0o9rRC sNwBqDHDI8zOGXFxo0o9rRC_Test__T;

#endif                                 //typedef_sNwBqDHDI8zOGXFxo0o9rRC_Test__T

#ifndef struct_tag_sxqf8zTOpserqZ3ZVpwSQqE
#define struct_tag_sxqf8zTOpserqZ3ZVpwSQqE

struct tag_sxqf8zTOpserqZ3ZVpwSQqE
{
  real_T breaks[21];
  real_T coefs[80];
};

#endif                                 //struct_tag_sxqf8zTOpserqZ3ZVpwSQqE

#ifndef typedef_sxqf8zTOpserqZ3ZVpwSQqE_Test__T
#define typedef_sxqf8zTOpserqZ3ZVpwSQqE_Test__T

typedef struct tag_sxqf8zTOpserqZ3ZVpwSQqE sxqf8zTOpserqZ3ZVpwSQqE_Test__T;

#endif                                 //typedef_sxqf8zTOpserqZ3ZVpwSQqE_Test__T

#ifndef struct_tag_f8bArac4feJCkee9WJiqFH
#define struct_tag_f8bArac4feJCkee9WJiqFH

struct tag_f8bArac4feJCkee9WJiqFH
{
  real_T f1[63];
};

#endif                                 //struct_tag_f8bArac4feJCkee9WJiqFH

#ifndef typedef_d_cell_wrap_Test_Traj_T
#define typedef_d_cell_wrap_Test_Traj_T

typedef struct tag_f8bArac4feJCkee9WJiqFH d_cell_wrap_Test_Traj_T;

#endif                                 //typedef_d_cell_wrap_Test_Traj_T

#ifndef struct_tag_bosTWLER3KLpITT64W1zY
#define struct_tag_bosTWLER3KLpITT64W1zY

struct tag_bosTWLER3KLpITT64W1zY
{
  int32_T isInitialized;
  real_T avanceRapide[7];
  real_T avancePrecision[7];
  real_T accRapide[7];
  real_T accPrecision;
  real_T Ts;
  real_T computeCount;
};

#endif                                 //struct_tag_bosTWLER3KLpITT64W1zY

#ifndef typedef_TrajectoryGenerator_Test_Traj_T
#define typedef_TrajectoryGenerator_Test_Traj_T

typedef struct tag_bosTWLER3KLpITT64W1zY TrajectoryGenerator_Test_Traj_T;

#endif                                 //typedef_TrajectoryGenerator_Test_Traj_T

#ifndef struct_tag_VE7ZJxeWEXGwc3tZK77MuF
#define struct_tag_VE7ZJxeWEXGwc3tZK77MuF

struct tag_VE7ZJxeWEXGwc3tZK77MuF
{
  int32_T isInitialized;
  real_T SampleRate;
  real_T Waypoints[63];
  real_T TimeOfArrival[21];
  real_T Velocities[63];
  real_T Course[21];
  c_matlabshared_rotations_inte_T Quaternions;
  char_T ReferenceFrame[3];
  real_T HorizontalCumulativeDistance[21];
  sNwBqDHDI8zOGXFxo0o9rRC_Test__T HorizontalDistancePiecewisePolynomial;
  sxqf8zTOpserqZ3ZVpwSQqE_Test__T HorizontalSpeedPiecewisePolynomial;
  sxqf8zTOpserqZ3ZVpwSQqE_Test__T HorizontalAccelerationPiecewisePolynomial;
  sxqf8zTOpserqZ3ZVpwSQqE_Test__T HorizontalJerkPiecewisePolynomial;
  real_T HorizontalCurvatureInitial[20];
  real_T HorizontalCurvatureFinal[20];
  creal_T HorizontalInitialPosition[21];
  real_T HorizontalPiecewiseLength[20];
  sNwBqDHDI8zOGXFxo0o9rRC_Test__T VerticalDistancePiecewisePolynomial;
  sxqf8zTOpserqZ3ZVpwSQqE_Test__T VerticalSpeedPiecewisePolynomial;
  sxqf8zTOpserqZ3ZVpwSQqE_Test__T VerticalAccelerationPiecewisePolynomial;
  sxqf8zTOpserqZ3ZVpwSQqE_Test__T VerticalJerkPiecewisePolynomial;
  real_T PathDuration;
  real_T SegmentTimes[20];
  real_T RadianSlewAngles[20];
  real_T AxesOfRotation[60];
  real_T RadianAngularVelocities[63];
  real_T CurrentTime;
  boolean_T IsDoneStatus;
};

#endif                                 //struct_tag_VE7ZJxeWEXGwc3tZK77MuF

#ifndef typedef_waypointTrajectory_Test_Traj_T
#define typedef_waypointTrajectory_Test_Traj_T

typedef struct tag_VE7ZJxeWEXGwc3tZK77MuF waypointTrajectory_Test_Traj_T;

#endif                                 //typedef_waypointTrajectory_Test_Traj_T

#ifndef struct_emxArray_real_T_42
#define struct_emxArray_real_T_42

struct emxArray_real_T_42
{
  real_T data[42];
  int32_T size;
};

#endif                                 //struct_emxArray_real_T_42

#ifndef typedef_emxArray_real_T_42_Test_Traj_T
#define typedef_emxArray_real_T_42_Test_Traj_T

typedef struct emxArray_real_T_42 emxArray_real_T_42_Test_Traj_T;

#endif                                 //typedef_emxArray_real_T_42_Test_Traj_T

#ifndef struct_tag_Vp5UUXfA6uW8EaACAYs4i
#define struct_tag_Vp5UUXfA6uW8EaACAYs4i

struct tag_Vp5UUXfA6uW8EaACAYs4i
{
  emxArray_real_T_42_Test_Traj_T f1;
};

#endif                                 //struct_tag_Vp5UUXfA6uW8EaACAYs4i

#ifndef typedef_h_cell_wrap_Test_Traj_T
#define typedef_h_cell_wrap_Test_Traj_T

typedef struct tag_Vp5UUXfA6uW8EaACAYs4i h_cell_wrap_Test_Traj_T;

#endif                                 //typedef_h_cell_wrap_Test_Traj_T

// Parameters (default storage)
typedef struct P_Test_Traj_T_ P_Test_Traj_T;

// Forward declaration for rtModel
typedef struct tag_RTM_Test_Traj_T RT_MODEL_Test_Traj_T;

#endif                                 // RTW_HEADER_Test_Traj_types_h_

//
// File trailer for generated code.
//
// [EOF]
//

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Test_Traj.cpp
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
#include "Test_Traj.h"
#include "Test_Traj_private.h"

// Block signals (default storage)
B_Test_Traj_T Test_Traj_B;

// Block states (default storage)
DW_Test_Traj_T Test_Traj_DW;

// Previous zero-crossings (trigger) states
PrevZCX_Test_Traj_T Test_Traj_PrevZCX;

// External outputs (root outports fed by signals with default storage)
ExtY_Test_Traj_T Test_Traj_Y;

// Real-time model
RT_MODEL_Test_Traj_T Test_Traj_M_ = RT_MODEL_Test_Traj_T();
RT_MODEL_Test_Traj_T *const Test_Traj_M = &Test_Traj_M_;

// Forward declaration for local functions
static boolean_T Test_Traj_isequal(const real_T varargin_1[7], const real_T
  varargin_2[7]);
static void Test__quaternioncg_quaternioncg(const real_T varargin_1[84], real_T
  obj_a[21], real_T obj_b[21], real_T obj_c[21], real_T obj_d[21]);
static void waypointTrajectory_setPropertie(waypointTrajectory_Test_Traj_T *obj,
  const real_T varargin_1[63], const real_T varargin_2[21], real_T varargin_4,
  const real_T varargin_8_a[21], const real_T varargin_8_b[21], const real_T
  varargin_8_c[21], const real_T varargin_8_d[21]);
static boolean_T Test_Traj_isequal_p(const real_T varargin_1[2], const real_T
  varargin_2[2]);
static void Test_Traj_pol2cart_p(real_T th[2], const real_T r[2], real_T x[2]);
static void Test_Traj_endpointpadding_ph(const creal_T zcurrent_data[], const
  int32_T zcurrent_size[2], const creal_T varargin_1[2], creal_T *zleft, creal_T
  *zright);
static void Test_Traj_diff(const creal_T x_data[], const int32_T x_size[2],
  creal_T y_data[], int32_T y_size[2]);
static real_T Test_Traj_rt_hypotd_snf(real_T u0, real_T u1);
static void Test_Traj_abs(const creal_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2]);
static void Test_Traj_angle(const creal_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2]);
static boolean_T Test_Traj_isnan(const creal_T x);
static void Test_Traj_tan(const real_T x_data[], const int32_T x_size[2], real_T
  b_x_data[], int32_T b_x_size[2]);
static void Test_Traj_midcurve(const creal_T Pb_data[], const int32_T Pb_size[2],
  const creal_T Vbd_data[], const real_T Lab_data[], const int32_T Lab_size[2],
  const real_T Lbd_data[], const int32_T Lbd_size[2], const real_T Lde_data[],
  const int32_T Lde_size[2], const real_T alpha_data[], const real_T beta_data[],
  creal_T Pc_data[], int32_T Pc_size[2]);
static void Test_Traj_insertCodegen_p(const creal_T zorig_data[], real_T m,
  real_T nmax, const creal_T varargin_1[2], creal_T Zout_data[], int32_T
  Zout_size[2]);
static void Test_Traj_optimize_p(const creal_T zcurrent_data[], const int32_T
  zcurrent_size[2], const creal_T zorig_data[], const int32_T zorig_size[2],
  const creal_T varargin_1[2], creal_T Zout_data[], int32_T Zout_size[2]);
static void Test_Traj_cloth_p(const creal_T z_data[], const int32_T *z_size,
  const creal_T varargin_1[2], real_T r_data[], int32_T r_size[2], real_T
  s_data[], int32_T s_size[2]);
static void Test_Traj_packageCodegen_p(const real_T r_data[], const real_T
  s_data[], real_T n, real_T u_data[], int32_T *u_size, real_T v_data[], int32_T
  *v_size);
static void Test_Traj_dclothoidwp_p(const real_T x_data[], const int32_T *x_size,
  const real_T y_data[], const real_T varargin_1[2], const real_T varargin_2[2],
  real_T u_data[], int32_T *u_size, real_T v_data[], int32_T *v_size);
static void Test_Traj_angle_p(const creal_T x_data[], const int32_T *x_size,
  real_T y_data[], int32_T *y_size);
static void Test_Traj_exp_p(creal_T x_data[], const int32_T *x_size);
static real_T Test_Traj_rt_powd_snf(real_T u0, real_T u1);
static void Test_Traj_power_p(const real_T a_data[], const int32_T *a_size,
  real_T y_data[], int32_T *y_size);
static void Test_Traj_repmat_p(const real_T a_data[], const int32_T *a_size,
  real_T b_data[], int32_T b_size[2]);
static void Test_Traj_fetchAgrad_p(const real_T x_data[], const int32_T *x_size,
  const real_T y_data[], real_T a_data[], int32_T *a_size, real_T dadx_data[],
  int32_T *dadx_size, real_T dady_data[], int32_T *dady_size);
static void Test_Traj_abs_p(const real_T x_data[], const int32_T *x_size, real_T
  y_data[], int32_T *y_size);
static creal_T Test_Traj_sqrt_p(const creal_T x);
static void Test_Traj_sqrt_phm(creal_T x_data[], const int32_T *x_size);
static void Test_Traj_fresnelr(const real_T x_data[], const int32_T *x_size,
  creal_T z_data[], int32_T *z_size);
static void Test_Traj_fresnel(const creal_T x_data[], const int32_T *x_size,
  creal_T z_data[], int32_T *z_size);
static void Test_Traj_power_ph(const creal_T a_data[], const int32_T *a_size,
  creal_T y_data[], int32_T *y_size);
static void Test_Traj_sign_p(real_T x_data[], const int32_T *x_size);
static void Test_Traj_power_phm(const creal_T a_data[], const int32_T *a_size,
  creal_T y_data[], int32_T *y_size);
static void Test_Traj_fresnelgLargea1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T rsfa_data[], int32_T *rsfa_size, creal_T
  drsfa_data[], int32_T *drsfa_size);
static void Test_Traj_power_phmy(const real_T a_data[], const int32_T *a_size,
  real_T y_data[], int32_T *y_size);
static void Test_Traj_fresnelgSmalla1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T z_data[], int32_T *z_size, creal_T dz_data[],
  int32_T *dz_size);
static void Test_Traj_fresnelg1_p(const real_T a_data[], const int32_T *a_size,
  const real_T d_data[], const int32_T *d_size, const real_T c_data[], creal_T
  z_data[], int32_T *z_size, creal_T dz_data[], int32_T *dz_size);
static void Test_Traj_abs_ph(const creal_T x_data[], const int32_T *x_size,
  real_T y_data[], int32_T *y_size);
static void Test_Traj_clothoidG1fit2wp_p(const creal_T z0_data[], const real_T
  theta0_data[], const int32_T *theta0_size, const creal_T z1_data[], const
  int32_T *z1_size, const real_T theta1_data[], const int32_T *theta1_size,
  real_T k0_data[], int32_T *k0_size, real_T k1_data[], int32_T *k1_size, real_T
  l_data[], int32_T *l_size, real_T dk0_dtheta0_data[], int32_T
  *dk0_dtheta0_size, real_T dk0_dtheta1_data[], int32_T *dk0_dtheta1_size,
  real_T dk1_dtheta0_data[], int32_T *dk1_dtheta0_size, real_T dk1_dtheta1_data[],
  int32_T *dk1_dtheta1_size);
static void Test_Traj___anon_fcn_ph(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T course_data[], const int32_T *course_size,
  const real_T x_data[], real_T varargout_1_data[], int32_T *varargout_1_size,
  real_T varargout_2_data[], int32_T varargout_2_size[2]);
static void Test_Traj_mulJt_p(const real_T Jtri_data[], const int32_T Jtri_size
  [2], const real_T x_data[], const int32_T *x_size, real_T y_data[], int32_T
  *y_size);
static void Test_Traj_repmat_ph(real_T varargin_1, real_T b_data[], int32_T
  *b_size);
static boolean_T Test_Traj_any_p(const boolean_T x_data[], const int32_T *x_size);
static void Test_Traj_bsxfun(const real_T a_data[], const int32_T a_size[2],
  const real_T b_data[], const int32_T *b_size, real_T c_data[], int32_T c_size
  [2]);
static void Test_Traj_sympentdisolve_ph(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T b_size[2],
  real_T x_data[], int32_T x_size[2]);
static void Test_Traj_eye(real_T b_I[16]);
static void Test_Traj_mldivide_ph(const real_T A[16], real_T B[4]);
static void Test_Traj_cycsympentdisolve_p(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size);
static void Test_Traj_sympentdisolve_p(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size);
static void Test_Traj_AccumArrayScalarVal(const real_T subs_data[], const
  int32_T subs_size[2], real_T val, const int32_T sz[2], real_T A_data[],
  int32_T A_size[2]);
static void Test_Traj_accumarray_p(const real_T subs_data[], const int32_T
  subs_size[2], const real_T val_data[], const int32_T *val_size, const real_T
  sz[2], real_T A_data[], int32_T A_size[2]);
static void Test_Traj_diag(const real_T v_data[], const int32_T v_size[2],
  real_T d_data[], int32_T *d_size);
static void Test_Traj_diag_p(const real_T v_data[], const int32_T *v_size,
  real_T d_data[], int32_T d_size[2]);
static real_T Test_Traj_xnrm2_ph(int32_T n, const real_T x_data[], int32_T ix0);
static int32_T Test_Traj_ixamax(int32_T n, const real_T x_data[], int32_T ix0);
static void Test_Traj_xswap(int32_T n, const real_T x_data[], const int32_T
  x_size[2], int32_T ix0, int32_T iy0, real_T b_x_data[], int32_T b_x_size[2]);
static void Test_Traj_xzlarfg_ph(int32_T n, real_T alpha1, const real_T x_data[],
  const int32_T x_size[2], int32_T ix0, real_T *b_alpha1, real_T b_x_data[],
  int32_T b_x_size[2], real_T *tau);
static void Test_Traj_ilazlc(int32_T m, int32_T n, const real_T A_data[], const
  int32_T A_size[2], int32_T ia0, int32_T lda, int32_T *j, real_T b_A_data[],
  int32_T b_A_size[2]);
static void Test_Traj_xgemv(int32_T m, int32_T n, const real_T A_data[], int32_T
  ia0, int32_T lda, const real_T x_data[], int32_T ix0, const real_T y_data[],
  const int32_T *y_size, real_T b_y_data[], int32_T *b_y_size);
static void Test_Traj_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y_data[], const real_T A_data[], const int32_T A_size[2], int32_T
  ia0, int32_T lda, real_T b_A_data[], int32_T b_A_size[2]);
static void Test_Traj_xzlarf_phmyulb(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc,
  real_T work_data[], int32_T *work_size, real_T b_C_data[], int32_T b_C_size[2]);
static void Test_Traj_qrpf_p(const real_T A_data[], const int32_T A_size[2],
  int32_T m, int32_T n, real_T tau_data[], const int32_T jpvt_data[], const
  int32_T jpvt_size[2], real_T b_A_data[], int32_T b_A_size[2], int32_T
  b_jpvt_data[], int32_T b_jpvt_size[2]);
static void Test_Traj_lusolve_p(const real_T A_data[], const int32_T A_size[2],
  real_T B_data[], const int32_T *B_size);
static void Test_Traj_mldivide_p(const real_T A_data[], const int32_T A_size[2],
  const real_T B_data[], const int32_T *B_size, real_T Y_data[], int32_T *Y_size);
static void Test_Tra_solveDampenedHessian_p(const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T lambda, const real_T v_data[], const int32_T
  *v_size, real_T dx_data[], int32_T *dx_size);
static void Test_Traj_mulJtJ(const real_T Jtri_data[], const int32_T Jtri_size[2],
  const real_T x_data[], const int32_T *x_size, real_T y_data[], int32_T *y_size);
static real_T Test_Traj_norm_ph(const real_T x_data[], const int32_T *x_size);
static void Test_Traj_tridisolve(const real_T a_data[], real_T b_data[], const
  real_T c_data[], const real_T d_data[], const int32_T *d_size, real_T x_data[],
  int32_T *x_size);
static void Test_Traj_cyctridisolve_p(const real_T a_data[], real_T b_data[],
  const int32_T *b_size, const real_T c_data[], const real_T d_data[], const
  int32_T *d_size, real_T x_data[], int32_T *x_size);
static void Test_Traj_solveHessian_p(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T v_data[], const int32_T *v_size, real_T dx_data[],
  int32_T *dx_size);
static boolean_T Test_Traj_anyNonFinite(const real_T x_data[], const int32_T
  x_size[2]);
static boolean_T Test_Traj_ishermitian(const real_T A_data[], const int32_T
  A_size[2]);
static real_T Test_Traj_xzlangeM_p(const creal_T x_data[], const int32_T x_size
  [2]);
static boolean_T Test_Traj_isfinite(real_T x);
static void Test_Traj_xzlascl_ph(real_T cfrom, real_T cto, const creal_T A_data[],
  const int32_T A_size[2], creal_T b_A_data[], int32_T b_A_size[2]);
static void Test_Traj_xzggbal_p(const creal_T A_data[], const int32_T A_size[2],
  creal_T b_A_data[], int32_T b_A_size[2], int32_T *ilo, int32_T *ihi, int32_T
  rscale_data[], int32_T *rscale_size);
static void Test_Traj_xzlartg(const creal_T f, const creal_T g, real_T *cs,
  creal_T *sn, creal_T *r);
static void Test_Traj_xzgghrd_p(int32_T ilo, int32_T ihi, const creal_T A_data[],
  const int32_T A_size[2], creal_T b_A_data[], int32_T b_A_size[2]);
static real_T Test_Traj_xzlanhs_p(const creal_T A_data[], const int32_T A_size[2],
  int32_T ilo, int32_T ihi);
static int32_T Test_Traj_mod(int32_T x);
static void Test_Traj_xzlartg_p(const creal_T f, const creal_T g, real_T *cs,
  creal_T *sn);
static void Test_Traj_xzhgeqz_p(const creal_T A_data[], const int32_T A_size[2],
  int32_T ilo, int32_T ihi, int32_T *info, creal_T alpha1_data[], int32_T
  *alpha1_size, creal_T beta1_data[], int32_T *beta1_size);
static void Test_Traj_xzlascl_phmyu(real_T cfrom, real_T cto, creal_T A_data[],
  const int32_T *A_size);
static void Test_Traj_xzgeev_p(const real_T A_data[], const int32_T A_size[2],
  int32_T *info, creal_T alpha1_data[], int32_T *alpha1_size, creal_T
  beta1_data[], int32_T *beta1_size);
static void Test_Traj_ilazlr(int32_T m, int32_T n, const real_T A_data[], const
  int32_T A_size[2], int32_T ia0, int32_T lda, int32_T *i, real_T b_A_data[],
  int32_T b_A_size[2]);
static void Test_Traj_xgemv_phm(int32_T m, int32_T n, const real_T A_data[],
  int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
static void Test_Traj_xgerc_p(int32_T m, int32_T n, real_T alpha1, const real_T
  x_data[], int32_T iy0, const real_T A_data[], const int32_T A_size[2], int32_T
  ia0, int32_T lda, real_T b_A_data[], int32_T b_A_size[2]);
static void Test_Traj_xzlarf_phmyulbc(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc,
  real_T work_data[], real_T b_C_data[], int32_T b_C_size[2]);
static void Test_Traj_xgemv_phmy(int32_T m, int32_T n, const real_T A_data[],
  int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
static void Test_Traj_xgerc_ph(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y_data[], const real_T A_data[], const int32_T A_size[2], int32_T
  ia0, int32_T lda, real_T b_A_data[], int32_T b_A_size[2]);
static void Test_Traj_xzlarf_phmyulbc3(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc,
  real_T work_data[], real_T b_C_data[], int32_T b_C_size[2]);
static void Test_Traj_xgehrd_p(const real_T a_data[], const int32_T a_size[2],
  real_T b_a_data[], int32_T b_a_size[2]);
static real_T Test_Traj_xnrm2_p(int32_T n, const real_T x[3]);
static void Test_Traj_xzlarfg_phm(int32_T n, real_T alpha1, real_T x[3], real_T *
  b_alpha1, real_T *tau);
static void Test_Traj_xdlanv2(real_T a, real_T b, real_T c, real_T d, real_T
  *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *b_a, real_T *b_b,
  real_T *b_c, real_T *b_d, real_T *cs, real_T *sn);
static void Test_Traj_xrot_p(int32_T n, const real_T x_data[], const int32_T
  x_size[2], int32_T ix0, int32_T incx, int32_T iy0, int32_T incy, real_T c,
  real_T s, real_T b_x_data[], int32_T b_x_size[2]);
static void Test_Traj_xrot_ph(int32_T n, const real_T x_data[], const int32_T
  x_size[2], int32_T ix0, int32_T iy0, real_T c, real_T s, real_T b_x_data[],
  int32_T b_x_size[2]);
static void Test_Traj_eml_dlahqr_p(const real_T h_data[], const int32_T h_size[2],
  real_T b_h_data[], int32_T b_h_size[2], int32_T *info);
static void Test_Traj_xhseqr_p(const real_T h_data[], const int32_T h_size[2],
  real_T b_h_data[], int32_T b_h_size[2], int32_T *info);
static void Test_Traj_triu(const real_T x_data[], const int32_T x_size[2],
  real_T b_x_data[], int32_T b_x_size[2]);
static void Test_Traj_schur_p(real_T A_data[], int32_T A_size[2], real_T V_data[],
  int32_T V_size[2]);
static void Test_Traj_mainDiagZeroImag(const real_T D_data[], const int32_T
  D_size[2], real_T d_data[], int32_T *d_size);
static void Test_Traj_eig_p(const real_T A_data[], const int32_T A_size[2],
  creal_T V_data[], int32_T *V_size);
static real_T Test_Traj_leastEigvJtJ_p(const real_T Jtri_data[], const int32_T
  Jtri_size[2], real_T n);
static void Test_Traj_fletcher_p(real_T S, real_T Snew, const real_T dx_data[],
  const int32_T *dx_size, const real_T v_data[], const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T lambda, real_T lambdac, real_T *b_lambda, real_T *
  b_lambdac);
static void Test_Traj_LMFsolve_phmyulbc3(const real_T
  FUN_tunableEnvironment_f1_data[], const int32_T
  FUN_tunableEnvironment_f1_size[2], const real_T
  FUN_tunableEnvironment_f2_data[], const int32_T
  *FUN_tunableEnvironment_f2_size, real_T x_data[], const int32_T *x_size);
static void Test_Traj___anon_fcn_p(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T course_data[], const int32_T *course_size,
  const real_T x_data[], real_T varargout_1_data[], int32_T *varargout_1_size,
  real_T varargout_2_data[], int32_T varargout_2_size[2]);
static void Test_Traj_LMFsolve_phmyulbc(const real_T
  FUN_tunableEnvironment_f1_data[], const int32_T
  FUN_tunableEnvironment_f1_size[2], const real_T
  FUN_tunableEnvironment_f2_data[], const int32_T
  *FUN_tunableEnvironment_f2_size, real_T x_data[], const int32_T *x_size);
static void Test_Traj___anon_fcn(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T course_data[], const int32_T *course_size,
  const real_T x_data[], real_T varargout_1_data[], int32_T *varargout_1_size,
  real_T varargout_2_data[], int32_T varargout_2_size[2]);
static void Test_Traj_LMFsolve_phmyulb(const real_T
  FUN_tunableEnvironment_f1_data[], const int32_T
  FUN_tunableEnvironment_f1_size[2], const real_T
  FUN_tunableEnvironment_f2_data[], const int32_T
  *FUN_tunableEnvironment_f2_size, real_T x_data[], const int32_T *x_size);
static void Test_Traj_LMFsolve_phmyul(const f_cell_wrap_Test_Traj_T
  *FUN_tunableEnvironment, real_T x_data[], const int32_T *x_size);
static void Test_Traj_fitCourse_p(const real_T waypoints_data[], const int32_T
  waypoints_size[2], real_T course_data[], int32_T *course_size);
static void Test_Traj_fitPartialCourse(const real_T waypoints[63], real_T
  course[21]);
static void Test_Traj_partitionCourse(const real_T course[21], real_T
  ibegin_data[], int32_T *ibegin_size, real_T iend_data[], int32_T *iend_size);
static void Test_Traj_endpointpadding(const creal_T zcurrent_data[], const
  int32_T zcurrent_size[2], const creal_T zorig_data[], const int32_T
  zorig_size[2], creal_T *zleft, creal_T *zright);
static void Test_Traj_insertCodegen(const creal_T zorig[2561], real_T m, creal_T
  Zout_data[], int32_T Zout_size[2]);
static void Test_Traj_endpointpadding_p(const creal_T zcurrent_data[], const
  int32_T zcurrent_size[2], const creal_T zorig[21], creal_T *zleft, creal_T
  *zright);
static void Test_Traj_optimize(const creal_T zcurrent_data[], const int32_T
  zcurrent_size[2], const creal_T zorig[21], creal_T Zout_data[], int32_T
  Zout_size[2]);
static void Test_Traj_cloth(const creal_T z[21], real_T r[2561], real_T s[2561]);
static void Test_Traj_packageCodegen(const real_T r[2561], const real_T s[2561],
  real_T u[2561], real_T v[2561]);
static void Test_Traj_dclothoidwp(const real_T x[21], const real_T y[21], real_T
  u[2561], real_T v[2561]);
static void Test_Traj_power(const real_T a[20], real_T y[20]);
static void Test_Traj_repmat(const real_T a[20], real_T b[500]);
static void Test_Traj_fetchAgrad(const real_T x[20], const real_T y[20], real_T
  a[20], real_T dadx[20], real_T dady[20]);
static void Test_Traj_fresnelg1(const real_T a[20], const real_T d[20], const
  real_T c[20], creal_T z[20], creal_T dz[20]);
static void Test_Traj_clothoidG1fit2wp(const creal_T z0[20], const real_T
  theta0[20], const creal_T z1[20], const real_T theta1[20], real_T k0[20],
  real_T k1[20], real_T l[20], real_T dk0_dtheta0[20], real_T dk0_dtheta1[20],
  real_T dk1_dtheta0[20], real_T dk1_dtheta1[20]);
static void Test_Traj_mulJt(const real_T Jtri[60], const real_T x[20], real_T y
  [20]);
static boolean_T Test_Traj_any(const boolean_T x[20]);
static void Test_Traj_sympentdisolve(const real_T d[20], const real_T e[20],
  const real_T f[20], const real_T b[100], real_T x[100]);
static void Test_Traj_cycsympentdisolve(const real_T d[20], const real_T e[20],
  const real_T f[20], const real_T b[20], real_T x[20]);
static void Test_Traj_solveDampenedHessian(const real_T Jtri[60], real_T lambda,
  const real_T v[20], real_T dx[20]);
static void Test_Traj_cyctridisolve_ph(const real_T a[20], real_T b[20], const
  real_T c[20], real_T d[20]);
static void Test_Traj_solveHessian_ph(const real_T Jtri[60], real_T v[20]);
static real_T Test_Traj_norm_p(const real_T x[20]);
static void Test_Traj_accumarray(const real_T val[58], real_T A[400]);
static real_T Test_Traj_xzlangeM(const creal_T x[400]);
static void Test_Traj_xzlascl(real_T cfrom, real_T cto, const creal_T A[400],
  creal_T b_A[400]);
static void Test_Traj_xzggbal(const creal_T A[400], creal_T b_A[400], int32_T
  *ilo, int32_T *ihi, int32_T rscale[20]);
static void Test_Traj_xzgghrd(int32_T ilo, int32_T ihi, const creal_T A[400],
  creal_T b_A[400]);
static real_T Test_Traj_xzlanhs(const creal_T A[400], int32_T ilo, int32_T ihi);
static void Test_Traj_xzhgeqz(const creal_T A[400], int32_T ilo, int32_T ihi,
  int32_T *info, creal_T alpha1[20], creal_T beta1[20]);
static void Test_Traj_xzlascl_phmy(real_T cfrom, real_T cto, creal_T A[20]);
static void Test_Traj_xzgeev(const real_T A[400], int32_T *info, creal_T alpha1
  [20], creal_T beta1[20]);
static real_T Test_Traj_xnrm2(int32_T n, const real_T x[400], int32_T ix0);
static void Test_Traj_xzlarfg(int32_T n, real_T alpha1, const real_T x[400],
  int32_T ix0, real_T *b_alpha1, real_T b_x[400], real_T *tau);
static void Test_Traj_xzlarf_phmyu(int32_T n, int32_T iv0, real_T tau, const
  real_T C[400], int32_T ic0, real_T work[20], real_T b_C[400]);
static void Test_Traj_xzlarf_phmyul(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C[400], int32_T ic0, real_T work[20], real_T b_C[400]);
static void Test_Traj_xgehrd(const real_T a[400], real_T b_a[400]);
static void Test_Traj_xrot(int32_T n, const real_T x[400], int32_T ix0, int32_T
  iy0, real_T c, real_T s, real_T b_x[400]);
static void Test_Traj_eml_dlahqr(const real_T h[400], real_T b_h[400], int32_T
  *info);
static void Test_Traj_xhseqr(const real_T h[400], real_T b_h[400], int32_T *info);
static void Test_Traj_schur(real_T A[400], real_T V[400]);
static void Test_Traj_eig(const real_T A[400], creal_T V[20]);
static real_T Test_Traj_leastEigvJtJ(const real_T Jtri[60]);
static void Test_Traj_fletcher(real_T S, real_T Snew, const real_T dx[20], const
  real_T v[20], const real_T Jtri[60], real_T lambda, real_T lambdac, real_T
  *b_lambda, real_T *b_lambdac);
static void Test_Traj_LMFsolve_phmyu(const d_cell_wrap_Test_Traj_T
  *FUN_tunableEnvironment, real_T x[20]);
static void Test_Traj_fitLoopCourse(const real_T waypoints[63], real_T course[21]);
static void Test_Traj_fitPartialCourseLoop(const real_T waypoints[63], real_T
  course[21]);
static void Test_clothoidG2fitMissingCourse(const real_T waypoints[63], real_T
  course[21]);
static void Test_Traj_fetchA(const real_T x[20], const real_T y[20], real_T a[20]);
static void Test_Traj_fresnelg1_ph(const real_T a[20], const real_T d[20], const
  real_T c[20], creal_T z[20]);
static void Test_Traj_clothoidG1fit2wp_ph(const creal_T z0[20], const real_T
  theta0[20], const creal_T z1[20], const real_T theta1[20], real_T k0[20],
  real_T k1[20], real_T l[20]);
static void Test_Traj_pchip(const real_T x[21], const real_T y[21], real_T
  v_breaks[21], real_T v_coefs[80]);
static void Test_Traj_repmat_phm(real_T b[80]);
static void Test_Traj_circshift(const real_T a[80], real_T b_a[80]);
static void Test_Traj_derivpp(const real_T pp_breaks[21], const real_T pp_coefs
  [80], real_T dpp_breaks[21], real_T dpp_coefs[80]);
static void waypointTrajectory_setupPositio(waypointTrajectory_Test_Traj_T *obj);
static void Tes_quaternioncg_parenReference(const real_T obj_a[21], const real_T
  obj_b[21], const real_T obj_c[21], const real_T obj_d[21], const real_T
  varargin_1[20], real_T o_a[20], real_T o_b[20], real_T o_c[20], real_T o_d[20]);
static void Test_Traj_quaternioncg_times(const real_T x_a[20], const real_T x_b
  [20], const real_T x_c[20], const real_T x_d[20], const real_T y_a[20], const
  real_T y_b[20], const real_T y_c[20], const real_T y_d[20], real_T o_a[20],
  real_T o_b[20], real_T o_c[20], real_T o_d[20]);
static void T_quaternioncg_parenReference_p(const real_T obj_a[20], const real_T
  obj_b[20], const real_T obj_c[20], const real_T obj_d[20], const boolean_T
  varargin_1[20], real_T o_a_data[], int32_T *o_a_size, real_T o_b_data[],
  int32_T *o_b_size, real_T o_c_data[], int32_T *o_c_size, real_T o_d_data[],
  int32_T *o_d_size);
static void Test_Traj_quaternionBase_rotvec(const real_T q_a[20], const real_T
  q_b[20], const real_T q_c[20], const real_T q_d[20], real_T rv[60]);
static void Test_Traj_getang(const real_T qi_a[20], const real_T qi_b[20], const
  real_T qi_c[20], const real_T qi_d[20], const real_T qf_a[20], const real_T
  qf_b[20], const real_T qf_c[20], const real_T qf_d[20], real_T dtheta[20],
  real_T e[60]);
static void Test_Traj_bd(const real_T e[3], real_T dtheta, const real_T xin[3],
  real_T xout[3]);
static void Test_Traj_bd_p(const real_T e[3], real_T dtheta, const real_T xin[3],
  real_T xout[3]);
static real_T Test_Traj_xnrm2_phmyu(int32_T n, const real_T x[57], int32_T ix0);
static real_T Test_Traj_xdotc(int32_T n, const real_T x[57], int32_T ix0, const
  real_T y[57], int32_T iy0);
static void Test_Traj_xaxpy(int32_T n, real_T a, int32_T ix0, const real_T y[57],
  int32_T iy0, real_T b_y[57]);
static real_T Test_Traj_xnrm2_phmyul(int32_T n, const real_T x[3], int32_T ix0);
static void Test_Traj_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b, real_T
  *c, real_T *s);
static void Test_Traj_svd(const real_T A[57], real_T U[3]);
static void Test_Traj_quaternionC2fit(const real_T y_a[21], const real_T y_b[21],
  const real_T y_c[21], const real_T y_d[21], const real_T x[21], real_T h[20],
  real_T dtheta[20], real_T e[60], real_T w[63]);
static int32_T Test_Traj_bsearch(const real_T x[21], real_T xi);
static void waypointTrajectory_setupWaypoin(waypointTrajectory_Test_Traj_T *obj);
static real_T Test_Traj_mapElementsToBins(real_T x, const real_T edges[21],
  boolean_T right);
static void Test_Traj_sqrt_ph(const real_T x_data[], const int32_T x_size[2],
  real_T b_x_data[], int32_T b_x_size[2]);
static void Test_Traj_abs_phm(const real_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2]);
static void Test_Traj_fresnel_p(const real_T x_data[], const int32_T x_size[2],
  creal_T z_data[], int32_T z_size[2]);
static void Test_Traj_power_phmyu(const real_T a_data[], const int32_T a_size[2],
  real_T y_data[], int32_T y_size[2]);
static void Test_Traj_repmat_phmy(const creal_T a_data[], const int32_T a_size[2],
  creal_T b_data[], int32_T b_size[2]);
static void Test_Traj_bsxfun_p(const creal_T a_data[], const int32_T a_size[2],
  creal_T c_data[], int32_T c_size[2]);
static void Test_Traj_fresnelgzero(const real_T x_data[], const int32_T x_size[2],
  const real_T dk_data[], const int32_T dk_size[2], const real_T k_data[], const
  int32_T k_size[2], const real_T theta_data[], const int32_T theta_size[2],
  creal_T z_data[], int32_T *z_size);
static creal_T Test_Traj_fresnelg2(real_T x, real_T dk, real_T k, real_T theta);
static void Test_Traj_getPositionalState(const real_T hcd[21], const creal_T
  hip[21], const real_T hl[20], const real_T k0[20], const real_T k1[20], const
  real_T course[21], const real_T hpp_breaks[21], const real_T hpp_coefs[80],
  const real_T hspp_breaks[21], const real_T hspp_coefs[80], const real_T
  happ_breaks[21], const real_T happ_coefs[80], const real_T hjpp_breaks[21],
  const real_T hjpp_coefs[80], creal_T *position, creal_T *velocity, creal_T
  *acceleration, creal_T *jerk);
static real_T Test_Traj_ppval(const real_T pp_breaks[21], const real_T pp_coefs
  [80], real_T x);
static void waypointTrajectory_fetchPositio(const waypointTrajectory_Test_Traj_T
  *obj, real_T position[3], real_T velocity[3], real_T acceleration[3], real_T
  jerk[3]);
static void Test_waypointTrajectory_setPose(waypointTrajectory_Test_Traj_T *obj);
static waypointTrajectory_Test_Traj_T *waypointTrajectory_waypointTraj
  (waypointTrajectory_Test_Traj_T *obj, const real_T varargin_1[63], const
   real_T varargin_2[21], real_T varargin_4, const real_T varargin_8_a[21],
   const real_T varargin_8_b[21], const real_T varargin_8_c[21], const real_T
   varargin_8_d[21]);
static void Test_Traj_getPositionalState_p(const real_T hcd[21], const creal_T
  hip[21], const real_T hl[20], const real_T k0[20], const real_T k1[20], const
  real_T course[21], const real_T hpp_breaks[21], const real_T hpp_coefs[80],
  const real_T hspp_breaks[21], const real_T hspp_coefs[80], const real_T
  happ_breaks[21], const real_T happ_coefs[80], const real_T hjpp_breaks[21],
  const real_T hjpp_coefs[80], real_T t, creal_T *position, creal_T *velocity,
  creal_T *acceleration, creal_T *jerk);
static void waypointTrajectory_fetchPosit_p(const waypointTrajectory_Test_Traj_T
  *obj, real_T simulationTime, real_T position[3], real_T velocity[3], real_T
  acceleration[3], real_T jerk[3]);
static void Test_Traj_cross(const real_T a_data[], const int32_T a_size[2],
  const real_T b_data[], real_T c_data[], int32_T c_size[2]);
static void Test_Traj_dot(const real_T a_data[], const int32_T a_size[2], const
  real_T b_data[], real_T c_data[], int32_T *c_size);
static void Test_Traj_bsxmul(const real_T x_data[], const int32_T *x_size, const
  real_T y_data[], const int32_T y_size[2], real_T z_data[], int32_T z_size[2]);
static void Test_Traj_bsxmul_p(const real_T x_data[], const int32_T x_size[2],
  const real_T y_data[], const int32_T y_size[2], real_T z_data[], int32_T
  z_size[2]);
static void Test_Traj_slew3_init(real_T dt, real_T dtheta, const real_T e[3],
  const real_T wi[3], const real_T wf[3], real_T aa[9], real_T bb[9], real_T cc
  [6], real_T dd[3]);
static void Test_Traj_bsxmul_ph(const real_T x[3], real_T y, real_T z[3]);
static void Test_Traj_bsxmul_phm(real_T x, const real_T y[3], real_T z[3]);
static void Test_Traj_bsxdiv(const real_T x_data[], const int32_T x_size[2],
  const real_T y_data[], const int32_T y_size[2], real_T z_data[], int32_T
  z_size[2]);
static void Test_Traj_sum(const real_T x_data[], const int32_T x_size[2], real_T
  y_data[], int32_T *y_size);
static void Test_Traj_slew3(real_T t, real_T dt, real_T qi_a, real_T qi_b,
  real_T qi_c, real_T qi_d, const real_T a[9], const real_T b[9], const real_T
  c[6], const real_T d[3], real_T *q_a, real_T *q_b, real_T *q_c, real_T *q_d,
  real_T angVel[3], real_T angAcc[3], real_T angJerk[3]);
static void Test_Traj_quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9]);
static void Te_TrajectoryGenerator_stepImpl(TrajectoryGenerator_Test_Traj_T
  *b_this, const real_T wpts[160], real_T wpt_count, real_T pose[13000], real_T
  b_new[2]);
static void Test_Traj_SystemCore_step(TrajectoryGenerator_Test_Traj_T *obj,
  const real_T varargin_1[160], real_T varargin_2, real_T varargout_1[13000],
  real_T varargout_2[2]);
static void Test_Traj_string_disp(void);
static void TrajectoryManager_processNewPos(TrajectoryManager_Test_Traj_T
  *b_this, const real_T pose[13000], real_T count, real_T b_new);
static boolean_T Test_Traj_ifWhileCond(const boolean_T x[13]);
static void TrajectoryManager_SendCurrentPo(TrajectoryManager_Test_Traj_T
  *b_this, real_T currPose[52]);
static real_T Test_Traj_norm(const real_T x[3]);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj);
static void Tes_TrajectoryManager_setupImpl(TrajectoryManager_Test_Traj_T
  *b_this);
static void rate_scheduler(void);
int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    // Divide by zero handler
  } else {
    absNumerator = numerator < 0 ? ~static_cast<uint32_T>(numerator) + 1U :
      static_cast<uint32_T>(numerator);
    absDenominator = denominator < 0 ? ~static_cast<uint32_T>(denominator) + 1U :
      static_cast<uint32_T>(denominator);
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    quotient = quotientNeedsNegation ? -static_cast<int32_T>(tempAbsQuotient) :
      static_cast<int32_T>(tempAbsQuotient);
  }

  return quotient;
}

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).
  //
  //  Sample time offsets are handled by priming the counter with the
  //  appropriate non-zero value in the model's initialization function.

  (Test_Traj_M->Timing.TaskCounters.TID[1])++;
  if ((Test_Traj_M->Timing.TaskCounters.TID[1]) > 4) {// Sample time: [0.25s, 0.2s] 
    Test_Traj_M->Timing.TaskCounters.TID[1] = 0;
  }
}

static boolean_T Test_Traj_isequal(const real_T varargin_1[7], const real_T
  varargin_2[7])
{
  boolean_T p;
  boolean_T p_0;
  int32_T b_k;
  boolean_T exitg1;
  p = false;
  p_0 = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 7)) {
    if (!(varargin_1[b_k] == varargin_2[b_k])) {
      p_0 = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  if (p_0) {
    p = true;
  }

  return p;
}

static void Test__quaternioncg_quaternioncg(const real_T varargin_1[84], real_T
  obj_a[21], real_T obj_b[21], real_T obj_c[21], real_T obj_d[21])
{
  memcpy(&obj_a[0], &varargin_1[0], 21U * sizeof(real_T));
  memcpy(&obj_b[0], &varargin_1[21], 21U * sizeof(real_T));
  memcpy(&obj_c[0], &varargin_1[42], 21U * sizeof(real_T));
  memcpy(&obj_d[0], &varargin_1[63], 21U * sizeof(real_T));
}

static void waypointTrajectory_setPropertie(waypointTrajectory_Test_Traj_T *obj,
  const real_T varargin_1[63], const real_T varargin_2[21], real_T varargin_4,
  const real_T varargin_8_a[21], const real_T varargin_8_b[21], const real_T
  varargin_8_c[21], const real_T varargin_8_d[21])
{
  memcpy(&obj->Waypoints[0], &varargin_1[0], 63U * sizeof(real_T));
  obj->SampleRate = varargin_4;
  memcpy(&obj->TimeOfArrival[0], &varargin_2[0], 21U * sizeof(real_T));
  memcpy(&obj->Quaternions.a[0], &varargin_8_a[0], 21U * sizeof(real_T));
  memcpy(&obj->Quaternions.b[0], &varargin_8_b[0], 21U * sizeof(real_T));
  memcpy(&obj->Quaternions.c[0], &varargin_8_c[0], 21U * sizeof(real_T));
  memcpy(&obj->Quaternions.d[0], &varargin_8_d[0], 21U * sizeof(real_T));
}

static boolean_T Test_Traj_isequal_p(const real_T varargin_1[2], const real_T
  varargin_2[2])
{
  boolean_T p;
  boolean_T p_0;
  int32_T b_k;
  boolean_T exitg1;
  p = false;
  p_0 = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 2)) {
    if (!(varargin_1[b_k] == varargin_2[b_k])) {
      p_0 = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  if (p_0) {
    p = true;
  }

  return p;
}

static void Test_Traj_pol2cart_p(real_T th[2], const real_T r[2], real_T x[2])
{
  x[0] = cos(th[0]);
  x[1] = cos(th[1]);
  th[0] = sin(th[0]);
  x[0] *= r[0];
  th[1] = sin(th[1]);
  x[1] *= r[1];
  th[0] *= r[0];
  th[1] *= r[1];
}

static void Test_Traj_endpointpadding_ph(const creal_T zcurrent_data[], const
  int32_T zcurrent_size[2], const creal_T varargin_1[2], creal_T *zleft, creal_T
  *zright)
{
  if (rtIsNaN(varargin_1[0].re) || rtIsNaN(varargin_1[0].im)) {
    zleft->re = (zcurrent_data[0].re - zcurrent_data[1].re) * 100.0 +
      zcurrent_data[0].re;
    zleft->im = (zcurrent_data[0].im - zcurrent_data[1].im) * 100.0 +
      zcurrent_data[0].im;
  } else {
    zleft->re = (rtNaN);
    zleft->im = 0.0;
  }

  if (rtIsNaN(varargin_1[1].re) || rtIsNaN(varargin_1[1].im)) {
    zright->re = (zcurrent_data[zcurrent_size[1] - 1].re -
                  zcurrent_data[zcurrent_size[1] - 2].re) * 100.0 +
      zcurrent_data[zcurrent_size[1] - 1].re;
    zright->im = (zcurrent_data[zcurrent_size[1] - 1].im -
                  zcurrent_data[zcurrent_size[1] - 2].im) * 100.0 +
      zcurrent_data[zcurrent_size[1] - 1].im;
  } else {
    zright->re = (rtNaN);
    zright->im = 0.0;
  }
}

static void Test_Traj_diff(const creal_T x_data[], const int32_T x_size[2],
  creal_T y_data[], int32_T y_size[2])
{
  int32_T iyLead;
  int32_T c_k;
  int32_T ySize_idx_1;
  int32_T u0;
  Test_Traj_B.dimSize = x_size[1];
  if (x_size[1] == 0) {
    y_size[0] = 1;
    y_size[1] = 0;
  } else {
    u0 = x_size[1] - 1;
    if (u0 >= 1) {
      u0 = 1;
    }

    if (u0 < 1) {
      y_size[0] = 1;
      y_size[1] = 0;
    } else {
      ySize_idx_1 = x_size[1] - 1;
      if (ySize_idx_1 != 0) {
        Test_Traj_B.ixLead_p = 1;
        iyLead = 0;
        Test_Traj_B.work_data_o = x_data[0];
        for (u0 = 2; u0 <= Test_Traj_B.dimSize; u0++) {
          Test_Traj_B.xzero_re = x_data[Test_Traj_B.ixLead_p].re;
          Test_Traj_B.xzero_im = x_data[Test_Traj_B.ixLead_p].im;
          for (c_k = 0; c_k < 1; c_k++) {
            Test_Traj_B.tmp2_re = Test_Traj_B.work_data_o.re;
            Test_Traj_B.tmp2_im = Test_Traj_B.work_data_o.im;
            Test_Traj_B.work_data_o.re = Test_Traj_B.xzero_re;
            Test_Traj_B.work_data_o.im = Test_Traj_B.xzero_im;
            Test_Traj_B.xzero_re -= Test_Traj_B.tmp2_re;
            Test_Traj_B.xzero_im -= Test_Traj_B.tmp2_im;
          }

          Test_Traj_B.ixLead_p++;
          Test_Traj_B.b_y1_data[iyLead].re = Test_Traj_B.xzero_re;
          Test_Traj_B.b_y1_data[iyLead].im = Test_Traj_B.xzero_im;
          iyLead++;
        }
      }

      y_size[0] = 1;
      y_size[1] = ySize_idx_1;
      Test_Traj_B.dimSize = ySize_idx_1 - 1;
      if (0 <= Test_Traj_B.dimSize) {
        memcpy(&y_data[0], &Test_Traj_B.b_y1_data[0], (Test_Traj_B.dimSize + 1) *
               sizeof(creal_T));
      }
    }
  }
}

static real_T Test_Traj_rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  Test_Traj_B.a_e = fabs(u0);
  y = fabs(u1);
  if (Test_Traj_B.a_e < y) {
    Test_Traj_B.a_e /= y;
    y *= sqrt(Test_Traj_B.a_e * Test_Traj_B.a_e + 1.0);
  } else if (Test_Traj_B.a_e > y) {
    y /= Test_Traj_B.a_e;
    y = sqrt(y * y + 1.0) * Test_Traj_B.a_e;
  } else {
    if (!rtIsNaN(y)) {
      y = Test_Traj_B.a_e * 1.4142135623730951;
    }
  }

  return y;
}

static void Test_Traj_abs(const creal_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2])
{
  int32_T nx;
  int32_T b_k;
  nx = x_size[1] - 1;
  y_size[0] = 1;
  y_size[1] = x_size[1];
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = Test_Traj_rt_hypotd_snf(x_data[b_k].re, x_data[b_k].im);
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void Test_Traj_angle(const creal_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2])
{
  int32_T nx;
  int32_T b_k;
  nx = x_size[1] - 1;
  y_size[0] = 1;
  y_size[1] = x_size[1];
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = rt_atan2d_snf(x_data[b_k].im, x_data[b_k].re);
  }
}

static boolean_T Test_Traj_isnan(const creal_T x)
{
  return rtIsNaN(x.re) || rtIsNaN(x.im);
}

static void Test_Traj_tan(const real_T x_data[], const int32_T x_size[2], real_T
  b_x_data[], int32_T b_x_size[2])
{
  int32_T nx;
  int32_T loop_ub;
  b_x_size[0] = 1;
  b_x_size[1] = x_size[1];
  loop_ub = x_size[0] * x_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&b_x_data[0], &x_data[0], (loop_ub + 1) * sizeof(real_T));
  }

  nx = x_size[1] - 1;
  for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
    b_x_data[loop_ub] = tan(b_x_data[loop_ub]);
  }
}

static void Test_Traj_midcurve(const creal_T Pb_data[], const int32_T Pb_size[2],
  const creal_T Vbd_data[], const real_T Lab_data[], const int32_T Lab_size[2],
  const real_T Lbd_data[], const int32_T Lbd_size[2], const real_T Lde_data[],
  const int32_T Lde_size[2], const real_T alpha_data[], const real_T beta_data[],
  creal_T Pc_data[], int32_T Pc_size[2])
{
  int32_T d_i;
  int32_T loop_ub;
  loop_ub = Lde_size[0] * Lde_size[1] - 1;
  for (d_i = 0; d_i <= loop_ub; d_i++) {
    Test_Traj_B.a_data[d_i] = 2.0 * Lde_data[d_i] + Lbd_data[d_i];
  }

  loop_ub = Lab_size[0] * Lab_size[1] - 1;
  for (d_i = 0; d_i <= loop_ub; d_i++) {
    Test_Traj_B.b_data[d_i] = 2.0 * Lab_data[d_i] + Lbd_data[d_i];
  }

  Test_Traj_B.Lbd_size[0] = 1;
  Test_Traj_B.Lbd_size[1] = Lbd_size[1];
  loop_ub = Lbd_size[0] * Lbd_size[1];
  for (d_i = 0; d_i < loop_ub; d_i++) {
    Test_Traj_B.Lbd_data[d_i] = (alpha_data[d_i] * Test_Traj_B.a_data[d_i] +
      beta_data[d_i] * Test_Traj_B.b_data[d_i]) * Lbd_data[d_i] /
      (Test_Traj_B.a_data[d_i] * Test_Traj_B.b_data[d_i] * 2.0 +
       (Test_Traj_B.a_data[d_i] + Test_Traj_B.b_data[d_i]) * Lbd_data[d_i]);
  }

  Test_Traj_tan(Test_Traj_B.Lbd_data, Test_Traj_B.Lbd_size, Test_Traj_B.b_data,
                Test_Traj_B.b_size);
  Pc_size[0] = 1;
  Pc_size[1] = Pb_size[1];
  loop_ub = Pb_size[0] * Pb_size[1];
  for (d_i = 0; d_i < loop_ub; d_i++) {
    Test_Traj_B.re_b = 0.0 * Test_Traj_B.b_data[d_i] + 1.0;
    Test_Traj_B.re_g = Test_Traj_B.re_b * Vbd_data[d_i].re -
      Test_Traj_B.b_data[d_i] * Vbd_data[d_i].im;
    Test_Traj_B.im_i = Test_Traj_B.re_b * Vbd_data[d_i].im +
      Test_Traj_B.b_data[d_i] * Vbd_data[d_i].re;
    if (Test_Traj_B.im_i == 0.0) {
      Test_Traj_B.re_b = Test_Traj_B.re_g / 2.0;
      Test_Traj_B.im_i = 0.0;
    } else if (Test_Traj_B.re_g == 0.0) {
      Test_Traj_B.re_b = 0.0;
      Test_Traj_B.im_i /= 2.0;
    } else {
      Test_Traj_B.re_b = Test_Traj_B.re_g / 2.0;
      Test_Traj_B.im_i /= 2.0;
    }

    Pc_data[d_i].re = Pb_data[d_i].re + Test_Traj_B.re_b;
    Pc_data[d_i].im = Pb_data[d_i].im + Test_Traj_B.im_i;
  }

  loop_ub = Lbd_size[1] - 1;
  for (d_i = 0; d_i <= loop_ub; d_i++) {
    if (Lbd_data[d_i] == 0.0) {
      Pc_data[d_i] = Pb_data[d_i];
    }
  }
}

static void Test_Traj_insertCodegen_p(const creal_T zorig_data[], real_T m,
  real_T nmax, const creal_T varargin_1[2], creal_T Zout_data[], int32_T
  Zout_size[2])
{
  if (1.0 > m) {
    Test_Traj_B.b_hk = 0;
  } else {
    Test_Traj_B.b_hk = static_cast<int32_T>(m);
  }

  Test_Traj_B.zorig_size[0] = 1;
  Test_Traj_B.zorig_size[1] = Test_Traj_B.b_hk;
  if (0 <= Test_Traj_B.b_hk - 1) {
    memcpy(&Test_Traj_B.zorig_data[0], &zorig_data[0], Test_Traj_B.b_hk * sizeof
           (creal_T));
  }

  Test_Traj_endpointpadding_ph(Test_Traj_B.zorig_data, Test_Traj_B.zorig_size,
    varargin_1, &Test_Traj_B.z_data[0], &Test_Traj_B.zright);
  if (1.0 > m) {
    Test_Traj_B.b_hk = 0;
  } else {
    Test_Traj_B.b_hk = static_cast<int32_T>(m);
  }

  Test_Traj_B.z_size_d[0] = 1;
  Test_Traj_B.z_size_d[1] = Test_Traj_B.b_hk - -2;
  Test_Traj_B.loop_ub_dg = Test_Traj_B.b_hk - -2;
  if (0 <= Test_Traj_B.loop_ub_dg - 3) {
    memcpy(&Test_Traj_B.z_data[1], &zorig_data[0], (Test_Traj_B.loop_ub_dg + -2)
           * sizeof(creal_T));
  }

  Test_Traj_B.z_data[Test_Traj_B.b_hk + 1] = Test_Traj_B.zright;
  Test_Traj_diff(Test_Traj_B.z_data, Test_Traj_B.z_size_d, Test_Traj_B.dz_data,
                 Test_Traj_B.zorig_size);
  Test_Traj_abs(Test_Traj_B.dz_data, Test_Traj_B.zorig_size, Test_Traj_B.l_data,
                Test_Traj_B.l_size);
  if (2 > Test_Traj_B.zorig_size[1]) {
    Test_Traj_B.loop_ub_dg = 0;
    Test_Traj_B.b_hk = 0;
  } else {
    Test_Traj_B.loop_ub_dg = 1;
    Test_Traj_B.b_hk = Test_Traj_B.zorig_size[1];
  }

  Test_Traj_B.dz_size[0] = 1;
  Test_Traj_B.dz_size_tmp = Test_Traj_B.b_hk - Test_Traj_B.loop_ub_dg;
  Test_Traj_B.dz_size[1] = Test_Traj_B.dz_size_tmp;
  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk < Test_Traj_B.dz_size_tmp;
       Test_Traj_B.b_hk++) {
    Test_Traj_B.dz_data_re_tmp = Test_Traj_B.loop_ub_dg + Test_Traj_B.b_hk;
    Test_Traj_B.zorig_data[Test_Traj_B.b_hk].re =
      Test_Traj_B.dz_data[Test_Traj_B.dz_data_re_tmp].re *
      Test_Traj_B.dz_data[Test_Traj_B.b_hk].re -
      -Test_Traj_B.dz_data[Test_Traj_B.dz_data_re_tmp].im *
      Test_Traj_B.dz_data[Test_Traj_B.b_hk].im;
    Test_Traj_B.zorig_data[Test_Traj_B.b_hk].im =
      Test_Traj_B.dz_data[Test_Traj_B.dz_data_re_tmp].re *
      Test_Traj_B.dz_data[Test_Traj_B.b_hk].im +
      -Test_Traj_B.dz_data[Test_Traj_B.dz_data_re_tmp].im *
      Test_Traj_B.dz_data[Test_Traj_B.b_hk].re;
  }

  Test_Traj_angle(Test_Traj_B.zorig_data, Test_Traj_B.dz_size,
                  Test_Traj_B.alpha_data, Test_Traj_B.alpha_size);
  if (!Test_Traj_isnan(varargin_1[0])) {
    Test_Traj_B.l_data[0] = 0.0;
    Test_Traj_B.alpha_data[0] = rt_atan2d_snf(Test_Traj_B.dz_data[1].re *
      varargin_1[0].im + -Test_Traj_B.dz_data[1].im * varargin_1[0].re,
      Test_Traj_B.dz_data[1].re * varargin_1[0].re - -Test_Traj_B.dz_data[1].im *
      varargin_1[0].im);
  }

  if (!Test_Traj_isnan(varargin_1[1])) {
    Test_Traj_B.l_data[Test_Traj_B.l_size[1] - 1] = 0.0;
    Test_Traj_B.alpha_data[Test_Traj_B.alpha_size[1] - 1] = rt_atan2d_snf
      (Test_Traj_B.dz_data[Test_Traj_B.zorig_size[1] - 2].im * varargin_1[1].re
       + Test_Traj_B.dz_data[Test_Traj_B.zorig_size[1] - 2].re * -varargin_1[1].
       im, Test_Traj_B.dz_data[Test_Traj_B.zorig_size[1] - 2].re * varargin_1[1]
       .re - Test_Traj_B.dz_data[Test_Traj_B.zorig_size[1] - 2].im *
       -varargin_1[1].im);
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.z_size_d[1]) - 2.0) {
    Test_Traj_B.dz_size_tmp = 0;
    Test_Traj_B.b_hk = 0;
  } else {
    Test_Traj_B.dz_size_tmp = 1;
    Test_Traj_B.b_hk = Test_Traj_B.z_size_d[1] - 2;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.zorig_size[1]) - 1.0) {
    Test_Traj_B.u_a = 0;
    Test_Traj_B.t_h4 = 0;
  } else {
    Test_Traj_B.u_a = 1;
    Test_Traj_B.t_h4 = Test_Traj_B.zorig_size[1] - 1;
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.l_size[1]) - 2.0) {
    Test_Traj_B.w_k = 0;
  } else {
    Test_Traj_B.w_k = Test_Traj_B.l_size[1] - 2;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.l_size[1]) - 1.0) {
    Test_Traj_B.dz_data_re_tmp = 0;
    Test_Traj_B.ab_j = 0;
  } else {
    Test_Traj_B.dz_data_re_tmp = 1;
    Test_Traj_B.ab_j = Test_Traj_B.l_size[1] - 1;
  }

  if (3 > Test_Traj_B.l_size[1]) {
    Test_Traj_B.eb = 0;
    Test_Traj_B.db = 0;
  } else {
    Test_Traj_B.eb = 2;
    Test_Traj_B.db = Test_Traj_B.l_size[1];
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.alpha_size[1]) - 1.0) {
    Test_Traj_B.gb = 0;
  } else {
    Test_Traj_B.gb = Test_Traj_B.alpha_size[1] - 1;
  }

  if (2 > Test_Traj_B.alpha_size[1]) {
    Test_Traj_B.loop_ub_dg = 0;
    Test_Traj_B.jb = 0;
  } else {
    Test_Traj_B.loop_ub_dg = 1;
    Test_Traj_B.jb = Test_Traj_B.alpha_size[1];
  }

  Test_Traj_B.z_size_c[0] = 1;
  Test_Traj_B.z_size_tmp = Test_Traj_B.b_hk - Test_Traj_B.dz_size_tmp;
  Test_Traj_B.z_size_c[1] = Test_Traj_B.z_size_tmp;
  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk < Test_Traj_B.z_size_tmp;
       Test_Traj_B.b_hk++) {
    Test_Traj_B.z_data_b[Test_Traj_B.b_hk] =
      Test_Traj_B.z_data[Test_Traj_B.dz_size_tmp + Test_Traj_B.b_hk];
  }

  Test_Traj_B.dz_size_tmp = Test_Traj_B.t_h4 - Test_Traj_B.u_a;
  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk < Test_Traj_B.dz_size_tmp;
       Test_Traj_B.b_hk++) {
    Test_Traj_B.zorig_data[Test_Traj_B.b_hk] =
      Test_Traj_B.dz_data[Test_Traj_B.u_a + Test_Traj_B.b_hk];
  }

  Test_Traj_B.l_size_d[0] = 1;
  Test_Traj_B.l_size_d[1] = Test_Traj_B.w_k;
  if (0 <= Test_Traj_B.w_k - 1) {
    memcpy(&Test_Traj_B.l_data_d[0], &Test_Traj_B.l_data[0], Test_Traj_B.w_k *
           sizeof(real_T));
  }

  Test_Traj_B.l_size_a[0] = 1;
  Test_Traj_B.u_a = Test_Traj_B.ab_j - Test_Traj_B.dz_data_re_tmp;
  Test_Traj_B.l_size_a[1] = Test_Traj_B.u_a;
  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk < Test_Traj_B.u_a;
       Test_Traj_B.b_hk++) {
    Test_Traj_B.l_data_g[Test_Traj_B.b_hk] =
      Test_Traj_B.l_data[Test_Traj_B.dz_data_re_tmp + Test_Traj_B.b_hk];
  }

  Test_Traj_B.l_size_b[0] = 1;
  Test_Traj_B.u_a = Test_Traj_B.db - Test_Traj_B.eb;
  Test_Traj_B.l_size_b[1] = Test_Traj_B.u_a;
  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk < Test_Traj_B.u_a;
       Test_Traj_B.b_hk++) {
    Test_Traj_B.l_data_p[Test_Traj_B.b_hk] = Test_Traj_B.l_data[Test_Traj_B.eb +
      Test_Traj_B.b_hk];
  }

  if (0 <= Test_Traj_B.gb - 1) {
    memcpy(&Test_Traj_B.alpha_data_lx[0], &Test_Traj_B.alpha_data[0],
           Test_Traj_B.gb * sizeof(real_T));
  }

  Test_Traj_B.dz_data_re_tmp = Test_Traj_B.jb - Test_Traj_B.loop_ub_dg;
  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk < Test_Traj_B.dz_data_re_tmp;
       Test_Traj_B.b_hk++) {
    Test_Traj_B.alpha_data_l[Test_Traj_B.b_hk] =
      Test_Traj_B.alpha_data[Test_Traj_B.loop_ub_dg + Test_Traj_B.b_hk];
  }

  Test_Traj_midcurve(Test_Traj_B.z_data_b, Test_Traj_B.z_size_c,
                     Test_Traj_B.zorig_data, Test_Traj_B.l_data_d,
                     Test_Traj_B.l_size_d, Test_Traj_B.l_data_g,
                     Test_Traj_B.l_size_a, Test_Traj_B.l_data_p,
                     Test_Traj_B.l_size_b, Test_Traj_B.alpha_data_lx,
                     Test_Traj_B.alpha_data_l, Test_Traj_B.znew_data,
                     Test_Traj_B.z_size_d);
  Test_Traj_B.loop_ub_dg = static_cast<int32_T>(nmax) - 1;
  if (0 <= Test_Traj_B.loop_ub_dg) {
    memset(&Zout_data[0], 0, (Test_Traj_B.loop_ub_dg + 1) * sizeof(creal_T));
  }

  if (1.0 > m) {
    Test_Traj_B.loop_ub_dg = -1;
  } else {
    Test_Traj_B.loop_ub_dg = static_cast<int32_T>(m) - 1;
  }

  Test_Traj_B.wb = 2.0 * m - 1.0;
  if (1.0 > Test_Traj_B.wb) {
    Test_Traj_B.dz_data_re_tmp = 1;
  } else {
    Test_Traj_B.dz_data_re_tmp = 2;
  }

  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk <= Test_Traj_B.loop_ub_dg;
       Test_Traj_B.b_hk++) {
    Zout_data[Test_Traj_B.dz_data_re_tmp * Test_Traj_B.b_hk] =
      zorig_data[Test_Traj_B.b_hk];
  }

  if (2.0 > 2.0 * static_cast<real_T>(Test_Traj_B.z_size_d[1]) + 1.0) {
    Test_Traj_B.dz_data_re_tmp = 0;
    Test_Traj_B.eb = 1;
  } else {
    Test_Traj_B.dz_data_re_tmp = 1;
    Test_Traj_B.eb = 2;
  }

  Test_Traj_B.loop_ub_dg = Test_Traj_B.z_size_d[1];
  for (Test_Traj_B.b_hk = 0; Test_Traj_B.b_hk < Test_Traj_B.loop_ub_dg;
       Test_Traj_B.b_hk++) {
    Zout_data[Test_Traj_B.dz_data_re_tmp + Test_Traj_B.eb * Test_Traj_B.b_hk] =
      Test_Traj_B.znew_data[Test_Traj_B.b_hk];
  }

  if (1.0 > Test_Traj_B.wb) {
    Test_Traj_B.loop_ub_dg = 0;
  } else {
    Test_Traj_B.loop_ub_dg = static_cast<int32_T>(Test_Traj_B.wb);
  }

  Zout_size[0] = 1;
  Zout_size[1] = Test_Traj_B.loop_ub_dg;
}

static void Test_Traj_optimize_p(const creal_T zcurrent_data[], const int32_T
  zcurrent_size[2], const creal_T zorig_data[], const int32_T zorig_size[2],
  const creal_T varargin_1[2], creal_T Zout_data[], int32_T Zout_size[2])
{
  Test_Traj_endpointpadding_ph(zcurrent_data, zcurrent_size, varargin_1,
    &Test_Traj_B.z_data_m[0], &Test_Traj_B.zright_j);
  Test_Traj_B.z_size_b[0] = 1;
  Test_Traj_B.z_size_b[1] = zcurrent_size[1] + 2;
  Test_Traj_B.loop_ub_ae = zcurrent_size[0] * zcurrent_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_ae) {
    memcpy(&Test_Traj_B.z_data_m[1], &zcurrent_data[0], (Test_Traj_B.loop_ub_ae
            + 1) * sizeof(creal_T));
  }

  Test_Traj_B.z_data_m[Test_Traj_B.loop_ub_ae + 2] = Test_Traj_B.zright_j;
  Test_Traj_diff(Test_Traj_B.z_data_m, Test_Traj_B.z_size_b, Test_Traj_B.d1_data,
                 Test_Traj_B.d1_size_i);
  Test_Traj_abs(Test_Traj_B.d1_data, Test_Traj_B.d1_size_i, Test_Traj_B.l1_data,
                Test_Traj_B.l1_size_n);
  if (3 > Test_Traj_B.z_size_b[1]) {
    Test_Traj_B.d_k = 0;
    Test_Traj_B.c_n = 0;
  } else {
    Test_Traj_B.d_k = 2;
    Test_Traj_B.c_n = Test_Traj_B.z_size_b[1];
  }

  Test_Traj_B.d2_size_idx_1_tmp_h = Test_Traj_B.c_n - Test_Traj_B.d_k;
  for (Test_Traj_B.c_n = 0; Test_Traj_B.c_n < Test_Traj_B.d2_size_idx_1_tmp_h;
       Test_Traj_B.c_n++) {
    Test_Traj_B.loop_ub_ae = Test_Traj_B.d_k + Test_Traj_B.c_n;
    Test_Traj_B.d2_data[Test_Traj_B.c_n].re =
      Test_Traj_B.z_data_m[Test_Traj_B.loop_ub_ae].re -
      Test_Traj_B.z_data_m[Test_Traj_B.c_n].re;
    Test_Traj_B.d2_data[Test_Traj_B.c_n].im =
      Test_Traj_B.z_data_m[Test_Traj_B.loop_ub_ae].im -
      Test_Traj_B.z_data_m[Test_Traj_B.c_n].im;
  }

  if (2 > Test_Traj_B.d2_size_idx_1_tmp_h - 1) {
    Test_Traj_B.d_k = 0;
    Test_Traj_B.c_n = 0;
  } else {
    Test_Traj_B.d_k = 1;
    Test_Traj_B.c_n = Test_Traj_B.d2_size_idx_1_tmp_h - 1;
  }

  Test_Traj_B.d2_size_h[0] = 1;
  Test_Traj_B.loop_ub_ae = Test_Traj_B.c_n - Test_Traj_B.d_k;
  Test_Traj_B.d2_size_h[1] = Test_Traj_B.loop_ub_ae;
  for (Test_Traj_B.c_n = 0; Test_Traj_B.c_n < Test_Traj_B.loop_ub_ae;
       Test_Traj_B.c_n++) {
    Test_Traj_B.d2_data_re_tmp_c = Test_Traj_B.d_k + Test_Traj_B.c_n;
    Test_Traj_B.d2_data_g[Test_Traj_B.c_n].re =
      Test_Traj_B.d2_data[Test_Traj_B.d2_data_re_tmp_c].re *
      Test_Traj_B.d1_data[Test_Traj_B.c_n].re -
      -Test_Traj_B.d2_data[Test_Traj_B.d2_data_re_tmp_c].im *
      Test_Traj_B.d1_data[Test_Traj_B.c_n].im;
    Test_Traj_B.d2_data_g[Test_Traj_B.c_n].im =
      Test_Traj_B.d2_data[Test_Traj_B.d2_data_re_tmp_c].re *
      Test_Traj_B.d1_data[Test_Traj_B.c_n].im +
      -Test_Traj_B.d2_data[Test_Traj_B.d2_data_re_tmp_c].im *
      Test_Traj_B.d1_data[Test_Traj_B.c_n].re;
  }

  Test_Traj_angle(Test_Traj_B.d2_data_g, Test_Traj_B.d2_size_h,
                  Test_Traj_B.tmp_data_dh, Test_Traj_B.z_size_b);
  Test_Traj_B.c_n = Test_Traj_B.z_size_b[0] * Test_Traj_B.z_size_b[1];
  if (0 <= Test_Traj_B.c_n - 1) {
    memcpy(&Test_Traj_B.alpha_data_b[0], &Test_Traj_B.tmp_data_dh[0],
           Test_Traj_B.c_n * sizeof(real_T));
  }

  if (4 > Test_Traj_B.d1_size_i[1]) {
    Test_Traj_B.d_k = 0;
    Test_Traj_B.c_n = 0;
  } else {
    Test_Traj_B.d_k = 3;
    Test_Traj_B.c_n = Test_Traj_B.d1_size_i[1];
  }

  if (2 > Test_Traj_B.d2_size_idx_1_tmp_h - 1) {
    Test_Traj_B.d2_data_re_tmp_c = 0;
  } else {
    Test_Traj_B.d2_data_re_tmp_c = 1;
  }

  Test_Traj_B.d1_size_n[0] = 1;
  Test_Traj_B.d1_size_tmp_b = Test_Traj_B.c_n - Test_Traj_B.d_k;
  Test_Traj_B.d1_size_n[1] = Test_Traj_B.d1_size_tmp_b;
  for (Test_Traj_B.c_n = 0; Test_Traj_B.c_n < Test_Traj_B.d1_size_tmp_b;
       Test_Traj_B.c_n++) {
    Test_Traj_B.d1_data_re_tmp_c = Test_Traj_B.d_k + Test_Traj_B.c_n;
    Test_Traj_B.loop_ub_ae = Test_Traj_B.d2_data_re_tmp_c + Test_Traj_B.c_n;
    Test_Traj_B.d1_data_g[Test_Traj_B.c_n].re =
      Test_Traj_B.d2_data[Test_Traj_B.loop_ub_ae].re *
      Test_Traj_B.d1_data[Test_Traj_B.d1_data_re_tmp_c].re -
      Test_Traj_B.d2_data[Test_Traj_B.loop_ub_ae].im *
      -Test_Traj_B.d1_data[Test_Traj_B.d1_data_re_tmp_c].im;
    Test_Traj_B.d1_data_g[Test_Traj_B.c_n].im =
      Test_Traj_B.d2_data[Test_Traj_B.loop_ub_ae].im *
      Test_Traj_B.d1_data[Test_Traj_B.d1_data_re_tmp_c].re +
      Test_Traj_B.d2_data[Test_Traj_B.loop_ub_ae].re *
      -Test_Traj_B.d1_data[Test_Traj_B.d1_data_re_tmp_c].im;
  }

  Test_Traj_angle(Test_Traj_B.d1_data_g, Test_Traj_B.d1_size_n,
                  Test_Traj_B.tmp_data_dh, Test_Traj_B.z_size_b);
  Test_Traj_B.loop_ub_ae = Test_Traj_B.z_size_b[0] * Test_Traj_B.z_size_b[1];
  if (0 <= Test_Traj_B.loop_ub_ae - 1) {
    memcpy(&Test_Traj_B.beta_data[0], &Test_Traj_B.tmp_data_dh[0],
           Test_Traj_B.loop_ub_ae * sizeof(real_T));
  }

  if (!Test_Traj_isnan(varargin_1[0])) {
    Test_Traj_B.l1_data[0] = 0.0;
    Test_Traj_B.alpha_data_b[0] = rt_atan2d_snf(Test_Traj_B.d2_data[1].re *
      varargin_1[0].im + -Test_Traj_B.d2_data[1].im * varargin_1[0].re,
      Test_Traj_B.d2_data[1].re * varargin_1[0].re - -Test_Traj_B.d2_data[1].im *
      varargin_1[0].im);
  }

  if (!Test_Traj_isnan(varargin_1[1])) {
    Test_Traj_B.l1_data[Test_Traj_B.l1_size_n[1] - 1] = 0.0;
    Test_Traj_B.beta_data[Test_Traj_B.z_size_b[1] - 1] = rt_atan2d_snf
      (Test_Traj_B.d2_data[Test_Traj_B.d2_size_idx_1_tmp_h - 2].im * varargin_1
       [1].re + Test_Traj_B.d2_data[Test_Traj_B.d2_size_idx_1_tmp_h - 2].re *
       -varargin_1[1].im, Test_Traj_B.d2_data[Test_Traj_B.d2_size_idx_1_tmp_h -
       2].re * varargin_1[1].re -
       Test_Traj_B.d2_data[Test_Traj_B.d2_size_idx_1_tmp_h - 2].im *
       -varargin_1[1].im);
  }

  if (1.0 > static_cast<real_T>(zcurrent_size[1]) - 2.0) {
    Test_Traj_B.c_n = 0;
  } else {
    Test_Traj_B.c_n = zcurrent_size[1] - 2;
  }

  if (2 > Test_Traj_B.d2_size_idx_1_tmp_h - 1) {
    Test_Traj_B.d_k = 0;
    Test_Traj_B.loop_ub_ae = 0;
  } else {
    Test_Traj_B.d_k = 1;
    Test_Traj_B.loop_ub_ae = Test_Traj_B.d2_size_idx_1_tmp_h - 1;
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.l1_size_n[1]) - 3.0) {
    Test_Traj_B.hb_h = 0;
  } else {
    Test_Traj_B.hb_h = Test_Traj_B.l1_size_n[1] - 3;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.l1_size_n[1]) - 2.0) {
    Test_Traj_B.d2_size_idx_1_tmp_h = 0;
    Test_Traj_B.kb_d = 0;
  } else {
    Test_Traj_B.d2_size_idx_1_tmp_h = 1;
    Test_Traj_B.kb_d = Test_Traj_B.l1_size_n[1] - 2;
  }

  if (3.0 > static_cast<real_T>(Test_Traj_B.l1_size_n[1]) - 1.0) {
    Test_Traj_B.d2_data_re_tmp_c = 0;
  } else {
    Test_Traj_B.d2_data_re_tmp_c = 2;
  }

  if (4 > Test_Traj_B.l1_size_n[1]) {
    Test_Traj_B.d1_size_tmp_b = 0;
    Test_Traj_B.d1_data_re_tmp_c = 0;
  } else {
    Test_Traj_B.d1_size_tmp_b = 3;
    Test_Traj_B.d1_data_re_tmp_c = Test_Traj_B.l1_size_n[1];
  }

  Test_Traj_B.zcurrent_size_m[0] = 1;
  Test_Traj_B.zcurrent_size_m[1] = Test_Traj_B.c_n;
  if (0 <= Test_Traj_B.c_n - 1) {
    memcpy(&Test_Traj_B.d2_data_g[0], &zcurrent_data[0], Test_Traj_B.c_n *
           sizeof(creal_T));
  }

  Test_Traj_B.loop_ub_ae -= Test_Traj_B.d_k;
  for (Test_Traj_B.c_n = 0; Test_Traj_B.c_n < Test_Traj_B.loop_ub_ae;
       Test_Traj_B.c_n++) {
    Test_Traj_B.d1_data_g[Test_Traj_B.c_n] = Test_Traj_B.d2_data[Test_Traj_B.d_k
      + Test_Traj_B.c_n];
  }

  Test_Traj_B.l1_size_g[0] = 1;
  Test_Traj_B.l1_size_g[1] = Test_Traj_B.hb_h;
  if (0 <= Test_Traj_B.hb_h - 1) {
    memcpy(&Test_Traj_B.l1_data_n[0], &Test_Traj_B.l1_data[0], Test_Traj_B.hb_h *
           sizeof(real_T));
  }

  Test_Traj_B.l1_size_j[0] = 1;
  Test_Traj_B.loop_ub_ae = Test_Traj_B.kb_d - Test_Traj_B.d2_size_idx_1_tmp_h;
  Test_Traj_B.l1_size_j[1] = Test_Traj_B.loop_ub_ae;
  for (Test_Traj_B.c_n = 0; Test_Traj_B.c_n < Test_Traj_B.loop_ub_ae;
       Test_Traj_B.c_n++) {
    Test_Traj_B.l1_data_o[Test_Traj_B.c_n] =
      Test_Traj_B.l1_data[Test_Traj_B.d2_size_idx_1_tmp_h + Test_Traj_B.c_n] +
      Test_Traj_B.l1_data[Test_Traj_B.d2_data_re_tmp_c + Test_Traj_B.c_n];
  }

  Test_Traj_B.l1_size_f[0] = 1;
  Test_Traj_B.loop_ub_ae = Test_Traj_B.d1_data_re_tmp_c -
    Test_Traj_B.d1_size_tmp_b;
  Test_Traj_B.l1_size_f[1] = Test_Traj_B.loop_ub_ae;
  for (Test_Traj_B.c_n = 0; Test_Traj_B.c_n < Test_Traj_B.loop_ub_ae;
       Test_Traj_B.c_n++) {
    Test_Traj_B.l1_data_l[Test_Traj_B.c_n] =
      Test_Traj_B.l1_data[Test_Traj_B.d1_size_tmp_b + Test_Traj_B.c_n];
  }

  Test_Traj_midcurve(Test_Traj_B.d2_data_g, Test_Traj_B.zcurrent_size_m,
                     Test_Traj_B.d1_data_g, Test_Traj_B.l1_data_n,
                     Test_Traj_B.l1_size_g, Test_Traj_B.l1_data_o,
                     Test_Traj_B.l1_size_j, Test_Traj_B.l1_data_l,
                     Test_Traj_B.l1_size_f, Test_Traj_B.alpha_data_b,
                     Test_Traj_B.beta_data, Test_Traj_B.tmp_data_f,
                     Test_Traj_B.z_size_b);
  Zout_size[0] = 1;
  Zout_size[1] = Test_Traj_B.z_size_b[1] + 2;
  Zout_data[0] = zorig_data[0];
  Test_Traj_B.c_n = Test_Traj_B.z_size_b[0] * Test_Traj_B.z_size_b[1];
  if (0 <= Test_Traj_B.c_n - 1) {
    memcpy(&Zout_data[1], &Test_Traj_B.tmp_data_f[0], Test_Traj_B.c_n * sizeof
           (creal_T));
  }

  Zout_data[Test_Traj_B.c_n + 1] = zorig_data[zorig_size[1] - 1];
  Test_Traj_B.ub_tmp_j = (static_cast<real_T>(zcurrent_size[1]) -
    static_cast<real_T>(zorig_size[1])) / (static_cast<real_T>(zorig_size[1]) -
    1.0) + 1.0;
  if ((Test_Traj_B.ub_tmp_j == 0.0) || (((Test_Traj_B.ub_tmp_j > 0.0) && (1 >
         Zout_size[1])) || ((0.0 > Test_Traj_B.ub_tmp_j) && (Zout_size[1] > 1))))
  {
    Test_Traj_B.d2_size_idx_1_tmp_h = 1;
  } else {
    Test_Traj_B.d2_size_idx_1_tmp_h = static_cast<int32_T>(Test_Traj_B.ub_tmp_j);
  }

  Test_Traj_B.loop_ub_ae = zorig_size[1];
  for (Test_Traj_B.c_n = 0; Test_Traj_B.c_n < Test_Traj_B.loop_ub_ae;
       Test_Traj_B.c_n++) {
    Zout_data[Test_Traj_B.d2_size_idx_1_tmp_h * Test_Traj_B.c_n] =
      zorig_data[Test_Traj_B.c_n];
  }
}

static void Test_Traj_cloth_p(const creal_T z_data[], const int32_T *z_size,
  const creal_T varargin_1[2], real_T r_data[], int32_T r_size[2], real_T
  s_data[], int32_T s_size[2])
{
  Test_Traj_B.nmax = (static_cast<real_T>(*z_size) - 1.0) * 128.0 + 1.0;
  Test_Traj_B.Zout_size_tmp = static_cast<int32_T>(Test_Traj_B.nmax);
  Test_Traj_B.loop_ub_da = Test_Traj_B.Zout_size_tmp - 1;
  if (0 <= Test_Traj_B.loop_ub_da) {
    memset(&Test_Traj_B.Zout_data[0], 0, (Test_Traj_B.loop_ub_da + 1) * sizeof
           (creal_T));
  }

  Test_Traj_B.m_l = *z_size;
  Test_Traj_B.unnamed_idx_1 = *z_size;
  if (0 <= Test_Traj_B.unnamed_idx_1 - 1) {
    memcpy(&Test_Traj_B.Zout_data[0], &z_data[0], Test_Traj_B.unnamed_idx_1 *
           sizeof(creal_T));
  }

  Test_Traj_B.iv8[0] = 1;
  Test_Traj_B.iv8[1] = *z_size;
  Test_Traj_B.Zout_size[0] = 1;
  Test_Traj_B.iv9[0] = 1;
  Test_Traj_B.iv9[1] = *z_size;
  Test_Traj_B.Zout_size_j[0] = 1;
  Test_Traj_B.iv10[0] = 1;
  Test_Traj_B.iv10[1] = *z_size;
  Test_Traj_B.Zout_size_a[0] = 1;
  for (Test_Traj_B.unnamed_idx_1 = 0; Test_Traj_B.unnamed_idx_1 < 7;
       Test_Traj_B.unnamed_idx_1++) {
    Test_Traj_B.mnew = 2.0 * Test_Traj_B.m_l - 1.0;
    Test_Traj_insertCodegen_p(Test_Traj_B.Zout_data, Test_Traj_B.m_l,
      Test_Traj_B.nmax, varargin_1, Test_Traj_B.tmp_data_k,
      Test_Traj_B.tmp_size_ca);
    Test_Traj_B.loop_ub_da = Test_Traj_B.tmp_size_ca[1];
    if (0 <= Test_Traj_B.loop_ub_da - 1) {
      memcpy(&Test_Traj_B.Zout_data[0], &Test_Traj_B.tmp_data_k[0],
             Test_Traj_B.loop_ub_da * sizeof(creal_T));
    }

    if (1.0 > Test_Traj_B.mnew) {
      Test_Traj_B.loop_ub_da = 0;
    } else {
      Test_Traj_B.loop_ub_da = static_cast<int32_T>(Test_Traj_B.mnew);
    }

    Test_Traj_B.Zout_size[1] = Test_Traj_B.loop_ub_da;
    if (0 <= Test_Traj_B.loop_ub_da - 1) {
      memcpy(&Test_Traj_B.Zout_data_c[0], &Test_Traj_B.Zout_data[0],
             Test_Traj_B.loop_ub_da * sizeof(creal_T));
    }

    Test_Traj_optimize_p(Test_Traj_B.Zout_data_c, Test_Traj_B.Zout_size, z_data,
                         Test_Traj_B.iv8, varargin_1, Test_Traj_B.tmp_data_k,
                         Test_Traj_B.tmp_size_ca);
    Test_Traj_B.loop_ub_da = Test_Traj_B.tmp_size_ca[1];
    if (0 <= Test_Traj_B.loop_ub_da - 1) {
      memcpy(&Test_Traj_B.Zout_data[0], &Test_Traj_B.tmp_data_k[0],
             Test_Traj_B.loop_ub_da * sizeof(creal_T));
    }

    if (1.0 > Test_Traj_B.mnew) {
      Test_Traj_B.loop_ub_da = 0;
    } else {
      Test_Traj_B.loop_ub_da = static_cast<int32_T>(Test_Traj_B.mnew);
    }

    Test_Traj_B.Zout_size_j[1] = Test_Traj_B.loop_ub_da;
    if (0 <= Test_Traj_B.loop_ub_da - 1) {
      memcpy(&Test_Traj_B.Zout_data_c[0], &Test_Traj_B.Zout_data[0],
             Test_Traj_B.loop_ub_da * sizeof(creal_T));
    }

    Test_Traj_optimize_p(Test_Traj_B.Zout_data_c, Test_Traj_B.Zout_size_j,
                         z_data, Test_Traj_B.iv9, varargin_1,
                         Test_Traj_B.tmp_data_k, Test_Traj_B.tmp_size_ca);
    Test_Traj_B.loop_ub_da = Test_Traj_B.tmp_size_ca[1];
    if (0 <= Test_Traj_B.loop_ub_da - 1) {
      memcpy(&Test_Traj_B.Zout_data[0], &Test_Traj_B.tmp_data_k[0],
             Test_Traj_B.loop_ub_da * sizeof(creal_T));
    }

    if (1.0 > Test_Traj_B.mnew) {
      Test_Traj_B.loop_ub_da = 0;
    } else {
      Test_Traj_B.loop_ub_da = static_cast<int32_T>(Test_Traj_B.mnew);
    }

    Test_Traj_B.Zout_size_a[1] = Test_Traj_B.loop_ub_da;
    if (0 <= Test_Traj_B.loop_ub_da - 1) {
      memcpy(&Test_Traj_B.Zout_data_c[0], &Test_Traj_B.Zout_data[0],
             Test_Traj_B.loop_ub_da * sizeof(creal_T));
    }

    Test_Traj_optimize_p(Test_Traj_B.Zout_data_c, Test_Traj_B.Zout_size_a,
                         z_data, Test_Traj_B.iv10, varargin_1,
                         Test_Traj_B.tmp_data_k, Test_Traj_B.tmp_size_ca);
    Test_Traj_B.loop_ub_da = Test_Traj_B.tmp_size_ca[1];
    if (0 <= Test_Traj_B.loop_ub_da - 1) {
      memcpy(&Test_Traj_B.Zout_data[0], &Test_Traj_B.tmp_data_k[0],
             Test_Traj_B.loop_ub_da * sizeof(creal_T));
    }

    Test_Traj_B.m_l = Test_Traj_B.mnew;
  }

  r_size[0] = 1;
  r_size[1] = Test_Traj_B.Zout_size_tmp;
  Test_Traj_B.loop_ub_da = Test_Traj_B.Zout_size_tmp - 1;
  for (Test_Traj_B.unnamed_idx_1 = 0; Test_Traj_B.unnamed_idx_1 <=
       Test_Traj_B.loop_ub_da; Test_Traj_B.unnamed_idx_1++) {
    r_data[Test_Traj_B.unnamed_idx_1] =
      Test_Traj_B.Zout_data[Test_Traj_B.unnamed_idx_1].re;
  }

  s_size[0] = 1;
  s_size[1] = Test_Traj_B.Zout_size_tmp;
  Test_Traj_B.loop_ub_da = Test_Traj_B.Zout_size_tmp - 1;
  for (Test_Traj_B.unnamed_idx_1 = 0; Test_Traj_B.unnamed_idx_1 <=
       Test_Traj_B.loop_ub_da; Test_Traj_B.unnamed_idx_1++) {
    s_data[Test_Traj_B.unnamed_idx_1] =
      Test_Traj_B.Zout_data[Test_Traj_B.unnamed_idx_1].im;
  }
}

static void Test_Traj_packageCodegen_p(const real_T r_data[], const real_T
  s_data[], real_T n, real_T u_data[], int32_T *u_size, real_T v_data[], int32_T
  *v_size)
{
  int32_T u_size_tmp;
  u_size_tmp = static_cast<int32_T>(n);
  *u_size = u_size_tmp;
  if (0 <= u_size_tmp - 1) {
    memset(&u_data[0], 0, u_size_tmp * sizeof(real_T));
  }

  *v_size = u_size_tmp;
  if (0 <= u_size_tmp - 1) {
    memset(&v_data[0], 0, u_size_tmp * sizeof(real_T));
  }

  if (1.0 > n) {
    u_size_tmp = -1;
  } else {
    u_size_tmp--;
  }

  if (0 <= u_size_tmp) {
    memcpy(&u_data[0], &r_data[0], (u_size_tmp + 1) * sizeof(real_T));
  }

  if (1.0 > n) {
    u_size_tmp = -1;
  } else {
    u_size_tmp = static_cast<int32_T>(n) - 1;
  }

  if (0 <= u_size_tmp) {
    memcpy(&v_data[0], &s_data[0], (u_size_tmp + 1) * sizeof(real_T));
  }
}

static void Test_Traj_dclothoidwp_p(const real_T x_data[], const int32_T *x_size,
  const real_T y_data[], const real_T varargin_1[2], const real_T varargin_2[2],
  real_T u_data[], int32_T *u_size, real_T v_data[], int32_T *v_size)
{
  Test_Traj_B.x_size_o = *x_size;
  Test_Traj_B.loop_ub_n3 = *x_size;
  for (Test_Traj_B.i16 = 0; Test_Traj_B.i16 < Test_Traj_B.loop_ub_n3;
       Test_Traj_B.i16++) {
    Test_Traj_B.x_data_p[Test_Traj_B.i16].re = x_data[Test_Traj_B.i16];
    Test_Traj_B.x_data_p[Test_Traj_B.i16].im = y_data[Test_Traj_B.i16];
  }

  Test_Traj_B.varargin_1[0].re = varargin_1[0];
  Test_Traj_B.varargin_1[0].im = varargin_2[0];
  Test_Traj_B.varargin_1[1].re = varargin_1[1];
  Test_Traj_B.varargin_1[1].im = varargin_2[1];
  Test_Traj_cloth_p(Test_Traj_B.x_data_p, &Test_Traj_B.x_size_o,
                    Test_Traj_B.varargin_1, Test_Traj_B.r_data,
                    Test_Traj_B.r_size, Test_Traj_B.s_data, Test_Traj_B.s_size);
  Test_Traj_packageCodegen_p(Test_Traj_B.r_data, Test_Traj_B.s_data, 128.0 * (
    static_cast<real_T>(*x_size) - 1.0) + 1.0, u_data, u_size, v_data, v_size);
}

static void Test_Traj_angle_p(const creal_T x_data[], const int32_T *x_size,
  real_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T b_k;
  nx = *x_size - 1;
  *y_size = *x_size;
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = rt_atan2d_snf(x_data[b_k].im, x_data[b_k].re);
  }
}

static void Test_Traj_exp_p(creal_T x_data[], const int32_T *x_size)
{
  Test_Traj_B.nx = *x_size - 1;
  for (Test_Traj_B.b_k_e = 0; Test_Traj_B.b_k_e <= Test_Traj_B.nx;
       Test_Traj_B.b_k_e++) {
    if (x_data[Test_Traj_B.b_k_e].im == 0.0) {
      Test_Traj_B.b_x_re = exp(x_data[Test_Traj_B.b_k_e].re);
      Test_Traj_B.r_k = 0.0;
    } else if (rtIsInf(x_data[Test_Traj_B.b_k_e].im) && rtIsInf
               (x_data[Test_Traj_B.b_k_e].re) && (x_data[Test_Traj_B.b_k_e].re <
                0.0)) {
      Test_Traj_B.b_x_re = 0.0;
      Test_Traj_B.r_k = 0.0;
    } else {
      Test_Traj_B.r_k = exp(x_data[Test_Traj_B.b_k_e].re / 2.0);
      Test_Traj_B.b_x_re = Test_Traj_B.r_k * cos(x_data[Test_Traj_B.b_k_e].im) *
        Test_Traj_B.r_k;
      Test_Traj_B.r_k *= Test_Traj_B.r_k * sin(x_data[Test_Traj_B.b_k_e].im);
    }

    x_data[Test_Traj_B.b_k_e].re = Test_Traj_B.b_x_re;
    x_data[Test_Traj_B.b_k_e].im = Test_Traj_B.r_k;
  }
}

static real_T Test_Traj_rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    Test_Traj_B.d3 = fabs(u0);
    Test_Traj_B.d4 = fabs(u1);
    if (rtIsInf(u1)) {
      if (Test_Traj_B.d3 == 1.0) {
        y = 1.0;
      } else if (Test_Traj_B.d3 > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (Test_Traj_B.d4 == 0.0) {
      y = 1.0;
    } else if (Test_Traj_B.d4 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

static void Test_Traj_power_p(const real_T a_data[], const int32_T *a_size,
  real_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T b_k;
  *y_size = *a_size;
  nx = *a_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = Test_Traj_rt_powd_snf(a_data[b_k], 2.0);
  }
}

static void Test_Traj_repmat_p(const real_T a_data[], const int32_T *a_size,
  real_T b_data[], int32_T b_size[2])
{
  int32_T b_k;
  b_size[0] = *a_size;
  b_size[1] = 25;
  Test_Traj_B.nrows = *a_size;
  for (Test_Traj_B.b_jtilecol = 0; Test_Traj_B.b_jtilecol < 25;
       Test_Traj_B.b_jtilecol++) {
    Test_Traj_B.ibcol = Test_Traj_B.b_jtilecol * Test_Traj_B.nrows - 1;
    for (b_k = 0; b_k < Test_Traj_B.nrows; b_k++) {
      b_data[(Test_Traj_B.ibcol + b_k) + 1] = a_data[b_k];
    }
  }
}

static void Test_Traj_fetchAgrad_p(const real_T x_data[], const int32_T *x_size,
  const real_T y_data[], real_T a_data[], int32_T *a_size, real_T dadx_data[],
  int32_T *dadx_size, real_T dady_data[], int32_T *dady_size)
{
  boolean_T empty_non_axis_sizes;
  static const real_T tmp[351] = { -1.5361481088532109E-40,
    -5.1782003708968662E-38, 5.8080516979367073E-38, -6.2922109794702842E-36,
    1.7744129415359022E-35, -9.8266873453160865E-36, -3.0557011816989596E-34,
    1.9988681524430764E-33, -2.7007621230825949E-33, 9.6497076628562535E-34,
    -8.50146594503621E-33, 8.7613736854720049E-32, -2.8258679893784358E-31,
    2.3637604856716169E-31, -5.8556266604372106E-32, -1.2863962524996432E-31,
    2.229093841830142E-30, -1.1057059963507232E-29, 2.3139349101185755E-29,
    -1.2630223562649489E-29, 2.0068564650639364E-30, -1.1052377502159136E-30,
    3.0309726719642508E-29, -2.57153235020298E-28, 7.9357820762496212E-28,
    -1.1834423538462616E-27, 3.7518152500494656E-28, -9.5988758699827141E-30,
    -5.8444661902772888E-30, 2.2799302267031842E-28, -3.118708591261201E-27,
    1.6937953593997347E-26, -3.4234259338177584E-26, 3.675290577810477E-26,
    -1.6183294340108731E-27, -2.9209077909746285E-27, -2.0493494333051533E-29,
    1.0232091530758262E-27, -2.0119872415420161E-26, 1.8157191663212143E-25,
    -6.8278782273948665E-25, 7.9289707228553727E-25, -5.1713140278139824E-25,
    -3.5757401738269863E-25, 1.7191521549607673E-25, -5.001307006229815E-29,
    2.9234616420394369E-27, -7.3372627735809734E-26, 9.6978563886575261E-25,
    -6.3976458551757164E-24, 1.6073455072306433E-23, -7.37463587795066E-25,
    -7.0522343048774666E-24, 1.4805755563608624E-23, -5.1965352404273039E-24,
    -8.5391792173019132E-29, 5.4962692899068422E-27, -1.5546891778194411E-25,
    2.6049795261751296E-24, -2.6172058881327836E-23, 1.2985982037510549E-22,
    -1.423772303418446E-22, -5.8282903661876709E-22, 4.1133508360308628E-22,
    -1.742659308147939E-22, 8.07786256209318E-23, -9.7738126735700558E-29,
    6.6212355845436972E-27, -1.7707072436748613E-25, 2.8057133511879665E-24,
    -3.4869970759687543E-23, 3.0241871214865029E-22, -9.92012310209099E-22,
    -3.2149566866116185E-21, 1.8710249707031661E-20, -1.2453541845369618E-21,
    -7.5062472154050874E-21, 2.8499865852964518E-22, -6.9207112182904389E-29,
    4.4179830835754724E-27, -4.4762524882779791E-26, -2.450817653228083E-24,
    7.1914140604820392E-23, -7.2673875098954476E-22, 3.3571441047866719E-21,
    -1.5906878744538782E-20, 1.0715370660853569E-19, -2.1813900762258771E-19,
    -3.7882773476137619E-19, 4.4188357957185649E-19, -5.2046323054922296E-20,
    -2.8170935396816464E-29, 7.8914114794548443E-28, 1.528966070127476E-25,
    -1.1332880987718864E-23, 3.3104475572268851E-22, -4.9647512138578754E-21,
    3.9715384015216385E-20, -1.6290821269847189E-19, 3.36612516663913E-19,
    -3.36275918384194E-19, -2.8323208988729979E-18, 1.5348780107717589E-17,
    -1.2231243924447674E-17, 1.5460269152965008E-18, -1.0350259940425787E-29,
    -4.7414043171551787E-28, 1.9707672417753685E-25, -1.4495788889042659E-23,
    5.1378340796211685E-22, -1.0210774519786583E-20, 1.165542649503511E-19,
    -7.1421779330877591E-19, 1.6365283191176908E-18, 4.9170568130837211E-18,
    -4.4186234291063853E-17, 1.6247947613884891E-16, -3.4187835062780104E-16,
    2.2495563268135524E-16, -2.8304172442233909E-17, -9.54190907880087E-30,
    4.33416352213585E-28, 7.30606772876727E-26, -8.4789175470441986E-24,
    3.9746370968729408E-22, -1.0350198533651566E-20, 1.589371276512773E-19,
    -1.3721089740423357E-18, 4.7868869804965763E-18, 1.9699426816042335E-17,
    -2.7595647699194014E-16, 1.2612122765846683E-15, -3.3199758280144047E-15,
    5.1284109097493322E-15, -2.9773954125181772E-15, 3.6686222388116938E-16,
    -7.13761114432792E-30, 8.6070327678610011E-28, -2.5253411261423782E-26,
    -1.429985806399278E-24, 1.4200678258817658E-22, -5.2901273901739912E-21,
    1.0879148930261737E-19, -1.2468905412479112E-18, 5.651703115185149E-18,
    4.073824764700649E-17, -7.7193016891576893E-16, 5.1280294092344238E-15,
    -1.8830251965098877E-14, 4.2082102420983456E-14, -5.4816521831539046E-14,
    2.9056289127761095E-14, -3.5049036301087839E-15, -2.7032712394278119E-30,
    4.4439845217679321E-28, -2.8561533629781625E-26, 7.4263493149653183E-25,
    7.7648205291611823E-24, -1.1313407629960782E-21, 3.4992489982228452E-20,
    -5.11237062122324E-19, 1.9082838069139238E-18, 6.02161124473958E-17,
    -1.1855133738581856E-15, 1.0647602057665829E-14, -5.5915318620809614E-14,
    1.8096099090326831E-13, -3.6385985586845819E-13, 4.2410069501559273E-13,
    -2.106362282048389E-13, 2.4385529408308407E-14, -4.8547818044528891E-31,
    9.5570081279537094E-29, -7.8572054752482576E-27, 3.3174769183447452E-25,
    -6.2142341258768858E-24, -5.0991712996566211E-23, 5.1392990708290932E-21,
    -8.807706142947147E-20, -5.8182766640448854E-19, 5.1419279154935842E-17,
    -1.04407697522146E-15, 1.1898094238539857E-14, -8.5367937011271162E-14,
    3.9513126620957262E-13, -1.1748533341492665E-12, 2.1917257282808794E-12,
    -2.3566809884820566E-12, 1.0795020408261728E-12, -1.5837465906955864E-13,
    -2.7533507225420422E-32, 5.7619182837708977E-30, -4.6471657116787863E-28,
    1.4048422360791874E-26, 3.7650962241144584E-25, -4.9228435831327322E-23,
    1.9071729205179347E-21, -3.3490783882201909E-20, -7.018689437542322E-20,
    1.8324124104655822E-17, -4.7883976550407734E-16, 7.0487303907715931E-15,
    -6.735734123826801E-14, 4.3114382655453385E-13, -1.8436618496422663E-12,
    5.1655481921478335E-12, -9.1498502333527442E-12, 9.53768065186612E-12,
    -5.5096965823391316E-12, -1.9256688414961511E-12, 2.6993907913031997E-33,
    -8.3658508533748674E-31, 1.2360111759498158E-28, -1.1391057286564071E-26,
    7.1943116140837765E-25, -3.2278401611187206E-23, 1.0313736180462972E-21,
    -2.2595952680170383E-20, 2.9013328570466337E-19, -1.4189880636575127E-19,
    -8.2575877751974837E-17, 1.9535524420193836E-15, -2.60333162544509E-14,
    2.2905798368369833E-13, -1.3730942326110817E-12, 5.5797967300488639E-12,
    -1.5044456366394642E-11, 2.5612747661164289E-11, -1.9627816796196334E-11,
    -2.8036172295220303E-11, -1.9615478304946413E-10, 3.8934925377973957E-34,
    -1.2639609126235819E-31, 1.9287682878359229E-29, -1.8332237204928374E-27,
    1.2092531131064511E-25, -5.8236835135326278E-24, 2.0915581782354698E-22,
    -5.5964099612773872E-21, 1.0833579869797173E-19, -1.3736666335311385E-18,
    6.6209633655847283E-18, 1.4362053626673917E-16, -4.0159095765450877E-15,
    5.320276578988179E-14, -4.5399145021925304E-13, 2.6343951113716903E-12,
    -1.0426603808524378E-11, 2.7378813158203465E-11, -2.4213032965198892E-11,
    -6.43589148489966E-11, 8.7111108876109732E-11, -1.58880825805031E-8,
    1.2049379324305816E-35, -4.3610770108214582E-33, 7.4936434757448969E-31,
    -8.1105245364317889E-29, 6.1705088386370215E-27, -3.480752271664829E-25,
    1.4948191338667704E-23, -4.9368146563727049E-22, 1.2499110582545291E-20,
    -2.3793207120554828E-19, 3.2322327482741956E-18, -2.6498507726404211E-17,
    7.8731033015748051E-18, 3.2775331491296092E-15, -5.1807698267687295E-14,
    4.62732644627914E-13, -2.7239785524170987E-12, 1.0896716883650769E-11,
    -1.8645986337651637E-11, 2.5459617591435155E-12, -1.3347654837468073E-8,
    1.3161132276731047E-7, -1.3227534741608429E-6, -9.7984625010885519E-38,
    3.2900432333335651E-35, -4.4581754057254838E-33, 2.5824817729473294E-31,
    5.2049615357860253E-30, -2.1583876518311414E-27, 1.9476950757610683E-25,
    -1.0716316264212252E-23, 4.1440657240625748E-22, -1.1817624319451798E-20,
    2.5249339155046378E-19, -4.0233948389965105E-18, 4.64169135391771E-17,
    -3.5476759515651092E-16, 1.1999262837080123E-15, 8.516412269170767E-15,
    -1.527199343162684E-13, 1.1449867637138848E-12, -3.6599461401055181E-12,
    -4.6103940452468584E-11, -4.7424213964325014E-9, 1.4095535848735113E-8,
    1.1415162393763462E-5, -0.00011904761791914855, -7.7487127476207258E-39,
    3.1576790378728681E-36, -5.9250135047007422E-34, 6.7643789484475193E-32,
    -5.220570875188387E-30, 2.8506788574160792E-28, -1.1098370767710674E-26,
    2.9468645436878283E-25, -4.2328657438375513E-24, -3.3901276335768838E-23,
    3.8407990599986091E-21, -1.1933448342985106E-19, 2.3702576054378613E-18,
    -3.3709086299905129E-17, 3.5240422748635714E-16, -2.688297081936284E-15,
    1.4426938768292247E-14, -4.5785087028675909E-14, 1.6710103243486247E-14,
    -1.1024143067873009E-11, -3.3079062392811025E-10, 2.8376658214791753E-8,
    2.8265347449301076E-6, 3.9682541488440042E-5, -0.016666666666889381,
    -8.6841596356231729E-42, 3.1939131296905081E-39, -4.8490390875687847E-37,
    3.2729122440862841E-35, 5.3980586162289553E-34, -3.3686936226391223E-31,
    3.7197707807256541E-29, -2.5380412938111731E-27, 1.2494404817163045E-25,
    -4.6966036280739172E-24, 1.3852307187625331E-22, -3.2509821682467773E-21,
    6.1100085267801761E-20, -9.20594856358596E-19, 1.1081925404564449E-17,
    -1.0575868027372313E-16, 7.920139233623936E-16, -4.5514965597202215E-15,
    1.3296256931854534E-14, -3.345171633728989E-13, 1.7101904098836834E-11,
    2.4300392651460408E-9, 4.6155748216027864E-8, -1.5460729722609369E-5,
    -0.00238095238099261, 1.0000000000000047 };

  const real_T *c;
  Test_Traj_B.u_size_l = *x_size;
  Test_Traj_B.loop_ub_o2 = *x_size;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    Test_Traj_B.u_data_l[Test_Traj_B.result_p] = x_data[Test_Traj_B.result_p] -
      y_data[Test_Traj_B.result_p];
  }

  Test_Traj_B.v_size_f = *x_size;
  Test_Traj_B.loop_ub_o2 = *x_size;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    Test_Traj_B.v_data_lu[Test_Traj_B.result_p] = x_data[Test_Traj_B.result_p] +
      y_data[Test_Traj_B.result_p];
  }

  c = &tmp[0];
  Test_Traj_B.n_e = 351;
  Test_Traj_B.b_idx_0_d = *x_size;
  Test_Traj_power_p(Test_Traj_B.u_data_l, &Test_Traj_B.u_size_l,
                    Test_Traj_B.tmp_data_c3, &Test_Traj_B.tmp_size_h5);
  Test_Traj_repmat_p(Test_Traj_B.tmp_data_c3, &Test_Traj_B.tmp_size_h5,
                     Test_Traj_B.varargin_2_data, Test_Traj_B.varargin_2_size);
  if (*x_size != 0) {
    Test_Traj_B.result_h = *x_size;
  } else if (Test_Traj_B.varargin_2_size[0] != 0) {
    Test_Traj_B.result_h = Test_Traj_B.varargin_2_size[0];
  } else {
    Test_Traj_B.result_h = 0;
  }

  empty_non_axis_sizes = (Test_Traj_B.result_h == 0);
  if (empty_non_axis_sizes || (*x_size != 0)) {
    Test_Traj_B.result_g = 1;
  } else {
    Test_Traj_B.result_g = 0;
  }

  if (empty_non_axis_sizes || (Test_Traj_B.varargin_2_size[0] != 0)) {
    Test_Traj_B.result_p = 25;
  } else {
    Test_Traj_B.result_p = 0;
  }

  Test_Traj_B.result_size_idx_1 = Test_Traj_B.result_g + Test_Traj_B.result_p;
  Test_Traj_B.loop_ub_o2 = Test_Traj_B.result_h * Test_Traj_B.result_g;
  Test_Traj_B.loop_ub_n = Test_Traj_B.result_h * Test_Traj_B.result_p - 1;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    Test_Traj_B.result_data[Test_Traj_B.result_p] = 1.0;
  }

  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p <= Test_Traj_B.loop_ub_n;
       Test_Traj_B.result_p++) {
    Test_Traj_B.result_data[Test_Traj_B.result_p + Test_Traj_B.loop_ub_o2] =
      Test_Traj_B.varargin_2_data[Test_Traj_B.result_p];
  }

  Test_Traj_B.loop_ub_o2 = Test_Traj_B.result_h * Test_Traj_B.result_size_idx_1
    - 1;
  if (0 <= Test_Traj_B.loop_ub_o2) {
    memcpy(&Test_Traj_B.x_data[0], &Test_Traj_B.result_data[0],
           (Test_Traj_B.loop_ub_o2 + 1) * sizeof(real_T));
  }

  if ((Test_Traj_B.result_h != 0) && (Test_Traj_B.result_size_idx_1 != 0)) {
    Test_Traj_B.result_size_idx_1 -= 2;
    for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p <=
         Test_Traj_B.result_size_idx_1; Test_Traj_B.result_p++) {
      Test_Traj_B.loop_ub_n = Test_Traj_B.result_h - 1;
      for (Test_Traj_B.loop_ub_o2 = 0; Test_Traj_B.loop_ub_o2 <=
           Test_Traj_B.loop_ub_n; Test_Traj_B.loop_ub_o2++) {
        Test_Traj_B.x_data_tmp = Test_Traj_B.result_h * (Test_Traj_B.result_p +
          1) + Test_Traj_B.loop_ub_o2;
        Test_Traj_B.x_data[Test_Traj_B.x_data_tmp] *=
          Test_Traj_B.x_data[Test_Traj_B.result_h * Test_Traj_B.result_p +
          Test_Traj_B.loop_ub_o2];
      }
    }
  }

  Test_Traj_power_p(Test_Traj_B.v_data_lu, &Test_Traj_B.v_size_f,
                    Test_Traj_B.tmp_data_c3, &Test_Traj_B.tmp_size_h5);
  Test_Traj_repmat_p(Test_Traj_B.tmp_data_c3, &Test_Traj_B.tmp_size_h5,
                     Test_Traj_B.varargin_2_data, Test_Traj_B.varargin_2_size);
  if (*x_size != 0) {
    Test_Traj_B.result_g = *x_size;
  } else if (Test_Traj_B.varargin_2_size[0] != 0) {
    Test_Traj_B.result_g = Test_Traj_B.varargin_2_size[0];
  } else {
    Test_Traj_B.result_g = 0;
  }

  empty_non_axis_sizes = (Test_Traj_B.result_g == 0);
  if (empty_non_axis_sizes || (*x_size != 0)) {
    Test_Traj_B.result_p = 1;
  } else {
    Test_Traj_B.result_p = 0;
  }

  if (empty_non_axis_sizes || (Test_Traj_B.varargin_2_size[0] != 0)) {
    Test_Traj_B.loop_ub_n = 25;
  } else {
    Test_Traj_B.loop_ub_n = 0;
  }

  Test_Traj_B.result_size_idx_1 = Test_Traj_B.result_p + Test_Traj_B.loop_ub_n;
  Test_Traj_B.loop_ub_o2 = Test_Traj_B.result_g * Test_Traj_B.result_p;
  Test_Traj_B.loop_ub_n = Test_Traj_B.result_g * Test_Traj_B.loop_ub_n - 1;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    Test_Traj_B.result_data[Test_Traj_B.result_p] = 1.0;
  }

  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p <= Test_Traj_B.loop_ub_n;
       Test_Traj_B.result_p++) {
    Test_Traj_B.result_data[Test_Traj_B.result_p + Test_Traj_B.loop_ub_o2] =
      Test_Traj_B.varargin_2_data[Test_Traj_B.result_p];
  }

  Test_Traj_B.loop_ub_o2 = Test_Traj_B.result_g * Test_Traj_B.result_size_idx_1
    - 1;
  if (0 <= Test_Traj_B.loop_ub_o2) {
    memcpy(&Test_Traj_B.x_data_o[0], &Test_Traj_B.result_data[0],
           (Test_Traj_B.loop_ub_o2 + 1) * sizeof(real_T));
  }

  if ((Test_Traj_B.result_g != 0) && (Test_Traj_B.result_size_idx_1 != 0)) {
    Test_Traj_B.result_size_idx_1 -= 2;
    for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p <=
         Test_Traj_B.result_size_idx_1; Test_Traj_B.result_p++) {
      Test_Traj_B.loop_ub_n = Test_Traj_B.result_g - 1;
      for (Test_Traj_B.loop_ub_o2 = 0; Test_Traj_B.loop_ub_o2 <=
           Test_Traj_B.loop_ub_n; Test_Traj_B.loop_ub_o2++) {
        Test_Traj_B.x_data_tmp = Test_Traj_B.result_g * (Test_Traj_B.result_p +
          1) + Test_Traj_B.loop_ub_o2;
        Test_Traj_B.x_data_o[Test_Traj_B.x_data_tmp] *=
          Test_Traj_B.x_data_o[Test_Traj_B.result_g * Test_Traj_B.result_p +
          Test_Traj_B.loop_ub_o2];
      }
    }
  }

  if (0 <= Test_Traj_B.b_idx_0_d - 1) {
    memset(&a_data[0], 0, Test_Traj_B.b_idx_0_d * sizeof(real_T));
    memset(&Test_Traj_B.dadr_data[0], 0, Test_Traj_B.b_idx_0_d * sizeof(real_T));
    memset(&dady_data[0], 0, Test_Traj_B.b_idx_0_d * sizeof(real_T));
  }

  Test_Traj_B.i = 0.0;
  Test_Traj_B.j = 0.0;
  while (Test_Traj_B.n_e > 0) {
    Test_Traj_B.c_tmp = c[Test_Traj_B.n_e - 1];
    Test_Traj_B.loop_ub_o2 = static_cast<int32_T>(Test_Traj_B.i + 1.0);
    Test_Traj_B.result_size_idx_1 = static_cast<int32_T>(Test_Traj_B.j + 1.0);
    for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.b_idx_0_d;
         Test_Traj_B.result_p++) {
      a_data[Test_Traj_B.result_p] += Test_Traj_B.x_data[(Test_Traj_B.loop_ub_o2
        - 1) * Test_Traj_B.result_h + Test_Traj_B.result_p] * Test_Traj_B.c_tmp *
        Test_Traj_B.x_data_o[(Test_Traj_B.result_size_idx_1 - 1) *
        Test_Traj_B.result_g + Test_Traj_B.result_p];
    }

    if (Test_Traj_B.i > 0.0) {
      Test_Traj_B.i_c = (Test_Traj_B.i + 1.0) * Test_Traj_B.c_tmp;
      Test_Traj_B.loop_ub_n = static_cast<int32_T>(Test_Traj_B.i);
      for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p <
           Test_Traj_B.b_idx_0_d; Test_Traj_B.result_p++) {
        Test_Traj_B.dadr_data[Test_Traj_B.result_p] += Test_Traj_B.x_data
          [(Test_Traj_B.loop_ub_n - 1) * Test_Traj_B.result_h +
          Test_Traj_B.result_p] * Test_Traj_B.i_c * Test_Traj_B.x_data_o
          [(Test_Traj_B.result_size_idx_1 - 1) * Test_Traj_B.result_g +
          Test_Traj_B.result_p];
      }
    }

    if (Test_Traj_B.j > 0.0) {
      Test_Traj_B.c_tmp *= Test_Traj_B.j + 1.0;
      Test_Traj_B.result_size_idx_1 = static_cast<int32_T>(Test_Traj_B.j);
      for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p <
           Test_Traj_B.b_idx_0_d; Test_Traj_B.result_p++) {
        dady_data[Test_Traj_B.result_p] += Test_Traj_B.x_data
          [(Test_Traj_B.loop_ub_o2 - 1) * Test_Traj_B.result_h +
          Test_Traj_B.result_p] * Test_Traj_B.c_tmp * Test_Traj_B.x_data_o
          [(Test_Traj_B.result_size_idx_1 - 1) * Test_Traj_B.result_g +
          Test_Traj_B.result_p];
      }
    }

    Test_Traj_B.j++;
    if (Test_Traj_B.i + Test_Traj_B.j > 25.0) {
      Test_Traj_B.i++;
      Test_Traj_B.j = 0.0;
    }

    Test_Traj_B.n_e--;
  }

  Test_Traj_B.loop_ub_o2 = *x_size;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    dady_data[Test_Traj_B.result_p] *=
      Test_Traj_B.v_data_lu[Test_Traj_B.result_p];
  }

  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.b_idx_0_d;
       Test_Traj_B.result_p++) {
    Test_Traj_B.dadr_data[Test_Traj_B.result_p] *=
      Test_Traj_B.u_data_l[Test_Traj_B.result_p];
  }

  *dadx_size = *x_size;
  Test_Traj_B.loop_ub_o2 = *x_size;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    dadx_data[Test_Traj_B.result_p] = (2.0 *
      Test_Traj_B.v_data_lu[Test_Traj_B.result_p] *
      (dady_data[Test_Traj_B.result_p] +
       Test_Traj_B.dadr_data[Test_Traj_B.result_p]) +
      a_data[Test_Traj_B.result_p]) * 3.0;
  }

  *dady_size = *x_size;
  Test_Traj_B.loop_ub_o2 = *x_size;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    dady_data[Test_Traj_B.result_p] = (2.0 *
      Test_Traj_B.v_data_lu[Test_Traj_B.result_p] *
      (dady_data[Test_Traj_B.result_p] -
       Test_Traj_B.dadr_data[Test_Traj_B.result_p]) +
      a_data[Test_Traj_B.result_p]) * 3.0;
  }

  *a_size = *x_size;
  Test_Traj_B.loop_ub_o2 = *x_size;
  for (Test_Traj_B.result_p = 0; Test_Traj_B.result_p < Test_Traj_B.loop_ub_o2;
       Test_Traj_B.result_p++) {
    a_data[Test_Traj_B.result_p] *= 3.0 *
      Test_Traj_B.v_data_lu[Test_Traj_B.result_p];
  }
}

static void Test_Traj_abs_p(const real_T x_data[], const int32_T *x_size, real_T
  y_data[], int32_T *y_size)
{
  Test_Traj_B.nx_a = *x_size - 1;
  *y_size = *x_size;
  for (Test_Traj_B.b_k_f = 0; Test_Traj_B.b_k_f <= Test_Traj_B.nx_a;
       Test_Traj_B.b_k_f++) {
    y_data[Test_Traj_B.b_k_f] = fabs(x_data[Test_Traj_B.b_k_f]);
  }
}

static creal_T Test_Traj_sqrt_p(const creal_T x)
{
  creal_T b_x;
  real_T absxr;
  real_T absxi;
  if (x.im == 0.0) {
    if (x.re < 0.0) {
      absxr = 0.0;
      absxi = sqrt(-x.re);
    } else {
      absxr = sqrt(x.re);
      absxi = 0.0;
    }
  } else if (x.re == 0.0) {
    if (x.im < 0.0) {
      absxr = sqrt(-x.im / 2.0);
      absxi = -absxr;
    } else {
      absxr = sqrt(x.im / 2.0);
      absxi = absxr;
    }
  } else if (rtIsNaN(x.re)) {
    absxr = x.re;
    absxi = x.re;
  } else if (rtIsNaN(x.im)) {
    absxr = x.im;
    absxi = x.im;
  } else if (rtIsInf(x.im)) {
    absxr = fabs(x.im);
    absxi = x.im;
  } else if (rtIsInf(x.re)) {
    if (x.re < 0.0) {
      absxr = 0.0;
      absxi = x.im * -x.re;
    } else {
      absxr = x.re;
      absxi = 0.0;
    }
  } else {
    absxr = fabs(x.re);
    absxi = fabs(x.im);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi *= 0.5;
      absxi = Test_Traj_rt_hypotd_snf(absxr, absxi);
      if (absxi > absxr) {
        absxr = sqrt(absxr / absxi + 1.0) * sqrt(absxi);
      } else {
        absxr = sqrt(absxi) * 1.4142135623730951;
      }
    } else {
      absxr = sqrt((Test_Traj_rt_hypotd_snf(absxr, absxi) + absxr) * 0.5);
    }

    if (x.re > 0.0) {
      absxi = x.im / absxr * 0.5;
    } else {
      if (x.im < 0.0) {
        absxi = -absxr;
      } else {
        absxi = absxr;
      }

      absxr = x.im / absxi * 0.5;
    }
  }

  b_x.re = absxr;
  b_x.im = absxi;
  return b_x;
}

static void Test_Traj_sqrt_phm(creal_T x_data[], const int32_T *x_size)
{
  int32_T nx;
  int32_T b_k;
  nx = *x_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    x_data[b_k] = Test_Traj_sqrt_p(x_data[b_k]);
  }
}

static void Test_Traj_fresnelr(const real_T x_data[], const int32_T *x_size,
  creal_T z_data[], int32_T *z_size)
{
  static const real_T tmp[10] = { 0.42154355504367752, 0.1434079197807589,
    0.011522095507358577, 0.000345017939782574, 4.6361374928786735E-6,
    3.0556898379025758E-8, 1.0230451416490724E-10, 1.7201074326816183E-13,
    1.3428327623306275E-16, 3.763297112699879E-20 };

  static const real_T tmp_0[11] = { 0.50444207364338323, 0.19710283352552341,
    0.018764858409257526, 0.00068407938091539307, 1.1513882611188428E-5,
    9.8285244368842225E-8, 4.4534441586175015E-10, 1.0826804113902088E-12,
    1.375554606332618E-15, 8.3635443563067741E-19, 1.8695871016278324E-22 };

  static const real_T tmp_1[11] = { 1.0, 0.75158639835337893,
    0.11688892585919138, 0.0064405152650885865, 0.00015593440916415301,
    1.8462756734893055E-6, 1.1269922476399903E-8, 3.6014002958937136E-11,
    5.8875453362157839E-14, 4.5200143407412973E-17, 1.2544323709001127E-20 };

  static const real_T tmp_2[12] = { 1.0, 1.4749575992512833, 0.33774898912002,
    0.025360374142033879, 0.00081467910718430615, 1.2754507566772912E-5,
    1.0431458965757199E-7, 4.6068072814652043E-10, 1.1027321506624028E-12,
    1.3879653125957886E-15, 8.3915881628311874E-19, 1.8695871016278324E-22 };

  static const real_T tmp_3[6] = { -2991.8191940101983, 708840.04525773856,
    -6.2974148620586254E+7, 2.5489088057337637E+9, -4.429795180596978E+10,
    3.1801629787656781E+11 };

  static const real_T tmp_4[7] = { 1.0, 281.37626888999432, 45584.781080653258,
    5.1734388877009638E+6, 4.1932024589811122E+8, 2.2441179564534092E+10,
    6.0736638949008459E+11 };

  static const real_T tmp_5[6] = { -4.9884311457357354E-8, 9.5042806282985963E-6,
    -0.00064519143568396507, 0.018884331939670384, -0.20552590095501388, 1.0 };

  static const real_T tmp_6[7] = { 3.99982968972496E-12, 9.1543921577465745E-10,
    1.2500186247959882E-7, 1.2226278902417902E-5, 0.00086802954294178428,
    0.041214209072219982, 1.0 };

  const real_T *fn;
  const real_T *gn;
  const real_T *fd;
  const real_T *gd;
  boolean_T exitg1;
  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < 6; Test_Traj_B.i_no++) {
    Test_Traj_B.sn[Test_Traj_B.i_no] = tmp_3[Test_Traj_B.i_no];
  }

  fn = &tmp[0];
  gn = &tmp_0[0];
  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < 7; Test_Traj_B.i_no++) {
    Test_Traj_B.sd[Test_Traj_B.i_no] = tmp_4[Test_Traj_B.i_no];
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < 6; Test_Traj_B.i_no++) {
    Test_Traj_B.cn[Test_Traj_B.i_no] = tmp_5[Test_Traj_B.i_no];
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < 7; Test_Traj_B.i_no++) {
    Test_Traj_B.cd[Test_Traj_B.i_no] = tmp_6[Test_Traj_B.i_no];
  }

  fd = &tmp_1[0];
  gd = &tmp_2[0];
  Test_Traj_B.b_idx_0 = *x_size;
  *z_size = *x_size;
  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.b_idx_0;
       Test_Traj_B.i_no++) {
    z_data[Test_Traj_B.i_no].re = (rtNaN);
    z_data[Test_Traj_B.i_no].im = 0.0;
  }

  Test_Traj_abs_p(x_data, x_size, Test_Traj_B.tmp_data_ch,
                  &Test_Traj_B.tmp_size_cag);
  Test_Traj_B.xabs_size_idx_0 = Test_Traj_B.tmp_size_cag;
  Test_Traj_B.i_no = Test_Traj_B.tmp_size_cag;
  if (0 <= Test_Traj_B.i_no - 1) {
    memcpy(&Test_Traj_B.xabs_data[0], &Test_Traj_B.tmp_data_ch[0],
           Test_Traj_B.i_no * sizeof(real_T));
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.xabs_size_idx_0;
       Test_Traj_B.i_no++) {
    Test_Traj_B.ibig_data_b = Test_Traj_B.xabs_data[Test_Traj_B.i_no] *
      Test_Traj_B.xabs_data[Test_Traj_B.i_no];
    Test_Traj_B.x_data_nk[Test_Traj_B.i_no] = (Test_Traj_B.ibig_data_b < 2.5625);
    Test_Traj_B.ibig_data[Test_Traj_B.i_no] = Test_Traj_B.ibig_data_b;
  }

  Test_Traj_B.idx_m = 0;
  Test_Traj_B.b_idx_0 = Test_Traj_B.tmp_size_cag;
  Test_Traj_B.i_no = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.i_no - 1 <= Test_Traj_B.xabs_size_idx_0 - 1))
  {
    if (Test_Traj_B.x_data_nk[Test_Traj_B.i_no - 1]) {
      Test_Traj_B.idx_m++;
      Test_Traj_B.ii_data_o[Test_Traj_B.idx_m - 1] = Test_Traj_B.i_no;
      if (Test_Traj_B.idx_m >= Test_Traj_B.xabs_size_idx_0) {
        exitg1 = true;
      } else {
        Test_Traj_B.i_no++;
      }
    } else {
      Test_Traj_B.i_no++;
    }
  }

  if (Test_Traj_B.tmp_size_cag == 1) {
    if (Test_Traj_B.idx_m == 0) {
      Test_Traj_B.b_idx_0 = 0;
    }
  } else {
    if (1 > Test_Traj_B.idx_m) {
      Test_Traj_B.idx_m = 0;
    }

    Test_Traj_B.b_idx_0 = Test_Traj_B.idx_m;
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.b_idx_0;
       Test_Traj_B.i_no++) {
    Test_Traj_B.idx_m = Test_Traj_B.ii_data_o[Test_Traj_B.i_no] - 1;
    Test_Traj_B.ibig_data_b = Test_Traj_B.xabs_data[Test_Traj_B.idx_m] *
      Test_Traj_B.xabs_data[Test_Traj_B.idx_m];
    Test_Traj_B.x4_data_p = Test_Traj_B.ibig_data_b * Test_Traj_B.ibig_data_b;
    z_data[Test_Traj_B.idx_m].re = (((((Test_Traj_B.cn[0] *
      Test_Traj_B.x4_data_p + Test_Traj_B.cn[1]) * Test_Traj_B.x4_data_p +
      Test_Traj_B.cn[2]) * Test_Traj_B.x4_data_p + Test_Traj_B.cn[3]) *
      Test_Traj_B.x4_data_p + Test_Traj_B.cn[4]) * Test_Traj_B.x4_data_p +
      Test_Traj_B.cn[5]) / ((((((Test_Traj_B.cd[0] * Test_Traj_B.x4_data_p +
      Test_Traj_B.cd[1]) * Test_Traj_B.x4_data_p + Test_Traj_B.cd[2]) *
      Test_Traj_B.x4_data_p + Test_Traj_B.cd[3]) * Test_Traj_B.x4_data_p +
      Test_Traj_B.cd[4]) * Test_Traj_B.x4_data_p + Test_Traj_B.cd[5]) *
      Test_Traj_B.x4_data_p + Test_Traj_B.cd[6]) *
      Test_Traj_B.xabs_data[Test_Traj_B.idx_m];
    z_data[Test_Traj_B.idx_m].im = (((((Test_Traj_B.sn[0] *
      Test_Traj_B.x4_data_p + Test_Traj_B.sn[1]) * Test_Traj_B.x4_data_p +
      Test_Traj_B.sn[2]) * Test_Traj_B.x4_data_p + Test_Traj_B.sn[3]) *
      Test_Traj_B.x4_data_p + Test_Traj_B.sn[4]) * Test_Traj_B.x4_data_p +
      Test_Traj_B.sn[5]) * Test_Traj_B.ibig_data_b / ((((((Test_Traj_B.sd[0] *
      Test_Traj_B.x4_data_p + Test_Traj_B.sd[1]) * Test_Traj_B.x4_data_p +
      Test_Traj_B.sd[2]) * Test_Traj_B.x4_data_p + Test_Traj_B.sd[3]) *
      Test_Traj_B.x4_data_p + Test_Traj_B.sd[4]) * Test_Traj_B.x4_data_p +
      Test_Traj_B.sd[5]) * Test_Traj_B.x4_data_p + Test_Traj_B.sd[6]) *
      Test_Traj_B.xabs_data[Test_Traj_B.idx_m];
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.xabs_size_idx_0;
       Test_Traj_B.i_no++) {
    Test_Traj_B.x_data_nk[Test_Traj_B.i_no] = ((2.5625 <=
      Test_Traj_B.ibig_data[Test_Traj_B.i_no]) &&
      (Test_Traj_B.ibig_data[Test_Traj_B.i_no] <= 1.367076676E+9));
  }

  Test_Traj_B.idx_m = 0;
  Test_Traj_B.b_idx_0 = Test_Traj_B.tmp_size_cag;
  Test_Traj_B.i_no = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.i_no - 1 <= Test_Traj_B.xabs_size_idx_0 - 1))
  {
    if (Test_Traj_B.x_data_nk[Test_Traj_B.i_no - 1]) {
      Test_Traj_B.idx_m++;
      Test_Traj_B.ii_data_o[Test_Traj_B.idx_m - 1] = Test_Traj_B.i_no;
      if (Test_Traj_B.idx_m >= Test_Traj_B.xabs_size_idx_0) {
        exitg1 = true;
      } else {
        Test_Traj_B.i_no++;
      }
    } else {
      Test_Traj_B.i_no++;
    }
  }

  if (Test_Traj_B.tmp_size_cag == 1) {
    if (Test_Traj_B.idx_m == 0) {
      Test_Traj_B.b_idx_0 = 0;
    }
  } else {
    if (1 > Test_Traj_B.idx_m) {
      Test_Traj_B.idx_m = 0;
    }

    Test_Traj_B.b_idx_0 = Test_Traj_B.idx_m;
  }

  Test_Traj_B.tmp_size_jv = Test_Traj_B.b_idx_0;
  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.b_idx_0;
       Test_Traj_B.i_no++) {
    Test_Traj_B.xabs_size_idx_0 = Test_Traj_B.ii_data_o[Test_Traj_B.i_no] - 1;
    Test_Traj_B.ibig_data_b = Test_Traj_B.xabs_data[Test_Traj_B.xabs_size_idx_0]
      * Test_Traj_B.xabs_data[Test_Traj_B.xabs_size_idx_0];
    Test_Traj_B.x4_data_p = 1.0 / (Test_Traj_B.ibig_data_b * 3.1415926535897931);
    Test_Traj_B.x4_data[Test_Traj_B.i_no] = Test_Traj_B.x4_data_p *
      Test_Traj_B.x4_data_p;
    Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].re = Test_Traj_B.ibig_data_b * 0.0;
    Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].im = Test_Traj_B.ibig_data_b *
      1.5707963267948966;
    Test_Traj_B.ibig_data[Test_Traj_B.i_no] =
      Test_Traj_B.ii_data_o[Test_Traj_B.i_no];
    Test_Traj_B.ismall_data[Test_Traj_B.i_no] = Test_Traj_B.x4_data_p;
  }

  Test_Traj_exp_p(Test_Traj_B.tmp_data_h, &Test_Traj_B.tmp_size_jv);
  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.b_idx_0;
       Test_Traj_B.i_no++) {
    Test_Traj_B.x4_data_p = (((((((((fn[0] *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[1]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[2]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[3]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[4]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[5]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[6]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[7]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[8]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fn[9]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] / ((((((((((fd[0] *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[1]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[2]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[3]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[4]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[5]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[6]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[7]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[8]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[9]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + fd[10]) - 1.0;
    Test_Traj_B.x4_data_im = ((((((((((gn[0] *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[1]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[2]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[3]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[4]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[5]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[6]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[7]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[8]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[9]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gn[10]) *
      Test_Traj_B.ismall_data[Test_Traj_B.i_no] / (((((((((((gd[0] *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[1]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[2]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[3]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[4]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[5]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[6]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[7]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[8]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[9]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[10]) *
      Test_Traj_B.x4_data[Test_Traj_B.i_no] + gd[11]);
    Test_Traj_B.ibig_data_b = 0.0 * Test_Traj_B.x4_data_p -
      Test_Traj_B.x4_data_im;
    Test_Traj_B.x4_data_p += 0.0 * Test_Traj_B.x4_data_im;
    Test_Traj_B.x4_data_im = Test_Traj_B.ibig_data_b *
      Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].re - Test_Traj_B.x4_data_p *
      Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].im;
    Test_Traj_B.x4_data_p = Test_Traj_B.ibig_data_b *
      Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].im + Test_Traj_B.x4_data_p *
      Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].re;
    Test_Traj_B.xabs_size_idx_0 = static_cast<int32_T>
      (Test_Traj_B.ibig_data[Test_Traj_B.i_no]) - 1;
    Test_Traj_B.br = Test_Traj_B.xabs_data[Test_Traj_B.xabs_size_idx_0] *
      3.1415926535897931;
    if (Test_Traj_B.x4_data_p == 0.0) {
      Test_Traj_B.ibig_data_b = Test_Traj_B.x4_data_im / Test_Traj_B.br;
      Test_Traj_B.x4_data_p = 0.0;
    } else if (Test_Traj_B.x4_data_im == 0.0) {
      Test_Traj_B.ibig_data_b = 0.0;
      Test_Traj_B.x4_data_p /= Test_Traj_B.br;
    } else {
      Test_Traj_B.ibig_data_b = Test_Traj_B.x4_data_im / Test_Traj_B.br;
      Test_Traj_B.x4_data_p /= Test_Traj_B.br;
    }

    z_data[Test_Traj_B.xabs_size_idx_0].re = 0.5 + Test_Traj_B.ibig_data_b;
    z_data[Test_Traj_B.xabs_size_idx_0].im = 0.5 + Test_Traj_B.x4_data_p;
  }

  Test_Traj_B.xabs_size_idx_0 = Test_Traj_B.tmp_size_cag - 1;
  Test_Traj_B.b_idx_0 = 0;
  Test_Traj_B.idx_m = 0;
  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no <= Test_Traj_B.xabs_size_idx_0;
       Test_Traj_B.i_no++) {
    if (Test_Traj_B.xabs_data[Test_Traj_B.i_no] *
        Test_Traj_B.xabs_data[Test_Traj_B.i_no] > 1.367076676E+9) {
      Test_Traj_B.b_idx_0++;
      Test_Traj_B.bd_data[Test_Traj_B.idx_m] = Test_Traj_B.i_no + 1;
      Test_Traj_B.idx_m++;
    }
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.b_idx_0;
       Test_Traj_B.i_no++) {
    z_data[Test_Traj_B.bd_data[Test_Traj_B.i_no] - 1].re = 0.5;
    z_data[Test_Traj_B.bd_data[Test_Traj_B.i_no] - 1].im = 0.5;
  }

  Test_Traj_B.xabs_size_idx_0 = *x_size - 1;
  Test_Traj_B.b_idx_0 = 0;
  Test_Traj_B.idx_m = 0;
  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no <= Test_Traj_B.xabs_size_idx_0;
       Test_Traj_B.i_no++) {
    if (x_data[Test_Traj_B.i_no] < 0.0) {
      Test_Traj_B.b_idx_0++;
      Test_Traj_B.dd_data[Test_Traj_B.idx_m] = Test_Traj_B.i_no + 1;
      Test_Traj_B.idx_m++;
    }
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.b_idx_0;
       Test_Traj_B.i_no++) {
    Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].re =
      -z_data[Test_Traj_B.dd_data[Test_Traj_B.i_no] - 1].re;
    Test_Traj_B.tmp_data_h[Test_Traj_B.i_no].im =
      -z_data[Test_Traj_B.dd_data[Test_Traj_B.i_no] - 1].im;
  }

  for (Test_Traj_B.i_no = 0; Test_Traj_B.i_no < Test_Traj_B.b_idx_0;
       Test_Traj_B.i_no++) {
    z_data[Test_Traj_B.dd_data[Test_Traj_B.i_no] - 1] =
      Test_Traj_B.tmp_data_h[Test_Traj_B.i_no];
  }
}

static void Test_Traj_fresnel(const creal_T x_data[], const int32_T *x_size,
  creal_T z_data[], int32_T *z_size)
{
  Test_Traj_B.x_size_i = *x_size;
  Test_Traj_B.loop_ub_i = *x_size;
  for (Test_Traj_B.i5 = 0; Test_Traj_B.i5 < Test_Traj_B.loop_ub_i;
       Test_Traj_B.i5++) {
    Test_Traj_B.x_data_n[Test_Traj_B.i5] = x_data[Test_Traj_B.i5].re;
  }

  Test_Traj_fresnelr(Test_Traj_B.x_data_n, &Test_Traj_B.x_size_i, z_data, z_size);
  Test_Traj_B.x_size_g5 = *x_size;
  Test_Traj_B.loop_ub_i = *x_size;
  for (Test_Traj_B.i5 = 0; Test_Traj_B.i5 < Test_Traj_B.loop_ub_i;
       Test_Traj_B.i5++) {
    Test_Traj_B.x_data_n[Test_Traj_B.i5] = -x_data[Test_Traj_B.i5].im;
  }

  Test_Traj_fresnelr(Test_Traj_B.x_data_n, &Test_Traj_B.x_size_g5,
                     Test_Traj_B.tmp_data_fi, &Test_Traj_B.x_size_i);
  Test_Traj_B.loop_ub_i = *z_size;
  for (Test_Traj_B.i5 = 0; Test_Traj_B.i5 < Test_Traj_B.loop_ub_i;
       Test_Traj_B.i5++) {
    Test_Traj_B.z_data_e.re = (0.0 * Test_Traj_B.tmp_data_fi[Test_Traj_B.i5].re
      - (-Test_Traj_B.tmp_data_fi[Test_Traj_B.i5].im)) + z_data[Test_Traj_B.i5].
      re;
    Test_Traj_B.z_data_e.im = (0.0 * -Test_Traj_B.tmp_data_fi[Test_Traj_B.i5].im
      + Test_Traj_B.tmp_data_fi[Test_Traj_B.i5].re) + z_data[Test_Traj_B.i5].im;
    z_data[Test_Traj_B.i5] = Test_Traj_B.z_data_e;
  }
}

static void Test_Traj_power_ph(const creal_T a_data[], const int32_T *a_size,
  creal_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T b_k;
  *y_size = *a_size;
  nx = *a_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    if ((a_data[b_k].im == 0.0) && (a_data[b_k].re >= 0.0)) {
      y_data[b_k].re = Test_Traj_rt_powd_snf(a_data[b_k].re, 3.0);
      y_data[b_k].im = 0.0;
    } else if (a_data[b_k].re == 0.0) {
      y_data[b_k].re = 0.0;
      y_data[b_k].im = -Test_Traj_rt_powd_snf(a_data[b_k].im, 3.0);
    } else {
      if (a_data[b_k].im == 0.0) {
        if (a_data[b_k].re < 0.0) {
          Test_Traj_B.r_m = log(fabs(a_data[b_k].re));
          Test_Traj_B.b_x_im = 3.1415926535897931;
        } else {
          Test_Traj_B.r_m = log(fabs(a_data[b_k].re));
          Test_Traj_B.b_x_im = 0.0;
        }
      } else if ((fabs(a_data[b_k].re) > 8.9884656743115785E+307) || (fabs
                  (a_data[b_k].im) > 8.9884656743115785E+307)) {
        Test_Traj_B.r_m = log(Test_Traj_rt_hypotd_snf(a_data[b_k].re / 2.0,
          a_data[b_k].im / 2.0)) + 0.69314718055994529;
        Test_Traj_B.b_x_im = rt_atan2d_snf(a_data[b_k].im, a_data[b_k].re);
      } else {
        Test_Traj_B.r_m = log(Test_Traj_rt_hypotd_snf(a_data[b_k].re, a_data[b_k]
          .im));
        Test_Traj_B.b_x_im = rt_atan2d_snf(a_data[b_k].im, a_data[b_k].re);
      }

      Test_Traj_B.r_m *= 3.0;
      Test_Traj_B.b_x_im *= 3.0;
      if (Test_Traj_B.b_x_im == 0.0) {
        y_data[b_k].re = exp(Test_Traj_B.r_m);
        y_data[b_k].im = 0.0;
      } else if (rtIsInf(Test_Traj_B.b_x_im) && rtIsInf(Test_Traj_B.r_m) &&
                 (Test_Traj_B.r_m < 0.0)) {
        y_data[b_k].re = 0.0;
        y_data[b_k].im = 0.0;
      } else {
        Test_Traj_B.r_m = exp(Test_Traj_B.r_m / 2.0);
        y_data[b_k].re = Test_Traj_B.r_m * cos(Test_Traj_B.b_x_im) *
          Test_Traj_B.r_m;
        y_data[b_k].im = Test_Traj_B.r_m * sin(Test_Traj_B.b_x_im) *
          Test_Traj_B.r_m;
      }
    }
  }
}

static void Test_Traj_sign_p(real_T x_data[], const int32_T *x_size)
{
  int32_T nx;
  int32_T b_k;
  nx = *x_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    if (x_data[b_k] < 0.0) {
      x_data[b_k] = -1.0;
    } else if (x_data[b_k] > 0.0) {
      x_data[b_k] = 1.0;
    } else if (x_data[b_k] == 0.0) {
      x_data[b_k] = 0.0;
    } else {
      x_data[b_k] = (rtNaN);
    }
  }
}

static void Test_Traj_power_phm(const creal_T a_data[], const int32_T *a_size,
  creal_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T b_k;
  real_T tmp;
  *y_size = *a_size;
  nx = *a_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k].re = a_data[b_k].re * a_data[b_k].re - a_data[b_k].im *
      a_data[b_k].im;
    tmp = a_data[b_k].re * a_data[b_k].im;
    y_data[b_k].im = tmp + tmp;
  }
}

static void Test_Traj_fresnelgLargea1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T rsfa_data[], int32_T *rsfa_size, creal_T
  drsfa_data[], int32_T *drsfa_size)
{
  Test_Traj_B.a1_size = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.a1_data[Test_Traj_B.i4].re = 2.0 * a_data[Test_Traj_B.i4] /
      3.1415926535897931;
    Test_Traj_B.a1_data[Test_Traj_B.i4].im = 0.0;
  }

  Test_Traj_sqrt_phm(Test_Traj_B.a1_data, &Test_Traj_B.a1_size);
  Test_Traj_B.a2_size = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.a2_data[Test_Traj_B.i4].re = 6.2831853071795862 *
      a_data[Test_Traj_B.i4];
    Test_Traj_B.a2_data[Test_Traj_B.i4].im = 0.0;
  }

  Test_Traj_sqrt_phm(Test_Traj_B.a2_data, &Test_Traj_B.a2_size);
  Test_Traj_B.a2_size = *d_size;
  Test_Traj_B.loop_ub_d = *d_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.ar = d_data[Test_Traj_B.i4] - a_data[Test_Traj_B.i4];
    if (Test_Traj_B.a2_data[Test_Traj_B.i4].im == 0.0) {
      Test_Traj_B.re = Test_Traj_B.ar / Test_Traj_B.a2_data[Test_Traj_B.i4].re;
      Test_Traj_B.ar = 0.0;
    } else if (Test_Traj_B.a2_data[Test_Traj_B.i4].re == 0.0) {
      if (Test_Traj_B.ar == 0.0) {
        Test_Traj_B.re = 0.0 / Test_Traj_B.a2_data[Test_Traj_B.i4].im;
        Test_Traj_B.ar = 0.0;
      } else {
        Test_Traj_B.re = 0.0;
        Test_Traj_B.ar = -(Test_Traj_B.ar / Test_Traj_B.a2_data[Test_Traj_B.i4].
                           im);
      }
    } else {
      Test_Traj_B.brm_m = fabs(Test_Traj_B.a2_data[Test_Traj_B.i4].re);
      Test_Traj_B.bim_d = fabs(Test_Traj_B.a2_data[Test_Traj_B.i4].im);
      if (Test_Traj_B.brm_m > Test_Traj_B.bim_d) {
        Test_Traj_B.brm_m = Test_Traj_B.a2_data[Test_Traj_B.i4].im /
          Test_Traj_B.a2_data[Test_Traj_B.i4].re;
        Test_Traj_B.d_n = Test_Traj_B.brm_m * Test_Traj_B.a2_data[Test_Traj_B.i4]
          .im + Test_Traj_B.a2_data[Test_Traj_B.i4].re;
        Test_Traj_B.re = (Test_Traj_B.brm_m * 0.0 + Test_Traj_B.ar) /
          Test_Traj_B.d_n;
        Test_Traj_B.ar = (0.0 - Test_Traj_B.brm_m * Test_Traj_B.ar) /
          Test_Traj_B.d_n;
      } else if (Test_Traj_B.bim_d == Test_Traj_B.brm_m) {
        Test_Traj_B.d_n = Test_Traj_B.a2_data[Test_Traj_B.i4].re > 0.0 ? 0.5 :
          -0.5;
        Test_Traj_B.sgnbi = Test_Traj_B.a2_data[Test_Traj_B.i4].im > 0.0 ? 0.5 :
          -0.5;
        Test_Traj_B.re = (Test_Traj_B.ar * Test_Traj_B.d_n + 0.0 *
                          Test_Traj_B.sgnbi) / Test_Traj_B.brm_m;
        Test_Traj_B.ar = (0.0 * Test_Traj_B.d_n - Test_Traj_B.ar *
                          Test_Traj_B.sgnbi) / Test_Traj_B.brm_m;
      } else {
        Test_Traj_B.brm_m = Test_Traj_B.a2_data[Test_Traj_B.i4].re /
          Test_Traj_B.a2_data[Test_Traj_B.i4].im;
        Test_Traj_B.d_n = Test_Traj_B.brm_m * Test_Traj_B.a2_data[Test_Traj_B.i4]
          .re + Test_Traj_B.a2_data[Test_Traj_B.i4].im;
        Test_Traj_B.re = Test_Traj_B.brm_m * Test_Traj_B.ar / Test_Traj_B.d_n;
        Test_Traj_B.ar = (Test_Traj_B.brm_m * 0.0 - Test_Traj_B.ar) /
          Test_Traj_B.d_n;
      }
    }

    Test_Traj_B.a2_data_p.re = Test_Traj_B.re;
    Test_Traj_B.a2_data_p.im = Test_Traj_B.ar;
    Test_Traj_B.a2_data[Test_Traj_B.i4] = Test_Traj_B.a2_data_p;
  }

  Test_Traj_B.a1_size_b = Test_Traj_B.a1_size;
  Test_Traj_B.loop_ub_d = Test_Traj_B.a1_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.a1_data_e[Test_Traj_B.i4].re =
      Test_Traj_B.a1_data[Test_Traj_B.i4].re +
      Test_Traj_B.a2_data[Test_Traj_B.i4].re;
    Test_Traj_B.a1_data_e[Test_Traj_B.i4].im =
      Test_Traj_B.a1_data[Test_Traj_B.i4].im +
      Test_Traj_B.a2_data[Test_Traj_B.i4].im;
  }

  Test_Traj_fresnel(Test_Traj_B.a1_data_e, &Test_Traj_B.a1_size_b,
                    Test_Traj_B.fa_data, &Test_Traj_B.fa_size);
  Test_Traj_fresnel(Test_Traj_B.a2_data, &Test_Traj_B.a2_size,
                    Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b);
  Test_Traj_B.loop_ub_d = Test_Traj_B.fa_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.fa_data_l.re = Test_Traj_B.fa_data[Test_Traj_B.i4].re -
      Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re;
    Test_Traj_B.fa_data_l.im = Test_Traj_B.fa_data[Test_Traj_B.i4].im -
      Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im;
    Test_Traj_B.fa_data[Test_Traj_B.i4] = Test_Traj_B.fa_data_l;
  }

  Test_Traj_B.s_size_c = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.s_data_o[Test_Traj_B.i4].re = 3.1415926535897931 / (2.0 *
      a_data[Test_Traj_B.i4]);
    Test_Traj_B.s_data_o[Test_Traj_B.i4].im = 0.0;
  }

  Test_Traj_sqrt_phm(Test_Traj_B.s_data_o, &Test_Traj_B.s_size_c);
  Test_Traj_B.ratio_size = *d_size;
  Test_Traj_B.loop_ub_d = *d_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.ratio_data[Test_Traj_B.i4] = d_data[Test_Traj_B.i4] -
      a_data[Test_Traj_B.i4];
  }

  Test_Traj_power_p(Test_Traj_B.ratio_data, &Test_Traj_B.ratio_size,
                    Test_Traj_B.tmp_data_b, &Test_Traj_B.fa_size);
  Test_Traj_B.r_size_m = *c_size;
  Test_Traj_B.loop_ub_d = *c_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.re = c_data[Test_Traj_B.i4] -
      Test_Traj_B.tmp_data_b[Test_Traj_B.i4] / (4.0 * a_data[Test_Traj_B.i4]);
    Test_Traj_B.r_data_b[Test_Traj_B.i4].re = Test_Traj_B.re * 0.0;
    Test_Traj_B.r_data_b[Test_Traj_B.i4].im = Test_Traj_B.re;
  }

  Test_Traj_exp_p(Test_Traj_B.r_data_b, &Test_Traj_B.r_size_m);
  *drsfa_size = Test_Traj_B.s_size_c;
  Test_Traj_B.loop_ub_d = Test_Traj_B.s_size_c;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    drsfa_data[Test_Traj_B.i4].re = Test_Traj_B.s_data_o[Test_Traj_B.i4].re *
      Test_Traj_B.r_data_b[Test_Traj_B.i4].re -
      Test_Traj_B.s_data_o[Test_Traj_B.i4].im *
      Test_Traj_B.r_data_b[Test_Traj_B.i4].im;
    drsfa_data[Test_Traj_B.i4].im = Test_Traj_B.s_data_o[Test_Traj_B.i4].re *
      Test_Traj_B.r_data_b[Test_Traj_B.i4].im +
      Test_Traj_B.s_data_o[Test_Traj_B.i4].im *
      Test_Traj_B.r_data_b[Test_Traj_B.i4].re;
  }

  *rsfa_size = Test_Traj_B.s_size_c;
  Test_Traj_B.loop_ub_d = Test_Traj_B.s_size_c;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    rsfa_data[Test_Traj_B.i4].re = drsfa_data[Test_Traj_B.i4].re *
      Test_Traj_B.fa_data[Test_Traj_B.i4].re - drsfa_data[Test_Traj_B.i4].im *
      Test_Traj_B.fa_data[Test_Traj_B.i4].im;
    rsfa_data[Test_Traj_B.i4].im = drsfa_data[Test_Traj_B.i4].re *
      Test_Traj_B.fa_data[Test_Traj_B.i4].im + drsfa_data[Test_Traj_B.i4].im *
      Test_Traj_B.fa_data[Test_Traj_B.i4].re;
  }

  Test_Traj_B.a1_size_b = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re = 6.2831853071795862 *
      a_data[Test_Traj_B.i4];
    Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im = 0.0;
  }

  Test_Traj_sqrt_phm(Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b);
  Test_Traj_power_ph(Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b,
                     Test_Traj_B.da2_data, &Test_Traj_B.ratio_size);
  Test_Traj_B.a1_size_b = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re = 6.2831853071795862 *
      a_data[Test_Traj_B.i4];
    Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im = 0.0;
  }

  Test_Traj_sqrt_phm(Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b);
  Test_Traj_B.loop_ub_d = *d_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    if (Test_Traj_B.da2_data[Test_Traj_B.i4].im == 0.0) {
      Test_Traj_B.re = -3.1415926535897931 / Test_Traj_B.da2_data[Test_Traj_B.i4]
        .re;
      Test_Traj_B.ar = 0.0;
    } else if (Test_Traj_B.da2_data[Test_Traj_B.i4].re == 0.0) {
      Test_Traj_B.re = 0.0;
      Test_Traj_B.ar = -(-3.1415926535897931 /
                         Test_Traj_B.da2_data[Test_Traj_B.i4].im);
    } else {
      Test_Traj_B.brm_m = fabs(Test_Traj_B.da2_data[Test_Traj_B.i4].re);
      Test_Traj_B.bim_d = fabs(Test_Traj_B.da2_data[Test_Traj_B.i4].im);
      if (Test_Traj_B.brm_m > Test_Traj_B.bim_d) {
        Test_Traj_B.brm_m = Test_Traj_B.da2_data[Test_Traj_B.i4].im /
          Test_Traj_B.da2_data[Test_Traj_B.i4].re;
        Test_Traj_B.d_n = Test_Traj_B.brm_m *
          Test_Traj_B.da2_data[Test_Traj_B.i4].im +
          Test_Traj_B.da2_data[Test_Traj_B.i4].re;
        Test_Traj_B.re = (Test_Traj_B.brm_m * 0.0 + -3.1415926535897931) /
          Test_Traj_B.d_n;
        Test_Traj_B.ar = (0.0 - Test_Traj_B.brm_m * -3.1415926535897931) /
          Test_Traj_B.d_n;
      } else if (Test_Traj_B.bim_d == Test_Traj_B.brm_m) {
        Test_Traj_B.d_n = Test_Traj_B.da2_data[Test_Traj_B.i4].re > 0.0 ? 0.5 :
          -0.5;
        Test_Traj_B.sgnbi = Test_Traj_B.da2_data[Test_Traj_B.i4].im > 0.0 ? 0.5 :
          -0.5;
        Test_Traj_B.re = (-3.1415926535897931 * Test_Traj_B.d_n + 0.0 *
                          Test_Traj_B.sgnbi) / Test_Traj_B.brm_m;
        Test_Traj_B.ar = (0.0 * Test_Traj_B.d_n - -3.1415926535897931 *
                          Test_Traj_B.sgnbi) / Test_Traj_B.brm_m;
      } else {
        Test_Traj_B.brm_m = Test_Traj_B.da2_data[Test_Traj_B.i4].re /
          Test_Traj_B.da2_data[Test_Traj_B.i4].im;
        Test_Traj_B.d_n = Test_Traj_B.brm_m *
          Test_Traj_B.da2_data[Test_Traj_B.i4].re +
          Test_Traj_B.da2_data[Test_Traj_B.i4].im;
        Test_Traj_B.re = Test_Traj_B.brm_m * -3.1415926535897931 /
          Test_Traj_B.d_n;
        Test_Traj_B.ar = (Test_Traj_B.brm_m * 0.0 - -3.1415926535897931) /
          Test_Traj_B.d_n;
      }
    }

    if (Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im == 0.0) {
      Test_Traj_B.bim_d = 1.0 / Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re;
      Test_Traj_B.brm_m = 0.0;
    } else if (Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re == 0.0) {
      Test_Traj_B.bim_d = 0.0;
      Test_Traj_B.brm_m = -(1.0 / Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im);
    } else {
      Test_Traj_B.brm_m = fabs(Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re);
      Test_Traj_B.bim_d = fabs(Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im);
      if (Test_Traj_B.brm_m > Test_Traj_B.bim_d) {
        Test_Traj_B.brm_m = Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im /
          Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re;
        Test_Traj_B.d_n = Test_Traj_B.brm_m *
          Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im +
          Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re;
        Test_Traj_B.bim_d = (Test_Traj_B.brm_m * 0.0 + 1.0) / Test_Traj_B.d_n;
        Test_Traj_B.brm_m = (0.0 - Test_Traj_B.brm_m) / Test_Traj_B.d_n;
      } else if (Test_Traj_B.bim_d == Test_Traj_B.brm_m) {
        Test_Traj_B.d_n = Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re > 0.0 ? 0.5 :
          -0.5;
        Test_Traj_B.sgnbi = Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im > 0.0 ?
          0.5 : -0.5;
        Test_Traj_B.bim_d = (0.0 * Test_Traj_B.sgnbi + Test_Traj_B.d_n) /
          Test_Traj_B.brm_m;
        Test_Traj_B.brm_m = (0.0 * Test_Traj_B.d_n - Test_Traj_B.sgnbi) /
          Test_Traj_B.brm_m;
      } else {
        Test_Traj_B.brm_m = Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re /
          Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im;
        Test_Traj_B.d_n = Test_Traj_B.brm_m *
          Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re +
          Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im;
        Test_Traj_B.bim_d = Test_Traj_B.brm_m / Test_Traj_B.d_n;
        Test_Traj_B.brm_m = (Test_Traj_B.brm_m * 0.0 - 1.0) / Test_Traj_B.d_n;
      }
    }

    Test_Traj_B.da2_data_l.re = Test_Traj_B.ratio_data[Test_Traj_B.i4] *
      Test_Traj_B.re - Test_Traj_B.bim_d;
    Test_Traj_B.da2_data_l.im = Test_Traj_B.ratio_data[Test_Traj_B.i4] *
      Test_Traj_B.ar - Test_Traj_B.brm_m;
    Test_Traj_B.da2_data[Test_Traj_B.i4] = Test_Traj_B.da2_data_l;
  }

  Test_Traj_B.a1_size_b = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re = 3.1415926535897931 / (2.0 *
      a_data[Test_Traj_B.i4]);
    Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im = 0.0;
  }

  Test_Traj_sqrt_phm(Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b);
  Test_Traj_power_ph(Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b,
                     Test_Traj_B.x_data_a, &Test_Traj_B.ratio_size);
  Test_Traj_B.loop_ub_d = Test_Traj_B.ratio_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.x_data_h.re = -Test_Traj_B.x_data_a[Test_Traj_B.i4].re;
    Test_Traj_B.x_data_h.im = -Test_Traj_B.x_data_a[Test_Traj_B.i4].im;
    Test_Traj_B.x_data_a[Test_Traj_B.i4] = Test_Traj_B.x_data_h;
  }

  Test_Traj_B.loop_ub_d = *d_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.ratio_data[Test_Traj_B.i4] /= 4.0 * a_data[Test_Traj_B.i4];
  }

  Test_Traj_B.tmp_size_ocx = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  if (0 <= Test_Traj_B.loop_ub_d - 1) {
    memcpy(&Test_Traj_B.tmp_data_gs[0], &a_data[0], Test_Traj_B.loop_ub_d *
           sizeof(real_T));
  }

  Test_Traj_sign_p(Test_Traj_B.tmp_data_gs, &Test_Traj_B.tmp_size_ocx);
  Test_Traj_B.a1_size_m = Test_Traj_B.a1_size;
  Test_Traj_B.loop_ub_d = Test_Traj_B.a1_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.a1_data_e[Test_Traj_B.i4].re =
      Test_Traj_B.a1_data[Test_Traj_B.i4].re +
      Test_Traj_B.a2_data[Test_Traj_B.i4].re;
    Test_Traj_B.a1_data_e[Test_Traj_B.i4].im =
      Test_Traj_B.a1_data[Test_Traj_B.i4].im +
      Test_Traj_B.a2_data[Test_Traj_B.i4].im;
  }

  Test_Traj_power_phm(Test_Traj_B.a1_data_e, &Test_Traj_B.a1_size_m,
                      Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b);
  Test_Traj_B.loop_ub_d = Test_Traj_B.a1_size_b;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.tmp_data_cg.re = 0.0 * Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re
      - 1.5707963267948966 * Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im;
    Test_Traj_B.tmp_data_cg.im = 0.0 * Test_Traj_B.tmp_data_g[Test_Traj_B.i4].im
      + 1.5707963267948966 * Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re;
    Test_Traj_B.tmp_data_g[Test_Traj_B.i4] = Test_Traj_B.tmp_data_cg;
  }

  Test_Traj_exp_p(Test_Traj_B.tmp_data_g, &Test_Traj_B.a1_size_b);
  Test_Traj_B.a1_size = *a_size;
  Test_Traj_B.loop_ub_d = *a_size;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.a1_data[Test_Traj_B.i4].re = 6.2831853071795862 *
      a_data[Test_Traj_B.i4];
    Test_Traj_B.a1_data[Test_Traj_B.i4].im = 0.0;
  }

  Test_Traj_sqrt_phm(Test_Traj_B.a1_data, &Test_Traj_B.a1_size);
  Test_Traj_power_phm(Test_Traj_B.a2_data, &Test_Traj_B.a2_size,
                      Test_Traj_B.a1_data_e, &Test_Traj_B.a1_size_b);
  Test_Traj_B.loop_ub_d = Test_Traj_B.a1_size_b;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    Test_Traj_B.tmp_data_g0.re = 0.0 * Test_Traj_B.a1_data_e[Test_Traj_B.i4].re
      - 1.5707963267948966 * Test_Traj_B.a1_data_e[Test_Traj_B.i4].im;
    Test_Traj_B.tmp_data_g0.im = 0.0 * Test_Traj_B.a1_data_e[Test_Traj_B.i4].im
      + 1.5707963267948966 * Test_Traj_B.a1_data_e[Test_Traj_B.i4].re;
    Test_Traj_B.a1_data_e[Test_Traj_B.i4] = Test_Traj_B.tmp_data_g0;
  }

  Test_Traj_exp_p(Test_Traj_B.a1_data_e, &Test_Traj_B.a1_size_b);
  Test_Traj_B.loop_ub_d = Test_Traj_B.s_size_c;
  for (Test_Traj_B.i4 = 0; Test_Traj_B.i4 < Test_Traj_B.loop_ub_d;
       Test_Traj_B.i4++) {
    if (Test_Traj_B.a1_data[Test_Traj_B.i4].im == 0.0) {
      Test_Traj_B.re = 1.0 / Test_Traj_B.a1_data[Test_Traj_B.i4].re;
      Test_Traj_B.ar = 0.0;
    } else if (Test_Traj_B.a1_data[Test_Traj_B.i4].re == 0.0) {
      Test_Traj_B.re = 0.0;
      Test_Traj_B.ar = -(1.0 / Test_Traj_B.a1_data[Test_Traj_B.i4].im);
    } else {
      Test_Traj_B.brm_m = fabs(Test_Traj_B.a1_data[Test_Traj_B.i4].re);
      Test_Traj_B.bim_d = fabs(Test_Traj_B.a1_data[Test_Traj_B.i4].im);
      if (Test_Traj_B.brm_m > Test_Traj_B.bim_d) {
        Test_Traj_B.brm_m = Test_Traj_B.a1_data[Test_Traj_B.i4].im /
          Test_Traj_B.a1_data[Test_Traj_B.i4].re;
        Test_Traj_B.d_n = Test_Traj_B.brm_m * Test_Traj_B.a1_data[Test_Traj_B.i4]
          .im + Test_Traj_B.a1_data[Test_Traj_B.i4].re;
        Test_Traj_B.re = (Test_Traj_B.brm_m * 0.0 + 1.0) / Test_Traj_B.d_n;
        Test_Traj_B.ar = (0.0 - Test_Traj_B.brm_m) / Test_Traj_B.d_n;
      } else if (Test_Traj_B.bim_d == Test_Traj_B.brm_m) {
        Test_Traj_B.d_n = Test_Traj_B.a1_data[Test_Traj_B.i4].re > 0.0 ? 0.5 :
          -0.5;
        Test_Traj_B.sgnbi = Test_Traj_B.a1_data[Test_Traj_B.i4].im > 0.0 ? 0.5 :
          -0.5;
        Test_Traj_B.re = (0.0 * Test_Traj_B.sgnbi + Test_Traj_B.d_n) /
          Test_Traj_B.brm_m;
        Test_Traj_B.ar = (0.0 * Test_Traj_B.d_n - Test_Traj_B.sgnbi) /
          Test_Traj_B.brm_m;
      } else {
        Test_Traj_B.brm_m = Test_Traj_B.a1_data[Test_Traj_B.i4].re /
          Test_Traj_B.a1_data[Test_Traj_B.i4].im;
        Test_Traj_B.d_n = Test_Traj_B.brm_m * Test_Traj_B.a1_data[Test_Traj_B.i4]
          .re + Test_Traj_B.a1_data[Test_Traj_B.i4].im;
        Test_Traj_B.re = Test_Traj_B.brm_m / Test_Traj_B.d_n;
        Test_Traj_B.ar = (Test_Traj_B.brm_m * 0.0 - 1.0) / Test_Traj_B.d_n;
      }
    }

    Test_Traj_B.re += Test_Traj_B.da2_data[Test_Traj_B.i4].re;
    Test_Traj_B.ar += Test_Traj_B.da2_data[Test_Traj_B.i4].im;
    Test_Traj_B.bim_d = ((Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re *
                          Test_Traj_B.re - Test_Traj_B.tmp_data_g[Test_Traj_B.i4]
                          .im * Test_Traj_B.ar) -
                         (Test_Traj_B.a1_data_e[Test_Traj_B.i4].re *
                          Test_Traj_B.da2_data[Test_Traj_B.i4].re -
                          Test_Traj_B.a1_data_e[Test_Traj_B.i4].im *
                          Test_Traj_B.da2_data[Test_Traj_B.i4].im)) *
      Test_Traj_B.tmp_data_gs[Test_Traj_B.i4];
    Test_Traj_B.re = ((Test_Traj_B.tmp_data_g[Test_Traj_B.i4].re *
                       Test_Traj_B.ar + Test_Traj_B.tmp_data_g[Test_Traj_B.i4].
                       im * Test_Traj_B.re) -
                      (Test_Traj_B.a1_data_e[Test_Traj_B.i4].re *
                       Test_Traj_B.da2_data[Test_Traj_B.i4].im +
                       Test_Traj_B.a1_data_e[Test_Traj_B.i4].im *
                       Test_Traj_B.da2_data[Test_Traj_B.i4].re)) *
      Test_Traj_B.tmp_data_gs[Test_Traj_B.i4];
    Test_Traj_B.brm_m = 2.0 * Test_Traj_B.ratio_data[Test_Traj_B.i4] + 1.0;
    Test_Traj_B.ar = (Test_Traj_B.r_data_b[Test_Traj_B.i4].re * 0.0 -
                      Test_Traj_B.r_data_b[Test_Traj_B.i4].im * 2.0) *
      Test_Traj_B.ratio_data[Test_Traj_B.i4] * Test_Traj_B.brm_m;
    Test_Traj_B.d_n = (Test_Traj_B.r_data_b[Test_Traj_B.i4].re * 2.0 +
                       Test_Traj_B.r_data_b[Test_Traj_B.i4].im * 0.0) *
      Test_Traj_B.ratio_data[Test_Traj_B.i4] * Test_Traj_B.brm_m;
    if (Test_Traj_B.x_data_a[Test_Traj_B.i4].im == 0.0) {
      Test_Traj_B.sgnbi = Test_Traj_B.x_data_a[Test_Traj_B.i4].re /
        3.1415926535897931;
      Test_Traj_B.x_data_im = 0.0;
    } else if (Test_Traj_B.x_data_a[Test_Traj_B.i4].re == 0.0) {
      Test_Traj_B.sgnbi = 0.0;
      Test_Traj_B.x_data_im = Test_Traj_B.x_data_a[Test_Traj_B.i4].im /
        3.1415926535897931;
    } else {
      Test_Traj_B.sgnbi = Test_Traj_B.x_data_a[Test_Traj_B.i4].re /
        3.1415926535897931;
      Test_Traj_B.x_data_im = Test_Traj_B.x_data_a[Test_Traj_B.i4].im /
        3.1415926535897931;
    }

    Test_Traj_B.brm_m = (Test_Traj_B.s_data_o[Test_Traj_B.i4].re *
                         Test_Traj_B.ar - Test_Traj_B.s_data_o[Test_Traj_B.i4].
                         im * Test_Traj_B.d_n) +
      (Test_Traj_B.r_data_b[Test_Traj_B.i4].re * Test_Traj_B.sgnbi -
       Test_Traj_B.r_data_b[Test_Traj_B.i4].im * Test_Traj_B.x_data_im);
    Test_Traj_B.ar = (Test_Traj_B.s_data_o[Test_Traj_B.i4].re * Test_Traj_B.d_n
                      + Test_Traj_B.s_data_o[Test_Traj_B.i4].im * Test_Traj_B.ar)
      + (Test_Traj_B.r_data_b[Test_Traj_B.i4].re * Test_Traj_B.x_data_im +
         Test_Traj_B.r_data_b[Test_Traj_B.i4].im * Test_Traj_B.sgnbi);
    Test_Traj_B.drsfa_data.re = (drsfa_data[Test_Traj_B.i4].re *
      Test_Traj_B.bim_d - drsfa_data[Test_Traj_B.i4].im * Test_Traj_B.re) +
      (Test_Traj_B.fa_data[Test_Traj_B.i4].re * Test_Traj_B.brm_m -
       Test_Traj_B.fa_data[Test_Traj_B.i4].im * Test_Traj_B.ar);
    Test_Traj_B.drsfa_data.im = (Test_Traj_B.fa_data[Test_Traj_B.i4].re *
      Test_Traj_B.ar + Test_Traj_B.fa_data[Test_Traj_B.i4].im *
      Test_Traj_B.brm_m) + (drsfa_data[Test_Traj_B.i4].re * Test_Traj_B.re +
      drsfa_data[Test_Traj_B.i4].im * Test_Traj_B.bim_d);
    drsfa_data[Test_Traj_B.i4] = Test_Traj_B.drsfa_data;
  }
}

static void Test_Traj_power_phmy(const real_T a_data[], const int32_T *a_size,
  real_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T loop_ub;
  if (0 <= *a_size - 1) {
    memcpy(&Test_Traj_B.c_z1_data[0], &y_data[0], *a_size * sizeof(real_T));
  }

  nx = *a_size - 1;
  for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
    Test_Traj_B.c_z1_data[loop_ub] = Test_Traj_rt_powd_snf(a_data[loop_ub], 3.0);
  }

  *y_size = *a_size;
  if (0 <= *a_size - 1) {
    memcpy(&y_data[0], &Test_Traj_B.c_z1_data[0], *a_size * sizeof(real_T));
  }
}

static void Test_Traj_fresnelgSmalla1(const real_T a_data[], const int32_T
  *a_size, const real_T d_data[], const int32_T *d_size, const real_T c_data[],
  const int32_T *c_size, creal_T z_data[], int32_T *z_size, creal_T dz_data[],
  int32_T *dz_size)
{
  Test_Traj_B.y_size_idx_0 = *a_size;
  Test_Traj_B.loop_ub_h = *a_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.y_data_p[Test_Traj_B.i7] = 2.0 * a_data[Test_Traj_B.i7];
  }

  Test_Traj_B.k_size_j = *d_size;
  Test_Traj_B.loop_ub_h = *d_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.k_data[Test_Traj_B.i7] = d_data[Test_Traj_B.i7] -
      a_data[Test_Traj_B.i7];
  }

  Test_Traj_B.nik_size_idx_0 = *d_size;
  Test_Traj_B.loop_ub_h = *d_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.nik_data[Test_Traj_B.i7].re = Test_Traj_B.k_data[Test_Traj_B.i7]
      * -0.0;
    Test_Traj_B.nik_data[Test_Traj_B.i7].im = -Test_Traj_B.k_data[Test_Traj_B.i7];
  }

  Test_Traj_B.e_size_n = *d_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.nik_size_idx_0;
       Test_Traj_B.i7++) {
    Test_Traj_B.e_data_a[Test_Traj_B.i7].re =
      -Test_Traj_B.nik_data[Test_Traj_B.i7].re;
    Test_Traj_B.e_data_a[Test_Traj_B.i7].im =
      -Test_Traj_B.nik_data[Test_Traj_B.i7].im;
  }

  Test_Traj_exp_p(Test_Traj_B.e_data_a, &Test_Traj_B.e_size_n);
  Test_Traj_power_p(Test_Traj_B.k_data, &Test_Traj_B.k_size_j,
                    Test_Traj_B.tmp_data_p2, &Test_Traj_B.tmp_size_o1);
  Test_Traj_power_phmy(Test_Traj_B.k_data, &Test_Traj_B.k_size_j,
                       Test_Traj_B.tmp_data_i, &Test_Traj_B.tmp_size_o1);
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.y_size_idx_0;
       Test_Traj_B.i7++) {
    Test_Traj_B.A_data_d[Test_Traj_B.i7].re =
      Test_Traj_B.y_data_p[Test_Traj_B.i7] * 0.0;
    Test_Traj_B.A_data_d[Test_Traj_B.i7].im =
      Test_Traj_B.y_data_p[Test_Traj_B.i7] * 0.5;
    Test_Traj_B.ai = 0.5 * Test_Traj_B.y_data_p[Test_Traj_B.i7];
    if (Test_Traj_B.ai == 0.0) {
      Test_Traj_B.a_re = 0.0 * Test_Traj_B.y_data_p[Test_Traj_B.i7] /
        Test_Traj_B.tmp_data_p2[Test_Traj_B.i7];
      Test_Traj_B.ai = 0.0;
    } else if (0.0 * Test_Traj_B.y_data_p[Test_Traj_B.i7] == 0.0) {
      Test_Traj_B.a_re = 0.0;
      Test_Traj_B.ai /= Test_Traj_B.tmp_data_p2[Test_Traj_B.i7];
    } else {
      Test_Traj_B.a_re = (rtNaN);
      Test_Traj_B.ai /= Test_Traj_B.tmp_data_p2[Test_Traj_B.i7];
    }

    Test_Traj_B.m2C_data[Test_Traj_B.i7].re = -2.0 * Test_Traj_B.a_re;
    Test_Traj_B.m2C_data[Test_Traj_B.i7].im = -2.0 * Test_Traj_B.ai;
    Test_Traj_B.ai = -(2.0 * Test_Traj_B.y_data_p[Test_Traj_B.i7] + 2.0 *
                       Test_Traj_B.k_data[Test_Traj_B.i7]);
    if (Test_Traj_B.ai == 0.0) {
      Test_Traj_B.dm2C_data[Test_Traj_B.i7].re = -(0.0 *
        Test_Traj_B.y_data_p[Test_Traj_B.i7] + 0.0 *
        Test_Traj_B.k_data[Test_Traj_B.i7]) /
        Test_Traj_B.tmp_data_i[Test_Traj_B.i7];
      Test_Traj_B.dm2C_data[Test_Traj_B.i7].im = 0.0;
    } else if (-(0.0 * Test_Traj_B.y_data_p[Test_Traj_B.i7] + 0.0 *
                 Test_Traj_B.k_data[Test_Traj_B.i7]) == 0.0) {
      Test_Traj_B.dm2C_data[Test_Traj_B.i7].re = 0.0;
      Test_Traj_B.dm2C_data[Test_Traj_B.i7].im = Test_Traj_B.ai /
        Test_Traj_B.tmp_data_i[Test_Traj_B.i7];
    } else {
      Test_Traj_B.dm2C_data[Test_Traj_B.i7].re = (rtNaN);
      Test_Traj_B.dm2C_data[Test_Traj_B.i7].im = Test_Traj_B.ai /
        Test_Traj_B.tmp_data_i[Test_Traj_B.i7];
    }
  }

  Test_Traj_B.t_size_idx_0 = Test_Traj_B.e_size_n;
  Test_Traj_B.loop_ub_h = Test_Traj_B.e_size_n;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    if (Test_Traj_B.nik_data[Test_Traj_B.i7].im == 0.0) {
      if (0.0 - Test_Traj_B.e_data_a[Test_Traj_B.i7].im == 0.0) {
        Test_Traj_B.t_data[Test_Traj_B.i7].re = (1.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].re) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].re;
        Test_Traj_B.t_data[Test_Traj_B.i7].im = 0.0;
      } else if (1.0 - Test_Traj_B.e_data_a[Test_Traj_B.i7].re == 0.0) {
        Test_Traj_B.t_data[Test_Traj_B.i7].re = 0.0;
        Test_Traj_B.t_data[Test_Traj_B.i7].im = (0.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].im) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].re;
      } else {
        Test_Traj_B.t_data[Test_Traj_B.i7].re = (1.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].re) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].re;
        Test_Traj_B.t_data[Test_Traj_B.i7].im = (0.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].im) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].re;
      }
    } else if (Test_Traj_B.nik_data[Test_Traj_B.i7].re == 0.0) {
      if (1.0 - Test_Traj_B.e_data_a[Test_Traj_B.i7].re == 0.0) {
        Test_Traj_B.t_data[Test_Traj_B.i7].re = (0.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].im) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].im;
        Test_Traj_B.t_data[Test_Traj_B.i7].im = 0.0;
      } else if (0.0 - Test_Traj_B.e_data_a[Test_Traj_B.i7].im == 0.0) {
        Test_Traj_B.t_data[Test_Traj_B.i7].re = 0.0;
        Test_Traj_B.t_data[Test_Traj_B.i7].im = -((1.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].re) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].im);
      } else {
        Test_Traj_B.t_data[Test_Traj_B.i7].re = (0.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].im) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].im;
        Test_Traj_B.t_data[Test_Traj_B.i7].im = -((1.0 -
          Test_Traj_B.e_data_a[Test_Traj_B.i7].re) /
          Test_Traj_B.nik_data[Test_Traj_B.i7].im);
      }
    } else {
      Test_Traj_B.t_data[Test_Traj_B.i7].re = (rtNaN);
      Test_Traj_B.t_data[Test_Traj_B.i7].im = (rtNaN);
    }
  }

  Test_Traj_B.dt_size = *d_size;
  Test_Traj_B.loop_ub_h = *d_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.dt_data[Test_Traj_B.i7].re = Test_Traj_B.k_data[Test_Traj_B.i7] *
      0.0;
    Test_Traj_B.dt_data[Test_Traj_B.i7].im = Test_Traj_B.k_data[Test_Traj_B.i7];
  }

  Test_Traj_exp_p(Test_Traj_B.dt_data, &Test_Traj_B.dt_size);
  Test_Traj_B.dp_size = *d_size;
  Test_Traj_B.loop_ub_h = *d_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.dp_data[Test_Traj_B.i7].re = Test_Traj_B.k_data[Test_Traj_B.i7] *
      0.0;
    Test_Traj_B.dp_data[Test_Traj_B.i7].im = Test_Traj_B.k_data[Test_Traj_B.i7];
  }

  Test_Traj_exp_p(Test_Traj_B.dp_data, &Test_Traj_B.dp_size);
  Test_Traj_power_p(Test_Traj_B.k_data, &Test_Traj_B.k_size_j,
                    Test_Traj_B.tmp_data_p2, &Test_Traj_B.tmp_size_o1);
  Test_Traj_B.loop_ub_h = *d_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.a_re = -(((Test_Traj_B.dp_data[Test_Traj_B.i7].re - 1.0) * 0.0 -
                          Test_Traj_B.dp_data[Test_Traj_B.i7].im) +
                         Test_Traj_B.k_data[Test_Traj_B.i7] *
                         Test_Traj_B.dt_data[Test_Traj_B.i7].re);
    Test_Traj_B.ai = -((0.0 * Test_Traj_B.dp_data[Test_Traj_B.i7].im +
                        (Test_Traj_B.dp_data[Test_Traj_B.i7].re - 1.0)) +
                       Test_Traj_B.k_data[Test_Traj_B.i7] *
                       Test_Traj_B.dt_data[Test_Traj_B.i7].im);
    if (Test_Traj_B.ai == 0.0) {
      Test_Traj_B.dt_data_n.re = Test_Traj_B.a_re /
        Test_Traj_B.tmp_data_p2[Test_Traj_B.i7];
      Test_Traj_B.dt_data_n.im = 0.0;
    } else if (Test_Traj_B.a_re == 0.0) {
      Test_Traj_B.dt_data_n.re = 0.0;
      Test_Traj_B.dt_data_n.im = Test_Traj_B.ai /
        Test_Traj_B.tmp_data_p2[Test_Traj_B.i7];
    } else {
      Test_Traj_B.dt_data_n.re = Test_Traj_B.a_re /
        Test_Traj_B.tmp_data_p2[Test_Traj_B.i7];
      Test_Traj_B.dt_data_n.im = Test_Traj_B.ai /
        Test_Traj_B.tmp_data_p2[Test_Traj_B.i7];
    }

    Test_Traj_B.dt_data[Test_Traj_B.i7] = Test_Traj_B.dt_data_n;
  }

  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.nik_size_idx_0;
       Test_Traj_B.i7++) {
    if (Test_Traj_B.nik_data[Test_Traj_B.i7].im == 0.0) {
      Test_Traj_B.ai = Test_Traj_B.nik_data[Test_Traj_B.i7].re / 2.0;
      Test_Traj_B.a_re = 0.0;
    } else if (Test_Traj_B.nik_data[Test_Traj_B.i7].re == 0.0) {
      Test_Traj_B.ai = 0.0;
      Test_Traj_B.a_re = Test_Traj_B.nik_data[Test_Traj_B.i7].im / 2.0;
    } else {
      Test_Traj_B.ai = (rtNaN);
      Test_Traj_B.a_re = Test_Traj_B.nik_data[Test_Traj_B.i7].im / 2.0;
    }

    Test_Traj_B.nik_data_f.re = Test_Traj_B.ai;
    Test_Traj_B.nik_data_f.im = Test_Traj_B.a_re;
    Test_Traj_B.nik_data[Test_Traj_B.i7] = Test_Traj_B.nik_data_f;
  }

  Test_Traj_B.loop_ub_h = Test_Traj_B.e_size_n;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.e_data_n.re = -Test_Traj_B.e_data_a[Test_Traj_B.i7].re;
    Test_Traj_B.e_data_n.im = -Test_Traj_B.e_data_a[Test_Traj_B.i7].im;
    Test_Traj_B.e_data_a[Test_Traj_B.i7] = Test_Traj_B.e_data_n;
  }

  Test_Traj_B.dp_size = *d_size;
  Test_Traj_B.loop_ub_h = *d_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.dp_data[Test_Traj_B.i7].re = Test_Traj_B.k_data[Test_Traj_B.i7] *
      0.0;
    Test_Traj_B.dp_data[Test_Traj_B.i7].im = Test_Traj_B.k_data[Test_Traj_B.i7];
  }

  Test_Traj_exp_p(Test_Traj_B.dp_data, &Test_Traj_B.dp_size);
  Test_Traj_B.loop_ub_h = Test_Traj_B.dp_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.dp_data_e.re = 0.0 * Test_Traj_B.dp_data[Test_Traj_B.i7].re -
      Test_Traj_B.dp_data[Test_Traj_B.i7].im;
    Test_Traj_B.dp_data_e.im = 0.0 * Test_Traj_B.dp_data[Test_Traj_B.i7].im +
      Test_Traj_B.dp_data[Test_Traj_B.i7].re;
    Test_Traj_B.dp_data[Test_Traj_B.i7] = Test_Traj_B.dp_data_e;
  }

  *z_size = Test_Traj_B.e_size_n;
  if (0 <= Test_Traj_B.t_size_idx_0 - 1) {
    memcpy(&z_data[0], &Test_Traj_B.t_data[0], Test_Traj_B.t_size_idx_0 * sizeof
           (creal_T));
  }

  *dz_size = *d_size;
  Test_Traj_B.loop_ub_h = *d_size;
  if (0 <= Test_Traj_B.loop_ub_h - 1) {
    memcpy(&dz_data[0], &Test_Traj_B.dt_data[0], Test_Traj_B.loop_ub_h * sizeof
           (creal_T));
  }

  for (Test_Traj_B.loop_ub_h = 0; Test_Traj_B.loop_ub_h < 20;
       Test_Traj_B.loop_ub_h++) {
    Test_Traj_B.z_size_ac = *z_size;
    Test_Traj_B.e_size_d = Test_Traj_B.e_size_n;
    Test_Traj_B.i7 = ((Test_Traj_B.loop_ub_h + 1) << 1) - 1;
    Test_Traj_B.re_o = Test_Traj_B.loop_ub_h + 1;
    for (Test_Traj_B.nik_size_idx_0 = 0; Test_Traj_B.nik_size_idx_0 <
         Test_Traj_B.t_size_idx_0; Test_Traj_B.nik_size_idx_0++) {
      Test_Traj_B.ai = static_cast<real_T>(Test_Traj_B.re_o) +
        Test_Traj_B.nik_data[Test_Traj_B.nik_size_idx_0].re;
      Test_Traj_B.t_data_a.re = (Test_Traj_B.ai *
        Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0].re -
        Test_Traj_B.nik_data[Test_Traj_B.nik_size_idx_0].im *
        Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0].im) +
        static_cast<real_T>(Test_Traj_B.i7) *
        Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].re;
      Test_Traj_B.t_data_a.im = (Test_Traj_B.ai *
        Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0].im +
        Test_Traj_B.nik_data[Test_Traj_B.nik_size_idx_0].im *
        Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0].re) +
        static_cast<real_T>(Test_Traj_B.i7) *
        Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].im;
      Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0] = Test_Traj_B.t_data_a;
    }

    Test_Traj_B.re_o = Test_Traj_B.loop_ub_h + 1;
    for (Test_Traj_B.nik_size_idx_0 = 0; Test_Traj_B.nik_size_idx_0 <
         Test_Traj_B.y_size_idx_0; Test_Traj_B.nik_size_idx_0++) {
      Test_Traj_B.ai = static_cast<real_T>(Test_Traj_B.re_o) +
        Test_Traj_B.nik_data[Test_Traj_B.nik_size_idx_0].re;
      Test_Traj_B.re_i = ((0.0 * Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0]
                           .re - 0.5 *
                           Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0].im)
                          + static_cast<real_T>(Test_Traj_B.i7) *
                          Test_Traj_B.dt_data[Test_Traj_B.nik_size_idx_0].re) +
        (Test_Traj_B.dp_data[Test_Traj_B.nik_size_idx_0].re * Test_Traj_B.ai -
         Test_Traj_B.dp_data[Test_Traj_B.nik_size_idx_0].im *
         Test_Traj_B.nik_data[Test_Traj_B.nik_size_idx_0].im);
      Test_Traj_B.a_re = ((0.0 * Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0]
                           .im + 0.5 *
                           Test_Traj_B.e_data_a[Test_Traj_B.nik_size_idx_0].re)
                          + static_cast<real_T>(Test_Traj_B.i7) *
                          Test_Traj_B.dt_data[Test_Traj_B.nik_size_idx_0].im) +
        (Test_Traj_B.dp_data[Test_Traj_B.nik_size_idx_0].re *
         Test_Traj_B.nik_data[Test_Traj_B.nik_size_idx_0].im +
         Test_Traj_B.dp_data[Test_Traj_B.nik_size_idx_0].im * Test_Traj_B.ai);
      Test_Traj_B.dt_data_i.re =
        (Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0].re * Test_Traj_B.re_i
         - Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0].im *
         Test_Traj_B.a_re) + (Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].re *
        Test_Traj_B.dm2C_data[Test_Traj_B.nik_size_idx_0].re -
        Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].im *
        Test_Traj_B.dm2C_data[Test_Traj_B.nik_size_idx_0].im);
      Test_Traj_B.dt_data_i.im =
        (Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0].re * Test_Traj_B.a_re
         + Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0].im *
         Test_Traj_B.re_i) + (Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].re *
        Test_Traj_B.dm2C_data[Test_Traj_B.nik_size_idx_0].im +
        Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].im *
        Test_Traj_B.dm2C_data[Test_Traj_B.nik_size_idx_0].re);
      Test_Traj_B.t_data_n.re = Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0]
        .re * Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].re -
        Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0].im *
        Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].im;
      Test_Traj_B.t_data_n.im = Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0]
        .re * Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].im +
        Test_Traj_B.m2C_data[Test_Traj_B.nik_size_idx_0].im *
        Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0].re;
      Test_Traj_B.dt_data[Test_Traj_B.nik_size_idx_0] = Test_Traj_B.dt_data_i;
      Test_Traj_B.t_data[Test_Traj_B.nik_size_idx_0] = Test_Traj_B.t_data_n;
    }

    for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < *dz_size; Test_Traj_B.i7++) {
      Test_Traj_B.dz_data_f.re = dz_data[Test_Traj_B.i7].re +
        Test_Traj_B.dt_data[Test_Traj_B.i7].re;
      Test_Traj_B.dz_data_f.im = dz_data[Test_Traj_B.i7].im +
        Test_Traj_B.dt_data[Test_Traj_B.i7].im;
      dz_data[Test_Traj_B.i7] = Test_Traj_B.dz_data_f;
    }

    for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.z_size_ac;
         Test_Traj_B.i7++) {
      Test_Traj_B.z_data_i.re = z_data[Test_Traj_B.i7].re +
        Test_Traj_B.t_data[Test_Traj_B.i7].re;
      Test_Traj_B.z_data_i.im = z_data[Test_Traj_B.i7].im +
        Test_Traj_B.t_data[Test_Traj_B.i7].im;
      z_data[Test_Traj_B.i7] = Test_Traj_B.z_data_i;
    }

    Test_Traj_B.re_o = Test_Traj_B.loop_ub_h + 2;
    for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.e_size_d;
         Test_Traj_B.i7++) {
      Test_Traj_B.a_re = (Test_Traj_B.e_data_a[Test_Traj_B.i7].re * 0.0 -
                          Test_Traj_B.e_data_a[Test_Traj_B.i7].im) +
        (Test_Traj_B.A_data_d[Test_Traj_B.i7].re *
         Test_Traj_B.dp_data[Test_Traj_B.i7].re -
         Test_Traj_B.A_data_d[Test_Traj_B.i7].im *
         Test_Traj_B.dp_data[Test_Traj_B.i7].im);
      Test_Traj_B.ai = (Test_Traj_B.e_data_a[Test_Traj_B.i7].im * 0.0 +
                        Test_Traj_B.e_data_a[Test_Traj_B.i7].re) +
        (Test_Traj_B.A_data_d[Test_Traj_B.i7].re *
         Test_Traj_B.dp_data[Test_Traj_B.i7].im +
         Test_Traj_B.A_data_d[Test_Traj_B.i7].im *
         Test_Traj_B.dp_data[Test_Traj_B.i7].re);
      if (Test_Traj_B.ai == 0.0) {
        Test_Traj_B.dp_data_b.re = Test_Traj_B.a_re / static_cast<real_T>
          (Test_Traj_B.re_o);
        Test_Traj_B.dp_data_b.im = 0.0;
      } else if (Test_Traj_B.a_re == 0.0) {
        Test_Traj_B.dp_data_b.re = 0.0;
        Test_Traj_B.dp_data_b.im = Test_Traj_B.ai / static_cast<real_T>
          (Test_Traj_B.re_o);
      } else {
        Test_Traj_B.dp_data_b.re = Test_Traj_B.a_re / static_cast<real_T>
          (Test_Traj_B.re_o);
        Test_Traj_B.dp_data_b.im = Test_Traj_B.ai / static_cast<real_T>
          (Test_Traj_B.re_o);
      }

      Test_Traj_B.dp_data[Test_Traj_B.i7] = Test_Traj_B.dp_data_b;
    }

    Test_Traj_B.re_o = Test_Traj_B.loop_ub_h + 2;
    for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.e_size_d;
         Test_Traj_B.i7++) {
      Test_Traj_B.ai = Test_Traj_B.e_data_a[Test_Traj_B.i7].re *
        Test_Traj_B.A_data_d[Test_Traj_B.i7].re -
        Test_Traj_B.e_data_a[Test_Traj_B.i7].im *
        Test_Traj_B.A_data_d[Test_Traj_B.i7].im;
      Test_Traj_B.a_re = Test_Traj_B.e_data_a[Test_Traj_B.i7].re *
        Test_Traj_B.A_data_d[Test_Traj_B.i7].im +
        Test_Traj_B.e_data_a[Test_Traj_B.i7].im *
        Test_Traj_B.A_data_d[Test_Traj_B.i7].re;
      if (Test_Traj_B.a_re == 0.0) {
        Test_Traj_B.e_data_da.re = Test_Traj_B.ai / static_cast<real_T>
          (Test_Traj_B.re_o);
        Test_Traj_B.e_data_da.im = 0.0;
      } else if (Test_Traj_B.ai == 0.0) {
        Test_Traj_B.e_data_da.re = 0.0;
        Test_Traj_B.e_data_da.im = Test_Traj_B.a_re / static_cast<real_T>
          (Test_Traj_B.re_o);
      } else {
        Test_Traj_B.e_data_da.re = Test_Traj_B.ai / static_cast<real_T>
          (Test_Traj_B.re_o);
        Test_Traj_B.e_data_da.im = Test_Traj_B.a_re / static_cast<real_T>
          (Test_Traj_B.re_o);
      }

      Test_Traj_B.e_data_a[Test_Traj_B.i7] = Test_Traj_B.e_data_da;
    }

    Test_Traj_B.t_size_idx_0 = Test_Traj_B.y_size_idx_0;
  }

  Test_Traj_B.dp_size = *c_size;
  Test_Traj_B.loop_ub_h = *c_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.dp_data[Test_Traj_B.i7].re = c_data[Test_Traj_B.i7] * 0.0;
    Test_Traj_B.dp_data[Test_Traj_B.i7].im = c_data[Test_Traj_B.i7];
  }

  Test_Traj_exp_p(Test_Traj_B.dp_data, &Test_Traj_B.dp_size);
  Test_Traj_B.loop_ub_h = *z_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.z_data_by.re = z_data[Test_Traj_B.i7].re *
      Test_Traj_B.dp_data[Test_Traj_B.i7].re - z_data[Test_Traj_B.i7].im *
      Test_Traj_B.dp_data[Test_Traj_B.i7].im;
    Test_Traj_B.z_data_by.im = z_data[Test_Traj_B.i7].re *
      Test_Traj_B.dp_data[Test_Traj_B.i7].im + z_data[Test_Traj_B.i7].im *
      Test_Traj_B.dp_data[Test_Traj_B.i7].re;
    z_data[Test_Traj_B.i7] = Test_Traj_B.z_data_by;
  }

  Test_Traj_B.dp_size = *c_size;
  Test_Traj_B.loop_ub_h = *c_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.dp_data[Test_Traj_B.i7].re = c_data[Test_Traj_B.i7] * 0.0;
    Test_Traj_B.dp_data[Test_Traj_B.i7].im = c_data[Test_Traj_B.i7];
  }

  Test_Traj_exp_p(Test_Traj_B.dp_data, &Test_Traj_B.dp_size);
  Test_Traj_B.loop_ub_h = *dz_size;
  for (Test_Traj_B.i7 = 0; Test_Traj_B.i7 < Test_Traj_B.loop_ub_h;
       Test_Traj_B.i7++) {
    Test_Traj_B.dz_data_k.re = dz_data[Test_Traj_B.i7].re *
      Test_Traj_B.dp_data[Test_Traj_B.i7].re - dz_data[Test_Traj_B.i7].im *
      Test_Traj_B.dp_data[Test_Traj_B.i7].im;
    Test_Traj_B.dz_data_k.im = dz_data[Test_Traj_B.i7].re *
      Test_Traj_B.dp_data[Test_Traj_B.i7].im + dz_data[Test_Traj_B.i7].im *
      Test_Traj_B.dp_data[Test_Traj_B.i7].re;
    dz_data[Test_Traj_B.i7] = Test_Traj_B.dz_data_k;
  }
}

static void Test_Traj_fresnelg1_p(const real_T a_data[], const int32_T *a_size,
  const real_T d_data[], const int32_T *d_size, const real_T c_data[], creal_T
  z_data[], int32_T *z_size, creal_T dz_data[], int32_T *dz_size)
{
  boolean_T exitg1;
  Test_Traj_B.h_idx_0 = *a_size;
  *z_size = *a_size;
  *dz_size = *a_size;
  if (0 <= Test_Traj_B.h_idx_0 - 1) {
    memset(&z_data[0], 0, Test_Traj_B.h_idx_0 * sizeof(creal_T));
    memset(&dz_data[0], 0, Test_Traj_B.h_idx_0 * sizeof(creal_T));
  }

  Test_Traj_B.d_size = *d_size;
  Test_Traj_B.idx_d = *d_size;
  for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
       Test_Traj_B.h_idx_0++) {
    Test_Traj_B.d_data_e[Test_Traj_B.h_idx_0] = d_data[Test_Traj_B.h_idx_0] -
      a_data[Test_Traj_B.h_idx_0];
  }

  Test_Traj_power_p(Test_Traj_B.d_data_e, &Test_Traj_B.d_size,
                    Test_Traj_B.tmp_data_pc, &Test_Traj_B.tmp_size_k);
  Test_Traj_B.tmp_size_j = Test_Traj_B.tmp_size_k;
  Test_Traj_B.idx_d = Test_Traj_B.tmp_size_k;
  for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
       Test_Traj_B.h_idx_0++) {
    Test_Traj_B.d_data_e[Test_Traj_B.h_idx_0] =
      Test_Traj_B.tmp_data_pc[Test_Traj_B.h_idx_0] / (4.0 *
      a_data[Test_Traj_B.h_idx_0]);
  }

  Test_Traj_abs_p(Test_Traj_B.d_data_e, &Test_Traj_B.tmp_size_j,
                  Test_Traj_B.tmp_data_pc, &Test_Traj_B.tmp_size_k);
  Test_Traj_B.criteria_size_idx_0 = Test_Traj_B.tmp_size_k;
  Test_Traj_B.idx_d = Test_Traj_B.tmp_size_k;
  for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
       Test_Traj_B.h_idx_0++) {
    Test_Traj_B.criteria_data[Test_Traj_B.h_idx_0] =
      (Test_Traj_B.tmp_data_pc[Test_Traj_B.h_idx_0] < 628.31853071795865);
  }

  Test_Traj_B.idx_d = 0;
  Test_Traj_B.ii_size_idx_0 = Test_Traj_B.tmp_size_k;
  Test_Traj_B.h_idx_0 = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.h_idx_0 - 1 <=
                       Test_Traj_B.criteria_size_idx_0 - 1)) {
    if (Test_Traj_B.criteria_data[Test_Traj_B.h_idx_0 - 1]) {
      Test_Traj_B.idx_d++;
      Test_Traj_B.ii_data[Test_Traj_B.idx_d - 1] = Test_Traj_B.h_idx_0;
      if (Test_Traj_B.idx_d >= Test_Traj_B.criteria_size_idx_0) {
        exitg1 = true;
      } else {
        Test_Traj_B.h_idx_0++;
      }
    } else {
      Test_Traj_B.h_idx_0++;
    }
  }

  if (Test_Traj_B.tmp_size_k == 1) {
    if (Test_Traj_B.idx_d == 0) {
      Test_Traj_B.ii_size_idx_0 = 0;
    }
  } else {
    if (1 > Test_Traj_B.idx_d) {
      Test_Traj_B.idx_d = 0;
    }

    Test_Traj_B.ii_size_idx_0 = Test_Traj_B.idx_d;
  }

  Test_Traj_B.ilarge_size_idx_0 = Test_Traj_B.ii_size_idx_0;
  if (0 <= Test_Traj_B.ii_size_idx_0 - 1) {
    memcpy(&Test_Traj_B.ilarge_data[0], &Test_Traj_B.ii_data[0],
           Test_Traj_B.ii_size_idx_0 * sizeof(int32_T));
  }

  for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 <
       Test_Traj_B.criteria_size_idx_0; Test_Traj_B.h_idx_0++) {
    Test_Traj_B.criteria_data[Test_Traj_B.h_idx_0] =
      !Test_Traj_B.criteria_data[Test_Traj_B.h_idx_0];
  }

  Test_Traj_B.idx_d = 0;
  Test_Traj_B.ii_size_idx_0 = Test_Traj_B.tmp_size_k;
  Test_Traj_B.h_idx_0 = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.h_idx_0 - 1 <=
                       Test_Traj_B.criteria_size_idx_0 - 1)) {
    if (Test_Traj_B.criteria_data[Test_Traj_B.h_idx_0 - 1]) {
      Test_Traj_B.idx_d++;
      Test_Traj_B.ii_data[Test_Traj_B.idx_d - 1] = Test_Traj_B.h_idx_0;
      if (Test_Traj_B.idx_d >= Test_Traj_B.criteria_size_idx_0) {
        exitg1 = true;
      } else {
        Test_Traj_B.h_idx_0++;
      }
    } else {
      Test_Traj_B.h_idx_0++;
    }
  }

  if (Test_Traj_B.tmp_size_k == 1) {
    if (Test_Traj_B.idx_d == 0) {
      Test_Traj_B.ii_size_idx_0 = 0;
    }
  } else {
    if (1 > Test_Traj_B.idx_d) {
      Test_Traj_B.idx_d = 0;
    }

    Test_Traj_B.ii_size_idx_0 = Test_Traj_B.idx_d;
  }

  Test_Traj_B.ismall_size_idx_0 = Test_Traj_B.ii_size_idx_0;
  if (0 <= Test_Traj_B.ii_size_idx_0 - 1) {
    memcpy(&Test_Traj_B.ismall_data_b[0], &Test_Traj_B.ii_data[0],
           Test_Traj_B.ii_size_idx_0 * sizeof(int32_T));
  }

  Test_Traj_B.criteria_size_idx_0 = *d_size;
  Test_Traj_B.idx_d = *d_size;
  for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
       Test_Traj_B.h_idx_0++) {
    Test_Traj_B.criteria_data[Test_Traj_B.h_idx_0] =
      ((d_data[Test_Traj_B.h_idx_0] == 0.0) && (a_data[Test_Traj_B.h_idx_0] ==
        0.0));
  }

  Test_Traj_B.idx_d = 0;
  Test_Traj_B.ii_size_idx_0 = *d_size;
  Test_Traj_B.h_idx_0 = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.h_idx_0 - 1 <=
                       Test_Traj_B.criteria_size_idx_0 - 1)) {
    if (Test_Traj_B.criteria_data[Test_Traj_B.h_idx_0 - 1]) {
      Test_Traj_B.idx_d++;
      Test_Traj_B.ii_data[Test_Traj_B.idx_d - 1] = Test_Traj_B.h_idx_0;
      if (Test_Traj_B.idx_d >= Test_Traj_B.criteria_size_idx_0) {
        exitg1 = true;
      } else {
        Test_Traj_B.h_idx_0++;
      }
    } else {
      Test_Traj_B.h_idx_0++;
    }
  }

  if (*d_size == 1) {
    if (Test_Traj_B.idx_d == 0) {
      Test_Traj_B.ii_size_idx_0 = 0;
    }
  } else {
    if (1 > Test_Traj_B.idx_d) {
      Test_Traj_B.idx_d = 0;
    }

    Test_Traj_B.ii_size_idx_0 = Test_Traj_B.idx_d;
  }

  if (0 <= Test_Traj_B.ii_size_idx_0 - 1) {
    memcpy(&Test_Traj_B.izero_data[0], &Test_Traj_B.ii_data[0],
           Test_Traj_B.ii_size_idx_0 * sizeof(int32_T));
  }

  if (Test_Traj_B.ilarge_size_idx_0 != 0) {
    Test_Traj_B.a_size_d = Test_Traj_B.ilarge_size_idx_0;
    Test_Traj_B.d_size_f = Test_Traj_B.ilarge_size_idx_0;
    Test_Traj_B.c_size_a = Test_Traj_B.ilarge_size_idx_0;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 <
         Test_Traj_B.ilarge_size_idx_0; Test_Traj_B.h_idx_0++) {
      Test_Traj_B.a_data_d[Test_Traj_B.h_idx_0] =
        a_data[Test_Traj_B.ilarge_data[Test_Traj_B.h_idx_0] - 1];
      Test_Traj_B.d_data_e[Test_Traj_B.h_idx_0] =
        d_data[Test_Traj_B.ilarge_data[Test_Traj_B.h_idx_0] - 1];
      Test_Traj_B.c_data_i[Test_Traj_B.h_idx_0] =
        c_data[Test_Traj_B.ilarge_data[Test_Traj_B.h_idx_0] - 1];
    }

    Test_Traj_fresnelgLargea1(Test_Traj_B.a_data_d, &Test_Traj_B.a_size_d,
      Test_Traj_B.d_data_e, &Test_Traj_B.d_size_f, Test_Traj_B.c_data_i,
      &Test_Traj_B.c_size_a, Test_Traj_B.b_data_e, &Test_Traj_B.b_size_o,
      Test_Traj_B.e_data, &Test_Traj_B.d_size);
    Test_Traj_B.idx_d = Test_Traj_B.b_size_o;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
         Test_Traj_B.h_idx_0++) {
      z_data[Test_Traj_B.ilarge_data[Test_Traj_B.h_idx_0] - 1] =
        Test_Traj_B.b_data_e[Test_Traj_B.h_idx_0];
    }

    Test_Traj_B.idx_d = Test_Traj_B.d_size;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
         Test_Traj_B.h_idx_0++) {
      dz_data[Test_Traj_B.ilarge_data[Test_Traj_B.h_idx_0] - 1] =
        Test_Traj_B.e_data[Test_Traj_B.h_idx_0];
    }
  }

  if (Test_Traj_B.ismall_size_idx_0 != 0) {
    Test_Traj_B.a_size_e = Test_Traj_B.ismall_size_idx_0;
    Test_Traj_B.d_size_n = Test_Traj_B.ismall_size_idx_0;
    Test_Traj_B.c_size_ob = Test_Traj_B.ismall_size_idx_0;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 <
         Test_Traj_B.ismall_size_idx_0; Test_Traj_B.h_idx_0++) {
      Test_Traj_B.a_data_d[Test_Traj_B.h_idx_0] =
        a_data[Test_Traj_B.ismall_data_b[Test_Traj_B.h_idx_0] - 1];
      Test_Traj_B.d_data_e[Test_Traj_B.h_idx_0] =
        d_data[Test_Traj_B.ismall_data_b[Test_Traj_B.h_idx_0] - 1];
      Test_Traj_B.c_data_i[Test_Traj_B.h_idx_0] =
        c_data[Test_Traj_B.ismall_data_b[Test_Traj_B.h_idx_0] - 1];
    }

    Test_Traj_fresnelgSmalla1(Test_Traj_B.a_data_d, &Test_Traj_B.a_size_e,
      Test_Traj_B.d_data_e, &Test_Traj_B.d_size_n, Test_Traj_B.c_data_i,
      &Test_Traj_B.c_size_ob, Test_Traj_B.b_data_e, &Test_Traj_B.b_size_o,
      Test_Traj_B.e_data, &Test_Traj_B.d_size);
    Test_Traj_B.idx_d = Test_Traj_B.b_size_o;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
         Test_Traj_B.h_idx_0++) {
      z_data[Test_Traj_B.ismall_data_b[Test_Traj_B.h_idx_0] - 1] =
        Test_Traj_B.b_data_e[Test_Traj_B.h_idx_0];
    }

    Test_Traj_B.idx_d = Test_Traj_B.d_size;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
         Test_Traj_B.h_idx_0++) {
      dz_data[Test_Traj_B.ismall_data_b[Test_Traj_B.h_idx_0] - 1] =
        Test_Traj_B.e_data[Test_Traj_B.h_idx_0];
    }
  }

  if (Test_Traj_B.ii_size_idx_0 != 0) {
    if (0 <= Test_Traj_B.ii_size_idx_0 - 1) {
      memcpy(&Test_Traj_B.ii_data[0], &Test_Traj_B.izero_data[0],
             Test_Traj_B.ii_size_idx_0 * sizeof(int32_T));
    }

    Test_Traj_B.b_size_o = Test_Traj_B.ii_size_idx_0;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 <
         Test_Traj_B.ii_size_idx_0; Test_Traj_B.h_idx_0++) {
      Test_Traj_B.d2 = c_data[Test_Traj_B.ii_data[Test_Traj_B.h_idx_0] - 1];
      Test_Traj_B.b_data_e[Test_Traj_B.h_idx_0].re = Test_Traj_B.d2 * 0.0;
      Test_Traj_B.b_data_e[Test_Traj_B.h_idx_0].im = Test_Traj_B.d2;
    }

    Test_Traj_exp_p(Test_Traj_B.b_data_e, &Test_Traj_B.b_size_o);
    Test_Traj_B.idx_d = Test_Traj_B.b_size_o;
    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 < Test_Traj_B.idx_d;
         Test_Traj_B.h_idx_0++) {
      z_data[Test_Traj_B.izero_data[Test_Traj_B.h_idx_0] - 1] =
        Test_Traj_B.b_data_e[Test_Traj_B.h_idx_0];
    }

    for (Test_Traj_B.h_idx_0 = 0; Test_Traj_B.h_idx_0 <
         Test_Traj_B.ii_size_idx_0; Test_Traj_B.h_idx_0++) {
      dz_data[Test_Traj_B.ii_data[Test_Traj_B.h_idx_0] - 1].re = 0.0;
      dz_data[Test_Traj_B.ii_data[Test_Traj_B.h_idx_0] - 1].im = 0.0;
    }
  }
}

static void Test_Traj_abs_ph(const creal_T x_data[], const int32_T *x_size,
  real_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T b_k;
  nx = *x_size - 1;
  *y_size = *x_size;
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = Test_Traj_rt_hypotd_snf(x_data[b_k].re, x_data[b_k].im);
  }
}

static void Test_Traj_clothoidG1fit2wp_p(const creal_T z0_data[], const real_T
  theta0_data[], const int32_T *theta0_size, const creal_T z1_data[], const
  int32_T *z1_size, const real_T theta1_data[], const int32_T *theta1_size,
  real_T k0_data[], int32_T *k0_size, real_T k1_data[], int32_T *k1_size, real_T
  l_data[], int32_T *l_size, real_T dk0_dtheta0_data[], int32_T
  *dk0_dtheta0_size, real_T dk0_dtheta1_data[], int32_T *dk0_dtheta1_size,
  real_T dk1_dtheta0_data[], int32_T *dk1_dtheta0_size, real_T dk1_dtheta1_data[],
  int32_T *dk1_dtheta1_size)
{
  Test_Traj_B.z_size_j = *z1_size;
  Test_Traj_B.loop_ub_b = *z1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    Test_Traj_B.z_data_a[Test_Traj_B.b_i_g].re = z1_data[Test_Traj_B.b_i_g].re -
      z0_data[Test_Traj_B.b_i_g].re;
    Test_Traj_B.z_data_a[Test_Traj_B.b_i_g].im = z1_data[Test_Traj_B.b_i_g].im -
      z0_data[Test_Traj_B.b_i_g].im;
  }

  Test_Traj_angle_p(Test_Traj_B.z_data_a, &Test_Traj_B.z_size_j,
                    Test_Traj_B.phi_data, &Test_Traj_B.phi_size);
  Test_Traj_B.tmp_size_h = *theta0_size;
  Test_Traj_B.loop_ub_b = *theta0_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    Test_Traj_B.brm = theta0_data[Test_Traj_B.b_i_g] -
      Test_Traj_B.phi_data[Test_Traj_B.b_i_g];
    Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re = Test_Traj_B.brm * 0.0;
    Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im = Test_Traj_B.brm;
  }

  Test_Traj_exp_p(Test_Traj_B.tmp_data_jd, &Test_Traj_B.tmp_size_h);
  Test_Traj_angle_p(Test_Traj_B.tmp_data_jd, &Test_Traj_B.tmp_size_h,
                    Test_Traj_B.phi0_data, &Test_Traj_B.phi0_size);
  Test_Traj_B.tmp_size_h = *theta1_size;
  Test_Traj_B.loop_ub_b = *theta1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    Test_Traj_B.brm = theta1_data[Test_Traj_B.b_i_g] -
      Test_Traj_B.phi_data[Test_Traj_B.b_i_g];
    Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re = Test_Traj_B.brm * 0.0;
    Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im = Test_Traj_B.brm;
  }

  Test_Traj_exp_p(Test_Traj_B.tmp_data_jd, &Test_Traj_B.tmp_size_h);
  Test_Traj_angle_p(Test_Traj_B.tmp_data_jd, &Test_Traj_B.tmp_size_h,
                    Test_Traj_B.phi1_data, &Test_Traj_B.phi1_size);
  *k1_size = Test_Traj_B.phi1_size;
  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    k1_data[Test_Traj_B.b_i_g] = Test_Traj_B.phi1_data[Test_Traj_B.b_i_g] -
      Test_Traj_B.phi0_data[Test_Traj_B.b_i_g];
  }

  Test_Traj_fetchAgrad_p(Test_Traj_B.phi0_data, &Test_Traj_B.phi0_size,
    Test_Traj_B.phi1_data, Test_Traj_B.phi_data, &Test_Traj_B.phi_size,
    Test_Traj_B.da_dphi0_data, &Test_Traj_B.tmp_size_h,
    Test_Traj_B.da_dphi1_data, &Test_Traj_B.da_dphi1_size);
  Test_Traj_fresnelg1_p(Test_Traj_B.phi_data, &Test_Traj_B.phi_size, k1_data,
                        k1_size, Test_Traj_B.phi0_data, Test_Traj_B.f_data,
                        &Test_Traj_B.phi0_size, Test_Traj_B.df_da_data,
                        &Test_Traj_B.tmp_size_h);
  Test_Traj_abs_ph(Test_Traj_B.z_data_a, &Test_Traj_B.z_size_j, dk1_dtheta1_data,
                   dk1_dtheta1_size);
  *l_size = *dk1_dtheta1_size;
  Test_Traj_B.loop_ub_b = *dk1_dtheta1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    l_data[Test_Traj_B.b_i_g] = dk1_dtheta1_data[Test_Traj_B.b_i_g] /
      Test_Traj_B.f_data[Test_Traj_B.b_i_g].re;
  }

  Test_Traj_power_phm(Test_Traj_B.f_data, &Test_Traj_B.phi0_size,
                      Test_Traj_B.tmp_data_jd, &Test_Traj_B.tmp_size_h);
  Test_Traj_B.loop_ub_b = *dk1_dtheta1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    if (Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im == 0.0) {
      if (Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].im == 0.0) {
        Test_Traj_B.brm = Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].re /
          Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re;
      } else if (Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].re == 0.0) {
        Test_Traj_B.brm = 0.0;
      } else {
        Test_Traj_B.brm = Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].re /
          Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re;
      }
    } else if (Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re == 0.0) {
      if (Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].re == 0.0) {
        Test_Traj_B.brm = Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].im /
          Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im;
      } else if (Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].im == 0.0) {
        Test_Traj_B.brm = 0.0;
      } else {
        Test_Traj_B.brm = Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].im /
          Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im;
      }
    } else {
      Test_Traj_B.brm = fabs(Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re);
      Test_Traj_B.bim = fabs(Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im);
      if (Test_Traj_B.brm > Test_Traj_B.bim) {
        Test_Traj_B.brm = Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im /
          Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re;
        Test_Traj_B.brm = (Test_Traj_B.brm *
                           Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].im +
                           Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].re) /
          (Test_Traj_B.brm * Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im +
           Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re);
      } else if (Test_Traj_B.bim == Test_Traj_B.brm) {
        Test_Traj_B.brm = ((Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re > 0.0 ?
                            0.5 : -0.5) *
                           Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].re +
                           (Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im > 0.0 ?
                            0.5 : -0.5) *
                           Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].im) /
          Test_Traj_B.brm;
      } else {
        Test_Traj_B.brm = Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re /
          Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im;
        Test_Traj_B.brm = (Test_Traj_B.brm *
                           Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].re +
                           Test_Traj_B.df_da_data[Test_Traj_B.b_i_g].im) /
          (Test_Traj_B.brm * Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].re +
           Test_Traj_B.tmp_data_jd[Test_Traj_B.b_i_g].im);
      }
    }

    dk1_dtheta1_data[Test_Traj_B.b_i_g] = -dk1_dtheta1_data[Test_Traj_B.b_i_g] *
      Test_Traj_B.brm;
  }

  Test_Traj_power_p(l_data, l_size, Test_Traj_B.tmp_data_kb,
                    &Test_Traj_B.tmp_size_h);
  Test_Traj_B.loop_ub_b = Test_Traj_B.tmp_size_h;
  if (0 <= Test_Traj_B.loop_ub_b - 1) {
    memcpy(&Test_Traj_B.phi0_data[0], &Test_Traj_B.tmp_data_kb[0],
           Test_Traj_B.loop_ub_b * sizeof(real_T));
  }

  *k0_size = Test_Traj_B.phi1_size;
  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    k0_data[Test_Traj_B.b_i_g] = k1_data[Test_Traj_B.b_i_g] -
      Test_Traj_B.phi_data[Test_Traj_B.b_i_g];
  }

  Test_Traj_B.loop_ub_b = *dk1_dtheta1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    dk1_dtheta0_data[Test_Traj_B.b_i_g] = -dk1_dtheta1_data[Test_Traj_B.b_i_g] *
      Test_Traj_B.da_dphi0_data[Test_Traj_B.b_i_g] /
      Test_Traj_B.phi0_data[Test_Traj_B.b_i_g];
  }

  *dk0_dtheta0_size = Test_Traj_B.phi1_size;
  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    dk0_dtheta0_data[Test_Traj_B.b_i_g] = (-1.0 -
      Test_Traj_B.da_dphi0_data[Test_Traj_B.b_i_g]) / l_data[Test_Traj_B.b_i_g]
      + k0_data[Test_Traj_B.b_i_g] * dk1_dtheta0_data[Test_Traj_B.b_i_g];
  }

  Test_Traj_B.loop_ub_b = *dk1_dtheta1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    dk1_dtheta1_data[Test_Traj_B.b_i_g] = -dk1_dtheta1_data[Test_Traj_B.b_i_g] *
      Test_Traj_B.da_dphi1_data[Test_Traj_B.b_i_g] /
      Test_Traj_B.phi0_data[Test_Traj_B.b_i_g];
  }

  *dk0_dtheta1_size = Test_Traj_B.phi1_size;
  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    dk0_dtheta1_data[Test_Traj_B.b_i_g] = (1.0 -
      Test_Traj_B.da_dphi1_data[Test_Traj_B.b_i_g]) / l_data[Test_Traj_B.b_i_g]
      + k0_data[Test_Traj_B.b_i_g] * dk1_dtheta1_data[Test_Traj_B.b_i_g];
  }

  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    k1_data[Test_Traj_B.b_i_g] += Test_Traj_B.phi_data[Test_Traj_B.b_i_g];
  }

  *dk1_dtheta0_size = Test_Traj_B.phi1_size;
  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    dk1_dtheta0_data[Test_Traj_B.b_i_g] =
      (Test_Traj_B.da_dphi0_data[Test_Traj_B.b_i_g] + -1.0) /
      l_data[Test_Traj_B.b_i_g] + k1_data[Test_Traj_B.b_i_g] *
      dk1_dtheta0_data[Test_Traj_B.b_i_g];
  }

  *dk1_dtheta1_size = Test_Traj_B.phi1_size;
  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    dk1_dtheta1_data[Test_Traj_B.b_i_g] =
      (Test_Traj_B.da_dphi1_data[Test_Traj_B.b_i_g] + 1.0) /
      l_data[Test_Traj_B.b_i_g] + k1_data[Test_Traj_B.b_i_g] *
      dk1_dtheta1_data[Test_Traj_B.b_i_g];
  }

  Test_Traj_B.loop_ub_b = *l_size - 1;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g <= Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    if (l_data[Test_Traj_B.b_i_g] == 0.0) {
      dk0_dtheta0_data[Test_Traj_B.b_i_g] = 0.0;
    }
  }

  Test_Traj_B.loop_ub_b = *l_size - 1;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g <= Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    if (l_data[Test_Traj_B.b_i_g] == 0.0) {
      dk0_dtheta1_data[Test_Traj_B.b_i_g] = 0.0;
    }
  }

  Test_Traj_B.loop_ub_b = *l_size - 1;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g <= Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    if (l_data[Test_Traj_B.b_i_g] == 0.0) {
      dk1_dtheta0_data[Test_Traj_B.b_i_g] = 0.0;
    }
  }

  Test_Traj_B.loop_ub_b = *l_size - 1;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g <= Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    if (l_data[Test_Traj_B.b_i_g] == 0.0) {
      dk1_dtheta1_data[Test_Traj_B.b_i_g] = 0.0;
    }
  }

  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    k0_data[Test_Traj_B.b_i_g] /= l_data[Test_Traj_B.b_i_g];
  }

  Test_Traj_B.loop_ub_b = Test_Traj_B.phi1_size;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g < Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    k1_data[Test_Traj_B.b_i_g] /= l_data[Test_Traj_B.b_i_g];
  }

  Test_Traj_B.loop_ub_b = *l_size - 1;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g <= Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    if (l_data[Test_Traj_B.b_i_g] == 0.0) {
      k0_data[Test_Traj_B.b_i_g] = 0.0;
    }
  }

  Test_Traj_B.loop_ub_b = *l_size - 1;
  for (Test_Traj_B.b_i_g = 0; Test_Traj_B.b_i_g <= Test_Traj_B.loop_ub_b;
       Test_Traj_B.b_i_g++) {
    if (l_data[Test_Traj_B.b_i_g] == 0.0) {
      k1_data[Test_Traj_B.b_i_g] = 0.0;
    }
  }
}

static void Test_Traj___anon_fcn_ph(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T course_data[], const int32_T *course_size,
  const real_T x_data[], real_T varargout_1_data[], int32_T *varargout_1_size,
  real_T varargout_2_data[], int32_T varargout_2_size[2])
{
  Test_Traj_B.loop_ub_g = *course_size;
  if (0 <= Test_Traj_B.loop_ub_g - 1) {
    memcpy(&Test_Traj_B.course_data_m[0], &course_data[0], Test_Traj_B.loop_ub_g
           * sizeof(real_T));
  }

  Test_Traj_B.loop_ub_g = waypoints_size[0];
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.loop_ub_g;
       Test_Traj_B.e_i++) {
    Test_Traj_B.hip_data[Test_Traj_B.e_i].re = waypoints_data[Test_Traj_B.e_i];
    Test_Traj_B.hip_data[Test_Traj_B.e_i].im = waypoints_data[Test_Traj_B.e_i +
      waypoints_size[0]];
  }

  if (2.0 > static_cast<real_T>(*course_size) - 1.0) {
    Test_Traj_B.f_o = 0;
    Test_Traj_B.e_i = 0;
  } else {
    Test_Traj_B.f_o = 1;
    Test_Traj_B.e_i = *course_size - 1;
  }

  Test_Traj_B.g_size_idx_1_tmp = Test_Traj_B.e_i - Test_Traj_B.f_o;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.g_size_idx_1_tmp;
       Test_Traj_B.e_i++) {
    Test_Traj_B.g_data_h[Test_Traj_B.e_i] = Test_Traj_B.f_o + Test_Traj_B.e_i;
  }

  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.g_size_idx_1_tmp;
       Test_Traj_B.e_i++) {
    Test_Traj_B.course_data_m[Test_Traj_B.g_data_h[Test_Traj_B.e_i]] =
      x_data[Test_Traj_B.e_i];
  }

  if (1.0 > static_cast<real_T>(waypoints_size[0]) - 1.0) {
    Test_Traj_B.e_i = 0;
    Test_Traj_B.l_h = 0;
  } else {
    Test_Traj_B.e_i = waypoints_size[0] - 1;
    Test_Traj_B.l_h = waypoints_size[0] - 1;
  }

  if (2 > waypoints_size[0]) {
    Test_Traj_B.g_size_idx_1_tmp = 0;
    Test_Traj_B.o = 0;
    Test_Traj_B.f_o = 0;
    Test_Traj_B.q_p = 0;
  } else {
    Test_Traj_B.g_size_idx_1_tmp = 1;
    Test_Traj_B.o = waypoints_size[0];
    Test_Traj_B.f_o = 1;
    Test_Traj_B.q_p = waypoints_size[0];
  }

  if (0 <= Test_Traj_B.e_i - 1) {
    memcpy(&Test_Traj_B.hip_data_p4[0], &Test_Traj_B.hip_data[0],
           Test_Traj_B.e_i * sizeof(creal_T));
  }

  Test_Traj_B.course_size = Test_Traj_B.l_h;
  if (0 <= Test_Traj_B.l_h - 1) {
    memcpy(&Test_Traj_B.course_data_b[0], &Test_Traj_B.course_data_m[0],
           Test_Traj_B.l_h * sizeof(real_T));
  }

  Test_Traj_B.l_h = Test_Traj_B.o - Test_Traj_B.g_size_idx_1_tmp;
  Test_Traj_B.hip_size = Test_Traj_B.l_h;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.l_h; Test_Traj_B.e_i++)
  {
    Test_Traj_B.hip_data_h[Test_Traj_B.e_i] =
      Test_Traj_B.hip_data[Test_Traj_B.g_size_idx_1_tmp + Test_Traj_B.e_i];
  }

  Test_Traj_B.g_size_idx_1_tmp = Test_Traj_B.q_p - Test_Traj_B.f_o;
  Test_Traj_B.course_size_c = Test_Traj_B.g_size_idx_1_tmp;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.g_size_idx_1_tmp;
       Test_Traj_B.e_i++) {
    Test_Traj_B.course_data_a[Test_Traj_B.e_i] =
      Test_Traj_B.course_data_m[Test_Traj_B.f_o + Test_Traj_B.e_i];
  }

  Test_Traj_clothoidG1fit2wp_p(Test_Traj_B.hip_data_p4,
    Test_Traj_B.course_data_b, &Test_Traj_B.course_size, Test_Traj_B.hip_data_h,
    &Test_Traj_B.hip_size, Test_Traj_B.course_data_a, &Test_Traj_B.course_size_c,
    Test_Traj_B.k0_data, &Test_Traj_B.k0_size, Test_Traj_B.k1_data,
    &Test_Traj_B.k1_size, Test_Traj_B.unusedU3_data, &Test_Traj_B.unusedU3_size,
    Test_Traj_B.dk0_dc0_data, &Test_Traj_B.dk0_dc0_size,
    Test_Traj_B.dk0_dc1_data, &Test_Traj_B.dk0_dc1_size,
    Test_Traj_B.dk1_dc0_data, &Test_Traj_B.dk1_dc0_size,
    Test_Traj_B.dk1_dc1_data, &Test_Traj_B.dk1_dc1_size);
  if (1.0 > static_cast<real_T>(Test_Traj_B.k1_size) - 1.0) {
    Test_Traj_B.f_o = 0;
  } else {
    Test_Traj_B.f_o = Test_Traj_B.k1_size - 1;
  }

  if (2 > Test_Traj_B.k0_size) {
    Test_Traj_B.g_size_idx_1_tmp = 0;
  } else {
    Test_Traj_B.g_size_idx_1_tmp = 1;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.dk0_dc1_size) - 1.0) {
    Test_Traj_B.q_p = 0;
    Test_Traj_B.l_h = 0;
  } else {
    Test_Traj_B.q_p = 1;
    Test_Traj_B.l_h = Test_Traj_B.dk0_dc1_size - 1;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.dk1_dc0_size) - 1.0) {
    Test_Traj_B.o = 0;
    Test_Traj_B.e_i = 0;
  } else {
    Test_Traj_B.o = 1;
    Test_Traj_B.e_i = Test_Traj_B.dk1_dc0_size - 1;
  }

  if (1.0 > static_cast<real_T>(waypoints_size[0]) - 2.0) {
    Test_Traj_B.ib = 0;
  } else {
    Test_Traj_B.ib = waypoints_size[0] - 2;
  }

  if (2.0 > static_cast<real_T>(waypoints_size[0]) - 1.0) {
    Test_Traj_B.mb = 0;
  } else {
    Test_Traj_B.mb = 1;
  }

  Test_Traj_B.loop_ub_g = Test_Traj_B.e_i - Test_Traj_B.o;
  Test_Traj_B.reshapes[0].f1.size = Test_Traj_B.loop_ub_g + 1;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.loop_ub_g;
       Test_Traj_B.e_i++) {
    Test_Traj_B.reshapes[0].f1.data[Test_Traj_B.e_i] =
      Test_Traj_B.dk1_dc0_data[Test_Traj_B.o + Test_Traj_B.e_i];
  }

  Test_Traj_B.reshapes[0].f1.data[Test_Traj_B.loop_ub_g] = 0.0;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.ib; Test_Traj_B.e_i++)
  {
    Test_Traj_B.reshapes[1].f1.data[Test_Traj_B.e_i] =
      Test_Traj_B.dk1_dc1_data[Test_Traj_B.e_i] -
      Test_Traj_B.dk0_dc0_data[Test_Traj_B.mb + Test_Traj_B.e_i];
  }

  Test_Traj_B.loop_ub_g = Test_Traj_B.l_h - Test_Traj_B.q_p;
  Test_Traj_B.reshapes[2].f1.size = Test_Traj_B.loop_ub_g + 1;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.loop_ub_g;
       Test_Traj_B.e_i++) {
    Test_Traj_B.reshapes[2].f1.data[Test_Traj_B.e_i] =
      -Test_Traj_B.dk0_dc1_data[Test_Traj_B.q_p + Test_Traj_B.e_i];
  }

  Test_Traj_B.reshapes[2].f1.data[Test_Traj_B.loop_ub_g] = 0.0;
  *varargout_1_size = Test_Traj_B.f_o;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.f_o; Test_Traj_B.e_i++)
  {
    varargout_1_data[Test_Traj_B.e_i] = Test_Traj_B.k1_data[Test_Traj_B.e_i] -
      Test_Traj_B.k0_data[Test_Traj_B.g_size_idx_1_tmp + Test_Traj_B.e_i];
  }

  varargout_2_size[0] = Test_Traj_B.reshapes[0].f1.size;
  varargout_2_size[1] = 3;
  Test_Traj_B.loop_ub_g = Test_Traj_B.reshapes[0].f1.size;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.loop_ub_g;
       Test_Traj_B.e_i++) {
    varargout_2_data[Test_Traj_B.e_i] = Test_Traj_B.reshapes[0]
      .f1.data[Test_Traj_B.e_i];
  }

  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.ib; Test_Traj_B.e_i++)
  {
    varargout_2_data[Test_Traj_B.e_i + Test_Traj_B.reshapes[0].f1.size] =
      Test_Traj_B.reshapes[1].f1.data[Test_Traj_B.e_i];
  }

  Test_Traj_B.loop_ub_g = Test_Traj_B.reshapes[2].f1.size;
  for (Test_Traj_B.e_i = 0; Test_Traj_B.e_i < Test_Traj_B.loop_ub_g;
       Test_Traj_B.e_i++) {
    varargout_2_data[(Test_Traj_B.e_i + Test_Traj_B.reshapes[0].f1.size) +
      Test_Traj_B.ib] = Test_Traj_B.reshapes[2].f1.data[Test_Traj_B.e_i];
  }
}

static void Test_Traj_mulJt_p(const real_T Jtri_data[], const int32_T Jtri_size
  [2], const real_T x_data[], const int32_T *x_size, real_T y_data[], int32_T
  *y_size)
{
  int32_T loop_ub;
  int32_T y_size_idx_1;
  int32_T y_size_idx_1_0;
  int32_T y_size_idx_1_tmp;
  if (*x_size < 2) {
    y_size_idx_1 = 0;
  } else {
    y_size_idx_1 = *x_size - 1;
    loop_ub = *x_size - 2;
    for (Test_Traj_B.i15 = 0; Test_Traj_B.i15 <= loop_ub; Test_Traj_B.i15++) {
      Test_Traj_B.y_data_j[Test_Traj_B.i15] = static_cast<real_T>
        (Test_Traj_B.i15) + 2.0;
    }
  }

  if (static_cast<real_T>(*x_size) - 1.0 < 1.0) {
    y_size_idx_1_tmp = 0;
    y_size_idx_1_0 = 0;
  } else {
    loop_ub = static_cast<int32_T>((static_cast<real_T>(*x_size) - 1.0) - 1.0);
    y_size_idx_1_tmp = loop_ub + 1;
    for (Test_Traj_B.i15 = 0; Test_Traj_B.i15 <= loop_ub; Test_Traj_B.i15++) {
      Test_Traj_B.y_data_ho[Test_Traj_B.i15] = static_cast<real_T>
        (Test_Traj_B.i15) + 1.0;
    }

    y_size_idx_1_0 = y_size_idx_1_tmp;
    for (Test_Traj_B.i15 = 0; Test_Traj_B.i15 <= loop_ub; Test_Traj_B.i15++) {
      Test_Traj_B.y_data_cf[Test_Traj_B.i15] = static_cast<real_T>
        (Test_Traj_B.i15) + 1.0;
    }
  }

  for (Test_Traj_B.i15 = 0; Test_Traj_B.i15 < y_size_idx_1; Test_Traj_B.i15++) {
    Test_Traj_B.y_data_f4[Test_Traj_B.i15] = static_cast<int32_T>
      (Test_Traj_B.y_data_j[Test_Traj_B.i15]) - 1;
  }

  Test_Traj_B.y_data_f4[y_size_idx_1] = 0;
  Test_Traj_B.x_data_c[0] = *x_size - 1;
  for (Test_Traj_B.i15 = 0; Test_Traj_B.i15 < y_size_idx_1_tmp; Test_Traj_B.i15
       ++) {
    Test_Traj_B.x_data_c[Test_Traj_B.i15 + 1] = static_cast<int32_T>
      (Test_Traj_B.y_data_ho[Test_Traj_B.i15]) - 1;
  }

  Test_Traj_B.x_data_nn[0] = *x_size - 1;
  for (Test_Traj_B.i15 = 0; Test_Traj_B.i15 < y_size_idx_1_0; Test_Traj_B.i15++)
  {
    Test_Traj_B.x_data_nn[Test_Traj_B.i15 + 1] = static_cast<int32_T>
      (Test_Traj_B.y_data_cf[Test_Traj_B.i15]) - 1;
  }

  loop_ub = Jtri_size[0];
  *y_size = Jtri_size[0];
  for (Test_Traj_B.i15 = 0; Test_Traj_B.i15 < loop_ub; Test_Traj_B.i15++) {
    y_data[Test_Traj_B.i15] = (Jtri_data[Test_Traj_B.i15 + Jtri_size[0]] *
      x_data[Test_Traj_B.i15] + Jtri_data[Test_Traj_B.i15] *
      x_data[Test_Traj_B.y_data_f4[Test_Traj_B.i15]]) + Jtri_data[(Jtri_size[0] <<
      1) + Test_Traj_B.x_data_c[Test_Traj_B.i15]] *
      x_data[Test_Traj_B.x_data_nn[Test_Traj_B.i15]];
  }
}

static void Test_Traj_repmat_ph(real_T varargin_1, real_T b_data[], int32_T
  *b_size)
{
  int32_T i;
  int32_T outsize_idx_0;
  outsize_idx_0 = static_cast<int32_T>(varargin_1);
  *b_size = outsize_idx_0;
  for (i = 0; i < outsize_idx_0; i++) {
    b_data[i] = 1.0E-7;
  }
}

static boolean_T Test_Traj_any_p(const boolean_T x_data[], const int32_T *x_size)
{
  boolean_T y;
  int32_T ix;
  boolean_T exitg1;
  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= *x_size)) {
    if (!x_data[ix]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

static void Test_Traj_bsxfun(const real_T a_data[], const int32_T a_size[2],
  const real_T b_data[], const int32_T *b_size, real_T c_data[], int32_T c_size
  [2])
{
  int32_T bcoef;
  int32_T k;
  int32_T csz_idx_0;
  if (*b_size == 1) {
    csz_idx_0 = a_size[0];
  } else if (a_size[0] == 1) {
    csz_idx_0 = *b_size;
  } else if (a_size[0] == *b_size) {
    csz_idx_0 = a_size[0];
  } else if (*b_size < a_size[0]) {
    csz_idx_0 = *b_size;
  } else {
    csz_idx_0 = a_size[0];
  }

  c_size[0] = csz_idx_0;
  c_size[1] = a_size[1];
  if ((csz_idx_0 != 0) && (a_size[1] != 0)) {
    Test_Traj_B.acoef = (a_size[1] != 1);
    Test_Traj_B.d_p = a_size[1];
    for (Test_Traj_B.k_h = 0; Test_Traj_B.k_h < Test_Traj_B.d_p; Test_Traj_B.k_h
         ++) {
      Test_Traj_B.ia = Test_Traj_B.acoef * Test_Traj_B.k_h;
      Test_Traj_B.acoef_e = (a_size[0] != 1);
      bcoef = (*b_size != 1);
      for (k = 0; k < csz_idx_0; k++) {
        c_data[k + csz_idx_0 * Test_Traj_B.k_h] = a_data[Test_Traj_B.acoef_e * k
          + a_size[0] * Test_Traj_B.ia] / b_data[bcoef * k];
      }
    }
  }
}

static void Test_Traj_sympentdisolve_ph(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T b_size[2],
  real_T x_data[], int32_T x_size[2])
{
  x_size[0] = b_size[0];
  x_size[1] = b_size[1];
  Test_Traj_B.loop_ub_tmp_c = b_size[0] * b_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_tmp_c) {
    memset(&x_data[0], 0, (Test_Traj_B.loop_ub_tmp_c + 1) * sizeof(real_T));
  }

  Test_Traj_B.alpha_size_f = b_size[0];
  Test_Traj_B.loop_ub_f = b_size[0];
  if (0 <= Test_Traj_B.loop_ub_f - 1) {
    memset(&Test_Traj_B.alpha_data_g[0], 0, Test_Traj_B.loop_ub_f * sizeof
           (real_T));
  }

  Test_Traj_B.loop_ub_f = b_size[0] - 1;
  if (0 <= Test_Traj_B.loop_ub_f - 1) {
    memset(&Test_Traj_B.b_gamma_data[0], 0, Test_Traj_B.loop_ub_f * sizeof
           (real_T));
  }

  Test_Traj_B.loop_ub_f = b_size[0] - 2;
  if (0 <= Test_Traj_B.loop_ub_f - 1) {
    memset(&Test_Traj_B.delta_data[0], 0, Test_Traj_B.loop_ub_f * sizeof(real_T));
  }

  Test_Traj_B.alpha_data_g[0] = d_data[0];
  Test_Traj_B.b_gamma_data[0] = e_data[0] / d_data[0];
  Test_Traj_B.delta_data[0] = f_data[0] / d_data[0];
  Test_Traj_B.alpha_data_g[1] = d_data[1] - e_data[0] *
    Test_Traj_B.b_gamma_data[0];
  Test_Traj_B.b_gamma_data[1] = (e_data[1] - f_data[0] *
    Test_Traj_B.b_gamma_data[0]) / Test_Traj_B.alpha_data_g[1];
  Test_Traj_B.delta_data[1] = f_data[1] / Test_Traj_B.alpha_data_g[1];
  Test_Traj_B.loop_ub_f = static_cast<int32_T>((static_cast<real_T>(b_size[0]) -
    2.0) + -2.0) - 1;
  for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h <= Test_Traj_B.loop_ub_f;
       Test_Traj_B.b_k_h++) {
    Test_Traj_B.alpha_data_tmp_c1 = static_cast<int32_T>((static_cast<real_T>
      (Test_Traj_B.b_k_h) + 3.0) - 2.0) - 1;
    Test_Traj_B.alpha_data_tmp_d = static_cast<int32_T>((static_cast<real_T>
      (Test_Traj_B.b_k_h) + 3.0) - 1.0) - 1;
    Test_Traj_B.alpha_data_g[Test_Traj_B.b_k_h + 2] = (d_data[Test_Traj_B.b_k_h
      + 2] - f_data[Test_Traj_B.alpha_data_tmp_c1] *
      Test_Traj_B.delta_data[Test_Traj_B.alpha_data_tmp_c1]) -
      Test_Traj_B.b_gamma_data[Test_Traj_B.alpha_data_tmp_d] *
      Test_Traj_B.b_gamma_data[Test_Traj_B.alpha_data_tmp_d] *
      Test_Traj_B.alpha_data_g[Test_Traj_B.alpha_data_tmp_d];
    Test_Traj_B.b_gamma_data_tmp_g = Test_Traj_B.alpha_data_g[Test_Traj_B.b_k_h
      + 2];
    Test_Traj_B.b_gamma_data[Test_Traj_B.b_k_h + 2] = (e_data[Test_Traj_B.b_k_h
      + 2] - f_data[Test_Traj_B.alpha_data_tmp_d] *
      Test_Traj_B.b_gamma_data[Test_Traj_B.alpha_data_tmp_d]) /
      Test_Traj_B.b_gamma_data_tmp_g;
    Test_Traj_B.delta_data[Test_Traj_B.b_k_h + 2] = f_data[Test_Traj_B.b_k_h + 2]
      / Test_Traj_B.b_gamma_data_tmp_g;
  }

  Test_Traj_B.alpha_data_tmp = Test_Traj_B.b_gamma_data[b_size[0] - 3];
  Test_Traj_B.alpha_data_g[b_size[0] - 2] = (d_data[b_size[0] - 2] -
    f_data[b_size[0] - 4] * Test_Traj_B.delta_data[b_size[0] - 4]) -
    Test_Traj_B.alpha_data_tmp * Test_Traj_B.alpha_data_tmp *
    Test_Traj_B.alpha_data_g[b_size[0] - 3];
  Test_Traj_B.b_gamma_data_tmp_g = f_data[b_size[0] - 3];
  Test_Traj_B.b_gamma_data_tmp = Test_Traj_B.alpha_data_g[b_size[0] - 2];
  Test_Traj_B.b_gamma_data[b_size[0] - 2] = (e_data[b_size[0] - 2] -
    Test_Traj_B.b_gamma_data_tmp_g * Test_Traj_B.alpha_data_tmp) /
    Test_Traj_B.b_gamma_data_tmp;
  Test_Traj_B.alpha_data_tmp = Test_Traj_B.b_gamma_data[b_size[0] - 2];
  Test_Traj_B.alpha_data_g[b_size[0] - 1] = (d_data[b_size[0] - 1] -
    Test_Traj_B.b_gamma_data_tmp_g * Test_Traj_B.delta_data[b_size[0] - 3]) -
    Test_Traj_B.alpha_data_tmp * Test_Traj_B.alpha_data_tmp *
    Test_Traj_B.b_gamma_data_tmp;
  Test_Traj_B.z_size[0] = b_size[0];
  Test_Traj_B.z_size[1] = b_size[1];
  if (0 <= Test_Traj_B.loop_ub_tmp_c) {
    memset(&Test_Traj_B.z_data_g[0], 0, (Test_Traj_B.loop_ub_tmp_c + 1) * sizeof
           (real_T));
  }

  Test_Traj_B.loop_ub_f = b_size[1] - 1;
  for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h <= Test_Traj_B.loop_ub_f;
       Test_Traj_B.b_k_h++) {
    Test_Traj_B.z_data_g[Test_Traj_B.z_size[0] * Test_Traj_B.b_k_h] =
      b_data[b_size[0] * Test_Traj_B.b_k_h];
  }

  Test_Traj_B.loop_ub_f = b_size[1];
  for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
       Test_Traj_B.b_k_h++) {
    Test_Traj_B.b_data_j[Test_Traj_B.b_k_h] = b_data[b_size[0] *
      Test_Traj_B.b_k_h + 1] - Test_Traj_B.z_data_g[Test_Traj_B.z_size[0] *
      Test_Traj_B.b_k_h] * Test_Traj_B.b_gamma_data[0];
  }

  for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
       Test_Traj_B.b_k_h++) {
    Test_Traj_B.z_data_g[Test_Traj_B.z_size[0] * Test_Traj_B.b_k_h + 1] =
      Test_Traj_B.b_data_j[Test_Traj_B.b_k_h];
  }

  Test_Traj_B.alpha_data_tmp_d = b_size[0] - 3;
  for (Test_Traj_B.alpha_data_tmp_c1 = 0; Test_Traj_B.alpha_data_tmp_c1 <=
       Test_Traj_B.alpha_data_tmp_d; Test_Traj_B.alpha_data_tmp_c1++) {
    Test_Traj_B.loop_ub_tmp_c = static_cast<int32_T>((static_cast<real_T>
      (Test_Traj_B.alpha_data_tmp_c1) + 3.0) - 1.0);
    Test_Traj_B.b_gamma_data_tmp_g =
      Test_Traj_B.b_gamma_data[Test_Traj_B.loop_ub_tmp_c - 1];
    Test_Traj_B.delta_tmp = static_cast<int32_T>((static_cast<real_T>
      (Test_Traj_B.alpha_data_tmp_c1) + 3.0) - 2.0);
    Test_Traj_B.b_gamma_data_tmp = Test_Traj_B.delta_data[Test_Traj_B.delta_tmp
      - 1];
    Test_Traj_B.loop_ub_f = b_size[1];
    for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
         Test_Traj_B.b_k_h++) {
      Test_Traj_B.b_data_tmp = Test_Traj_B.z_size[0] * Test_Traj_B.b_k_h;
      Test_Traj_B.b_data_j[Test_Traj_B.b_k_h] = (b_data[(b_size[0] *
        Test_Traj_B.b_k_h + Test_Traj_B.alpha_data_tmp_c1) + 2] -
        Test_Traj_B.z_data_g[(Test_Traj_B.b_data_tmp + Test_Traj_B.loop_ub_tmp_c)
        - 1] * Test_Traj_B.b_gamma_data_tmp_g) - Test_Traj_B.z_data_g
        [(Test_Traj_B.b_data_tmp + Test_Traj_B.delta_tmp) - 1] *
        Test_Traj_B.b_gamma_data_tmp;
    }

    for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
         Test_Traj_B.b_k_h++) {
      Test_Traj_B.z_data_g[(Test_Traj_B.alpha_data_tmp_c1 + Test_Traj_B.z_size[0]
                            * Test_Traj_B.b_k_h) + 2] =
        Test_Traj_B.b_data_j[Test_Traj_B.b_k_h];
    }
  }

  Test_Traj_bsxfun(Test_Traj_B.z_data_g, Test_Traj_B.z_size,
                   Test_Traj_B.alpha_data_g, &Test_Traj_B.alpha_size_f,
                   Test_Traj_B.c_data, Test_Traj_B.c_size);
  Test_Traj_B.loop_ub_f = Test_Traj_B.c_size[1] - 1;
  for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h <= Test_Traj_B.loop_ub_f;
       Test_Traj_B.b_k_h++) {
    x_data[(b_size[0] + x_size[0] * Test_Traj_B.b_k_h) - 1] =
      Test_Traj_B.c_data[(Test_Traj_B.c_size[0] * Test_Traj_B.b_k_h + b_size[0])
      - 1];
  }

  Test_Traj_B.loop_ub_tmp_c = b_size[0] - 1;
  Test_Traj_B.alpha_data_tmp_c1 = b_size[0] - 1;
  Test_Traj_B.loop_ub_f = Test_Traj_B.c_size[1];
  for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
       Test_Traj_B.b_k_h++) {
    Test_Traj_B.b_data_j[Test_Traj_B.b_k_h] = Test_Traj_B.c_data
      [(Test_Traj_B.c_size[0] * Test_Traj_B.b_k_h + Test_Traj_B.loop_ub_tmp_c) -
      1] - x_data[(x_size[0] * Test_Traj_B.b_k_h + b_size[0]) - 1] *
      Test_Traj_B.alpha_data_tmp;
  }

  for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
       Test_Traj_B.b_k_h++) {
    x_data[(Test_Traj_B.alpha_data_tmp_c1 + x_size[0] * Test_Traj_B.b_k_h) - 1] =
      Test_Traj_B.b_data_j[Test_Traj_B.b_k_h];
  }

  Test_Traj_B.alpha_data_tmp_d = static_cast<int32_T>(((-1.0 -
    (static_cast<real_T>(b_size[0]) - 2.0)) + 1.0) / -1.0) - 1;
  for (Test_Traj_B.alpha_data_tmp_c1 = 0; Test_Traj_B.alpha_data_tmp_c1 <=
       Test_Traj_B.alpha_data_tmp_d; Test_Traj_B.alpha_data_tmp_c1++) {
    Test_Traj_B.alpha_data_tmp = (static_cast<real_T>(b_size[0]) - 2.0) + -
      static_cast<real_T>(Test_Traj_B.alpha_data_tmp_c1);
    Test_Traj_B.delta_tmp = static_cast<int32_T>(Test_Traj_B.alpha_data_tmp);
    Test_Traj_B.loop_ub_tmp_c = Test_Traj_B.delta_tmp - 1;
    Test_Traj_B.b_data_tmp = static_cast<int32_T>(Test_Traj_B.alpha_data_tmp +
      1.0);
    Test_Traj_B.k_d = static_cast<int32_T>(Test_Traj_B.alpha_data_tmp + 2.0);
    Test_Traj_B.loop_ub_f = Test_Traj_B.c_size[1];
    for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
         Test_Traj_B.b_k_h++) {
      Test_Traj_B.c_data_tmp_b = x_size[0] * Test_Traj_B.b_k_h;
      Test_Traj_B.b_data_j[Test_Traj_B.b_k_h] = (Test_Traj_B.c_data
        [(Test_Traj_B.c_size[0] * Test_Traj_B.b_k_h + Test_Traj_B.delta_tmp) - 1]
        - x_data[(Test_Traj_B.c_data_tmp_b + Test_Traj_B.b_data_tmp) - 1] *
        Test_Traj_B.b_gamma_data[Test_Traj_B.loop_ub_tmp_c]) - x_data
        [(Test_Traj_B.c_data_tmp_b + Test_Traj_B.k_d) - 1] *
        Test_Traj_B.delta_data[Test_Traj_B.loop_ub_tmp_c];
    }

    for (Test_Traj_B.b_k_h = 0; Test_Traj_B.b_k_h < Test_Traj_B.loop_ub_f;
         Test_Traj_B.b_k_h++) {
      x_data[(Test_Traj_B.delta_tmp + x_size[0] * Test_Traj_B.b_k_h) - 1] =
        Test_Traj_B.b_data_j[Test_Traj_B.b_k_h];
    }
  }
}

static void Test_Traj_eye(real_T b_I[16])
{
  memset(&b_I[0], 0, sizeof(real_T) << 4U);
  b_I[0] = 1.0;
  b_I[5] = 1.0;
  b_I[10] = 1.0;
  b_I[15] = 1.0;
}

static void Test_Traj_mldivide_ph(const real_T A[16], real_T B[4])
{
  int32_T iy;
  int32_T jy;
  int32_T c;
  memcpy(&Test_Traj_B.c_A[0], &A[0], sizeof(real_T) << 4U);
  Test_Traj_B.b_ipiv[0] = 1;
  Test_Traj_B.b_ipiv[1] = 2;
  Test_Traj_B.b_ipiv[2] = 3;
  for (Test_Traj_B.b_j_ik = 0; Test_Traj_B.b_j_ik < 3; Test_Traj_B.b_j_ik++) {
    Test_Traj_B.c_hv = Test_Traj_B.b_j_ik * 5 + 2;
    Test_Traj_B.jj = Test_Traj_B.b_j_ik * 5;
    iy = 4 - Test_Traj_B.b_j_ik;
    Test_Traj_B.idxmax = 1;
    Test_Traj_B.ix_m = Test_Traj_B.c_hv - 2;
    Test_Traj_B.smax_j = fabs(Test_Traj_B.c_A[Test_Traj_B.jj]);
    for (Test_Traj_B.k_a = 2; Test_Traj_B.k_a <= iy; Test_Traj_B.k_a++) {
      Test_Traj_B.ix_m++;
      Test_Traj_B.s_gy = fabs(Test_Traj_B.c_A[Test_Traj_B.ix_m]);
      if (Test_Traj_B.s_gy > Test_Traj_B.smax_j) {
        Test_Traj_B.idxmax = Test_Traj_B.k_a;
        Test_Traj_B.smax_j = Test_Traj_B.s_gy;
      }
    }

    if (Test_Traj_B.c_A[(Test_Traj_B.c_hv + Test_Traj_B.idxmax) - 3] != 0.0) {
      if (Test_Traj_B.idxmax - 1 != 0) {
        Test_Traj_B.ix_m = Test_Traj_B.b_j_ik + Test_Traj_B.idxmax;
        Test_Traj_B.b_ipiv[Test_Traj_B.b_j_ik] = static_cast<int8_T>
          (Test_Traj_B.ix_m);
        iy = Test_Traj_B.ix_m - 1;
        Test_Traj_B.smax_j = Test_Traj_B.c_A[Test_Traj_B.b_j_ik];
        Test_Traj_B.c_A[Test_Traj_B.b_j_ik] = Test_Traj_B.c_A[iy];
        Test_Traj_B.c_A[iy] = Test_Traj_B.smax_j;
        Test_Traj_B.ix_m = Test_Traj_B.b_j_ik + 4;
        iy += 4;
        Test_Traj_B.smax_j = Test_Traj_B.c_A[Test_Traj_B.ix_m];
        Test_Traj_B.c_A[Test_Traj_B.ix_m] = Test_Traj_B.c_A[iy];
        Test_Traj_B.c_A[iy] = Test_Traj_B.smax_j;
        Test_Traj_B.ix_m += 4;
        iy += 4;
        Test_Traj_B.smax_j = Test_Traj_B.c_A[Test_Traj_B.ix_m];
        Test_Traj_B.c_A[Test_Traj_B.ix_m] = Test_Traj_B.c_A[iy];
        Test_Traj_B.c_A[iy] = Test_Traj_B.smax_j;
        Test_Traj_B.ix_m += 4;
        iy += 4;
        Test_Traj_B.smax_j = Test_Traj_B.c_A[Test_Traj_B.ix_m];
        Test_Traj_B.c_A[Test_Traj_B.ix_m] = Test_Traj_B.c_A[iy];
        Test_Traj_B.c_A[iy] = Test_Traj_B.smax_j;
      }

      iy = Test_Traj_B.c_hv - Test_Traj_B.b_j_ik;
      for (Test_Traj_B.ix_m = Test_Traj_B.c_hv; Test_Traj_B.ix_m <= iy + 2;
           Test_Traj_B.ix_m++) {
        Test_Traj_B.c_A[Test_Traj_B.ix_m - 1] /= Test_Traj_B.c_A[Test_Traj_B.jj];
      }
    }

    iy = 2 - Test_Traj_B.b_j_ik;
    jy = Test_Traj_B.jj + 4;
    for (Test_Traj_B.k_a = 0; Test_Traj_B.k_a <= iy; Test_Traj_B.k_a++) {
      if (Test_Traj_B.c_A[jy] != 0.0) {
        Test_Traj_B.smax_j = -Test_Traj_B.c_A[jy];
        Test_Traj_B.ix_m = Test_Traj_B.c_hv - 1;
        c = Test_Traj_B.jj - Test_Traj_B.b_j_ik;
        for (Test_Traj_B.idxmax = Test_Traj_B.jj + 6; Test_Traj_B.idxmax <= c +
             8; Test_Traj_B.idxmax++) {
          Test_Traj_B.c_A[Test_Traj_B.idxmax - 1] +=
            Test_Traj_B.c_A[Test_Traj_B.ix_m] * Test_Traj_B.smax_j;
          Test_Traj_B.ix_m++;
        }
      }

      jy += 4;
      Test_Traj_B.jj += 4;
    }
  }

  if (Test_Traj_B.b_ipiv[0] != 1) {
    Test_Traj_B.smax_j = B[0];
    Test_Traj_B.b_j_ik = Test_Traj_B.b_ipiv[0] - 1;
    B[0] = B[Test_Traj_B.b_j_ik];
    B[Test_Traj_B.b_j_ik] = Test_Traj_B.smax_j;
  }

  if (Test_Traj_B.b_ipiv[1] != 2) {
    Test_Traj_B.smax_j = B[1];
    Test_Traj_B.b_j_ik = Test_Traj_B.b_ipiv[1] - 1;
    B[1] = B[Test_Traj_B.b_j_ik];
    B[Test_Traj_B.b_j_ik] = Test_Traj_B.smax_j;
  }

  if (Test_Traj_B.b_ipiv[2] != 3) {
    Test_Traj_B.smax_j = B[2];
    Test_Traj_B.b_j_ik = Test_Traj_B.b_ipiv[2] - 1;
    B[2] = B[Test_Traj_B.b_j_ik];
    B[Test_Traj_B.b_j_ik] = Test_Traj_B.smax_j;
  }

  if (B[0] != 0.0) {
    for (Test_Traj_B.ix_m = 2; Test_Traj_B.ix_m < 5; Test_Traj_B.ix_m++) {
      B[Test_Traj_B.ix_m - 1] -= Test_Traj_B.c_A[Test_Traj_B.ix_m + -1] * B[0];
    }
  }

  if (B[1] != 0.0) {
    for (Test_Traj_B.ix_m = 3; Test_Traj_B.ix_m < 5; Test_Traj_B.ix_m++) {
      B[Test_Traj_B.ix_m - 1] -= Test_Traj_B.c_A[Test_Traj_B.ix_m + 3] * B[1];
    }
  }

  if (B[2] != 0.0) {
    for (Test_Traj_B.ix_m = 4; Test_Traj_B.ix_m < 5; Test_Traj_B.ix_m++) {
      B[3] -= B[2] * Test_Traj_B.c_A[11];
    }
  }

  if (B[3] != 0.0) {
    B[3] /= Test_Traj_B.c_A[15];
    for (Test_Traj_B.b_j_ik = 0; Test_Traj_B.b_j_ik < 3; Test_Traj_B.b_j_ik++) {
      B[Test_Traj_B.b_j_ik] -= Test_Traj_B.c_A[Test_Traj_B.b_j_ik + 12] * B[3];
    }
  }

  if (B[2] != 0.0) {
    B[2] /= Test_Traj_B.c_A[10];
    for (Test_Traj_B.b_j_ik = 0; Test_Traj_B.b_j_ik < 2; Test_Traj_B.b_j_ik++) {
      B[Test_Traj_B.b_j_ik] -= Test_Traj_B.c_A[Test_Traj_B.b_j_ik + 8] * B[2];
    }
  }

  if (B[1] != 0.0) {
    B[1] /= Test_Traj_B.c_A[5];
    for (Test_Traj_B.b_j_ik = 0; Test_Traj_B.b_j_ik < 1; Test_Traj_B.b_j_ik++) {
      B[0] -= B[1] * Test_Traj_B.c_A[4];
    }
  }

  if (B[0] != 0.0) {
    B[0] /= Test_Traj_B.c_A[0];
  }
}

static void Test_Traj_cycsympentdisolve_p(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size)
{
  boolean_T empty_non_axis_sizes;
  Test_Traj_B.loop_ub_tmp_p = (*b_size << 2) - 1;
  if (0 <= Test_Traj_B.loop_ub_tmp_p) {
    memset(&Test_Traj_B.u_data_c[0], 0, (Test_Traj_B.loop_ub_tmp_p + 1) * sizeof
           (real_T));
  }

  Test_Traj_B.u_data_c[0] = 1.0;
  Test_Traj_B.u_data_c[*b_size + 1] = 1.0;
  Test_Traj_B.m_bv = *b_size << 1;
  Test_Traj_B.u_data_c[(*b_size + Test_Traj_B.m_bv) - 2] = 1.0;
  Test_Traj_B.u_data_c[(*b_size + *b_size * 3) - 1] = 1.0;
  if (*b_size != 0) {
    Test_Traj_B.inner_i = *b_size;
  } else if (*b_size != 0) {
    Test_Traj_B.inner_i = *b_size;
  } else {
    Test_Traj_B.inner_i = 0;
  }

  empty_non_axis_sizes = (Test_Traj_B.inner_i == 0);
  if (empty_non_axis_sizes || (*b_size != 0)) {
    Test_Traj_B.result = 4;
  } else {
    Test_Traj_B.result = 0;
  }

  if (empty_non_axis_sizes || (*b_size != 0)) {
    Test_Traj_B.inner_o = 1;
  } else {
    Test_Traj_B.inner_o = 0;
  }

  Test_Traj_B.result_size[0] = Test_Traj_B.inner_i;
  Test_Traj_B.result_size[1] = Test_Traj_B.result + Test_Traj_B.inner_o;
  Test_Traj_B.result *= Test_Traj_B.inner_i;
  Test_Traj_B.inner_o = Test_Traj_B.inner_i * Test_Traj_B.inner_o - 1;
  if (0 <= Test_Traj_B.result - 1) {
    memcpy(&Test_Traj_B.result_data_l[0], &Test_Traj_B.u_data_c[0],
           Test_Traj_B.result * sizeof(real_T));
  }

  for (Test_Traj_B.inner_i = 0; Test_Traj_B.inner_i <= Test_Traj_B.inner_o;
       Test_Traj_B.inner_i++) {
    Test_Traj_B.result_data_l[Test_Traj_B.inner_i + Test_Traj_B.result] =
      b_data[Test_Traj_B.inner_i];
  }

  Test_Traj_sympentdisolve_ph(d_data, e_data, f_data, Test_Traj_B.result_data_l,
    Test_Traj_B.result_size, Test_Traj_B.zy_data, Test_Traj_B.zy_size);
  Test_Traj_B.result = Test_Traj_B.zy_size[0];
  for (Test_Traj_B.inner_i = 0; Test_Traj_B.inner_i < Test_Traj_B.result;
       Test_Traj_B.inner_i++) {
    Test_Traj_B.u_data_c[Test_Traj_B.inner_i] =
      Test_Traj_B.zy_data[Test_Traj_B.inner_i];
    Test_Traj_B.u_data_c[Test_Traj_B.inner_i + Test_Traj_B.result] =
      Test_Traj_B.zy_data[Test_Traj_B.inner_i + Test_Traj_B.zy_size[0]];
  }

  for (Test_Traj_B.inner_i = 0; Test_Traj_B.inner_i < Test_Traj_B.result;
       Test_Traj_B.inner_i++) {
    Test_Traj_B.u_data_c[Test_Traj_B.inner_i + (Test_Traj_B.result << 1)] =
      Test_Traj_B.zy_data[(Test_Traj_B.zy_size[0] << 1) + Test_Traj_B.inner_i];
  }

  for (Test_Traj_B.inner_i = 0; Test_Traj_B.inner_i < Test_Traj_B.result;
       Test_Traj_B.inner_i++) {
    Test_Traj_B.u_data_c[Test_Traj_B.inner_i + Test_Traj_B.result * 3] =
      Test_Traj_B.zy_data[Test_Traj_B.zy_size[0] * 3 + Test_Traj_B.inner_i];
  }

  Test_Traj_B.result = *b_size;
  if (0 <= Test_Traj_B.loop_ub_tmp_p) {
    memset(&Test_Traj_B.v_data_o[0], 0, (Test_Traj_B.loop_ub_tmp_p + 1) * sizeof
           (real_T));
  }

  Test_Traj_B.bkj_g = f_data[*b_size - 2];
  Test_Traj_B.v_data_o[*b_size - 2] = Test_Traj_B.bkj_g;
  Test_Traj_B.v_data_tmp = e_data[*b_size - 1];
  Test_Traj_B.v_data_o[*b_size - 1] = Test_Traj_B.v_data_tmp;
  Test_Traj_B.v_data_tmp_l = f_data[*b_size - 1];
  Test_Traj_B.v_data_o[(*b_size + *b_size) - 1] = Test_Traj_B.v_data_tmp_l;
  Test_Traj_B.v_data_o[Test_Traj_B.m_bv] = Test_Traj_B.bkj_g;
  Test_Traj_B.v_data_o[*b_size * 3] = Test_Traj_B.v_data_tmp;
  Test_Traj_B.v_data_o[*b_size * 3 + 1] = Test_Traj_B.v_data_tmp_l;
  Test_Traj_B.inner_i = *b_size - 1;
  Test_Traj_B.inner_o = *b_size - 1;
  for (Test_Traj_B.loop_ub_tmp_p = 0; Test_Traj_B.loop_ub_tmp_p < 4;
       Test_Traj_B.loop_ub_tmp_p++) {
    Test_Traj_B.coffset_i = (Test_Traj_B.loop_ub_tmp_p << 2) - 1;
    Test_Traj_B.boffset_g = Test_Traj_B.loop_ub_tmp_p * Test_Traj_B.zy_size[0] -
      1;
    Test_Traj_B.y[Test_Traj_B.coffset_i + 1] = 0.0;
    Test_Traj_B.y[Test_Traj_B.coffset_i + 2] = 0.0;
    Test_Traj_B.y[Test_Traj_B.coffset_i + 3] = 0.0;
    Test_Traj_B.y[Test_Traj_B.coffset_i + 4] = 0.0;
    for (Test_Traj_B.m_bv = 0; Test_Traj_B.m_bv <= Test_Traj_B.inner_i;
         Test_Traj_B.m_bv++) {
      Test_Traj_B.bkj_g = Test_Traj_B.u_data_c[(Test_Traj_B.boffset_g +
        Test_Traj_B.m_bv) + 1];
      Test_Traj_B.y[Test_Traj_B.coffset_i + 1] +=
        Test_Traj_B.v_data_o[Test_Traj_B.m_bv] * Test_Traj_B.bkj_g;
      Test_Traj_B.y[Test_Traj_B.coffset_i + 2] +=
        Test_Traj_B.v_data_o[Test_Traj_B.result + Test_Traj_B.m_bv] *
        Test_Traj_B.bkj_g;
      Test_Traj_B.y[Test_Traj_B.coffset_i + 3] += Test_Traj_B.v_data_o
        [(Test_Traj_B.result << 1) + Test_Traj_B.m_bv] * Test_Traj_B.bkj_g;
      Test_Traj_B.y[Test_Traj_B.coffset_i + 4] += Test_Traj_B.v_data_o[3 *
        Test_Traj_B.result + Test_Traj_B.m_bv] * Test_Traj_B.bkj_g;
    }

    Test_Traj_B.y_j[Test_Traj_B.loop_ub_tmp_p] = 0.0;
  }

  for (Test_Traj_B.m_bv = 0; Test_Traj_B.m_bv <= Test_Traj_B.inner_o;
       Test_Traj_B.m_bv++) {
    Test_Traj_B.bkj_g = Test_Traj_B.zy_data[(Test_Traj_B.zy_size[0] << 2) +
      Test_Traj_B.m_bv];
    Test_Traj_B.y_j[0] += Test_Traj_B.v_data_o[Test_Traj_B.m_bv] *
      Test_Traj_B.bkj_g;
    Test_Traj_B.y_j[1] += Test_Traj_B.v_data_o[Test_Traj_B.result +
      Test_Traj_B.m_bv] * Test_Traj_B.bkj_g;
    Test_Traj_B.y_j[2] += Test_Traj_B.v_data_o[(Test_Traj_B.result << 1) +
      Test_Traj_B.m_bv] * Test_Traj_B.bkj_g;
    Test_Traj_B.y_j[3] += Test_Traj_B.v_data_o[3 * Test_Traj_B.result +
      Test_Traj_B.m_bv] * Test_Traj_B.bkj_g;
  }

  Test_Traj_eye(Test_Traj_B.dv10);
  for (Test_Traj_B.inner_i = 0; Test_Traj_B.inner_i < 16; Test_Traj_B.inner_i++)
  {
    Test_Traj_B.dv11[Test_Traj_B.inner_i] = Test_Traj_B.dv10[Test_Traj_B.inner_i]
      + Test_Traj_B.y[Test_Traj_B.inner_i];
  }

  Test_Traj_mldivide_ph(Test_Traj_B.dv11, Test_Traj_B.y_j);
  Test_Traj_B.m_bv = Test_Traj_B.zy_size[0] - 1;
  for (Test_Traj_B.loop_ub_tmp_p = 0; Test_Traj_B.loop_ub_tmp_p <=
       Test_Traj_B.m_bv; Test_Traj_B.loop_ub_tmp_p++) {
    Test_Traj_B.c_data_a[Test_Traj_B.loop_ub_tmp_p] =
      ((Test_Traj_B.u_data_c[Test_Traj_B.zy_size[0] + Test_Traj_B.loop_ub_tmp_p]
        * Test_Traj_B.y_j[1] + Test_Traj_B.u_data_c[Test_Traj_B.loop_ub_tmp_p] *
        Test_Traj_B.y_j[0]) + Test_Traj_B.u_data_c[(Test_Traj_B.zy_size[0] << 1)
       + Test_Traj_B.loop_ub_tmp_p] * Test_Traj_B.y_j[2]) +
      Test_Traj_B.u_data_c[3 * Test_Traj_B.zy_size[0] +
      Test_Traj_B.loop_ub_tmp_p] * Test_Traj_B.y_j[3];
  }

  Test_Traj_B.result = Test_Traj_B.zy_size[0];
  *x_size = Test_Traj_B.zy_size[0];
  for (Test_Traj_B.inner_i = 0; Test_Traj_B.inner_i < Test_Traj_B.result;
       Test_Traj_B.inner_i++) {
    x_data[Test_Traj_B.inner_i] = Test_Traj_B.zy_data[(Test_Traj_B.zy_size[0] <<
      2) + Test_Traj_B.inner_i] - Test_Traj_B.c_data_a[Test_Traj_B.inner_i];
  }
}

static void Test_Traj_sympentdisolve_p(const real_T d_data[], const real_T
  e_data[], const real_T f_data[], const real_T b_data[], const int32_T *b_size,
  real_T x_data[], int32_T *x_size)
{
  int32_T acoef;
  int32_T bcoef;
  int32_T loop_ub;
  int32_T csz_idx_0;
  *x_size = *b_size;
  if (0 <= *b_size - 1) {
    memset(&x_data[0], 0, *b_size * sizeof(real_T));
  }

  if (0 <= *b_size - 1) {
    memset(&Test_Traj_B.alpha_data_lg[0], 0, *b_size * sizeof(real_T));
  }

  loop_ub = *b_size - 1;
  if (0 <= loop_ub - 1) {
    memset(&Test_Traj_B.b_gamma_data_f[0], 0, loop_ub * sizeof(real_T));
  }

  loop_ub = *b_size - 2;
  if (0 <= loop_ub - 1) {
    memset(&Test_Traj_B.delta_data_e[0], 0, loop_ub * sizeof(real_T));
  }

  Test_Traj_B.alpha_data_lg[0] = d_data[0];
  Test_Traj_B.b_gamma_data_f[0] = e_data[0] / d_data[0];
  Test_Traj_B.delta_data_e[0] = f_data[0] / d_data[0];
  Test_Traj_B.alpha_data_lg[1] = d_data[1] - e_data[0] *
    Test_Traj_B.b_gamma_data_f[0];
  Test_Traj_B.b_gamma_data_f[1] = (e_data[1] - f_data[0] *
    Test_Traj_B.b_gamma_data_f[0]) / Test_Traj_B.alpha_data_lg[1];
  Test_Traj_B.delta_data_e[1] = f_data[1] / Test_Traj_B.alpha_data_lg[1];
  csz_idx_0 = static_cast<int32_T>((static_cast<real_T>(*b_size) - 2.0) + -2.0)
    - 1;
  for (loop_ub = 0; loop_ub <= csz_idx_0; loop_ub++) {
    acoef = static_cast<int32_T>((static_cast<real_T>(loop_ub) + 3.0) - 2.0) - 1;
    bcoef = static_cast<int32_T>((static_cast<real_T>(loop_ub) + 3.0) - 1.0) - 1;
    Test_Traj_B.alpha_data_lg[loop_ub + 2] = (d_data[loop_ub + 2] - f_data[acoef]
      * Test_Traj_B.delta_data_e[acoef]) - Test_Traj_B.b_gamma_data_f[bcoef] *
      Test_Traj_B.b_gamma_data_f[bcoef] * Test_Traj_B.alpha_data_lg[bcoef];
    Test_Traj_B.b_gamma_data_tmp_p = Test_Traj_B.alpha_data_lg[loop_ub + 2];
    Test_Traj_B.b_gamma_data_f[loop_ub + 2] = (e_data[loop_ub + 2] -
      f_data[bcoef] * Test_Traj_B.b_gamma_data_f[bcoef]) /
      Test_Traj_B.b_gamma_data_tmp_p;
    Test_Traj_B.delta_data_e[loop_ub + 2] = f_data[loop_ub + 2] /
      Test_Traj_B.b_gamma_data_tmp_p;
  }

  Test_Traj_B.alpha_data_tmp_c = Test_Traj_B.b_gamma_data_f[*b_size - 3];
  Test_Traj_B.alpha_data_lg[*b_size - 2] = (d_data[*b_size - 2] - f_data[*b_size
    - 4] * Test_Traj_B.delta_data_e[*b_size - 4]) - Test_Traj_B.alpha_data_tmp_c
    * Test_Traj_B.alpha_data_tmp_c * Test_Traj_B.alpha_data_lg[*b_size - 3];
  Test_Traj_B.b_gamma_data_tmp_p = f_data[*b_size - 3];
  Test_Traj_B.b_gamma_data_tmp_l = Test_Traj_B.alpha_data_lg[*b_size - 2];
  Test_Traj_B.b_gamma_data_f[*b_size - 2] = (e_data[*b_size - 2] -
    Test_Traj_B.b_gamma_data_tmp_p * Test_Traj_B.alpha_data_tmp_c) /
    Test_Traj_B.b_gamma_data_tmp_l;
  Test_Traj_B.alpha_data_tmp_c = Test_Traj_B.b_gamma_data_f[*b_size - 2];
  Test_Traj_B.alpha_data_lg[*b_size - 1] = (d_data[*b_size - 1] -
    Test_Traj_B.b_gamma_data_tmp_p * Test_Traj_B.delta_data_e[*b_size - 3]) -
    Test_Traj_B.alpha_data_tmp_c * Test_Traj_B.alpha_data_tmp_c *
    Test_Traj_B.b_gamma_data_tmp_l;
  if (0 <= *b_size - 1) {
    memset(&Test_Traj_B.z_data_f[0], 0, *b_size * sizeof(real_T));
  }

  Test_Traj_B.z_data_f[0] = b_data[0];
  Test_Traj_B.z_data_f[1] = b_data[1] - Test_Traj_B.b_gamma_data_f[0] * b_data[0];
  csz_idx_0 = *b_size - 3;
  for (loop_ub = 0; loop_ub <= csz_idx_0; loop_ub++) {
    acoef = static_cast<int32_T>((static_cast<real_T>(loop_ub) + 3.0) - 1.0) - 1;
    bcoef = static_cast<int32_T>((static_cast<real_T>(loop_ub) + 3.0) - 2.0) - 1;
    Test_Traj_B.z_data_f[loop_ub + 2] = (b_data[loop_ub + 2] -
      Test_Traj_B.b_gamma_data_f[acoef] * Test_Traj_B.z_data_f[acoef]) -
      Test_Traj_B.delta_data_e[bcoef] * Test_Traj_B.z_data_f[bcoef];
  }

  if (*b_size == 1) {
    csz_idx_0 = *b_size;
  } else {
    csz_idx_0 = *b_size;
  }

  if (csz_idx_0 != 0) {
    acoef = (*b_size != 1);
    bcoef = (*b_size != 1);
    for (loop_ub = 0; loop_ub < csz_idx_0; loop_ub++) {
      Test_Traj_B.c_data_d[loop_ub] = Test_Traj_B.z_data_f[acoef * loop_ub] /
        Test_Traj_B.alpha_data_lg[bcoef * loop_ub];
    }
  }

  x_data[*b_size - 1] = Test_Traj_B.c_data_d[*b_size - 1];
  x_data[*b_size - 2] = Test_Traj_B.c_data_d[*b_size - 2] -
    Test_Traj_B.alpha_data_tmp_c * x_data[*b_size - 1];
  csz_idx_0 = static_cast<int32_T>(((-1.0 - (static_cast<real_T>(*b_size) - 2.0))
    + 1.0) / -1.0) - 1;
  for (loop_ub = 0; loop_ub <= csz_idx_0; loop_ub++) {
    Test_Traj_B.b_gamma_data_tmp_p = (static_cast<real_T>(*b_size) - 2.0) + -
      static_cast<real_T>(loop_ub);
    acoef = static_cast<int32_T>(Test_Traj_B.b_gamma_data_tmp_p) - 1;
    x_data[acoef] = (Test_Traj_B.c_data_d[acoef] - x_data[static_cast<int32_T>
                     (Test_Traj_B.b_gamma_data_tmp_p + 1.0) - 1] *
                     Test_Traj_B.b_gamma_data_f[acoef]) - x_data
      [static_cast<int32_T>(Test_Traj_B.b_gamma_data_tmp_p + 2.0) - 1] *
      Test_Traj_B.delta_data_e[acoef];
  }
}

static void Test_Traj_AccumArrayScalarVal(const real_T subs_data[], const
  int32_T subs_size[2], real_T val, const int32_T sz[2], real_T A_data[],
  int32_T A_size[2])
{
  int32_T nsubs;
  int32_T b_k;
  int32_T counts_data_tmp;
  int32_T loop_ub_tmp;
  nsubs = subs_size[0] - 1;
  loop_ub_tmp = sz[0] * sz[1] - 1;
  if (0 <= loop_ub_tmp) {
    memset(&Test_Traj_B.counts_data[0], 0, (loop_ub_tmp + 1) * sizeof(int32_T));
  }

  for (b_k = 0; b_k <= nsubs; b_k++) {
    counts_data_tmp = ((static_cast<int32_T>(subs_data[b_k + subs_size[0]]) - 1)
                       * sz[0] + static_cast<int32_T>(subs_data[b_k])) - 1;
    Test_Traj_B.counts_data[counts_data_tmp]++;
  }

  A_size[0] = sz[0];
  A_size[1] = sz[1];
  for (b_k = 0; b_k <= loop_ub_tmp; b_k++) {
    if (Test_Traj_B.counts_data[b_k] == 0) {
      A_data[b_k] = 0.0;
    } else {
      A_data[b_k] = static_cast<real_T>(Test_Traj_B.counts_data[b_k]) * val;
    }
  }
}

static void Test_Traj_accumarray_p(const real_T subs_data[], const int32_T
  subs_size[2], const real_T val_data[], const int32_T *val_size, const real_T
  sz[2], real_T A_data[], int32_T A_size[2])
{
  Test_Traj_B.SZ[0] = static_cast<int32_T>(sz[0]);
  Test_Traj_B.SZ[1] = static_cast<int32_T>(sz[1]);
  if (*val_size == 1) {
    Test_Traj_AccumArrayScalarVal(subs_data, subs_size, val_data[0],
      Test_Traj_B.SZ, A_data, A_size);
  } else {
    Test_Traj_B.nsubs = subs_size[0] - 1;
    Test_Traj_B.loop_ub_tmp_j = Test_Traj_B.SZ[0] * Test_Traj_B.SZ[1] - 1;
    for (Test_Traj_B.A_data_tmp = 0; Test_Traj_B.A_data_tmp <=
         Test_Traj_B.loop_ub_tmp_j; Test_Traj_B.A_data_tmp++) {
      Test_Traj_B.filled_data[Test_Traj_B.A_data_tmp] = true;
    }

    A_size[0] = Test_Traj_B.SZ[0];
    A_size[1] = Test_Traj_B.SZ[1];
    if (0 <= Test_Traj_B.loop_ub_tmp_j) {
      memset(&A_data[0], 0, (Test_Traj_B.loop_ub_tmp_j + 1) * sizeof(real_T));
    }

    for (Test_Traj_B.loop_ub_tmp_j = 0; Test_Traj_B.loop_ub_tmp_j <=
         Test_Traj_B.nsubs; Test_Traj_B.loop_ub_tmp_j++) {
      Test_Traj_B.s_idx_1_i = subs_data[Test_Traj_B.loop_ub_tmp_j + subs_size[0]];
      Test_Traj_B.A_data_tmp = static_cast<int32_T>(Test_Traj_B.s_idx_1_i) - 1;
      Test_Traj_B.i13 = static_cast<int32_T>(subs_data[Test_Traj_B.loop_ub_tmp_j]);
      Test_Traj_B.i14 = (Test_Traj_B.A_data_tmp * Test_Traj_B.SZ[0] +
                         Test_Traj_B.i13) - 1;
      if (Test_Traj_B.filled_data[Test_Traj_B.i14]) {
        Test_Traj_B.filled_data[Test_Traj_B.i14] = false;
        A_data[(static_cast<int32_T>(subs_data[Test_Traj_B.loop_ub_tmp_j]) +
                A_size[0] * (static_cast<int32_T>(Test_Traj_B.s_idx_1_i) - 1)) -
          1] = val_data[Test_Traj_B.loop_ub_tmp_j];
      } else {
        Test_Traj_B.A_data_tmp = (Test_Traj_B.A_data_tmp * A_size[0] +
          Test_Traj_B.i13) - 1;
        A_data[Test_Traj_B.A_data_tmp] += val_data[Test_Traj_B.loop_ub_tmp_j];
      }
    }
  }
}

static void Test_Traj_diag(const real_T v_data[], const int32_T v_size[2],
  real_T d_data[], int32_T *d_size)
{
  int32_T dlen;
  int32_T k;
  if ((v_size[0] == 1) && (v_size[1] == 1)) {
    *d_size = 1;
    d_data[0] = v_data[0];
  } else if (0 > v_size[1]) {
    *d_size = 0;
  } else {
    if (0 < v_size[1]) {
      if (v_size[0] < v_size[1]) {
        dlen = v_size[0];
      } else {
        dlen = v_size[1];
      }
    } else {
      dlen = 0;
    }

    *d_size = dlen;
    for (k = 0; k < dlen; k++) {
      d_data[k] = v_data[v_size[0] * k + k];
    }
  }
}

static void Test_Traj_diag_p(const real_T v_data[], const int32_T *v_size,
  real_T d_data[], int32_T d_size[2])
{
  int32_T nv;
  int32_T loop_ub;
  nv = *v_size - 1;
  d_size[0] = *v_size;
  d_size[1] = *v_size;
  loop_ub = *v_size * *v_size - 1;
  if (0 <= loop_ub) {
    memset(&d_data[0], 0, (loop_ub + 1) * sizeof(real_T));
  }

  for (loop_ub = 0; loop_ub <= nv; loop_ub++) {
    d_data[loop_ub + *v_size * loop_ub] = v_data[loop_ub];
  }
}

static real_T Test_Traj_xnrm2_ph(int32_T n, const real_T x_data[], int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      Test_Traj_B.scale_d = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (k = ix0; k < kend; k++) {
        Test_Traj_B.absxk_i = fabs(x_data[k - 1]);
        if (Test_Traj_B.absxk_i > Test_Traj_B.scale_d) {
          Test_Traj_B.t_h = Test_Traj_B.scale_d / Test_Traj_B.absxk_i;
          y = y * Test_Traj_B.t_h * Test_Traj_B.t_h + 1.0;
          Test_Traj_B.scale_d = Test_Traj_B.absxk_i;
        } else {
          Test_Traj_B.t_h = Test_Traj_B.absxk_i / Test_Traj_B.scale_d;
          y += Test_Traj_B.t_h * Test_Traj_B.t_h;
        }
      }

      y = Test_Traj_B.scale_d * sqrt(y);
    }
  }

  return y;
}

static int32_T Test_Traj_ixamax(int32_T n, const real_T x_data[], int32_T ix0)
{
  int32_T idxmax;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T k;
  if (n < 1) {
    idxmax = 0;
  } else {
    idxmax = 1;
    if (n > 1) {
      ix = ix0 - 1;
      smax = fabs(x_data[ix0 - 1]);
      for (k = 2; k <= n; k++) {
        ix++;
        s = fabs(x_data[ix]);
        if (s > smax) {
          idxmax = k;
          smax = s;
        }
      }
    }
  }

  return idxmax;
}

static void Test_Traj_xswap(int32_T n, const real_T x_data[], const int32_T
  x_size[2], int32_T ix0, int32_T iy0, real_T b_x_data[], int32_T b_x_size[2])
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  int32_T loop_ub_tmp;
  loop_ub_tmp = x_size[0] * x_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&Test_Traj_B.c_x_data_o[0], &x_data[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }

  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < n; k++) {
    Test_Traj_B.temp_l = Test_Traj_B.c_x_data_o[ix];
    Test_Traj_B.c_x_data_o[ix] = Test_Traj_B.c_x_data_o[iy];
    Test_Traj_B.c_x_data_o[iy] = Test_Traj_B.temp_l;
    ix++;
    iy++;
  }

  b_x_size[0] = x_size[0];
  b_x_size[1] = x_size[1];
  if (0 <= loop_ub_tmp) {
    memcpy(&b_x_data[0], &Test_Traj_B.c_x_data_o[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }
}

static void Test_Traj_xzlarfg_ph(int32_T n, real_T alpha1, const real_T x_data[],
  const int32_T x_size[2], int32_T ix0, real_T *b_alpha1, real_T b_x_data[],
  int32_T b_x_size[2], real_T *tau)
{
  int32_T loop_ub_tmp;
  int32_T b_tmp;
  b_x_size[0] = x_size[0];
  b_x_size[1] = x_size[1];
  loop_ub_tmp = x_size[0] * x_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&b_x_data[0], &x_data[0], (loop_ub_tmp + 1) * sizeof(real_T));
  }

  *b_alpha1 = alpha1;
  *tau = 0.0;
  if (n > 0) {
    Test_Traj_B.xnorm_h = Test_Traj_xnrm2_ph(n - 1, x_data, ix0);
    if (Test_Traj_B.xnorm_h != 0.0) {
      Test_Traj_B.xnorm_h = Test_Traj_rt_hypotd_snf(alpha1, Test_Traj_B.xnorm_h);
      if (alpha1 >= 0.0) {
        Test_Traj_B.xnorm_h = -Test_Traj_B.xnorm_h;
      }

      if (fabs(Test_Traj_B.xnorm_h) < 1.0020841800044864E-292) {
        Test_Traj_B.knt_e = -1;
        b_tmp = ix0 + n;
        do {
          Test_Traj_B.knt_e++;
          for (loop_ub_tmp = ix0; loop_ub_tmp <= b_tmp - 2; loop_ub_tmp++) {
            b_x_data[loop_ub_tmp - 1] *= 9.9792015476736E+291;
          }

          Test_Traj_B.xnorm_h *= 9.9792015476736E+291;
          *b_alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(Test_Traj_B.xnorm_h) >= 1.0020841800044864E-292));

        Test_Traj_B.xnorm_h = Test_Traj_rt_hypotd_snf(*b_alpha1,
          Test_Traj_xnrm2_ph(n - 1, b_x_data, ix0));
        if (*b_alpha1 >= 0.0) {
          Test_Traj_B.xnorm_h = -Test_Traj_B.xnorm_h;
        }

        *tau = (Test_Traj_B.xnorm_h - *b_alpha1) / Test_Traj_B.xnorm_h;
        *b_alpha1 = 1.0 / (*b_alpha1 - Test_Traj_B.xnorm_h);
        for (loop_ub_tmp = ix0; loop_ub_tmp <= b_tmp - 2; loop_ub_tmp++) {
          b_x_data[loop_ub_tmp - 1] *= *b_alpha1;
        }

        for (loop_ub_tmp = 0; loop_ub_tmp <= Test_Traj_B.knt_e; loop_ub_tmp++) {
          Test_Traj_B.xnorm_h *= 1.0020841800044864E-292;
        }

        *b_alpha1 = Test_Traj_B.xnorm_h;
      } else {
        *tau = (Test_Traj_B.xnorm_h - alpha1) / Test_Traj_B.xnorm_h;
        *b_alpha1 = 1.0 / (alpha1 - Test_Traj_B.xnorm_h);
        b_x_size[0] = x_size[0];
        b_x_size[1] = x_size[1];
        if (0 <= loop_ub_tmp) {
          memcpy(&b_x_data[0], &x_data[0], (loop_ub_tmp + 1) * sizeof(real_T));
        }

        Test_Traj_B.knt_e = ix0 + n;
        for (loop_ub_tmp = ix0; loop_ub_tmp <= Test_Traj_B.knt_e - 2;
             loop_ub_tmp++) {
          b_x_data[loop_ub_tmp - 1] *= *b_alpha1;
        }

        *b_alpha1 = Test_Traj_B.xnorm_h;
      }
    }
  }
}

static void Test_Traj_ilazlc(int32_T m, int32_T n, const real_T A_data[], const
  int32_T A_size[2], int32_T ia0, int32_T lda, int32_T *j, real_T b_A_data[],
  int32_T b_A_size[2])
{
  int32_T coltop;
  int32_T ia;
  int32_T exitg1;
  boolean_T exitg2;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  coltop = A_size[0] * A_size[1] - 1;
  if (0 <= coltop) {
    memcpy(&b_A_data[0], &A_data[0], (coltop + 1) * sizeof(real_T));
  }

  *j = n;
  exitg2 = false;
  while ((!exitg2) && (*j > 0)) {
    coltop = (*j - 1) * lda + ia0;
    ia = coltop;
    do {
      exitg1 = 0;
      if (ia <= (coltop + m) - 1) {
        if (A_data[ia - 1] != 0.0) {
          exitg1 = 1;
        } else {
          ia++;
        }
      } else {
        (*j)--;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }
}

static void Test_Traj_xgemv(int32_T m, int32_T n, const real_T A_data[], int32_T
  ia0, int32_T lda, const real_T x_data[], int32_T ix0, const real_T y_data[],
  const int32_T *y_size, real_T b_y_data[], int32_T *b_y_size)
{
  int32_T d;
  int32_T ia;
  int32_T loop_ub;
  if (0 <= *y_size - 1) {
    memcpy(&Test_Traj_B.b_y_data[0], &y_data[0], *y_size * sizeof(real_T));
  }

  if ((m == 0) || (n == 0)) {
  } else {
    if (0 <= n - 1) {
      memset(&Test_Traj_B.b_y_data[0], 0, n * sizeof(real_T));
    }

    Test_Traj_B.iy = 0;
    Test_Traj_B.b_a2 = (n - 1) * lda + ia0;
    for (loop_ub = ia0; lda < 0 ? loop_ub >= Test_Traj_B.b_a2 : loop_ub <=
         Test_Traj_B.b_a2; loop_ub += lda) {
      Test_Traj_B.ix_o = ix0 - 1;
      Test_Traj_B.c_o = 0.0;
      d = loop_ub + m;
      for (ia = loop_ub; ia < d; ia++) {
        Test_Traj_B.c_o += A_data[ia - 1] * x_data[Test_Traj_B.ix_o];
        Test_Traj_B.ix_o++;
      }

      Test_Traj_B.b_y_data[Test_Traj_B.iy] += Test_Traj_B.c_o;
      Test_Traj_B.iy++;
    }
  }

  *b_y_size = *y_size;
  if (0 <= *y_size - 1) {
    memcpy(&b_y_data[0], &Test_Traj_B.b_y_data[0], *y_size * sizeof(real_T));
  }
}

static void Test_Traj_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y_data[], const real_T A_data[], const int32_T A_size[2], int32_T
  ia0, int32_T lda, real_T b_A_data[], int32_T b_A_size[2])
{
  int32_T j;
  int32_T c;
  int32_T ijA;
  int32_T loop_ub_tmp;
  loop_ub_tmp = A_size[0] * A_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&Test_Traj_B.b_A_data_p[0], &A_data[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }

  if (!(alpha1 == 0.0)) {
    Test_Traj_B.jA_k = ia0;
    Test_Traj_B.jy_o = 0;
    for (j = 0; j < n; j++) {
      if (y_data[Test_Traj_B.jy_o] != 0.0) {
        Test_Traj_B.temp_m = y_data[Test_Traj_B.jy_o] * alpha1;
        Test_Traj_B.ix_do = ix0 - 1;
        c = (m + Test_Traj_B.jA_k) - 1;
        for (ijA = Test_Traj_B.jA_k; ijA <= c; ijA++) {
          Test_Traj_B.b_A_data_p[ijA - 1] +=
            Test_Traj_B.b_A_data_p[Test_Traj_B.ix_do] * Test_Traj_B.temp_m;
          Test_Traj_B.ix_do++;
        }
      }

      Test_Traj_B.jy_o++;
      Test_Traj_B.jA_k += lda;
    }
  }

  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  if (0 <= loop_ub_tmp) {
    memcpy(&b_A_data[0], &Test_Traj_B.b_A_data_p[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }
}

static void Test_Traj_xzlarf_phmyulb(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc,
  real_T work_data[], int32_T *work_size, real_T b_C_data[], int32_T b_C_size[2])
{
  b_C_size[0] = C_size[0];
  b_C_size[1] = C_size[1];
  Test_Traj_B.i_h = C_size[0] * C_size[1] - 1;
  if (0 <= Test_Traj_B.i_h) {
    memcpy(&b_C_data[0], &C_data[0], (Test_Traj_B.i_h + 1) * sizeof(real_T));
  }

  if (tau != 0.0) {
    Test_Traj_B.lastv = m;
    Test_Traj_B.i_h = (iv0 + m) - 2;
    while ((Test_Traj_B.lastv > 0) && (C_data[Test_Traj_B.i_h] == 0.0)) {
      Test_Traj_B.lastv--;
      Test_Traj_B.i_h--;
    }

    Test_Traj_ilazlc(Test_Traj_B.lastv, n, C_data, C_size, ic0, ldc,
                     &Test_Traj_B.lastc, Test_Traj_B.d_C_data,
                     Test_Traj_B.d_C_size);
    b_C_size[0] = Test_Traj_B.d_C_size[0];
    b_C_size[1] = Test_Traj_B.d_C_size[1];
    Test_Traj_B.i_h = Test_Traj_B.d_C_size[0] * Test_Traj_B.d_C_size[1] - 1;
    if (0 <= Test_Traj_B.i_h) {
      memcpy(&b_C_data[0], &Test_Traj_B.d_C_data[0], (Test_Traj_B.i_h + 1) *
             sizeof(real_T));
    }
  } else {
    Test_Traj_B.lastv = 0;
    Test_Traj_B.lastc = 0;
  }

  if (Test_Traj_B.lastv > 0) {
    Test_Traj_B.work_size_l = *work_size;
    Test_Traj_B.i_h = *work_size;
    if (0 <= Test_Traj_B.i_h - 1) {
      memcpy(&Test_Traj_B.work_data_i[0], &work_data[0], Test_Traj_B.i_h *
             sizeof(real_T));
    }

    Test_Traj_xgemv(Test_Traj_B.lastv, Test_Traj_B.lastc, b_C_data, ic0, ldc,
                    b_C_data, iv0, Test_Traj_B.work_data_i,
                    &Test_Traj_B.work_size_l, work_data, work_size);
    Test_Traj_B.b_C_size[0] = b_C_size[0];
    Test_Traj_B.b_C_size[1] = b_C_size[1];
    Test_Traj_B.i_h = b_C_size[0] * b_C_size[1];
    if (0 <= Test_Traj_B.i_h - 1) {
      memcpy(&Test_Traj_B.b_C_data_ib[0], &b_C_data[0], Test_Traj_B.i_h * sizeof
             (real_T));
    }

    Test_Traj_xgerc(Test_Traj_B.lastv, Test_Traj_B.lastc, -tau, iv0, work_data,
                    Test_Traj_B.b_C_data_ib, Test_Traj_B.b_C_size, ic0, ldc,
                    b_C_data, b_C_size);
  }
}

static void Test_Traj_qrpf_p(const real_T A_data[], const int32_T A_size[2],
  int32_T m, int32_T n, real_T tau_data[], const int32_T jpvt_data[], const
  int32_T jpvt_size[2], real_T b_A_data[], int32_T b_A_size[2], int32_T
  b_jpvt_data[], int32_T b_jpvt_size[2])
{
  b_jpvt_size[0] = 1;
  b_jpvt_size[1] = jpvt_size[1];
  Test_Traj_B.itemp = jpvt_size[0] * jpvt_size[1] - 1;
  if (0 <= Test_Traj_B.itemp) {
    memcpy(&b_jpvt_data[0], &jpvt_data[0], (Test_Traj_B.itemp + 1) * sizeof
           (int32_T));
  }

  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  Test_Traj_B.itemp = A_size[0] * A_size[1] - 1;
  if (0 <= Test_Traj_B.itemp) {
    memcpy(&b_A_data[0], &A_data[0], (Test_Traj_B.itemp + 1) * sizeof(real_T));
  }

  Test_Traj_B.ma = A_size[0];
  if (m < n) {
    Test_Traj_B.m_g = m;
  } else {
    Test_Traj_B.m_g = n;
  }

  Test_Traj_B.minmn = Test_Traj_B.m_g - 1;
  Test_Traj_B.work_size = A_size[1];
  Test_Traj_B.itemp = A_size[1];
  if (0 <= Test_Traj_B.itemp - 1) {
    memset(&Test_Traj_B.work_data_e[0], 0, Test_Traj_B.itemp * sizeof(real_T));
  }

  Test_Traj_B.itemp = A_size[1];
  if (0 <= Test_Traj_B.itemp - 1) {
    memset(&Test_Traj_B.vn1_data[0], 0, Test_Traj_B.itemp * sizeof(real_T));
  }

  Test_Traj_B.itemp = A_size[1];
  if (0 <= Test_Traj_B.itemp - 1) {
    memset(&Test_Traj_B.vn2_data[0], 0, Test_Traj_B.itemp * sizeof(real_T));
  }

  for (Test_Traj_B.m_g = 0; Test_Traj_B.m_g < n; Test_Traj_B.m_g++) {
    Test_Traj_B.b_atmp = Test_Traj_xnrm2_ph(m, A_data, Test_Traj_B.m_g *
      Test_Traj_B.ma + 1);
    Test_Traj_B.vn2_data[Test_Traj_B.m_g] = Test_Traj_B.b_atmp;
    Test_Traj_B.vn1_data[Test_Traj_B.m_g] = Test_Traj_B.b_atmp;
  }

  for (Test_Traj_B.m_g = 0; Test_Traj_B.m_g <= Test_Traj_B.minmn;
       Test_Traj_B.m_g++) {
    Test_Traj_B.ii_k = Test_Traj_B.m_g * Test_Traj_B.ma + Test_Traj_B.m_g;
    Test_Traj_B.nmi = (n - Test_Traj_B.m_g) - 1;
    Test_Traj_B.mmi = m - Test_Traj_B.m_g;
    Test_Traj_B.pvt = (Test_Traj_ixamax(Test_Traj_B.nmi + 1,
      Test_Traj_B.vn1_data, Test_Traj_B.m_g + 1) + Test_Traj_B.m_g) - 1;
    if (Test_Traj_B.pvt + 1 != Test_Traj_B.m_g + 1) {
      Test_Traj_B.b_A_size[0] = b_A_size[0];
      Test_Traj_B.b_A_size[1] = b_A_size[1];
      Test_Traj_B.itemp = b_A_size[0] * b_A_size[1];
      if (0 <= Test_Traj_B.itemp - 1) {
        memcpy(&Test_Traj_B.b_A_data_j[0], &b_A_data[0], Test_Traj_B.itemp *
               sizeof(real_T));
      }

      Test_Traj_xswap(m, Test_Traj_B.b_A_data_j, Test_Traj_B.b_A_size,
                      Test_Traj_B.pvt * Test_Traj_B.ma + 1, Test_Traj_B.m_g *
                      Test_Traj_B.ma + 1, b_A_data, b_A_size);
      Test_Traj_B.itemp = b_jpvt_data[Test_Traj_B.pvt];
      b_jpvt_data[Test_Traj_B.pvt] = b_jpvt_data[Test_Traj_B.m_g];
      b_jpvt_data[Test_Traj_B.m_g] = Test_Traj_B.itemp;
      Test_Traj_B.vn1_data[Test_Traj_B.pvt] =
        Test_Traj_B.vn1_data[Test_Traj_B.m_g];
      Test_Traj_B.vn2_data[Test_Traj_B.pvt] =
        Test_Traj_B.vn2_data[Test_Traj_B.m_g];
    }

    if (Test_Traj_B.m_g + 1 < m) {
      Test_Traj_xzlarfg_ph(Test_Traj_B.mmi, b_A_data[Test_Traj_B.ii_k], b_A_data,
                           b_A_size, Test_Traj_B.ii_k + 2, &Test_Traj_B.b_atmp,
                           Test_Traj_B.e_A_data, Test_Traj_B.e_A_size,
                           &tau_data[Test_Traj_B.m_g]);
      b_A_size[0] = Test_Traj_B.e_A_size[0];
      b_A_size[1] = Test_Traj_B.e_A_size[1];
      Test_Traj_B.itemp = Test_Traj_B.e_A_size[0] * Test_Traj_B.e_A_size[1] - 1;
      if (0 <= Test_Traj_B.itemp) {
        memcpy(&b_A_data[0], &Test_Traj_B.e_A_data[0], (Test_Traj_B.itemp + 1) *
               sizeof(real_T));
      }

      b_A_data[Test_Traj_B.ii_k] = Test_Traj_B.b_atmp;
    } else {
      tau_data[Test_Traj_B.m_g] = 0.0;
    }

    if (Test_Traj_B.m_g + 1 < n) {
      Test_Traj_B.b_atmp = b_A_data[Test_Traj_B.ii_k];
      b_A_data[Test_Traj_B.ii_k] = 1.0;
      Test_Traj_xzlarf_phmyulb(Test_Traj_B.mmi, Test_Traj_B.nmi,
        Test_Traj_B.ii_k + 1, tau_data[Test_Traj_B.m_g], b_A_data, b_A_size,
        (Test_Traj_B.ii_k + Test_Traj_B.ma) + 1, Test_Traj_B.ma,
        Test_Traj_B.work_data_e, &Test_Traj_B.work_size, Test_Traj_B.b_A_data_j,
        Test_Traj_B.e_A_size);
      b_A_size[0] = Test_Traj_B.e_A_size[0];
      b_A_size[1] = Test_Traj_B.e_A_size[1];
      Test_Traj_B.itemp = Test_Traj_B.e_A_size[0] * Test_Traj_B.e_A_size[1] - 1;
      if (0 <= Test_Traj_B.itemp) {
        memcpy(&b_A_data[0], &Test_Traj_B.b_A_data_j[0], (Test_Traj_B.itemp + 1)
               * sizeof(real_T));
      }

      b_A_data[Test_Traj_B.ii_k] = Test_Traj_B.b_atmp;
    }

    for (Test_Traj_B.ii_k = Test_Traj_B.m_g + 2; Test_Traj_B.ii_k <= n;
         Test_Traj_B.ii_k++) {
      Test_Traj_B.nmi = (Test_Traj_B.ii_k - 1) * Test_Traj_B.ma +
        Test_Traj_B.m_g;
      Test_Traj_B.b_atmp = Test_Traj_B.vn1_data[Test_Traj_B.ii_k - 1];
      if (Test_Traj_B.b_atmp != 0.0) {
        Test_Traj_B.temp1_e = fabs(b_A_data[Test_Traj_B.nmi]) /
          Test_Traj_B.b_atmp;
        Test_Traj_B.temp1_e = 1.0 - Test_Traj_B.temp1_e * Test_Traj_B.temp1_e;
        if (Test_Traj_B.temp1_e < 0.0) {
          Test_Traj_B.temp1_e = 0.0;
        }

        Test_Traj_B.temp2_d = Test_Traj_B.b_atmp /
          Test_Traj_B.vn2_data[Test_Traj_B.ii_k - 1];
        Test_Traj_B.temp2_d = Test_Traj_B.temp2_d * Test_Traj_B.temp2_d *
          Test_Traj_B.temp1_e;
        if (Test_Traj_B.temp2_d <= 1.4901161193847656E-8) {
          if (Test_Traj_B.m_g + 1 < m) {
            Test_Traj_B.vn1_data[Test_Traj_B.ii_k - 1] = Test_Traj_xnrm2_ph
              (Test_Traj_B.mmi - 1, b_A_data, Test_Traj_B.nmi + 2);
            Test_Traj_B.vn2_data[Test_Traj_B.ii_k - 1] =
              Test_Traj_B.vn1_data[Test_Traj_B.ii_k - 1];
          } else {
            Test_Traj_B.vn1_data[Test_Traj_B.ii_k - 1] = 0.0;
            Test_Traj_B.vn2_data[Test_Traj_B.ii_k - 1] = 0.0;
          }
        } else {
          Test_Traj_B.vn1_data[Test_Traj_B.ii_k - 1] = Test_Traj_B.b_atmp * sqrt
            (Test_Traj_B.temp1_e);
        }
      }
    }
  }
}

static void Test_Traj_lusolve_p(const real_T A_data[], const int32_T A_size[2],
  real_T B_data[], const int32_T *B_size)
{
  int32_T loop_ub;
  int32_T c_A_size_idx_0;
  int32_T c_tmp;
  int32_T mmj_tmp;
  if (A_size[0] < A_size[1]) {
    Test_Traj_B.n_j = A_size[0];
  } else {
    Test_Traj_B.n_j = A_size[1];
  }

  if (*B_size < Test_Traj_B.n_j) {
    Test_Traj_B.n_j = *B_size;
  }

  Test_Traj_B.LDA = A_size[0];
  c_A_size_idx_0 = A_size[0];
  Test_Traj_B.kAcol = A_size[1];
  loop_ub = A_size[0] * A_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&Test_Traj_B.c_A_data_m[0], &A_data[0], (loop_ub + 1) * sizeof(real_T));
  }

  if (Test_Traj_B.n_j < 1) {
    Test_Traj_B.n_k1 = 0;
  } else {
    Test_Traj_B.n_k1 = Test_Traj_B.n_j;
  }

  if (Test_Traj_B.n_k1 > 0) {
    Test_Traj_B.b_ipiv_data[0] = 1;
    Test_Traj_B.yk = 1;
    for (loop_ub = 2; loop_ub <= Test_Traj_B.n_k1; loop_ub++) {
      Test_Traj_B.yk++;
      Test_Traj_B.b_ipiv_data[loop_ub - 1] = Test_Traj_B.yk;
    }
  }

  if (Test_Traj_B.n_j >= 1) {
    Test_Traj_B.ldap1 = A_size[0];
    Test_Traj_B.n_k1 = Test_Traj_B.n_j - 1;
    if (Test_Traj_B.n_k1 >= Test_Traj_B.n_j) {
      Test_Traj_B.n_k1 = Test_Traj_B.n_j;
    }

    Test_Traj_B.yk = Test_Traj_B.n_k1 - 1;
    if (0 <= Test_Traj_B.yk) {
      if (A_size[0] < 0) {
        Test_Traj_B.jyinc = -A_size[0];
      } else {
        Test_Traj_B.jyinc = A_size[0];
      }
    }

    for (Test_Traj_B.n_k1 = 0; Test_Traj_B.n_k1 <= Test_Traj_B.yk;
         Test_Traj_B.n_k1++) {
      mmj_tmp = Test_Traj_B.n_j - Test_Traj_B.n_k1;
      c_tmp = (Test_Traj_B.ldap1 + 1) * Test_Traj_B.n_k1;
      Test_Traj_B.c_eu = c_tmp + 2;
      if (mmj_tmp < 1) {
        Test_Traj_B.iy_j = 0;
      } else {
        Test_Traj_B.iy_j = 1;
        if (mmj_tmp > 1) {
          Test_Traj_B.ix_d = Test_Traj_B.c_eu - 2;
          Test_Traj_B.smax = fabs(Test_Traj_B.c_A_data_m[c_tmp]);
          for (loop_ub = 2; loop_ub <= mmj_tmp; loop_ub++) {
            Test_Traj_B.ix_d++;
            Test_Traj_B.s_o = fabs(Test_Traj_B.c_A_data_m[Test_Traj_B.ix_d]);
            if (Test_Traj_B.s_o > Test_Traj_B.smax) {
              Test_Traj_B.iy_j = loop_ub;
              Test_Traj_B.smax = Test_Traj_B.s_o;
            }
          }
        }
      }

      if (Test_Traj_B.c_A_data_m[(Test_Traj_B.c_eu + Test_Traj_B.iy_j) - 3] !=
          0.0) {
        if (Test_Traj_B.iy_j - 1 != 0) {
          Test_Traj_B.iy_j += Test_Traj_B.n_k1;
          Test_Traj_B.b_ipiv_data[Test_Traj_B.n_k1] = Test_Traj_B.iy_j;
          loop_ub = c_A_size_idx_0 * Test_Traj_B.kAcol - 1;
          if (0 <= loop_ub) {
            memcpy(&Test_Traj_B.c_x_data_f[0], &Test_Traj_B.c_A_data_m[0],
                   (loop_ub + 1) * sizeof(real_T));
          }

          Test_Traj_B.ix_d = Test_Traj_B.n_k1 + 1;
          if (Test_Traj_B.LDA < 0) {
            Test_Traj_B.ixinc = -Test_Traj_B.LDA;
            Test_Traj_B.iyinc = -Test_Traj_B.LDA;
          } else {
            Test_Traj_B.ixinc = Test_Traj_B.LDA;
            Test_Traj_B.iyinc = Test_Traj_B.LDA;
          }

          for (loop_ub = 0; loop_ub < Test_Traj_B.n_j; loop_ub++) {
            Test_Traj_B.smax = Test_Traj_B.c_x_data_f[Test_Traj_B.ix_d - 1];
            Test_Traj_B.c_x_data_f[Test_Traj_B.ix_d - 1] =
              Test_Traj_B.c_x_data_f[Test_Traj_B.iy_j - 1];
            Test_Traj_B.c_x_data_f[Test_Traj_B.iy_j - 1] = Test_Traj_B.smax;
            if (Test_Traj_B.LDA < 0) {
              Test_Traj_B.ix_d -= Test_Traj_B.ixinc;
              Test_Traj_B.iy_j -= Test_Traj_B.iyinc;
            } else {
              Test_Traj_B.ix_d += Test_Traj_B.ixinc;
              Test_Traj_B.iy_j += Test_Traj_B.iyinc;
            }
          }

          loop_ub = c_A_size_idx_0 * Test_Traj_B.kAcol - 1;
          if (0 <= loop_ub) {
            memcpy(&Test_Traj_B.c_A_data_m[0], &Test_Traj_B.c_x_data_f[0],
                   (loop_ub + 1) * sizeof(real_T));
          }
        }

        Test_Traj_B.iy_j = Test_Traj_B.c_eu + mmj_tmp;
        for (loop_ub = Test_Traj_B.c_eu; loop_ub <= Test_Traj_B.iy_j - 2;
             loop_ub++) {
          Test_Traj_B.c_A_data_m[loop_ub - 1] /= Test_Traj_B.c_A_data_m[c_tmp];
        }
      }

      Test_Traj_B.iy_j = mmj_tmp - 2;
      Test_Traj_B.ixinc = c_tmp + Test_Traj_B.ldap1;
      Test_Traj_B.iyinc = (c_tmp + Test_Traj_B.LDA) + 1;
      for (loop_ub = 0; loop_ub <= Test_Traj_B.iy_j; loop_ub++) {
        Test_Traj_B.smax = Test_Traj_B.c_A_data_m[Test_Traj_B.iyinc - 1];
        if (Test_Traj_B.smax != 0.0) {
          Test_Traj_B.ix_d = Test_Traj_B.c_eu - 1;
          Test_Traj_B.c_oc = mmj_tmp + Test_Traj_B.ixinc;
          for (c_tmp = Test_Traj_B.ixinc + 2; c_tmp <= Test_Traj_B.c_oc; c_tmp++)
          {
            Test_Traj_B.c_A_data_m[c_tmp - 1] +=
              Test_Traj_B.c_A_data_m[Test_Traj_B.ix_d] * -Test_Traj_B.smax;
            Test_Traj_B.ix_d++;
          }
        }

        if (Test_Traj_B.LDA < 0) {
          Test_Traj_B.iyinc -= Test_Traj_B.jyinc;
        } else {
          Test_Traj_B.iyinc += Test_Traj_B.jyinc;
        }

        Test_Traj_B.ixinc += Test_Traj_B.LDA;
      }
    }
  }

  Test_Traj_B.yk = Test_Traj_B.n_j - 2;
  for (Test_Traj_B.LDA = 0; Test_Traj_B.LDA <= Test_Traj_B.yk; Test_Traj_B.LDA++)
  {
    if (Test_Traj_B.LDA + 1 != Test_Traj_B.b_ipiv_data[Test_Traj_B.LDA]) {
      Test_Traj_B.smax = B_data[Test_Traj_B.LDA];
      B_data[Test_Traj_B.LDA] = B_data[Test_Traj_B.b_ipiv_data[Test_Traj_B.LDA]
        - 1];
      B_data[Test_Traj_B.b_ipiv_data[Test_Traj_B.LDA] - 1] = Test_Traj_B.smax;
    }
  }

  if (*B_size != 0) {
    for (Test_Traj_B.LDA = 0; Test_Traj_B.LDA < Test_Traj_B.n_j; Test_Traj_B.LDA
         ++) {
      Test_Traj_B.kAcol = c_A_size_idx_0 * Test_Traj_B.LDA - 1;
      if (B_data[Test_Traj_B.LDA] != 0.0) {
        for (loop_ub = Test_Traj_B.LDA + 2; loop_ub <= Test_Traj_B.n_j; loop_ub
             ++) {
          B_data[loop_ub - 1] -= Test_Traj_B.c_A_data_m[loop_ub +
            Test_Traj_B.kAcol] * B_data[Test_Traj_B.LDA];
        }
      }
    }
  }

  if (*B_size != 0) {
    for (loop_ub = Test_Traj_B.n_j; loop_ub >= 1; loop_ub--) {
      Test_Traj_B.kAcol = (loop_ub - 1) * c_A_size_idx_0 - 1;
      if (B_data[loop_ub - 1] != 0.0) {
        B_data[loop_ub - 1] /= Test_Traj_B.c_A_data_m[loop_ub +
          Test_Traj_B.kAcol];
        Test_Traj_B.yk = loop_ub - 2;
        for (Test_Traj_B.LDA = 0; Test_Traj_B.LDA <= Test_Traj_B.yk;
             Test_Traj_B.LDA++) {
          B_data[Test_Traj_B.LDA] -= Test_Traj_B.c_A_data_m[(Test_Traj_B.LDA +
            Test_Traj_B.kAcol) + 1] * B_data[loop_ub - 1];
        }
      }
    }
  }
}

static void Test_Traj_mldivide_p(const real_T A_data[], const int32_T A_size[2],
  const real_T B_data[], const int32_T *B_size, real_T Y_data[], int32_T *Y_size)
{
  boolean_T guard1 = false;
  if ((A_size[0] == 0) || (A_size[1] == 0) || (*B_size == 0)) {
    Test_Traj_B.minmana = A_size[1];
    *Y_size = A_size[1];
    if (0 <= Test_Traj_B.minmana - 1) {
      memset(&Y_data[0], 0, Test_Traj_B.minmana * sizeof(real_T));
    }
  } else if (A_size[0] == A_size[1]) {
    *Y_size = *B_size;
    Test_Traj_B.maxmn = *B_size;
    if (0 <= Test_Traj_B.maxmn - 1) {
      memcpy(&Y_data[0], &B_data[0], Test_Traj_B.maxmn * sizeof(real_T));
    }

    Test_Traj_lusolve_p(A_data, A_size, Y_data, Y_size);
  } else {
    Test_Traj_B.na = A_size[1] - 1;
    Test_Traj_B.c_A_size[0] = A_size[0];
    Test_Traj_B.c_A_size[1] = A_size[1];
    Test_Traj_B.maxmn = A_size[0] * A_size[1] - 1;
    if (0 <= Test_Traj_B.maxmn) {
      memcpy(&Test_Traj_B.c_A_data_l[0], &A_data[0], (Test_Traj_B.maxmn + 1) *
             sizeof(real_T));
    }

    if (A_size[0] < A_size[1]) {
      Test_Traj_B.minmana = A_size[0];
    } else {
      Test_Traj_B.minmana = A_size[1];
    }

    if (0 <= Test_Traj_B.minmana - 1) {
      memset(&Test_Traj_B.b_tau_data[0], 0, Test_Traj_B.minmana * sizeof(real_T));
    }

    guard1 = false;
    if ((A_size[0] == 0) || (A_size[1] == 0)) {
      guard1 = true;
    } else {
      if (A_size[0] < A_size[1]) {
        Test_Traj_B.maxmn = A_size[0];
      } else {
        Test_Traj_B.maxmn = A_size[1];
      }

      if (Test_Traj_B.maxmn < 1) {
        guard1 = true;
      } else {
        Test_Traj_B.maxmn = A_size[1] - 1;
        if (0 <= Test_Traj_B.maxmn) {
          memset(&Test_Traj_B.b_jpvt_data[0], 0, (Test_Traj_B.maxmn + 1) *
                 sizeof(int32_T));
        }

        for (Test_Traj_B.maxmn = 0; Test_Traj_B.maxmn <= Test_Traj_B.na;
             Test_Traj_B.maxmn++) {
          Test_Traj_B.b_jpvt_data[Test_Traj_B.maxmn] = Test_Traj_B.maxmn + 1;
        }

        if (0 <= Test_Traj_B.minmana - 1) {
          memset(&Test_Traj_B.b_tau_data[0], 0, Test_Traj_B.minmana * sizeof
                 (real_T));
        }

        Test_Traj_B.b_jpvt_size_k[0] = 1;
        Test_Traj_B.b_jpvt_size_k[1] = A_size[1];
        Test_Traj_B.maxmn = A_size[1];
        if (0 <= Test_Traj_B.maxmn - 1) {
          memcpy(&Test_Traj_B.b_jpvt_data_b[0], &Test_Traj_B.b_jpvt_data[0],
                 Test_Traj_B.maxmn * sizeof(int32_T));
        }

        Test_Traj_qrpf_p(A_data, A_size, A_size[0], A_size[1],
                         Test_Traj_B.b_tau_data, Test_Traj_B.b_jpvt_data_b,
                         Test_Traj_B.b_jpvt_size_k, Test_Traj_B.c_A_data_l,
                         Test_Traj_B.c_A_size, Test_Traj_B.b_jpvt_data,
                         Test_Traj_B.b_jpvt_size);
      }
    }

    if (guard1) {
      Test_Traj_B.maxmn = A_size[1] - 1;
      if (0 <= Test_Traj_B.maxmn) {
        memset(&Test_Traj_B.b_jpvt_data[0], 0, (Test_Traj_B.maxmn + 1) * sizeof
               (int32_T));
      }

      for (Test_Traj_B.minmana = 0; Test_Traj_B.minmana <= Test_Traj_B.na;
           Test_Traj_B.minmana++) {
        Test_Traj_B.b_jpvt_data[Test_Traj_B.minmana] = Test_Traj_B.minmana + 1;
      }
    }

    Test_Traj_B.na = 0;
    if (Test_Traj_B.c_A_size[0] < Test_Traj_B.c_A_size[1]) {
      Test_Traj_B.minmana = Test_Traj_B.c_A_size[0];
      Test_Traj_B.maxmn = Test_Traj_B.c_A_size[1];
    } else {
      Test_Traj_B.minmana = Test_Traj_B.c_A_size[1];
      Test_Traj_B.maxmn = Test_Traj_B.c_A_size[0];
    }

    if (Test_Traj_B.minmana > 0) {
      Test_Traj_B.tol = 2.2204460492503131E-15 * static_cast<real_T>
        (Test_Traj_B.maxmn);
      if (1.4901161193847656E-8 < Test_Traj_B.tol) {
        Test_Traj_B.tol = 1.4901161193847656E-8;
      }

      Test_Traj_B.tol *= fabs(Test_Traj_B.c_A_data_l[0]);
      while ((Test_Traj_B.na < Test_Traj_B.minmana) && (!(fabs
               (Test_Traj_B.c_A_data_l[Test_Traj_B.c_A_size[0] * Test_Traj_B.na
                + Test_Traj_B.na]) <= Test_Traj_B.tol))) {
        Test_Traj_B.na++;
      }
    }

    Test_Traj_B.minmana = Test_Traj_B.c_A_size[1];
    *Y_size = Test_Traj_B.c_A_size[1];
    if (0 <= Test_Traj_B.minmana - 1) {
      memset(&Y_data[0], 0, Test_Traj_B.minmana * sizeof(real_T));
    }

    Test_Traj_B.maxmn = *B_size;
    if (0 <= Test_Traj_B.maxmn - 1) {
      memcpy(&Test_Traj_B.B_data[0], &B_data[0], Test_Traj_B.maxmn * sizeof
             (real_T));
    }

    Test_Traj_B.maxmn = Test_Traj_B.c_A_size[0];
    if (Test_Traj_B.c_A_size[0] < Test_Traj_B.c_A_size[1]) {
      Test_Traj_B.minmana = Test_Traj_B.c_A_size[0];
    } else {
      Test_Traj_B.minmana = Test_Traj_B.c_A_size[1];
    }

    Test_Traj_B.mn = Test_Traj_B.minmana - 1;
    for (Test_Traj_B.minmana = 0; Test_Traj_B.minmana <= Test_Traj_B.mn;
         Test_Traj_B.minmana++) {
      if (Test_Traj_B.b_tau_data[Test_Traj_B.minmana] != 0.0) {
        Test_Traj_B.tol = Test_Traj_B.B_data[Test_Traj_B.minmana];
        for (Test_Traj_B.i_pd = Test_Traj_B.minmana + 2; Test_Traj_B.i_pd <=
             Test_Traj_B.maxmn; Test_Traj_B.i_pd++) {
          Test_Traj_B.tol += Test_Traj_B.c_A_data_l[(Test_Traj_B.c_A_size[0] *
            Test_Traj_B.minmana + Test_Traj_B.i_pd) - 1] *
            Test_Traj_B.B_data[Test_Traj_B.i_pd - 1];
        }

        Test_Traj_B.tol *= Test_Traj_B.b_tau_data[Test_Traj_B.minmana];
        if (Test_Traj_B.tol != 0.0) {
          Test_Traj_B.B_data[Test_Traj_B.minmana] -= Test_Traj_B.tol;
          for (Test_Traj_B.i_pd = Test_Traj_B.minmana + 2; Test_Traj_B.i_pd <=
               Test_Traj_B.maxmn; Test_Traj_B.i_pd++) {
            Test_Traj_B.B_data[Test_Traj_B.i_pd - 1] -= Test_Traj_B.c_A_data_l
              [(Test_Traj_B.c_A_size[0] * Test_Traj_B.minmana + Test_Traj_B.i_pd)
              - 1] * Test_Traj_B.tol;
          }
        }
      }
    }

    for (Test_Traj_B.i_pd = 0; Test_Traj_B.i_pd < Test_Traj_B.na;
         Test_Traj_B.i_pd++) {
      Y_data[Test_Traj_B.b_jpvt_data[Test_Traj_B.i_pd] - 1] =
        Test_Traj_B.B_data[Test_Traj_B.i_pd];
    }

    for (Test_Traj_B.minmana = Test_Traj_B.na; Test_Traj_B.minmana >= 1;
         Test_Traj_B.minmana--) {
      Test_Traj_B.mn = Test_Traj_B.b_jpvt_data[Test_Traj_B.minmana - 1] - 1;
      Test_Traj_B.i_pd = (Test_Traj_B.minmana - 1) * Test_Traj_B.c_A_size[0];
      Y_data[Test_Traj_B.mn] /= Test_Traj_B.c_A_data_l[(Test_Traj_B.i_pd +
        Test_Traj_B.minmana) - 1];
      Test_Traj_B.c_k5 = Test_Traj_B.minmana - 2;
      for (Test_Traj_B.maxmn = 0; Test_Traj_B.maxmn <= Test_Traj_B.c_k5;
           Test_Traj_B.maxmn++) {
        Y_data[Test_Traj_B.b_jpvt_data[Test_Traj_B.maxmn] - 1] -=
          Test_Traj_B.c_A_data_l[Test_Traj_B.i_pd + Test_Traj_B.maxmn] *
          Y_data[Test_Traj_B.mn];
      }
    }
  }
}

static void Test_Tra_solveDampenedHessian_p(const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T lambda, const real_T v_data[], const int32_T
  *v_size, real_T dx_data[], int32_T *dx_size)
{
  Test_Traj_B.loop_ub_dp = Jtri_size[0];
  Test_Traj_B.a_size_j = Jtri_size[0];
  if (0 <= Test_Traj_B.loop_ub_dp - 1) {
    memcpy(&Test_Traj_B.a_data_j[0], &Jtri_data[0], Test_Traj_B.loop_ub_dp *
           sizeof(real_T));
  }

  Test_Traj_B.loop_ub_j = Jtri_size[0];
  Test_Traj_B.b_size_b = Jtri_size[0];
  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
       Test_Traj_B.loop_ub_j; Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.b_data_ev[Test_Traj_B.J_size_idx_0] =
      Jtri_data[Test_Traj_B.J_size_idx_0 + Jtri_size[0]];
  }

  Test_Traj_B.loop_ub_dl = Jtri_size[0];
  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
       Test_Traj_B.loop_ub_dl; Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.c_data_m[Test_Traj_B.J_size_idx_0] = Jtri_data[(Jtri_size[0] <<
      1) + Test_Traj_B.J_size_idx_0];
  }

  if (static_cast<real_T>(*v_size) - 1.0 < 1.0) {
    Test_Traj_B.m_b = 0;
  } else {
    Test_Traj_B.inner = static_cast<int32_T>((static_cast<real_T>(*v_size) - 1.0)
      - 1.0);
    Test_Traj_B.m_b = Test_Traj_B.inner + 1;
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
         Test_Traj_B.inner; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
        (Test_Traj_B.J_size_idx_0) + 1.0;
    }
  }

  Test_Traj_power_p(Test_Traj_B.a_data_j, &Test_Traj_B.a_size_j,
                    Test_Traj_B.d_data, &Test_Traj_B.d_size_f2);
  Test_Traj_power_p(Test_Traj_B.b_data_ev, &Test_Traj_B.b_size_b,
                    Test_Traj_B.e_data_m, &Test_Traj_B.a_size_j);
  Test_Traj_B.inner = Test_Traj_B.m_b + 1;
  Test_Traj_B.v_data_nh[0] = *v_size - 1;
  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 < Test_Traj_B.m_b;
       Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.v_data_nh[Test_Traj_B.J_size_idx_0 + 1] = static_cast<int32_T>
      (Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0]) - 1;
  }

  Test_Traj_B.c_size_p = Test_Traj_B.inner;
  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
       Test_Traj_B.inner; Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.c_data_f[Test_Traj_B.J_size_idx_0] =
      Test_Traj_B.c_data_m[Test_Traj_B.v_data_nh[Test_Traj_B.J_size_idx_0]];
  }

  Test_Traj_power_p(Test_Traj_B.c_data_f, &Test_Traj_B.c_size_p,
                    Test_Traj_B.f_data_j, &Test_Traj_B.b_size_b);
  Test_Traj_B.loop_ub_l = Test_Traj_B.d_size_f2;
  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
       Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.d_data[Test_Traj_B.J_size_idx_0] =
      ((Test_Traj_B.d_data[Test_Traj_B.J_size_idx_0] +
        Test_Traj_B.e_data_m[Test_Traj_B.J_size_idx_0]) +
       Test_Traj_B.f_data_j[Test_Traj_B.J_size_idx_0]) * (lambda + 1.0);
  }

  if (*v_size < 2) {
    Test_Traj_B.m_b = 0;
  } else {
    Test_Traj_B.m_b = *v_size - 1;
    Test_Traj_B.loop_ub_l = *v_size - 2;
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
         Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
        (Test_Traj_B.J_size_idx_0) + 2.0;
    }
  }

  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 < Test_Traj_B.m_b;
       Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.v_data_nh[Test_Traj_B.J_size_idx_0] = static_cast<int32_T>
      (Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0]) - 1;
  }

  Test_Traj_B.v_data_nh[Test_Traj_B.m_b] = 0;
  Test_Traj_B.loop_ub_l = Jtri_size[0];
  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
       Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.e_data_m[Test_Traj_B.J_size_idx_0] =
      Test_Traj_B.a_data_j[Test_Traj_B.J_size_idx_0] *
      Test_Traj_B.b_data_ev[Test_Traj_B.v_data_nh[Test_Traj_B.J_size_idx_0]] +
      Test_Traj_B.b_data_ev[Test_Traj_B.J_size_idx_0] *
      Test_Traj_B.c_data_m[Test_Traj_B.J_size_idx_0];
  }

  if (*v_size < 2) {
    Test_Traj_B.m_b = 0;
  } else {
    Test_Traj_B.m_b = *v_size - 1;
    Test_Traj_B.loop_ub_l = *v_size - 2;
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
         Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
        (Test_Traj_B.J_size_idx_0) + 2.0;
    }
  }

  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 < Test_Traj_B.m_b;
       Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.v_data_nh[Test_Traj_B.J_size_idx_0] = static_cast<int32_T>
      (Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0]) - 1;
  }

  Test_Traj_B.v_data_nh[Test_Traj_B.m_b] = 0;
  Test_Traj_B.loop_ub_l = Jtri_size[0];
  for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
       Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
    Test_Traj_B.f_data_j[Test_Traj_B.J_size_idx_0] =
      Test_Traj_B.a_data_j[Test_Traj_B.J_size_idx_0] *
      Test_Traj_B.c_data_m[Test_Traj_B.v_data_nh[Test_Traj_B.J_size_idx_0]];
  }

  if (*v_size < 5) {
    if (*v_size < 1) {
      Test_Traj_B.m_b = 0;
      Test_Traj_B.inner = 0;
    } else {
      Test_Traj_B.m_b = *v_size;
      Test_Traj_B.loop_ub_l = *v_size - 1;
      for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
           Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
        Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.J_size_idx_0) + 1.0;
      }

      Test_Traj_B.inner = *v_size;
      Test_Traj_B.loop_ub_l = *v_size - 1;
      for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
           Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
        Test_Traj_B.y_data_h[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.J_size_idx_0) + 1.0;
      }
    }

    if (*v_size < 2) {
      Test_Traj_B.n_b = 0;
      Test_Traj_B.coffset = 0;
    } else {
      Test_Traj_B.n_b = *v_size - 1;
      Test_Traj_B.loop_ub_l = *v_size - 2;
      for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
           Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
        Test_Traj_B.y_data_d[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.J_size_idx_0) + 2.0;
      }

      Test_Traj_B.coffset = *v_size - 1;
      Test_Traj_B.loop_ub_l = *v_size - 2;
      for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
           Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
        Test_Traj_B.y_data_c5[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.J_size_idx_0) + 2.0;
      }
    }

    if (*v_size < 1) {
      Test_Traj_B.boffset = 0;
      Test_Traj_B.y_size_idx_1_l = 0;
    } else {
      Test_Traj_B.boffset = *v_size;
      Test_Traj_B.loop_ub_l = *v_size - 1;
      for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
           Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
        Test_Traj_B.y_data_pw[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.J_size_idx_0) + 1.0;
      }

      Test_Traj_B.y_size_idx_1_l = *v_size;
      Test_Traj_B.loop_ub_l = *v_size - 1;
      for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <=
           Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
        Test_Traj_B.y_data_pi[Test_Traj_B.J_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.J_size_idx_0) + 1.0;
      }
    }

    Test_Traj_B.loop_ub_l = (Test_Traj_B.m_b + Test_Traj_B.inner) +
      Test_Traj_B.n_b;
    Test_Traj_B.y_size[0] = Test_Traj_B.loop_ub_l + 1;
    Test_Traj_B.y_size[1] = 2;
    if (0 <= Test_Traj_B.m_b - 1) {
      memcpy(&Test_Traj_B.y_data_k[0], &Test_Traj_B.y_data_c[0], Test_Traj_B.m_b
             * sizeof(real_T));
    }

    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.inner; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_k[Test_Traj_B.J_size_idx_0 + Test_Traj_B.m_b] =
        Test_Traj_B.y_data_h[Test_Traj_B.J_size_idx_0];
    }

    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.n_b; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_k[(Test_Traj_B.J_size_idx_0 + Test_Traj_B.m_b) +
        Test_Traj_B.inner] = Test_Traj_B.y_data_d[Test_Traj_B.J_size_idx_0];
    }

    Test_Traj_B.y_data_k[Test_Traj_B.loop_ub_l] = 1.0;
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.coffset; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_k[Test_Traj_B.J_size_idx_0 + Test_Traj_B.y_size[0]] =
        Test_Traj_B.y_data_c5[Test_Traj_B.J_size_idx_0];
    }

    Test_Traj_B.y_data_k[Test_Traj_B.coffset + Test_Traj_B.y_size[0]] = 1.0;
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.boffset; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_k[((Test_Traj_B.J_size_idx_0 + Test_Traj_B.coffset) +
                            Test_Traj_B.y_size[0]) + 1] =
        Test_Traj_B.y_data_pw[Test_Traj_B.J_size_idx_0];
    }

    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.y_size_idx_1_l; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_k[(((Test_Traj_B.J_size_idx_0 + Test_Traj_B.coffset) +
        Test_Traj_B.boffset) + Test_Traj_B.y_size[0]) + 1] =
        Test_Traj_B.y_data_pi[Test_Traj_B.J_size_idx_0];
    }

    Test_Traj_B.a_size_l = (Jtri_size[0] + Jtri_size[0]) + Jtri_size[0];
    Test_Traj_B.loop_ub_l = Jtri_size[0];
    if (0 <= Test_Traj_B.loop_ub_l - 1) {
      memcpy(&Test_Traj_B.a_data_m[0], &Test_Traj_B.a_data_j[0],
             Test_Traj_B.loop_ub_l * sizeof(real_T));
    }

    Test_Traj_B.loop_ub_l = Jtri_size[0];
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.loop_ub_l; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.a_data_m[Test_Traj_B.J_size_idx_0 + Test_Traj_B.loop_ub_dp] =
        Test_Traj_B.b_data_ev[Test_Traj_B.J_size_idx_0];
    }

    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.loop_ub_dl; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.a_data_m[(Test_Traj_B.J_size_idx_0 + Test_Traj_B.loop_ub_dp) +
        Test_Traj_B.loop_ub_j] = Test_Traj_B.c_data_m[Test_Traj_B.J_size_idx_0];
    }

    Test_Traj_B.v_ko[0] = *v_size;
    Test_Traj_B.v_ko[1] = *v_size;
    Test_Traj_accumarray_p(Test_Traj_B.y_data_k, Test_Traj_B.y_size,
      Test_Traj_B.a_data_m, &Test_Traj_B.a_size_l, Test_Traj_B.v_ko,
      Test_Traj_B.tmp_data_ct, Test_Traj_B.tmp_size);
    Test_Traj_B.J_size_idx_0 = Test_Traj_B.tmp_size[0];
    Test_Traj_B.loop_ub_dp = Test_Traj_B.tmp_size[0] * Test_Traj_B.tmp_size[1];
    if (0 <= Test_Traj_B.loop_ub_dp - 1) {
      memcpy(&Test_Traj_B.J_data[0], &Test_Traj_B.tmp_data_ct[0],
             Test_Traj_B.loop_ub_dp * sizeof(real_T));
    }

    Test_Traj_B.m_b = Test_Traj_B.tmp_size[1] - 1;
    Test_Traj_B.inner = Test_Traj_B.tmp_size[0] - 1;
    Test_Traj_B.n_b = Test_Traj_B.tmp_size[1] - 1;
    Test_Traj_B.A_size[0] = Test_Traj_B.tmp_size[1];
    Test_Traj_B.A_size[1] = Test_Traj_B.tmp_size[1];
    for (Test_Traj_B.loop_ub_dp = 0; Test_Traj_B.loop_ub_dp <= Test_Traj_B.n_b;
         Test_Traj_B.loop_ub_dp++) {
      Test_Traj_B.coffset = (Test_Traj_B.m_b + 1) * Test_Traj_B.loop_ub_dp - 1;
      Test_Traj_B.boffset = Test_Traj_B.loop_ub_dp * Test_Traj_B.J_size_idx_0 -
        1;
      if (0 <= Test_Traj_B.m_b) {
        memset(&Test_Traj_B.A_data_a[Test_Traj_B.coffset + 1], 0,
               (((Test_Traj_B.m_b + Test_Traj_B.coffset) - Test_Traj_B.coffset)
                + 1) * sizeof(real_T));
      }

      for (Test_Traj_B.loop_ub_j = 0; Test_Traj_B.loop_ub_j <= Test_Traj_B.inner;
           Test_Traj_B.loop_ub_j++) {
        Test_Traj_B.bkj = Test_Traj_B.J_data[(Test_Traj_B.boffset +
          Test_Traj_B.loop_ub_j) + 1];
        for (Test_Traj_B.loop_ub_dl = 0; Test_Traj_B.loop_ub_dl <=
             Test_Traj_B.m_b; Test_Traj_B.loop_ub_dl++) {
          Test_Traj_B.y_size_idx_1_l = (Test_Traj_B.coffset +
            Test_Traj_B.loop_ub_dl) + 1;
          Test_Traj_B.A_data_a[Test_Traj_B.y_size_idx_1_l] +=
            Test_Traj_B.J_data[Test_Traj_B.loop_ub_dl * Test_Traj_B.J_size_idx_0
            + Test_Traj_B.loop_ub_j] * Test_Traj_B.bkj;
        }
      }
    }

    Test_Traj_diag(Test_Traj_B.A_data_a, Test_Traj_B.A_size,
                   Test_Traj_B.tmp_data_bj, &Test_Traj_B.d_size_f2);
    Test_Traj_B.lambda_size = Test_Traj_B.d_size_f2;
    Test_Traj_B.loop_ub_dp = Test_Traj_B.d_size_f2;
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.loop_ub_dp; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.y_data_c[Test_Traj_B.J_size_idx_0] = lambda *
        Test_Traj_B.tmp_data_bj[Test_Traj_B.J_size_idx_0];
    }

    Test_Traj_diag_p(Test_Traj_B.y_data_c, &Test_Traj_B.lambda_size,
                     Test_Traj_B.tmp_data_c0, Test_Traj_B.y_size);
    Test_Traj_B.A_size_o[0] = Test_Traj_B.tmp_size[1];
    Test_Traj_B.A_size_o[1] = Test_Traj_B.tmp_size[1];
    Test_Traj_B.loop_ub_dp = Test_Traj_B.tmp_size[1] * Test_Traj_B.tmp_size[1];
    for (Test_Traj_B.J_size_idx_0 = 0; Test_Traj_B.J_size_idx_0 <
         Test_Traj_B.loop_ub_dp; Test_Traj_B.J_size_idx_0++) {
      Test_Traj_B.J_data[Test_Traj_B.J_size_idx_0] =
        Test_Traj_B.A_data_a[Test_Traj_B.J_size_idx_0] +
        Test_Traj_B.tmp_data_c0[Test_Traj_B.J_size_idx_0];
    }

    Test_Traj_mldivide_p(Test_Traj_B.J_data, Test_Traj_B.A_size_o, v_data,
                         v_size, Test_Traj_B.tmp_data_bj, &Test_Traj_B.d_size_f2);
    *dx_size = Test_Traj_B.d_size_f2;
    Test_Traj_B.loop_ub_dp = Test_Traj_B.d_size_f2;
    if (0 <= Test_Traj_B.loop_ub_dp - 1) {
      memcpy(&dx_data[0], &Test_Traj_B.tmp_data_bj[0], Test_Traj_B.loop_ub_dp *
             sizeof(real_T));
    }
  } else if ((Jtri_data[Jtri_size[0] - 1] == 0.0) && (Jtri_data[(Jtri_size[0] +
               (Jtri_size[0] << 1)) - 1] == 0.0)) {
    Test_Traj_sympentdisolve_p(Test_Traj_B.d_data, Test_Traj_B.e_data_m,
      Test_Traj_B.f_data_j, v_data, v_size, dx_data, dx_size);
  } else {
    Test_Traj_cycsympentdisolve_p(Test_Traj_B.d_data, Test_Traj_B.e_data_m,
      Test_Traj_B.f_data_j, v_data, v_size, dx_data, dx_size);
  }
}

static void Test_Traj_mulJtJ(const real_T Jtri_data[], const int32_T Jtri_size[2],
  const real_T x_data[], const int32_T *x_size, real_T y_data[], int32_T *y_size)
{
  int32_T loop_ub;
  int32_T y_size_idx_1;
  int32_T y_size_idx_1_tmp;
  int32_T y_size_idx_1_tmp_0;
  Test_Traj_B.loop_ub_ml = Jtri_size[0];
  if (0 <= Test_Traj_B.loop_ub_ml - 1) {
    memcpy(&Test_Traj_B.lower_data_c[0], &Jtri_data[0], Test_Traj_B.loop_ub_ml *
           sizeof(real_T));
  }

  Test_Traj_B.loop_ub_ml = Jtri_size[0];
  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < Test_Traj_B.loop_ub_ml;
       Test_Traj_B.i11++) {
    Test_Traj_B.center_data_i[Test_Traj_B.i11] = Jtri_data[Test_Traj_B.i11 +
      Jtri_size[0]];
  }

  loop_ub = Jtri_size[0];
  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < loop_ub; Test_Traj_B.i11++) {
    Test_Traj_B.upper_data_d[Test_Traj_B.i11] = Jtri_data[(Jtri_size[0] << 1) +
      Test_Traj_B.i11];
  }

  if (*x_size < 2) {
    y_size_idx_1 = 0;
  } else {
    y_size_idx_1 = *x_size - 1;
    loop_ub = *x_size - 2;
    for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 <= loop_ub; Test_Traj_B.i11++) {
      Test_Traj_B.y_data_g[Test_Traj_B.i11] = static_cast<real_T>
        (Test_Traj_B.i11) + 2.0;
    }
  }

  if (static_cast<real_T>(*x_size) - 1.0 < 1.0) {
    y_size_idx_1_tmp_0 = 0;
    loop_ub = 0;
  } else {
    y_size_idx_1_tmp = static_cast<int32_T>((static_cast<real_T>(*x_size) - 1.0)
      - 1.0);
    y_size_idx_1_tmp_0 = y_size_idx_1_tmp + 1;
    for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 <= y_size_idx_1_tmp;
         Test_Traj_B.i11++) {
      Test_Traj_B.y_data_d42[Test_Traj_B.i11] = static_cast<real_T>
        (Test_Traj_B.i11) + 1.0;
    }

    loop_ub = y_size_idx_1_tmp_0;
    for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 <= y_size_idx_1_tmp;
         Test_Traj_B.i11++) {
      Test_Traj_B.y_data_dv[Test_Traj_B.i11] = static_cast<real_T>
        (Test_Traj_B.i11) + 1.0;
    }
  }

  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < y_size_idx_1; Test_Traj_B.i11++) {
    Test_Traj_B.y_data_hp[Test_Traj_B.i11] = static_cast<int32_T>
      (Test_Traj_B.y_data_g[Test_Traj_B.i11]) - 1;
  }

  Test_Traj_B.y_data_hp[y_size_idx_1] = 0;
  Test_Traj_B.x_data_f[0] = *x_size - 1;
  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < y_size_idx_1_tmp_0;
       Test_Traj_B.i11++) {
    Test_Traj_B.x_data_f[Test_Traj_B.i11 + 1] = static_cast<int32_T>
      (Test_Traj_B.y_data_d42[Test_Traj_B.i11]) - 1;
  }

  Test_Traj_B.x_data_i[0] = *x_size - 1;
  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < loop_ub; Test_Traj_B.i11++) {
    Test_Traj_B.x_data_i[Test_Traj_B.i11 + 1] = static_cast<int32_T>
      (Test_Traj_B.y_data_dv[Test_Traj_B.i11]) - 1;
  }

  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < Test_Traj_B.loop_ub_ml;
       Test_Traj_B.i11++) {
    Test_Traj_B.z_data_g4[Test_Traj_B.i11] =
      (Test_Traj_B.center_data_i[Test_Traj_B.i11] * x_data[Test_Traj_B.i11] +
       Test_Traj_B.upper_data_d[Test_Traj_B.i11] *
       x_data[Test_Traj_B.y_data_hp[Test_Traj_B.i11]]) +
      Test_Traj_B.lower_data_c[Test_Traj_B.x_data_f[Test_Traj_B.i11]] *
      x_data[Test_Traj_B.x_data_i[Test_Traj_B.i11]];
  }

  if (*x_size < 2) {
    y_size_idx_1 = 0;
  } else {
    y_size_idx_1 = *x_size - 1;
    loop_ub = *x_size - 2;
    for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 <= loop_ub; Test_Traj_B.i11++) {
      Test_Traj_B.y_data_g[Test_Traj_B.i11] = static_cast<real_T>
        (Test_Traj_B.i11) + 2.0;
    }
  }

  if (static_cast<real_T>(*x_size) - 1.0 < 1.0) {
    y_size_idx_1_tmp_0 = 0;
    loop_ub = 0;
  } else {
    y_size_idx_1_tmp_0 = static_cast<int32_T>((static_cast<real_T>(*x_size) -
      1.0) - 1.0) + 1;
    y_size_idx_1_tmp = static_cast<int32_T>((static_cast<real_T>(*x_size) - 1.0)
      - 1.0);
    for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 <= y_size_idx_1_tmp;
         Test_Traj_B.i11++) {
      Test_Traj_B.y_data_d42[Test_Traj_B.i11] = static_cast<real_T>
        (Test_Traj_B.i11) + 1.0;
    }

    loop_ub = y_size_idx_1_tmp_0;
    for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 <= y_size_idx_1_tmp;
         Test_Traj_B.i11++) {
      Test_Traj_B.y_data_dv[Test_Traj_B.i11] = static_cast<real_T>
        (Test_Traj_B.i11) + 1.0;
    }
  }

  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < y_size_idx_1; Test_Traj_B.i11++) {
    Test_Traj_B.y_data_hp[Test_Traj_B.i11] = static_cast<int32_T>
      (Test_Traj_B.y_data_g[Test_Traj_B.i11]) - 1;
  }

  Test_Traj_B.y_data_hp[y_size_idx_1] = 0;
  Test_Traj_B.x_data_f[0] = *x_size - 1;
  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < y_size_idx_1_tmp_0;
       Test_Traj_B.i11++) {
    Test_Traj_B.x_data_f[Test_Traj_B.i11 + 1] = static_cast<int32_T>
      (Test_Traj_B.y_data_d42[Test_Traj_B.i11]) - 1;
  }

  Test_Traj_B.x_data_i[0] = *x_size - 1;
  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < loop_ub; Test_Traj_B.i11++) {
    Test_Traj_B.x_data_i[Test_Traj_B.i11 + 1] = static_cast<int32_T>
      (Test_Traj_B.y_data_dv[Test_Traj_B.i11]) - 1;
  }

  *y_size = Jtri_size[0];
  for (Test_Traj_B.i11 = 0; Test_Traj_B.i11 < Test_Traj_B.loop_ub_ml;
       Test_Traj_B.i11++) {
    y_data[Test_Traj_B.i11] = (Test_Traj_B.center_data_i[Test_Traj_B.i11] *
      Test_Traj_B.z_data_g4[Test_Traj_B.i11] +
      Test_Traj_B.lower_data_c[Test_Traj_B.i11] *
      Test_Traj_B.z_data_g4[Test_Traj_B.y_data_hp[Test_Traj_B.i11]]) +
      Test_Traj_B.upper_data_d[Test_Traj_B.x_data_f[Test_Traj_B.i11]] *
      Test_Traj_B.z_data_g4[Test_Traj_B.x_data_i[Test_Traj_B.i11]];
  }
}

static real_T Test_Traj_norm_ph(const real_T x_data[], const int32_T *x_size)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T b_k;
  if (*x_size == 0) {
    y = 0.0;
  } else {
    y = 0.0;
    if (*x_size >= 1) {
      if (*x_size == 1) {
        y = fabs(x_data[0]);
      } else {
        scale = 3.3121686421112381E-170;
        kend = *x_size - 1;
        for (b_k = 0; b_k <= kend; b_k++) {
          absxk = fabs(x_data[b_k]);
          if (absxk > scale) {
            t = scale / absxk;
            y = y * t * t + 1.0;
            scale = absxk;
          } else {
            t = absxk / scale;
            y += t * t;
          }
        }

        y = scale * sqrt(y);
      }
    }
  }

  return y;
}

static void Test_Traj_tridisolve(const real_T a_data[], real_T b_data[], const
  real_T c_data[], const real_T d_data[], const int32_T *d_size, real_T x_data[],
  int32_T *x_size)
{
  int32_T f;
  int32_T loop_ub;
  int32_T x_data_tmp;
  *x_size = *d_size;
  if (0 <= *d_size - 1) {
    memcpy(&x_data[0], &d_data[0], *d_size * sizeof(real_T));
  }

  f = *d_size - 2;
  for (loop_ub = 0; loop_ub <= f; loop_ub++) {
    Test_Traj_B.mu = a_data[loop_ub] / b_data[loop_ub];
    x_data_tmp = static_cast<int32_T>((static_cast<real_T>(loop_ub) + 1.0) + 1.0)
      - 1;
    b_data[x_data_tmp] -= Test_Traj_B.mu * c_data[loop_ub];
    x_data[x_data_tmp] -= Test_Traj_B.mu * x_data[loop_ub];
  }

  x_data[*d_size - 1] /= b_data[*d_size - 1];
  f = static_cast<int32_T>(((-1.0 - (static_cast<real_T>(*d_size) - 1.0)) + 1.0)
    / -1.0) - 1;
  for (loop_ub = 0; loop_ub <= f; loop_ub++) {
    Test_Traj_B.mu = (static_cast<real_T>(*d_size) - 1.0) + -static_cast<real_T>
      (loop_ub);
    x_data_tmp = static_cast<int32_T>(Test_Traj_B.mu) - 1;
    x_data[x_data_tmp] = (x_data[x_data_tmp] - x_data[static_cast<int32_T>
                          (Test_Traj_B.mu + 1.0) - 1] * c_data[x_data_tmp]) /
      b_data[x_data_tmp];
  }
}

static void Test_Traj_cyctridisolve_p(const real_T a_data[], real_T b_data[],
  const int32_T *b_size, const real_T c_data[], const real_T d_data[], const
  int32_T *d_size, real_T x_data[], int32_T *x_size)
{
  int32_T h_size_idx_1_tmp;
  Test_Traj_B.b_gamma_g = -b_data[0];
  b_data[0] -= -b_data[0];
  Test_Traj_B.d6 = c_data[*d_size - 1];
  Test_Traj_B.d7 = a_data[*d_size - 1];
  b_data[*d_size - 1] -= Test_Traj_B.d7 * Test_Traj_B.d6 / Test_Traj_B.b_gamma_g;
  Test_Traj_B.loop_ub_e = *b_size;
  if (0 <= Test_Traj_B.loop_ub_e - 1) {
    memcpy(&Test_Traj_B.b_data_p[0], &b_data[0], Test_Traj_B.loop_ub_e * sizeof
           (real_T));
  }

  Test_Traj_tridisolve(a_data, Test_Traj_B.b_data_p, c_data, d_data, d_size,
                       x_data, x_size);
  Test_Traj_B.u_size_i = *d_size;
  Test_Traj_B.loop_ub_e = *d_size;
  if (0 <= Test_Traj_B.loop_ub_e - 1) {
    memset(&Test_Traj_B.u_data_k[0], 0, Test_Traj_B.loop_ub_e * sizeof(real_T));
  }

  Test_Traj_B.u_data_k[0] = Test_Traj_B.b_gamma_g;
  Test_Traj_B.u_data_k[*d_size - 1] = Test_Traj_B.d6;
  if (2.0 > static_cast<real_T>(*d_size) - 1.0) {
    Test_Traj_B.loop_ub_e = 0;
    Test_Traj_B.f_d = 0;
  } else {
    Test_Traj_B.loop_ub_e = 1;
    Test_Traj_B.f_d = *d_size - 1;
  }

  h_size_idx_1_tmp = Test_Traj_B.f_d - Test_Traj_B.loop_ub_e;
  for (Test_Traj_B.f_d = 0; Test_Traj_B.f_d < h_size_idx_1_tmp; Test_Traj_B.f_d
       ++) {
    Test_Traj_B.h_data[Test_Traj_B.f_d] = Test_Traj_B.loop_ub_e +
      Test_Traj_B.f_d;
  }

  for (Test_Traj_B.f_d = 0; Test_Traj_B.f_d < h_size_idx_1_tmp; Test_Traj_B.f_d
       ++) {
    Test_Traj_B.u_data_k[Test_Traj_B.h_data[Test_Traj_B.f_d]] = 0.0;
  }

  Test_Traj_B.loop_ub_e = *b_size;
  if (0 <= Test_Traj_B.loop_ub_e - 1) {
    memcpy(&Test_Traj_B.b_data_p[0], &b_data[0], Test_Traj_B.loop_ub_e * sizeof
           (real_T));
  }

  Test_Traj_tridisolve(a_data, Test_Traj_B.b_data_p, c_data,
                       Test_Traj_B.u_data_k, &Test_Traj_B.u_size_i,
                       Test_Traj_B.z_data_mx, &Test_Traj_B.z_size_bw);
  Test_Traj_B.b_gamma_g = (Test_Traj_B.d7 * x_data[*d_size - 1] /
    Test_Traj_B.b_gamma_g + x_data[0]) / (Test_Traj_B.d7 *
    Test_Traj_B.z_data_mx[*d_size - 1] / Test_Traj_B.b_gamma_g +
    (Test_Traj_B.z_data_mx[0] + 1.0));
  Test_Traj_B.loop_ub_e = *x_size;
  for (Test_Traj_B.f_d = 0; Test_Traj_B.f_d < Test_Traj_B.loop_ub_e;
       Test_Traj_B.f_d++) {
    x_data[Test_Traj_B.f_d] -= Test_Traj_B.b_gamma_g *
      Test_Traj_B.z_data_mx[Test_Traj_B.f_d];
  }
}

static void Test_Traj_solveHessian_p(const real_T Jtri_data[], const int32_T
  Jtri_size[2], const real_T v_data[], const int32_T *v_size, real_T dx_data[],
  int32_T *dx_size)
{
  Test_Traj_B.loop_ub_c = Jtri_size[0];
  if (0 <= Test_Traj_B.loop_ub_c - 1) {
    memcpy(&Test_Traj_B.lower_data[0], &Jtri_data[0], Test_Traj_B.loop_ub_c *
           sizeof(real_T));
  }

  Test_Traj_B.loop_ub_c = Jtri_size[0];
  Test_Traj_B.center_size = Jtri_size[0];
  for (Test_Traj_B.i9 = 0; Test_Traj_B.i9 < Test_Traj_B.loop_ub_c;
       Test_Traj_B.i9++) {
    Test_Traj_B.center_data[Test_Traj_B.i9] = Jtri_data[Test_Traj_B.i9 +
      Jtri_size[0]];
  }

  Test_Traj_B.loop_ub_c = Jtri_size[0];
  for (Test_Traj_B.i9 = 0; Test_Traj_B.i9 < Test_Traj_B.loop_ub_c;
       Test_Traj_B.i9++) {
    Test_Traj_B.upper_data[Test_Traj_B.i9] = Jtri_data[(Jtri_size[0] << 1) +
      Test_Traj_B.i9];
  }

  if ((Jtri_data[Jtri_size[0] - 1] == 0.0) && (Jtri_data[(Jtri_size[0] +
        (Jtri_size[0] << 1)) - 1] == 0.0)) {
    Test_Traj_B.loop_ub_c = Jtri_size[0];
    if (0 <= Test_Traj_B.loop_ub_c - 1) {
      memcpy(&Test_Traj_B.center_data_j[0], &Test_Traj_B.center_data[0],
             Test_Traj_B.loop_ub_c * sizeof(real_T));
    }

    Test_Traj_tridisolve(Test_Traj_B.upper_data, Test_Traj_B.center_data_j,
                         Test_Traj_B.lower_data, v_data, v_size,
                         Test_Traj_B.tmp_data_m1, &Test_Traj_B.tmp_size_oz);
    Test_Traj_tridisolve(Test_Traj_B.lower_data, Test_Traj_B.center_data,
                         Test_Traj_B.upper_data, Test_Traj_B.tmp_data_m1,
                         &Test_Traj_B.tmp_size_oz, dx_data, dx_size);
  } else {
    Test_Traj_B.center_size_a = Jtri_size[0];
    Test_Traj_B.loop_ub_c = Jtri_size[0];
    if (0 <= Test_Traj_B.loop_ub_c - 1) {
      memcpy(&Test_Traj_B.center_data_j[0], &Test_Traj_B.center_data[0],
             Test_Traj_B.loop_ub_c * sizeof(real_T));
    }

    Test_Traj_cyctridisolve_p(Test_Traj_B.upper_data, Test_Traj_B.center_data_j,
      &Test_Traj_B.center_size_a, Test_Traj_B.lower_data, v_data, v_size,
      Test_Traj_B.tmp_data_m1, &Test_Traj_B.tmp_size_oz);
    Test_Traj_cyctridisolve_p(Test_Traj_B.lower_data, Test_Traj_B.center_data,
      &Test_Traj_B.center_size, Test_Traj_B.upper_data, Test_Traj_B.tmp_data_m1,
      &Test_Traj_B.tmp_size_oz, dx_data, dx_size);
  }
}

static boolean_T Test_Traj_anyNonFinite(const real_T x_data[], const int32_T
  x_size[2])
{
  boolean_T p;
  int32_T nx;
  int32_T b_k;
  nx = x_size[0] * x_size[1] - 1;
  p = true;
  for (b_k = 0; b_k <= nx; b_k++) {
    if (p && ((!rtIsInf(x_data[b_k])) && (!rtIsNaN(x_data[b_k])))) {
    } else {
      p = false;
    }
  }

  return !p;
}

static boolean_T Test_Traj_ishermitian(const real_T A_data[], const int32_T
  A_size[2])
{
  boolean_T p;
  int32_T b_j;
  int32_T b_i;
  int32_T exitg1;
  boolean_T exitg2;
  p = (A_size[0] == A_size[1]);
  if (p) {
    b_j = 0;
    exitg2 = false;
    while ((!exitg2) && (b_j <= A_size[1] - 1)) {
      b_i = 0;
      do {
        exitg1 = 0;
        if (b_i <= b_j) {
          if (!(A_data[A_size[0] * b_j + b_i] == A_data[A_size[0] * b_i + b_j]))
          {
            p = false;
            exitg1 = 1;
          } else {
            b_i++;
          }
        } else {
          b_j++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  }

  return p;
}

static real_T Test_Traj_xzlangeM_p(const creal_T x_data[], const int32_T x_size
  [2])
{
  real_T y;
  real_T absxk;
  int32_T b_k;
  boolean_T d;
  boolean_T e;
  boolean_T exitg1;
  y = 0.0;
  d = (x_size[0] == 0);
  e = (x_size[1] == 0);
  if ((!d) && (!e)) {
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k <= x_size[0] * x_size[1] - 1)) {
      absxk = Test_Traj_rt_hypotd_snf(x_data[b_k].re, x_data[b_k].im);
      if (rtIsNaN(absxk)) {
        y = (rtNaN);
        exitg1 = true;
      } else {
        if (absxk > y) {
          y = absxk;
        }

        b_k++;
      }
    }
  }

  return y;
}

static boolean_T Test_Traj_isfinite(real_T x)
{
  return (!rtIsInf(x)) && (!rtIsNaN(x));
}

static void Test_Traj_xzlascl_ph(real_T cfrom, real_T cto, const creal_T A_data[],
  const int32_T A_size[2], creal_T b_A_data[], int32_T b_A_size[2])
{
  boolean_T notdone;
  int32_T loop_ub;
  int32_T i;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  loop_ub = A_size[0] * A_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&b_A_data[0], &A_data[0], (loop_ub + 1) * sizeof(creal_T));
  }

  Test_Traj_B.cfromc = cfrom;
  Test_Traj_B.ctoc = cto;
  notdone = true;
  while (notdone) {
    Test_Traj_B.cfrom1 = Test_Traj_B.cfromc * 2.0041683600089728E-292;
    Test_Traj_B.cto1 = Test_Traj_B.ctoc / 4.9896007738368E+291;
    if ((fabs(Test_Traj_B.cfrom1) > fabs(Test_Traj_B.ctoc)) && (Test_Traj_B.ctoc
         != 0.0)) {
      Test_Traj_B.mul = 2.0041683600089728E-292;
      Test_Traj_B.cfromc = Test_Traj_B.cfrom1;
    } else if (fabs(Test_Traj_B.cto1) > fabs(Test_Traj_B.cfromc)) {
      Test_Traj_B.mul = 4.9896007738368E+291;
      Test_Traj_B.ctoc = Test_Traj_B.cto1;
    } else {
      Test_Traj_B.mul = Test_Traj_B.ctoc / Test_Traj_B.cfromc;
      notdone = false;
    }

    loop_ub = b_A_size[0] * b_A_size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Test_Traj_B.b_A_data_e.re = Test_Traj_B.mul * b_A_data[i].re;
      Test_Traj_B.b_A_data_e.im = Test_Traj_B.mul * b_A_data[i].im;
      b_A_data[i] = Test_Traj_B.b_A_data_e;
    }
  }
}

static void Test_Traj_xzggbal_p(const creal_T A_data[], const int32_T A_size[2],
  creal_T b_A_data[], int32_T b_A_size[2], int32_T *ilo, int32_T *ihi, int32_T
  rscale_data[], int32_T *rscale_size)
{
  boolean_T found;
  int32_T b_jj;
  int32_T c_A_size_idx_0;
  int32_T atmp_im_tmp;
  int32_T exitg1;
  int32_T exitg2;
  boolean_T exitg3;
  boolean_T exitg4;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  Test_Traj_B.ii_a = A_size[0] * A_size[1] - 1;
  if (0 <= Test_Traj_B.ii_a) {
    memcpy(&b_A_data[0], &A_data[0], (Test_Traj_B.ii_a + 1) * sizeof(creal_T));
  }

  *rscale_size = A_size[0];
  Test_Traj_B.ii_a = A_size[0];
  for (c_A_size_idx_0 = 0; c_A_size_idx_0 < Test_Traj_B.ii_a; c_A_size_idx_0++)
  {
    rscale_data[c_A_size_idx_0] = 1;
  }

  *ilo = 1;
  *ihi = A_size[0];
  if (A_size[0] <= 1) {
    *ihi = 1;
  } else {
    do {
      exitg2 = 0;
      Test_Traj_B.i_hz = -1;
      Test_Traj_B.j_gc = 0;
      found = false;
      Test_Traj_B.ii_a = *ihi;
      exitg3 = false;
      while ((!exitg3) && (Test_Traj_B.ii_a > 0)) {
        Test_Traj_B.nzcount = 0;
        Test_Traj_B.i_hz = Test_Traj_B.ii_a - 1;
        Test_Traj_B.j_gc = *ihi;
        b_jj = 1;
        exitg4 = false;
        while ((!exitg4) && (b_jj - 1 <= *ihi - 1)) {
          c_A_size_idx_0 = ((b_jj - 1) * b_A_size[0] + Test_Traj_B.ii_a) - 1;
          if ((b_A_data[c_A_size_idx_0].re != 0.0) || (b_A_data[c_A_size_idx_0].
               im != 0.0) || (Test_Traj_B.ii_a == b_jj)) {
            if (Test_Traj_B.nzcount == 0) {
              Test_Traj_B.j_gc = b_jj;
              Test_Traj_B.nzcount = 1;
              b_jj++;
            } else {
              Test_Traj_B.nzcount = 2;
              exitg4 = true;
            }
          } else {
            b_jj++;
          }
        }

        if (Test_Traj_B.nzcount < 2) {
          found = true;
          exitg3 = true;
        } else {
          Test_Traj_B.ii_a--;
        }
      }

      if (!found) {
        exitg2 = 2;
      } else {
        c_A_size_idx_0 = b_A_size[0];
        Test_Traj_B.ii_a = b_A_size[0] * b_A_size[1] - 1;
        if (0 <= Test_Traj_B.ii_a) {
          memcpy(&Test_Traj_B.c_A_data[0], &b_A_data[0], (Test_Traj_B.ii_a + 1) *
                 sizeof(creal_T));
        }

        Test_Traj_B.nzcount = b_A_size[0];
        if (Test_Traj_B.i_hz + 1 != *ihi) {
          for (Test_Traj_B.ii_a = 1; Test_Traj_B.ii_a <= Test_Traj_B.nzcount;
               Test_Traj_B.ii_a++) {
            Test_Traj_B.atmp_re = Test_Traj_B.c_A_data[(Test_Traj_B.ii_a - 1) *
              c_A_size_idx_0 + Test_Traj_B.i_hz].re;
            b_jj = (Test_Traj_B.ii_a - 1) * c_A_size_idx_0;
            atmp_im_tmp = b_jj + Test_Traj_B.i_hz;
            Test_Traj_B.atmp_im = Test_Traj_B.c_A_data[atmp_im_tmp].im;
            b_jj = (b_jj + *ihi) - 1;
            Test_Traj_B.c_A_data[atmp_im_tmp] = Test_Traj_B.c_A_data[b_jj];
            Test_Traj_B.c_A_data[b_jj].re = Test_Traj_B.atmp_re;
            Test_Traj_B.c_A_data[b_jj].im = Test_Traj_B.atmp_im;
          }
        }

        if (Test_Traj_B.j_gc != *ihi) {
          for (Test_Traj_B.i_hz = 0; Test_Traj_B.i_hz < *ihi; Test_Traj_B.i_hz++)
          {
            atmp_im_tmp = (Test_Traj_B.j_gc - 1) * c_A_size_idx_0 +
              Test_Traj_B.i_hz;
            Test_Traj_B.atmp_re = Test_Traj_B.c_A_data[atmp_im_tmp].re;
            Test_Traj_B.atmp_im = Test_Traj_B.c_A_data[atmp_im_tmp].im;
            b_jj = (*ihi - 1) * c_A_size_idx_0 + Test_Traj_B.i_hz;
            Test_Traj_B.c_A_data[atmp_im_tmp] = Test_Traj_B.c_A_data[b_jj];
            Test_Traj_B.c_A_data[b_jj].re = Test_Traj_B.atmp_re;
            Test_Traj_B.c_A_data[b_jj].im = Test_Traj_B.atmp_im;
          }
        }

        Test_Traj_B.ii_a = b_A_size[0] * b_A_size[1] - 1;
        if (0 <= Test_Traj_B.ii_a) {
          memcpy(&b_A_data[0], &Test_Traj_B.c_A_data[0], (Test_Traj_B.ii_a + 1) *
                 sizeof(creal_T));
        }

        rscale_data[*ihi - 1] = Test_Traj_B.j_gc;
        (*ihi)--;
        if (*ihi == 1) {
          rscale_data[0] = 1;
          exitg2 = 1;
        }
      }
    } while (exitg2 == 0);

    if (exitg2 == 1) {
    } else {
      do {
        exitg1 = 0;
        Test_Traj_B.i_hz = 0;
        Test_Traj_B.j_gc = 0;
        found = false;
        b_jj = *ilo;
        exitg3 = false;
        while ((!exitg3) && (b_jj <= *ihi)) {
          Test_Traj_B.nzcount = 0;
          Test_Traj_B.i_hz = *ihi;
          Test_Traj_B.j_gc = b_jj;
          Test_Traj_B.ii_a = *ilo;
          exitg4 = false;
          while ((!exitg4) && (Test_Traj_B.ii_a <= *ihi)) {
            c_A_size_idx_0 = ((b_jj - 1) * b_A_size[0] + Test_Traj_B.ii_a) - 1;
            if ((b_A_data[c_A_size_idx_0].re != 0.0) || (b_A_data[c_A_size_idx_0]
                 .im != 0.0) || (Test_Traj_B.ii_a == b_jj)) {
              if (Test_Traj_B.nzcount == 0) {
                Test_Traj_B.i_hz = Test_Traj_B.ii_a;
                Test_Traj_B.nzcount = 1;
                Test_Traj_B.ii_a++;
              } else {
                Test_Traj_B.nzcount = 2;
                exitg4 = true;
              }
            } else {
              Test_Traj_B.ii_a++;
            }
          }

          if (Test_Traj_B.nzcount < 2) {
            found = true;
            exitg3 = true;
          } else {
            b_jj++;
          }
        }

        if (!found) {
          exitg1 = 1;
        } else {
          c_A_size_idx_0 = b_A_size[0];
          Test_Traj_B.ii_a = b_A_size[0] * b_A_size[1] - 1;
          if (0 <= Test_Traj_B.ii_a) {
            memcpy(&Test_Traj_B.c_A_data[0], &b_A_data[0], (Test_Traj_B.ii_a + 1)
                   * sizeof(creal_T));
          }

          Test_Traj_B.nzcount = b_A_size[0];
          if (Test_Traj_B.i_hz != *ilo) {
            for (Test_Traj_B.ii_a = *ilo; Test_Traj_B.ii_a <=
                 Test_Traj_B.nzcount; Test_Traj_B.ii_a++) {
              b_jj = (Test_Traj_B.ii_a - 1) * c_A_size_idx_0;
              atmp_im_tmp = (b_jj + Test_Traj_B.i_hz) - 1;
              Test_Traj_B.atmp_re = Test_Traj_B.c_A_data[atmp_im_tmp].re;
              Test_Traj_B.atmp_im = Test_Traj_B.c_A_data[atmp_im_tmp].im;
              b_jj = (b_jj + *ilo) - 1;
              Test_Traj_B.c_A_data[atmp_im_tmp] = Test_Traj_B.c_A_data[b_jj];
              Test_Traj_B.c_A_data[b_jj].re = Test_Traj_B.atmp_re;
              Test_Traj_B.c_A_data[b_jj].im = Test_Traj_B.atmp_im;
            }
          }

          if (Test_Traj_B.j_gc != *ilo) {
            for (Test_Traj_B.i_hz = 0; Test_Traj_B.i_hz < *ihi; Test_Traj_B.i_hz
                 ++) {
              atmp_im_tmp = (Test_Traj_B.j_gc - 1) * c_A_size_idx_0 +
                Test_Traj_B.i_hz;
              Test_Traj_B.atmp_re = Test_Traj_B.c_A_data[atmp_im_tmp].re;
              Test_Traj_B.atmp_im = Test_Traj_B.c_A_data[atmp_im_tmp].im;
              b_jj = (*ilo - 1) * c_A_size_idx_0 + Test_Traj_B.i_hz;
              Test_Traj_B.c_A_data[atmp_im_tmp] = Test_Traj_B.c_A_data[b_jj];
              Test_Traj_B.c_A_data[b_jj].re = Test_Traj_B.atmp_re;
              Test_Traj_B.c_A_data[b_jj].im = Test_Traj_B.atmp_im;
            }
          }

          Test_Traj_B.ii_a = b_A_size[0] * b_A_size[1] - 1;
          if (0 <= Test_Traj_B.ii_a) {
            memcpy(&b_A_data[0], &Test_Traj_B.c_A_data[0], (Test_Traj_B.ii_a + 1)
                   * sizeof(creal_T));
          }

          rscale_data[*ilo - 1] = Test_Traj_B.j_gc;
          (*ilo)++;
          if (*ilo == *ihi) {
            rscale_data[*ilo - 1] = *ilo;
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);
    }
  }
}

static void Test_Traj_xzlartg(const creal_T f, const creal_T g, real_T *cs,
  creal_T *sn, creal_T *r)
{
  int32_T count;
  int32_T rescaledir;
  boolean_T guard1 = false;
  Test_Traj_B.f2s = fabs(f.re);
  Test_Traj_B.di = fabs(f.im);
  Test_Traj_B.scale_e = Test_Traj_B.f2s;
  if (Test_Traj_B.di > Test_Traj_B.f2s) {
    Test_Traj_B.scale_e = Test_Traj_B.di;
  }

  Test_Traj_B.gs_re = fabs(g.re);
  Test_Traj_B.gs_im = fabs(g.im);
  if (Test_Traj_B.gs_im > Test_Traj_B.gs_re) {
    Test_Traj_B.gs_re = Test_Traj_B.gs_im;
  }

  if (Test_Traj_B.gs_re > Test_Traj_B.scale_e) {
    Test_Traj_B.scale_e = Test_Traj_B.gs_re;
  }

  Test_Traj_B.fs_re = f.re;
  Test_Traj_B.fs_im = f.im;
  Test_Traj_B.gs_re = g.re;
  Test_Traj_B.gs_im = g.im;
  count = -1;
  rescaledir = 0;
  guard1 = false;
  if (Test_Traj_B.scale_e >= 7.4428285367870146E+137) {
    do {
      count++;
      Test_Traj_B.fs_re *= 1.3435752215134178E-138;
      Test_Traj_B.fs_im *= 1.3435752215134178E-138;
      Test_Traj_B.gs_re *= 1.3435752215134178E-138;
      Test_Traj_B.gs_im *= 1.3435752215134178E-138;
      Test_Traj_B.scale_e *= 1.3435752215134178E-138;
    } while (!(Test_Traj_B.scale_e < 7.4428285367870146E+137));

    rescaledir = 1;
    guard1 = true;
  } else if (Test_Traj_B.scale_e <= 1.3435752215134178E-138) {
    if ((g.re == 0.0) && (g.im == 0.0)) {
      *cs = 1.0;
      sn->re = 0.0;
      sn->im = 0.0;
      *r = f;
    } else {
      do {
        count++;
        Test_Traj_B.fs_re *= 7.4428285367870146E+137;
        Test_Traj_B.fs_im *= 7.4428285367870146E+137;
        Test_Traj_B.gs_re *= 7.4428285367870146E+137;
        Test_Traj_B.gs_im *= 7.4428285367870146E+137;
        Test_Traj_B.scale_e *= 7.4428285367870146E+137;
      } while (!(Test_Traj_B.scale_e > 1.3435752215134178E-138));

      rescaledir = -1;
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    Test_Traj_B.scale_e = Test_Traj_B.fs_re * Test_Traj_B.fs_re +
      Test_Traj_B.fs_im * Test_Traj_B.fs_im;
    Test_Traj_B.g2 = Test_Traj_B.gs_re * Test_Traj_B.gs_re + Test_Traj_B.gs_im *
      Test_Traj_B.gs_im;
    Test_Traj_B.b_x_l = Test_Traj_B.g2;
    if (1.0 > Test_Traj_B.g2) {
      Test_Traj_B.b_x_l = 1.0;
    }

    if (Test_Traj_B.scale_e <= Test_Traj_B.b_x_l * 2.0041683600089728E-292) {
      if ((f.re == 0.0) && (f.im == 0.0)) {
        *cs = 0.0;
        r->re = Test_Traj_rt_hypotd_snf(g.re, g.im);
        r->im = 0.0;
        Test_Traj_B.f2s = Test_Traj_rt_hypotd_snf(Test_Traj_B.gs_re,
          Test_Traj_B.gs_im);
        sn->re = Test_Traj_B.gs_re / Test_Traj_B.f2s;
        sn->im = -Test_Traj_B.gs_im / Test_Traj_B.f2s;
      } else {
        Test_Traj_B.scale_e = sqrt(Test_Traj_B.g2);
        *cs = Test_Traj_rt_hypotd_snf(Test_Traj_B.fs_re, Test_Traj_B.fs_im) /
          Test_Traj_B.scale_e;
        if (Test_Traj_B.di > Test_Traj_B.f2s) {
          Test_Traj_B.f2s = Test_Traj_B.di;
        }

        if (Test_Traj_B.f2s > 1.0) {
          Test_Traj_B.f2s = Test_Traj_rt_hypotd_snf(f.re, f.im);
          Test_Traj_B.fs_re = f.re / Test_Traj_B.f2s;
          Test_Traj_B.fs_im = f.im / Test_Traj_B.f2s;
        } else {
          Test_Traj_B.fs_re = 7.4428285367870146E+137 * f.re;
          Test_Traj_B.di = 7.4428285367870146E+137 * f.im;
          Test_Traj_B.f2s = Test_Traj_rt_hypotd_snf(Test_Traj_B.fs_re,
            Test_Traj_B.di);
          Test_Traj_B.fs_re /= Test_Traj_B.f2s;
          Test_Traj_B.fs_im = Test_Traj_B.di / Test_Traj_B.f2s;
        }

        Test_Traj_B.gs_re /= Test_Traj_B.scale_e;
        Test_Traj_B.gs_im = -Test_Traj_B.gs_im / Test_Traj_B.scale_e;
        sn->re = Test_Traj_B.fs_re * Test_Traj_B.gs_re - Test_Traj_B.fs_im *
          Test_Traj_B.gs_im;
        sn->im = Test_Traj_B.fs_re * Test_Traj_B.gs_im + Test_Traj_B.fs_im *
          Test_Traj_B.gs_re;
        r->re = (sn->re * g.re - sn->im * g.im) + *cs * f.re;
        r->im = (sn->re * g.im + sn->im * g.re) + *cs * f.im;
      }
    } else {
      Test_Traj_B.f2s = sqrt(Test_Traj_B.g2 / Test_Traj_B.scale_e + 1.0);
      r->re = Test_Traj_B.f2s * Test_Traj_B.fs_re;
      r->im = Test_Traj_B.f2s * Test_Traj_B.fs_im;
      *cs = 1.0 / Test_Traj_B.f2s;
      Test_Traj_B.f2s = Test_Traj_B.scale_e + Test_Traj_B.g2;
      Test_Traj_B.fs_re = r->re / Test_Traj_B.f2s;
      Test_Traj_B.f2s = r->im / Test_Traj_B.f2s;
      sn->re = Test_Traj_B.fs_re * Test_Traj_B.gs_re - Test_Traj_B.f2s *
        -Test_Traj_B.gs_im;
      sn->im = Test_Traj_B.fs_re * -Test_Traj_B.gs_im + Test_Traj_B.f2s *
        Test_Traj_B.gs_re;
      if (rescaledir > 0) {
        for (rescaledir = 0; rescaledir <= count; rescaledir++) {
          r->re *= 7.4428285367870146E+137;
          r->im *= 7.4428285367870146E+137;
        }
      } else {
        if (rescaledir < 0) {
          for (rescaledir = 0; rescaledir <= count; rescaledir++) {
            r->re *= 1.3435752215134178E-138;
            r->im *= 1.3435752215134178E-138;
          }
        }
      }
    }
  }
}

static void Test_Traj_xzgghrd_p(int32_T ilo, int32_T ihi, const creal_T A_data[],
  const int32_T A_size[2], creal_T b_A_data[], int32_T b_A_size[2])
{
  int32_T stemp_re_tmp_tmp;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  Test_Traj_B.n_g = A_size[0] * A_size[1] - 1;
  if (0 <= Test_Traj_B.n_g) {
    memcpy(&b_A_data[0], &A_data[0], (Test_Traj_B.n_g + 1) * sizeof(creal_T));
  }

  Test_Traj_B.n_g = A_size[0];
  if ((A_size[0] > 1) && (ihi >= ilo + 2)) {
    Test_Traj_B.jcol = ilo - 1;
    while (Test_Traj_B.jcol + 1 < ihi - 1) {
      Test_Traj_B.jrow = ihi - 2;
      while (Test_Traj_B.jrow + 2 > Test_Traj_B.jcol + 2) {
        Test_Traj_xzlartg(b_A_data[Test_Traj_B.jrow + b_A_size[0] *
                          Test_Traj_B.jcol], b_A_data[(Test_Traj_B.jrow +
          b_A_size[0] * Test_Traj_B.jcol) + 1], &Test_Traj_B.c_p,
                          &Test_Traj_B.s_n, &b_A_data[Test_Traj_B.jrow +
                          b_A_size[0] * Test_Traj_B.jcol]);
        Test_Traj_B.stemp_re_tmp = (Test_Traj_B.jrow + b_A_size[0] *
          Test_Traj_B.jcol) + 1;
        b_A_data[Test_Traj_B.stemp_re_tmp].re = 0.0;
        b_A_data[Test_Traj_B.stemp_re_tmp].im = 0.0;
        for (Test_Traj_B.j_pj = Test_Traj_B.jcol + 2; Test_Traj_B.j_pj <=
             Test_Traj_B.n_g; Test_Traj_B.j_pj++) {
          stemp_re_tmp_tmp = (Test_Traj_B.j_pj - 1) * b_A_size[0] +
            Test_Traj_B.jrow;
          Test_Traj_B.stemp_re_tmp = stemp_re_tmp_tmp + 1;
          Test_Traj_B.stemp_re_d = (b_A_data[Test_Traj_B.stemp_re_tmp].re *
            Test_Traj_B.s_n.re - b_A_data[Test_Traj_B.stemp_re_tmp].im *
            Test_Traj_B.s_n.im) + b_A_data[stemp_re_tmp_tmp].re *
            Test_Traj_B.c_p;
          Test_Traj_B.stemp_im_k = (b_A_data[Test_Traj_B.stemp_re_tmp].im *
            Test_Traj_B.s_n.re + b_A_data[Test_Traj_B.stemp_re_tmp].re *
            Test_Traj_B.s_n.im) + b_A_data[stemp_re_tmp_tmp].im *
            Test_Traj_B.c_p;
          Test_Traj_B.d9 = b_A_data[stemp_re_tmp_tmp].re;
          b_A_data[Test_Traj_B.stemp_re_tmp].re =
            b_A_data[Test_Traj_B.stemp_re_tmp].re * Test_Traj_B.c_p -
            (b_A_data[stemp_re_tmp_tmp].re * Test_Traj_B.s_n.re +
             b_A_data[stemp_re_tmp_tmp].im * Test_Traj_B.s_n.im);
          b_A_data[Test_Traj_B.stemp_re_tmp].im =
            b_A_data[Test_Traj_B.stemp_re_tmp].im * Test_Traj_B.c_p -
            (b_A_data[stemp_re_tmp_tmp].im * Test_Traj_B.s_n.re -
             Test_Traj_B.s_n.im * Test_Traj_B.d9);
          b_A_data[stemp_re_tmp_tmp].re = Test_Traj_B.stemp_re_d;
          b_A_data[stemp_re_tmp_tmp].im = Test_Traj_B.stemp_im_k;
        }

        Test_Traj_B.s_n.re = -Test_Traj_B.s_n.re;
        Test_Traj_B.s_n.im = -Test_Traj_B.s_n.im;
        for (Test_Traj_B.j_pj = 1; Test_Traj_B.j_pj <= ihi; Test_Traj_B.j_pj++)
        {
          Test_Traj_B.stemp_re_tmp = (b_A_size[0] * Test_Traj_B.jrow +
            Test_Traj_B.j_pj) - 1;
          stemp_re_tmp_tmp = ((Test_Traj_B.jrow + 1) * b_A_size[0] +
                              Test_Traj_B.j_pj) - 1;
          Test_Traj_B.stemp_re_d = b_A_data[stemp_re_tmp_tmp].re *
            Test_Traj_B.c_p + (b_A_data[Test_Traj_B.stemp_re_tmp].re *
                               Test_Traj_B.s_n.re -
                               b_A_data[Test_Traj_B.stemp_re_tmp].im *
                               Test_Traj_B.s_n.im);
          Test_Traj_B.stemp_im_k = b_A_data[stemp_re_tmp_tmp].im *
            Test_Traj_B.c_p + (b_A_data[Test_Traj_B.stemp_re_tmp].im *
                               Test_Traj_B.s_n.re +
                               b_A_data[Test_Traj_B.stemp_re_tmp].re *
                               Test_Traj_B.s_n.im);
          Test_Traj_B.d9 = b_A_data[stemp_re_tmp_tmp].re;
          b_A_data[Test_Traj_B.stemp_re_tmp].re =
            b_A_data[Test_Traj_B.stemp_re_tmp].re * Test_Traj_B.c_p -
            (b_A_data[stemp_re_tmp_tmp].re * Test_Traj_B.s_n.re +
             b_A_data[stemp_re_tmp_tmp].im * Test_Traj_B.s_n.im);
          b_A_data[Test_Traj_B.stemp_re_tmp].im =
            b_A_data[Test_Traj_B.stemp_re_tmp].im * Test_Traj_B.c_p -
            (b_A_data[stemp_re_tmp_tmp].im * Test_Traj_B.s_n.re -
             Test_Traj_B.s_n.im * Test_Traj_B.d9);
          b_A_data[stemp_re_tmp_tmp].re = Test_Traj_B.stemp_re_d;
          b_A_data[stemp_re_tmp_tmp].im = Test_Traj_B.stemp_im_k;
        }

        Test_Traj_B.jrow--;
      }

      Test_Traj_B.jcol++;
    }
  }
}

static real_T Test_Traj_xzlanhs_p(const creal_T A_data[], const int32_T A_size[2],
  int32_T ilo, int32_T ihi)
{
  real_T f;
  boolean_T firstNonZero;
  int32_T i;
  int32_T reAij_tmp;
  f = 0.0;
  if (ilo <= ihi) {
    Test_Traj_B.scale_k = 0.0;
    Test_Traj_B.sumsq_g = 0.0;
    firstNonZero = true;
    for (Test_Traj_B.j_f = ilo; Test_Traj_B.j_f <= ihi; Test_Traj_B.j_f++) {
      Test_Traj_B.b_j1 = Test_Traj_B.j_f + 1;
      if (ihi < Test_Traj_B.j_f + 1) {
        Test_Traj_B.b_j1 = ihi;
      }

      for (i = ilo; i <= Test_Traj_B.b_j1; i++) {
        reAij_tmp = ((Test_Traj_B.j_f - 1) * A_size[0] + i) - 1;
        if (A_data[reAij_tmp].re != 0.0) {
          Test_Traj_B.temp1_p = fabs(A_data[reAij_tmp].re);
          if (firstNonZero) {
            Test_Traj_B.sumsq_g = 1.0;
            Test_Traj_B.scale_k = Test_Traj_B.temp1_p;
            firstNonZero = false;
          } else if (Test_Traj_B.scale_k < Test_Traj_B.temp1_p) {
            Test_Traj_B.temp2_f = Test_Traj_B.scale_k / Test_Traj_B.temp1_p;
            Test_Traj_B.sumsq_g = Test_Traj_B.sumsq_g * Test_Traj_B.temp2_f *
              Test_Traj_B.temp2_f + 1.0;
            Test_Traj_B.scale_k = Test_Traj_B.temp1_p;
          } else {
            Test_Traj_B.temp2_f = Test_Traj_B.temp1_p / Test_Traj_B.scale_k;
            Test_Traj_B.sumsq_g += Test_Traj_B.temp2_f * Test_Traj_B.temp2_f;
          }
        }

        if (A_data[reAij_tmp].im != 0.0) {
          Test_Traj_B.temp1_p = fabs(A_data[reAij_tmp].im);
          if (firstNonZero) {
            Test_Traj_B.sumsq_g = 1.0;
            Test_Traj_B.scale_k = Test_Traj_B.temp1_p;
            firstNonZero = false;
          } else if (Test_Traj_B.scale_k < Test_Traj_B.temp1_p) {
            Test_Traj_B.temp2_f = Test_Traj_B.scale_k / Test_Traj_B.temp1_p;
            Test_Traj_B.sumsq_g = Test_Traj_B.sumsq_g * Test_Traj_B.temp2_f *
              Test_Traj_B.temp2_f + 1.0;
            Test_Traj_B.scale_k = Test_Traj_B.temp1_p;
          } else {
            Test_Traj_B.temp2_f = Test_Traj_B.temp1_p / Test_Traj_B.scale_k;
            Test_Traj_B.sumsq_g += Test_Traj_B.temp2_f * Test_Traj_B.temp2_f;
          }
        }
      }
    }

    f = Test_Traj_B.scale_k * sqrt(Test_Traj_B.sumsq_g);
  }

  return f;
}

static int32_T Test_Traj_mod(int32_T x)
{
  return x - x / 10 * 10;
}

static void Test_Traj_xzlartg_p(const creal_T f, const creal_T g, real_T *cs,
  creal_T *sn)
{
  boolean_T guard1 = false;
  Test_Traj_B.f2s_f = fabs(f.re);
  Test_Traj_B.di_j = fabs(f.im);
  Test_Traj_B.scale_gh = Test_Traj_B.f2s_f;
  if (Test_Traj_B.di_j > Test_Traj_B.f2s_f) {
    Test_Traj_B.scale_gh = Test_Traj_B.di_j;
  }

  Test_Traj_B.gs_re_f = fabs(g.re);
  Test_Traj_B.gs_im_n = fabs(g.im);
  if (Test_Traj_B.gs_im_n > Test_Traj_B.gs_re_f) {
    Test_Traj_B.gs_re_f = Test_Traj_B.gs_im_n;
  }

  if (Test_Traj_B.gs_re_f > Test_Traj_B.scale_gh) {
    Test_Traj_B.scale_gh = Test_Traj_B.gs_re_f;
  }

  Test_Traj_B.fs_re_p = f.re;
  Test_Traj_B.fs_im_d = f.im;
  Test_Traj_B.gs_re_f = g.re;
  Test_Traj_B.gs_im_n = g.im;
  guard1 = false;
  if (Test_Traj_B.scale_gh >= 7.4428285367870146E+137) {
    do {
      Test_Traj_B.fs_re_p *= 1.3435752215134178E-138;
      Test_Traj_B.fs_im_d *= 1.3435752215134178E-138;
      Test_Traj_B.gs_re_f *= 1.3435752215134178E-138;
      Test_Traj_B.gs_im_n *= 1.3435752215134178E-138;
      Test_Traj_B.scale_gh *= 1.3435752215134178E-138;
    } while (!(Test_Traj_B.scale_gh < 7.4428285367870146E+137));

    guard1 = true;
  } else if (Test_Traj_B.scale_gh <= 1.3435752215134178E-138) {
    if ((g.re == 0.0) && (g.im == 0.0)) {
      *cs = 1.0;
      sn->re = 0.0;
      sn->im = 0.0;
    } else {
      do {
        Test_Traj_B.fs_re_p *= 7.4428285367870146E+137;
        Test_Traj_B.fs_im_d *= 7.4428285367870146E+137;
        Test_Traj_B.gs_re_f *= 7.4428285367870146E+137;
        Test_Traj_B.gs_im_n *= 7.4428285367870146E+137;
        Test_Traj_B.scale_gh *= 7.4428285367870146E+137;
      } while (!(Test_Traj_B.scale_gh > 1.3435752215134178E-138));

      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    Test_Traj_B.scale_gh = Test_Traj_B.fs_re_p * Test_Traj_B.fs_re_p +
      Test_Traj_B.fs_im_d * Test_Traj_B.fs_im_d;
    Test_Traj_B.g2_d = Test_Traj_B.gs_re_f * Test_Traj_B.gs_re_f +
      Test_Traj_B.gs_im_n * Test_Traj_B.gs_im_n;
    Test_Traj_B.b_x_e = Test_Traj_B.g2_d;
    if (1.0 > Test_Traj_B.g2_d) {
      Test_Traj_B.b_x_e = 1.0;
    }

    if (Test_Traj_B.scale_gh <= Test_Traj_B.b_x_e * 2.0041683600089728E-292) {
      if ((f.re == 0.0) && (f.im == 0.0)) {
        *cs = 0.0;
        Test_Traj_B.f2s_f = Test_Traj_rt_hypotd_snf(Test_Traj_B.gs_re_f,
          Test_Traj_B.gs_im_n);
        sn->re = Test_Traj_B.gs_re_f / Test_Traj_B.f2s_f;
        sn->im = -Test_Traj_B.gs_im_n / Test_Traj_B.f2s_f;
      } else {
        Test_Traj_B.scale_gh = sqrt(Test_Traj_B.g2_d);
        *cs = Test_Traj_rt_hypotd_snf(Test_Traj_B.fs_re_p, Test_Traj_B.fs_im_d) /
          Test_Traj_B.scale_gh;
        if (Test_Traj_B.di_j > Test_Traj_B.f2s_f) {
          Test_Traj_B.f2s_f = Test_Traj_B.di_j;
        }

        if (Test_Traj_B.f2s_f > 1.0) {
          Test_Traj_B.f2s_f = Test_Traj_rt_hypotd_snf(f.re, f.im);
          Test_Traj_B.fs_re_p = f.re / Test_Traj_B.f2s_f;
          Test_Traj_B.fs_im_d = f.im / Test_Traj_B.f2s_f;
        } else {
          Test_Traj_B.fs_re_p = 7.4428285367870146E+137 * f.re;
          Test_Traj_B.di_j = 7.4428285367870146E+137 * f.im;
          Test_Traj_B.f2s_f = Test_Traj_rt_hypotd_snf(Test_Traj_B.fs_re_p,
            Test_Traj_B.di_j);
          Test_Traj_B.fs_re_p /= Test_Traj_B.f2s_f;
          Test_Traj_B.fs_im_d = Test_Traj_B.di_j / Test_Traj_B.f2s_f;
        }

        Test_Traj_B.gs_re_f /= Test_Traj_B.scale_gh;
        Test_Traj_B.gs_im_n = -Test_Traj_B.gs_im_n / Test_Traj_B.scale_gh;
        sn->re = Test_Traj_B.fs_re_p * Test_Traj_B.gs_re_f - Test_Traj_B.fs_im_d
          * Test_Traj_B.gs_im_n;
        sn->im = Test_Traj_B.fs_re_p * Test_Traj_B.gs_im_n + Test_Traj_B.fs_im_d
          * Test_Traj_B.gs_re_f;
      }
    } else {
      Test_Traj_B.f2s_f = sqrt(Test_Traj_B.g2_d / Test_Traj_B.scale_gh + 1.0);
      Test_Traj_B.fs_re_p *= Test_Traj_B.f2s_f;
      Test_Traj_B.fs_im_d *= Test_Traj_B.f2s_f;
      *cs = 1.0 / Test_Traj_B.f2s_f;
      Test_Traj_B.f2s_f = Test_Traj_B.scale_gh + Test_Traj_B.g2_d;
      Test_Traj_B.fs_re_p /= Test_Traj_B.f2s_f;
      Test_Traj_B.fs_im_d /= Test_Traj_B.f2s_f;
      sn->re = Test_Traj_B.fs_re_p * Test_Traj_B.gs_re_f - Test_Traj_B.fs_im_d *
        -Test_Traj_B.gs_im_n;
      sn->im = Test_Traj_B.fs_re_p * -Test_Traj_B.gs_im_n + Test_Traj_B.fs_im_d *
        Test_Traj_B.gs_re_f;
    }
  }
}

static void Test_Traj_xzhgeqz_p(const creal_T A_data[], const int32_T A_size[2],
  int32_T ilo, int32_T ihi, int32_T *info, creal_T alpha1_data[], int32_T
  *alpha1_size, creal_T beta1_data[], int32_T *beta1_size)
{
  boolean_T failed;
  boolean_T goto60;
  boolean_T goto70;
  boolean_T goto90;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  int32_T exitg1;
  boolean_T exitg2;
  Test_Traj_B.b_A_size_idx_0 = A_size[0];
  Test_Traj_B.ifirst = A_size[0] * A_size[1] - 1;
  if (0 <= Test_Traj_B.ifirst) {
    memcpy(&Test_Traj_B.b_A_data[0], &A_data[0], (Test_Traj_B.ifirst + 1) *
           sizeof(creal_T));
  }

  *info = 0;
  if ((A_size[0] == 1) && (A_size[1] == 1)) {
    ihi = 1;
  }

  Test_Traj_B.n_p = A_size[0];
  *alpha1_size = A_size[0];
  Test_Traj_B.ifirst = A_size[0];
  if (0 <= Test_Traj_B.ifirst - 1) {
    memset(&alpha1_data[0], 0, Test_Traj_B.ifirst * sizeof(creal_T));
  }

  *beta1_size = A_size[0];
  Test_Traj_B.ifirst = A_size[0];
  for (Test_Traj_B.jp1 = 0; Test_Traj_B.jp1 < Test_Traj_B.ifirst;
       Test_Traj_B.jp1++) {
    beta1_data[Test_Traj_B.jp1].re = 1.0;
    beta1_data[Test_Traj_B.jp1].im = 0.0;
  }

  Test_Traj_B.eshift_re = 0.0;
  Test_Traj_B.eshift_im = 0.0;
  Test_Traj_B.ctemp.re = 0.0;
  Test_Traj_B.ctemp.im = 0.0;
  Test_Traj_B.anorm = Test_Traj_xzlanhs_p(A_data, A_size, ilo, ihi);
  Test_Traj_B.bscale = 2.2204460492503131E-16 * Test_Traj_B.anorm;
  Test_Traj_B.b_atol = 2.2250738585072014E-308;
  if (Test_Traj_B.bscale > 2.2250738585072014E-308) {
    Test_Traj_B.b_atol = Test_Traj_B.bscale;
  }

  Test_Traj_B.bscale = 2.2250738585072014E-308;
  if (Test_Traj_B.anorm > 2.2250738585072014E-308) {
    Test_Traj_B.bscale = Test_Traj_B.anorm;
  }

  Test_Traj_B.anorm = 1.0 / Test_Traj_B.bscale;
  Test_Traj_B.bscale = 1.0 / sqrt(static_cast<real_T>(A_size[0]));
  failed = true;
  for (Test_Traj_B.ifirst = ihi + 1; Test_Traj_B.ifirst <= Test_Traj_B.n_p;
       Test_Traj_B.ifirst++) {
    alpha1_data[Test_Traj_B.ifirst - 1] = A_data[((Test_Traj_B.ifirst - 1) *
      A_size[0] + Test_Traj_B.ifirst) - 1];
  }

  guard1 = false;
  guard2 = false;
  if (ihi >= ilo) {
    Test_Traj_B.ifirst = ilo;
    Test_Traj_B.istart_m = ilo;
    Test_Traj_B.n_p = ihi - 1;
    Test_Traj_B.ilastm1 = ihi - 2;
    Test_Traj_B.ilastm = ihi;
    Test_Traj_B.iiter = 0;
    goto60 = false;
    goto70 = false;
    goto90 = false;
    Test_Traj_B.jiter = 0;
    do {
      exitg1 = 0;
      if (Test_Traj_B.jiter <= ((ihi - ilo) + 1) * 30 - 1) {
        if (Test_Traj_B.n_p + 1 == ilo) {
          goto60 = true;
        } else {
          Test_Traj_B.jp1 = Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.ilastm1 +
            Test_Traj_B.n_p;
          if (fabs(Test_Traj_B.b_A_data[Test_Traj_B.jp1].re) + fabs
              (Test_Traj_B.b_A_data[Test_Traj_B.jp1].im) <= Test_Traj_B.b_atol)
          {
            Test_Traj_B.b_A_data[Test_Traj_B.jp1].re = 0.0;
            Test_Traj_B.b_A_data[Test_Traj_B.jp1].im = 0.0;
            goto60 = true;
          } else {
            Test_Traj_B.j_a = Test_Traj_B.ilastm1 + 1;
            guard3 = false;
            exitg2 = false;
            while ((!exitg2) && (Test_Traj_B.j_a >= ilo)) {
              if (Test_Traj_B.j_a == ilo) {
                guard3 = true;
                exitg2 = true;
              } else {
                Test_Traj_B.jp1 = ((Test_Traj_B.j_a - 2) *
                                   Test_Traj_B.b_A_size_idx_0 + Test_Traj_B.j_a)
                  - 1;
                if (fabs(Test_Traj_B.b_A_data[Test_Traj_B.jp1].re) + fabs
                    (Test_Traj_B.b_A_data[Test_Traj_B.jp1].im) <=
                    Test_Traj_B.b_atol) {
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].re = 0.0;
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].im = 0.0;
                  guard3 = true;
                  exitg2 = true;
                } else {
                  Test_Traj_B.j_a--;
                  guard3 = false;
                }
              }
            }

            if (guard3) {
              Test_Traj_B.ifirst = Test_Traj_B.j_a;
              goto70 = true;
            }
          }
        }

        if (goto60 || goto70) {
          if (goto60) {
            goto60 = false;
            alpha1_data[Test_Traj_B.n_p] =
              Test_Traj_B.b_A_data[Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.n_p
              + Test_Traj_B.n_p];
            Test_Traj_B.n_p = Test_Traj_B.ilastm1;
            Test_Traj_B.ilastm1--;
            if (Test_Traj_B.n_p + 1 < ilo) {
              failed = false;
              guard2 = true;
              exitg1 = 1;
            } else {
              Test_Traj_B.iiter = 0;
              Test_Traj_B.eshift_re = 0.0;
              Test_Traj_B.eshift_im = 0.0;
              Test_Traj_B.ilastm = Test_Traj_B.n_p + 1;
              Test_Traj_B.jiter++;
            }
          } else {
            if (goto70) {
              goto70 = false;
              Test_Traj_B.iiter++;
              if (Test_Traj_mod(Test_Traj_B.iiter) != 0) {
                Test_Traj_B.j_a = Test_Traj_B.b_A_size_idx_0 *
                  Test_Traj_B.ilastm1 + Test_Traj_B.ilastm1;
                Test_Traj_B.tempr = Test_Traj_B.b_A_data[Test_Traj_B.j_a].re *
                  Test_Traj_B.anorm;
                Test_Traj_B.ai_e = Test_Traj_B.b_A_data[Test_Traj_B.j_a].im *
                  Test_Traj_B.anorm;
                if (Test_Traj_B.ai_e == 0.0) {
                  Test_Traj_B.ad11.re = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.ad11.im = 0.0;
                } else if (Test_Traj_B.tempr == 0.0) {
                  Test_Traj_B.ad11.re = 0.0;
                  Test_Traj_B.ad11.im = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                } else {
                  Test_Traj_B.ad11.re = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.ad11.im = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                }

                Test_Traj_B.j_a = Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.n_p +
                  Test_Traj_B.n_p;
                Test_Traj_B.tempr = Test_Traj_B.b_A_data[Test_Traj_B.j_a].re *
                  Test_Traj_B.anorm;
                Test_Traj_B.ai_e = Test_Traj_B.b_A_data[Test_Traj_B.j_a].im *
                  Test_Traj_B.anorm;
                if (Test_Traj_B.ai_e == 0.0) {
                  Test_Traj_B.stemp_re = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.stemp_im = 0.0;
                } else if (Test_Traj_B.tempr == 0.0) {
                  Test_Traj_B.stemp_re = 0.0;
                  Test_Traj_B.stemp_im = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                } else {
                  Test_Traj_B.stemp_re = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.stemp_im = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                }

                Test_Traj_B.t1.re = (Test_Traj_B.ad11.re + Test_Traj_B.stemp_re)
                  * 0.5;
                Test_Traj_B.t1.im = (Test_Traj_B.ad11.im + Test_Traj_B.stemp_im)
                  * 0.5;
                Test_Traj_B.j_a = Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.n_p +
                  Test_Traj_B.ilastm1;
                Test_Traj_B.tempr = Test_Traj_B.b_A_data[Test_Traj_B.j_a].re *
                  Test_Traj_B.anorm;
                Test_Traj_B.ai_e = Test_Traj_B.b_A_data[Test_Traj_B.j_a].im *
                  Test_Traj_B.anorm;
                if (Test_Traj_B.ai_e == 0.0) {
                  Test_Traj_B.temp = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.temp2 = 0.0;
                } else if (Test_Traj_B.tempr == 0.0) {
                  Test_Traj_B.temp = 0.0;
                  Test_Traj_B.temp2 = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                } else {
                  Test_Traj_B.temp = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.temp2 = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                }

                Test_Traj_B.j_a = Test_Traj_B.b_A_size_idx_0 *
                  Test_Traj_B.ilastm1 + Test_Traj_B.n_p;
                Test_Traj_B.tempr = Test_Traj_B.b_A_data[Test_Traj_B.j_a].re *
                  Test_Traj_B.anorm;
                Test_Traj_B.ai_e = Test_Traj_B.b_A_data[Test_Traj_B.j_a].im *
                  Test_Traj_B.anorm;
                if (Test_Traj_B.ai_e == 0.0) {
                  Test_Traj_B.tempr /= Test_Traj_B.bscale;
                  Test_Traj_B.ai_e = 0.0;
                } else if (Test_Traj_B.tempr == 0.0) {
                  Test_Traj_B.tempr = 0.0;
                  Test_Traj_B.ai_e /= Test_Traj_B.bscale;
                } else {
                  Test_Traj_B.tempr /= Test_Traj_B.bscale;
                  Test_Traj_B.ai_e /= Test_Traj_B.bscale;
                }

                Test_Traj_B.t1_i.re = ((Test_Traj_B.t1.re * Test_Traj_B.t1.re -
                  Test_Traj_B.t1.im * Test_Traj_B.t1.im) + (Test_Traj_B.temp *
                  Test_Traj_B.tempr - Test_Traj_B.temp2 * Test_Traj_B.ai_e)) -
                  (Test_Traj_B.ad11.re * Test_Traj_B.stemp_re -
                   Test_Traj_B.ad11.im * Test_Traj_B.stemp_im);
                Test_Traj_B.t1_tmp = Test_Traj_B.t1.re * Test_Traj_B.t1.im;
                Test_Traj_B.t1_i.im = ((Test_Traj_B.t1_tmp + Test_Traj_B.t1_tmp)
                  + (Test_Traj_B.temp * Test_Traj_B.ai_e + Test_Traj_B.temp2 *
                     Test_Traj_B.tempr)) - (Test_Traj_B.ad11.re *
                  Test_Traj_B.stemp_im + Test_Traj_B.ad11.im *
                  Test_Traj_B.stemp_re);
                Test_Traj_B.ad11 = Test_Traj_sqrt_p(Test_Traj_B.t1_i);
                if ((Test_Traj_B.t1.re - Test_Traj_B.stemp_re) *
                    Test_Traj_B.ad11.re + (Test_Traj_B.t1.im -
                     Test_Traj_B.stemp_im) * Test_Traj_B.ad11.im <= 0.0) {
                  Test_Traj_B.stemp_re = Test_Traj_B.t1.re + Test_Traj_B.ad11.re;
                  Test_Traj_B.stemp_im = Test_Traj_B.t1.im + Test_Traj_B.ad11.im;
                } else {
                  Test_Traj_B.stemp_re = Test_Traj_B.t1.re - Test_Traj_B.ad11.re;
                  Test_Traj_B.stemp_im = Test_Traj_B.t1.im - Test_Traj_B.ad11.im;
                }
              } else {
                Test_Traj_B.j_a = Test_Traj_B.b_A_size_idx_0 *
                  Test_Traj_B.ilastm1 + Test_Traj_B.n_p;
                Test_Traj_B.tempr = Test_Traj_B.b_A_data[Test_Traj_B.j_a].re *
                  Test_Traj_B.anorm;
                Test_Traj_B.ai_e = Test_Traj_B.b_A_data[Test_Traj_B.j_a].im *
                  Test_Traj_B.anorm;
                if (Test_Traj_B.ai_e == 0.0) {
                  Test_Traj_B.temp = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.temp2 = 0.0;
                } else if (Test_Traj_B.tempr == 0.0) {
                  Test_Traj_B.temp = 0.0;
                  Test_Traj_B.temp2 = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                } else {
                  Test_Traj_B.temp = Test_Traj_B.tempr / Test_Traj_B.bscale;
                  Test_Traj_B.temp2 = Test_Traj_B.ai_e / Test_Traj_B.bscale;
                }

                Test_Traj_B.eshift_re += Test_Traj_B.temp;
                Test_Traj_B.eshift_im += Test_Traj_B.temp2;
                Test_Traj_B.stemp_re = Test_Traj_B.eshift_re;
                Test_Traj_B.stemp_im = Test_Traj_B.eshift_im;
              }

              Test_Traj_B.j_a = Test_Traj_B.ilastm1;
              Test_Traj_B.jp1 = Test_Traj_B.ilastm1 + 1;
              exitg2 = false;
              while ((!exitg2) && (Test_Traj_B.j_a + 1 > Test_Traj_B.ifirst)) {
                Test_Traj_B.istart_m = Test_Traj_B.j_a + 1;
                Test_Traj_B.ctemp_tmp_tmp = Test_Traj_B.b_A_size_idx_0 *
                  Test_Traj_B.j_a;
                Test_Traj_B.ctemp_tmp = Test_Traj_B.ctemp_tmp_tmp +
                  Test_Traj_B.j_a;
                Test_Traj_B.ctemp.re =
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp].re *
                  Test_Traj_B.anorm - Test_Traj_B.stemp_re * Test_Traj_B.bscale;
                Test_Traj_B.ctemp.im =
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp].im *
                  Test_Traj_B.anorm - Test_Traj_B.stemp_im * Test_Traj_B.bscale;
                Test_Traj_B.temp = fabs(Test_Traj_B.ctemp.re) + fabs
                  (Test_Traj_B.ctemp.im);
                Test_Traj_B.jp1 += Test_Traj_B.ctemp_tmp_tmp;
                Test_Traj_B.temp2 = (fabs(Test_Traj_B.b_A_data[Test_Traj_B.jp1].
                  re) + fabs(Test_Traj_B.b_A_data[Test_Traj_B.jp1].im)) *
                  Test_Traj_B.anorm;
                Test_Traj_B.tempr = Test_Traj_B.temp;
                if (Test_Traj_B.temp2 > Test_Traj_B.temp) {
                  Test_Traj_B.tempr = Test_Traj_B.temp2;
                }

                if ((Test_Traj_B.tempr < 1.0) && (Test_Traj_B.tempr != 0.0)) {
                  Test_Traj_B.temp /= Test_Traj_B.tempr;
                  Test_Traj_B.temp2 /= Test_Traj_B.tempr;
                }

                Test_Traj_B.jp1 = (Test_Traj_B.j_a - 1) *
                  Test_Traj_B.b_A_size_idx_0 + Test_Traj_B.j_a;
                if ((fabs(Test_Traj_B.b_A_data[Test_Traj_B.jp1].re) + fabs
                     (Test_Traj_B.b_A_data[Test_Traj_B.jp1].im)) *
                    Test_Traj_B.temp2 <= Test_Traj_B.temp * Test_Traj_B.b_atol)
                {
                  goto90 = true;
                  exitg2 = true;
                } else {
                  Test_Traj_B.jp1 = Test_Traj_B.j_a;
                  Test_Traj_B.j_a--;
                }
              }

              if (!goto90) {
                Test_Traj_B.istart_m = Test_Traj_B.ifirst;
                Test_Traj_B.ctemp_tmp = ((Test_Traj_B.ifirst - 1) *
                  Test_Traj_B.b_A_size_idx_0 + Test_Traj_B.ifirst) - 1;
                Test_Traj_B.ctemp.re =
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp].re *
                  Test_Traj_B.anorm - Test_Traj_B.stemp_re * Test_Traj_B.bscale;
                Test_Traj_B.ctemp.im =
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp].im *
                  Test_Traj_B.anorm - Test_Traj_B.stemp_im * Test_Traj_B.bscale;
              }

              goto90 = false;
              Test_Traj_B.j_a = (Test_Traj_B.istart_m - 1) *
                Test_Traj_B.b_A_size_idx_0 + Test_Traj_B.istart_m;
              Test_Traj_B.ascale.re = Test_Traj_B.b_A_data[Test_Traj_B.j_a].re *
                Test_Traj_B.anorm;
              Test_Traj_B.ascale.im = Test_Traj_B.b_A_data[Test_Traj_B.j_a].im *
                Test_Traj_B.anorm;
              Test_Traj_xzlartg_p(Test_Traj_B.ctemp, Test_Traj_B.ascale,
                                  &Test_Traj_B.temp, &Test_Traj_B.t1);
              Test_Traj_B.j_a = Test_Traj_B.istart_m;
              Test_Traj_B.jp1 = Test_Traj_B.istart_m - 2;
              while (Test_Traj_B.j_a < Test_Traj_B.n_p + 1) {
                if (Test_Traj_B.j_a > Test_Traj_B.istart_m) {
                  Test_Traj_xzlartg(Test_Traj_B.b_A_data[(Test_Traj_B.j_a +
                    Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.jp1) - 1],
                                    Test_Traj_B.b_A_data[Test_Traj_B.j_a +
                                    Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.jp1],
                                    &Test_Traj_B.temp, &Test_Traj_B.t1,
                                    &Test_Traj_B.b_A_data[(Test_Traj_B.j_a +
                    Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.jp1) - 1]);
                  Test_Traj_B.jp1 = Test_Traj_B.j_a + Test_Traj_B.b_A_size_idx_0
                    * Test_Traj_B.jp1;
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].re = 0.0;
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].im = 0.0;
                }

                for (Test_Traj_B.ctemp_tmp = Test_Traj_B.j_a;
                     Test_Traj_B.ctemp_tmp <= Test_Traj_B.ilastm;
                     Test_Traj_B.ctemp_tmp++) {
                  Test_Traj_B.jp1 = (Test_Traj_B.ctemp_tmp - 1) *
                    Test_Traj_B.b_A_size_idx_0 + Test_Traj_B.j_a;
                  Test_Traj_B.ctemp_tmp_tmp = Test_Traj_B.jp1 - 1;
                  Test_Traj_B.stemp_re =
                    Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re *
                    Test_Traj_B.temp + (Test_Traj_B.b_A_data[Test_Traj_B.jp1].re
                                        * Test_Traj_B.t1.re -
                                        Test_Traj_B.b_A_data[Test_Traj_B.jp1].im
                                        * Test_Traj_B.t1.im);
                  Test_Traj_B.stemp_im =
                    Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im *
                    Test_Traj_B.temp + (Test_Traj_B.b_A_data[Test_Traj_B.jp1].im
                                        * Test_Traj_B.t1.re +
                                        Test_Traj_B.b_A_data[Test_Traj_B.jp1].re
                                        * Test_Traj_B.t1.im);
                  Test_Traj_B.temp2 =
                    Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re;
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].re =
                    Test_Traj_B.b_A_data[Test_Traj_B.jp1].re * Test_Traj_B.temp
                    - (Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re *
                       Test_Traj_B.t1.re +
                       Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im *
                       Test_Traj_B.t1.im);
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].im =
                    Test_Traj_B.b_A_data[Test_Traj_B.jp1].im * Test_Traj_B.temp
                    - (Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im *
                       Test_Traj_B.t1.re - Test_Traj_B.t1.im * Test_Traj_B.temp2);
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re =
                    Test_Traj_B.stemp_re;
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im =
                    Test_Traj_B.stemp_im;
                }

                Test_Traj_B.t1.re = -Test_Traj_B.t1.re;
                Test_Traj_B.t1.im = -Test_Traj_B.t1.im;
                Test_Traj_B.b_x_nk = Test_Traj_B.j_a + 2;
                if (Test_Traj_B.n_p + 1 < Test_Traj_B.j_a + 2) {
                  Test_Traj_B.b_x_nk = Test_Traj_B.n_p + 1;
                }

                for (Test_Traj_B.ctemp_tmp = Test_Traj_B.ifirst;
                     Test_Traj_B.ctemp_tmp <= Test_Traj_B.b_x_nk;
                     Test_Traj_B.ctemp_tmp++) {
                  Test_Traj_B.jp1 = ((Test_Traj_B.j_a - 1) *
                                     Test_Traj_B.b_A_size_idx_0 +
                                     Test_Traj_B.ctemp_tmp) - 1;
                  Test_Traj_B.ctemp_tmp_tmp = (Test_Traj_B.b_A_size_idx_0 *
                    Test_Traj_B.j_a + Test_Traj_B.ctemp_tmp) - 1;
                  Test_Traj_B.stemp_re = (Test_Traj_B.b_A_data[Test_Traj_B.jp1].
                    re * Test_Traj_B.t1.re -
                    Test_Traj_B.b_A_data[Test_Traj_B.jp1].im * Test_Traj_B.t1.im)
                    + Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re *
                    Test_Traj_B.temp;
                  Test_Traj_B.stemp_im = (Test_Traj_B.b_A_data[Test_Traj_B.jp1].
                    im * Test_Traj_B.t1.re +
                    Test_Traj_B.b_A_data[Test_Traj_B.jp1].re * Test_Traj_B.t1.im)
                    + Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im *
                    Test_Traj_B.temp;
                  Test_Traj_B.temp2 =
                    Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re;
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].re =
                    Test_Traj_B.b_A_data[Test_Traj_B.jp1].re * Test_Traj_B.temp
                    - (Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re *
                       Test_Traj_B.t1.re +
                       Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im *
                       Test_Traj_B.t1.im);
                  Test_Traj_B.b_A_data[Test_Traj_B.jp1].im =
                    Test_Traj_B.b_A_data[Test_Traj_B.jp1].im * Test_Traj_B.temp
                    - (Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im *
                       Test_Traj_B.t1.re - Test_Traj_B.t1.im * Test_Traj_B.temp2);
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].re =
                    Test_Traj_B.stemp_re;
                  Test_Traj_B.b_A_data[Test_Traj_B.ctemp_tmp_tmp].im =
                    Test_Traj_B.stemp_im;
                }

                Test_Traj_B.jp1 = Test_Traj_B.j_a - 1;
                Test_Traj_B.j_a++;
              }
            }

            Test_Traj_B.jiter++;
          }
        } else {
          Test_Traj_B.ifirst = *alpha1_size;
          for (Test_Traj_B.jp1 = 0; Test_Traj_B.jp1 < Test_Traj_B.ifirst;
               Test_Traj_B.jp1++) {
            alpha1_data[Test_Traj_B.jp1].re = (rtNaN);
            alpha1_data[Test_Traj_B.jp1].im = 0.0;
          }

          Test_Traj_B.ifirst = *beta1_size;
          for (Test_Traj_B.jp1 = 0; Test_Traj_B.jp1 < Test_Traj_B.ifirst;
               Test_Traj_B.jp1++) {
            beta1_data[Test_Traj_B.jp1].re = (rtNaN);
            beta1_data[Test_Traj_B.jp1].im = 0.0;
          }

          *info = 1;
          exitg1 = 1;
        }
      } else {
        guard2 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    guard1 = true;
  }

  if (guard2) {
    if (failed) {
      *info = Test_Traj_B.n_p + 1;
      for (Test_Traj_B.b_A_size_idx_0 = 0; Test_Traj_B.b_A_size_idx_0 <=
           Test_Traj_B.n_p; Test_Traj_B.b_A_size_idx_0++) {
        alpha1_data[Test_Traj_B.b_A_size_idx_0].re = (rtNaN);
        alpha1_data[Test_Traj_B.b_A_size_idx_0].im = 0.0;
        beta1_data[Test_Traj_B.b_A_size_idx_0].re = (rtNaN);
        beta1_data[Test_Traj_B.b_A_size_idx_0].im = 0.0;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    Test_Traj_B.ifirst = ilo - 2;
    for (Test_Traj_B.n_p = 0; Test_Traj_B.n_p <= Test_Traj_B.ifirst;
         Test_Traj_B.n_p++) {
      alpha1_data[Test_Traj_B.n_p] =
        Test_Traj_B.b_A_data[Test_Traj_B.b_A_size_idx_0 * Test_Traj_B.n_p +
        Test_Traj_B.n_p];
    }
  }
}

static void Test_Traj_xzlascl_phmyu(real_T cfrom, real_T cto, creal_T A_data[],
  const int32_T *A_size)
{
  boolean_T notdone;
  int32_T i;
  int32_T loop_ub;
  Test_Traj_B.cfromc_d = cfrom;
  Test_Traj_B.ctoc_l = cto;
  notdone = true;
  while (notdone) {
    Test_Traj_B.cfrom1_f = Test_Traj_B.cfromc_d * 2.0041683600089728E-292;
    Test_Traj_B.cto1_l = Test_Traj_B.ctoc_l / 4.9896007738368E+291;
    if ((fabs(Test_Traj_B.cfrom1_f) > fabs(Test_Traj_B.ctoc_l)) &&
        (Test_Traj_B.ctoc_l != 0.0)) {
      Test_Traj_B.mul_l = 2.0041683600089728E-292;
      Test_Traj_B.cfromc_d = Test_Traj_B.cfrom1_f;
    } else if (fabs(Test_Traj_B.cto1_l) > fabs(Test_Traj_B.cfromc_d)) {
      Test_Traj_B.mul_l = 4.9896007738368E+291;
      Test_Traj_B.ctoc_l = Test_Traj_B.cto1_l;
    } else {
      Test_Traj_B.mul_l = Test_Traj_B.ctoc_l / Test_Traj_B.cfromc_d;
      notdone = false;
    }

    loop_ub = *A_size;
    for (i = 0; i < loop_ub; i++) {
      A_data[i].re *= Test_Traj_B.mul_l;
      A_data[i].im *= Test_Traj_B.mul_l;
    }
  }
}

static void Test_Traj_xzgeev_p(const real_T A_data[], const int32_T A_size[2],
  int32_T *info, creal_T alpha1_data[], int32_T *alpha1_size, creal_T
  beta1_data[], int32_T *beta1_size)
{
  boolean_T ilascl;
  Test_Traj_B.At_size[0] = A_size[0];
  Test_Traj_B.At_size[1] = A_size[1];
  Test_Traj_B.loop_ub_tmp_d = A_size[0] * A_size[1] - 1;
  for (Test_Traj_B.ilo = 0; Test_Traj_B.ilo <= Test_Traj_B.loop_ub_tmp_d;
       Test_Traj_B.ilo++) {
    Test_Traj_B.At_data[Test_Traj_B.ilo].re = A_data[Test_Traj_B.ilo];
    Test_Traj_B.At_data[Test_Traj_B.ilo].im = 0.0;
  }

  Test_Traj_B.b_At_size[0] = A_size[0];
  Test_Traj_B.b_At_size[1] = A_size[1];
  if (0 <= Test_Traj_B.loop_ub_tmp_d) {
    memcpy(&Test_Traj_B.b_At_data[0], &Test_Traj_B.At_data[0],
           (Test_Traj_B.loop_ub_tmp_d + 1) * sizeof(creal_T));
  }

  *info = 0;
  *alpha1_size = A_size[0];
  Test_Traj_B.loop_ub_tmp_d = A_size[0];
  if (0 <= Test_Traj_B.loop_ub_tmp_d - 1) {
    memset(&alpha1_data[0], 0, Test_Traj_B.loop_ub_tmp_d * sizeof(creal_T));
  }

  *beta1_size = A_size[0];
  Test_Traj_B.loop_ub_tmp_d = A_size[0];
  if (0 <= Test_Traj_B.loop_ub_tmp_d - 1) {
    memset(&beta1_data[0], 0, Test_Traj_B.loop_ub_tmp_d * sizeof(creal_T));
  }

  if ((A_size[0] != 0) && (A_size[1] != 0)) {
    Test_Traj_B.anrm = Test_Traj_xzlangeM_p(Test_Traj_B.At_data,
      Test_Traj_B.At_size);
    if (!Test_Traj_isfinite(Test_Traj_B.anrm)) {
      *alpha1_size = A_size[0];
      Test_Traj_B.loop_ub_tmp_d = A_size[0];
      for (Test_Traj_B.ilo = 0; Test_Traj_B.ilo < Test_Traj_B.loop_ub_tmp_d;
           Test_Traj_B.ilo++) {
        alpha1_data[Test_Traj_B.ilo].re = (rtNaN);
        alpha1_data[Test_Traj_B.ilo].im = 0.0;
      }

      *beta1_size = A_size[0];
      Test_Traj_B.loop_ub_tmp_d = A_size[0];
      for (Test_Traj_B.ilo = 0; Test_Traj_B.ilo < Test_Traj_B.loop_ub_tmp_d;
           Test_Traj_B.ilo++) {
        beta1_data[Test_Traj_B.ilo].re = (rtNaN);
        beta1_data[Test_Traj_B.ilo].im = 0.0;
      }
    } else {
      ilascl = false;
      Test_Traj_B.anrmto = Test_Traj_B.anrm;
      if ((Test_Traj_B.anrm > 0.0) && (Test_Traj_B.anrm <
           6.7178761075670888E-139)) {
        Test_Traj_B.anrmto = 6.7178761075670888E-139;
        ilascl = true;
        Test_Traj_xzlascl_ph(Test_Traj_B.anrm, Test_Traj_B.anrmto,
                             Test_Traj_B.At_data, Test_Traj_B.At_size,
                             Test_Traj_B.b_At_data, Test_Traj_B.b_At_size);
      } else {
        if (Test_Traj_B.anrm > 1.4885657073574029E+138) {
          Test_Traj_B.anrmto = 1.4885657073574029E+138;
          ilascl = true;
          Test_Traj_xzlascl_ph(Test_Traj_B.anrm, Test_Traj_B.anrmto,
                               Test_Traj_B.At_data, Test_Traj_B.At_size,
                               Test_Traj_B.b_At_data, Test_Traj_B.b_At_size);
        }
      }

      Test_Traj_xzggbal_p(Test_Traj_B.b_At_data, Test_Traj_B.b_At_size,
                          Test_Traj_B.At_data, Test_Traj_B.At_size,
                          &Test_Traj_B.ilo, &Test_Traj_B.loop_ub_tmp_d,
                          Test_Traj_B.rscale_data, &Test_Traj_B.rscale_size);
      Test_Traj_xzgghrd_p(Test_Traj_B.ilo, Test_Traj_B.loop_ub_tmp_d,
                          Test_Traj_B.At_data, Test_Traj_B.At_size,
                          Test_Traj_B.b_At_data, Test_Traj_B.b_At_size);
      Test_Traj_xzhgeqz_p(Test_Traj_B.b_At_data, Test_Traj_B.b_At_size,
                          Test_Traj_B.ilo, Test_Traj_B.loop_ub_tmp_d, info,
                          alpha1_data, alpha1_size, beta1_data, beta1_size);
      if ((*info == 0) && ilascl) {
        Test_Traj_xzlascl_phmyu(Test_Traj_B.anrmto, Test_Traj_B.anrm,
          alpha1_data, alpha1_size);
      }
    }
  }
}

static void Test_Traj_ilazlr(int32_T m, int32_T n, const real_T A_data[], const
  int32_T A_size[2], int32_T ia0, int32_T lda, int32_T *i, real_T b_A_data[],
  int32_T b_A_size[2])
{
  int32_T rowleft;
  int32_T rowright;
  int32_T exitg1;
  boolean_T exitg2;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  rowleft = A_size[0] * A_size[1] - 1;
  if (0 <= rowleft) {
    memcpy(&b_A_data[0], &A_data[0], (rowleft + 1) * sizeof(real_T));
  }

  *i = m;
  exitg2 = false;
  while ((!exitg2) && (*i > 0)) {
    rowleft = (ia0 + *i) - 1;
    rowright = (n - 1) * lda + rowleft;
    do {
      exitg1 = 0;
      if (((lda > 0) && (rowleft <= rowright)) || ((lda < 0) && (rowleft >=
            rowright))) {
        if (A_data[rowleft - 1] != 0.0) {
          exitg1 = 1;
        } else {
          rowleft += lda;
        }
      } else {
        (*i)--;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }
}

static void Test_Traj_xgemv_phm(int32_T m, int32_T n, const real_T A_data[],
  int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[])
{
  int32_T iy;
  int32_T ix;
  int32_T b;
  int32_T iac;
  int32_T d;
  int32_T ia;
  if ((m == 0) || (n == 0)) {
  } else {
    if (0 <= m - 1) {
      memset(&y_data[0], 0, m * sizeof(real_T));
    }

    ix = ix0 - 1;
    b = (n - 1) * lda + ia0;
    for (iac = ia0; lda < 0 ? iac >= b : iac <= b; iac += lda) {
      iy = 0;
      d = iac + m;
      for (ia = iac; ia < d; ia++) {
        y_data[iy] += A_data[ia - 1] * x_data[ix];
        iy++;
      }

      ix++;
    }
  }
}

static void Test_Traj_xgerc_p(int32_T m, int32_T n, real_T alpha1, const real_T
  x_data[], int32_T iy0, const real_T A_data[], const int32_T A_size[2], int32_T
  ia0, int32_T lda, real_T b_A_data[], int32_T b_A_size[2])
{
  int32_T ix;
  int32_T c;
  int32_T ijA;
  int32_T loop_ub;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  loop_ub = A_size[0] * A_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&b_A_data[0], &A_data[0], (loop_ub + 1) * sizeof(real_T));
  }

  if (!(alpha1 == 0.0)) {
    Test_Traj_B.jA_g = ia0;
    Test_Traj_B.jy_e = iy0 - 1;
    for (loop_ub = 0; loop_ub < n; loop_ub++) {
      if (b_A_data[Test_Traj_B.jy_e] != 0.0) {
        Test_Traj_B.temp_a = b_A_data[Test_Traj_B.jy_e] * alpha1;
        ix = 0;
        c = (m + Test_Traj_B.jA_g) - 1;
        for (ijA = Test_Traj_B.jA_g; ijA <= c; ijA++) {
          b_A_data[ijA - 1] += x_data[ix] * Test_Traj_B.temp_a;
          ix++;
        }
      }

      Test_Traj_B.jy_e++;
      Test_Traj_B.jA_g += lda;
    }
  }
}

static void Test_Traj_xzlarf_phmyulbc(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc,
  real_T work_data[], real_T b_C_data[], int32_T b_C_size[2])
{
  b_C_size[0] = C_size[0];
  b_C_size[1] = C_size[1];
  Test_Traj_B.i_hg = C_size[0] * C_size[1] - 1;
  if (0 <= Test_Traj_B.i_hg) {
    memcpy(&b_C_data[0], &C_data[0], (Test_Traj_B.i_hg + 1) * sizeof(real_T));
  }

  if (tau != 0.0) {
    Test_Traj_B.lastv_h = n;
    Test_Traj_B.i_hg = (iv0 + n) - 2;
    while ((Test_Traj_B.lastv_h > 0) && (C_data[Test_Traj_B.i_hg] == 0.0)) {
      Test_Traj_B.lastv_h--;
      Test_Traj_B.i_hg--;
    }

    Test_Traj_ilazlr(m, Test_Traj_B.lastv_h, C_data, C_size, ic0, ldc,
                     &Test_Traj_B.lastc_c, b_C_data, b_C_size);
  } else {
    Test_Traj_B.lastv_h = 0;
    Test_Traj_B.lastc_c = 0;
  }

  if (Test_Traj_B.lastv_h > 0) {
    Test_Traj_xgemv_phm(Test_Traj_B.lastc_c, Test_Traj_B.lastv_h, b_C_data, ic0,
                        ldc, b_C_data, iv0, work_data);
    Test_Traj_B.b_C_size_n[0] = b_C_size[0];
    Test_Traj_B.b_C_size_n[1] = b_C_size[1];
    Test_Traj_B.i_hg = b_C_size[0] * b_C_size[1];
    if (0 <= Test_Traj_B.i_hg - 1) {
      memcpy(&Test_Traj_B.b_C_data[0], &b_C_data[0], Test_Traj_B.i_hg * sizeof
             (real_T));
    }

    Test_Traj_xgerc_p(Test_Traj_B.lastc_c, Test_Traj_B.lastv_h, -tau, work_data,
                      iv0, Test_Traj_B.b_C_data, Test_Traj_B.b_C_size_n, ic0,
                      ldc, b_C_data, b_C_size);
  }
}

static void Test_Traj_xgemv_phmy(int32_T m, int32_T n, const real_T A_data[],
  int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[])
{
  int32_T ix;
  real_T c;
  int32_T iy;
  int32_T b;
  int32_T iac;
  int32_T d;
  int32_T ia;
  if ((m == 0) || (n == 0)) {
  } else {
    if (0 <= n - 1) {
      memset(&y_data[0], 0, n * sizeof(real_T));
    }

    iy = 0;
    b = (n - 1) * lda + ia0;
    for (iac = ia0; lda < 0 ? iac >= b : iac <= b; iac += lda) {
      ix = ix0 - 1;
      c = 0.0;
      d = iac + m;
      for (ia = iac; ia < d; ia++) {
        c += A_data[ia - 1] * x_data[ix];
        ix++;
      }

      y_data[iy] += c;
      iy++;
    }
  }
}

static void Test_Traj_xgerc_ph(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y_data[], const real_T A_data[], const int32_T A_size[2], int32_T
  ia0, int32_T lda, real_T b_A_data[], int32_T b_A_size[2])
{
  int32_T ix;
  int32_T c;
  int32_T ijA;
  int32_T loop_ub;
  b_A_size[0] = A_size[0];
  b_A_size[1] = A_size[1];
  loop_ub = A_size[0] * A_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&b_A_data[0], &A_data[0], (loop_ub + 1) * sizeof(real_T));
  }

  if (!(alpha1 == 0.0)) {
    Test_Traj_B.jA = ia0;
    Test_Traj_B.jy = 0;
    for (loop_ub = 0; loop_ub < n; loop_ub++) {
      if (y_data[Test_Traj_B.jy] != 0.0) {
        Test_Traj_B.temp_b = y_data[Test_Traj_B.jy] * alpha1;
        ix = ix0 - 1;
        c = (m + Test_Traj_B.jA) - 1;
        for (ijA = Test_Traj_B.jA; ijA <= c; ijA++) {
          b_A_data[ijA - 1] += b_A_data[ix] * Test_Traj_B.temp_b;
          ix++;
        }
      }

      Test_Traj_B.jy++;
      Test_Traj_B.jA += lda;
    }
  }
}

static void Test_Traj_xzlarf_phmyulbc3(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C_data[], const int32_T C_size[2], int32_T ic0, int32_T ldc,
  real_T work_data[], real_T b_C_data[], int32_T b_C_size[2])
{
  b_C_size[0] = C_size[0];
  b_C_size[1] = C_size[1];
  Test_Traj_B.i_c0 = C_size[0] * C_size[1] - 1;
  if (0 <= Test_Traj_B.i_c0) {
    memcpy(&b_C_data[0], &C_data[0], (Test_Traj_B.i_c0 + 1) * sizeof(real_T));
  }

  if (tau != 0.0) {
    Test_Traj_B.lastv_n = m;
    Test_Traj_B.i_c0 = (iv0 + m) - 2;
    while ((Test_Traj_B.lastv_n > 0) && (C_data[Test_Traj_B.i_c0] == 0.0)) {
      Test_Traj_B.lastv_n--;
      Test_Traj_B.i_c0--;
    }

    Test_Traj_ilazlc(Test_Traj_B.lastv_n, n, C_data, C_size, ic0, ldc,
                     &Test_Traj_B.lastc_e, b_C_data, b_C_size);
  } else {
    Test_Traj_B.lastv_n = 0;
    Test_Traj_B.lastc_e = 0;
  }

  if (Test_Traj_B.lastv_n > 0) {
    Test_Traj_xgemv_phmy(Test_Traj_B.lastv_n, Test_Traj_B.lastc_e, b_C_data, ic0,
                         ldc, b_C_data, iv0, work_data);
    Test_Traj_B.b_C_size_e[0] = b_C_size[0];
    Test_Traj_B.b_C_size_e[1] = b_C_size[1];
    Test_Traj_B.i_c0 = b_C_size[0] * b_C_size[1];
    if (0 <= Test_Traj_B.i_c0 - 1) {
      memcpy(&Test_Traj_B.b_C_data_i[0], &b_C_data[0], Test_Traj_B.i_c0 * sizeof
             (real_T));
    }

    Test_Traj_xgerc_ph(Test_Traj_B.lastv_n, Test_Traj_B.lastc_e, -tau, iv0,
                       work_data, Test_Traj_B.b_C_data_i, Test_Traj_B.b_C_size_e,
                       ic0, ldc, b_C_data, b_C_size);
  }
}

static void Test_Traj_xgehrd_p(const real_T a_data[], const int32_T a_size[2],
  real_T b_a_data[], int32_T b_a_size[2])
{
  Test_Traj_B.c_a_size[0] = a_size[0];
  Test_Traj_B.c_a_size[1] = a_size[1];
  Test_Traj_B.loop_ub_p4 = a_size[0] * a_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_p4) {
    memcpy(&Test_Traj_B.c_a_data[0], &a_data[0], (Test_Traj_B.loop_ub_p4 + 1) *
           sizeof(real_T));
  }

  Test_Traj_B.n_m = a_size[0];
  Test_Traj_B.d_idx_0 = a_size[0];
  if (0 <= Test_Traj_B.d_idx_0 - 1) {
    memset(&Test_Traj_B.work_data[0], 0, Test_Traj_B.d_idx_0 * sizeof(real_T));
  }

  Test_Traj_B.e_ix = a_size[0] - 2;
  for (Test_Traj_B.d_idx_0 = 0; Test_Traj_B.d_idx_0 <= Test_Traj_B.e_ix;
       Test_Traj_B.d_idx_0++) {
    Test_Traj_B.im1n_l = Test_Traj_B.d_idx_0 * Test_Traj_B.n_m + 2;
    Test_Traj_B.in_o = (Test_Traj_B.d_idx_0 + 1) * Test_Traj_B.n_m + 1;
    Test_Traj_B.c_a_size_o[0] = Test_Traj_B.c_a_size[0];
    Test_Traj_B.c_a_size_o[1] = Test_Traj_B.c_a_size[1];
    Test_Traj_B.loop_ub_p4 = Test_Traj_B.c_a_size[0] * Test_Traj_B.c_a_size[1];
    if (0 <= Test_Traj_B.loop_ub_p4 - 1) {
      memcpy(&Test_Traj_B.c_a_data_a[0], &Test_Traj_B.c_a_data[0],
             Test_Traj_B.loop_ub_p4 * sizeof(real_T));
    }

    Test_Traj_B.loop_ub_p4 = Test_Traj_B.d_idx_0 + 3;
    if (Test_Traj_B.loop_ub_p4 >= Test_Traj_B.n_m) {
      Test_Traj_B.loop_ub_p4 = Test_Traj_B.n_m;
    }

    Test_Traj_xzlarfg_ph((Test_Traj_B.n_m - Test_Traj_B.d_idx_0) - 1,
                         Test_Traj_B.c_a_data[(Test_Traj_B.d_idx_0 +
      Test_Traj_B.c_a_size[0] * Test_Traj_B.d_idx_0) + 1],
                         Test_Traj_B.c_a_data_a, Test_Traj_B.c_a_size_o,
                         Test_Traj_B.loop_ub_p4 + Test_Traj_B.d_idx_0 *
                         Test_Traj_B.n_m, &Test_Traj_B.b_alpha1_o,
                         Test_Traj_B.c_a_data, Test_Traj_B.c_a_size,
                         &Test_Traj_B.tau_data);
    Test_Traj_B.c_a_data[(Test_Traj_B.d_idx_0 + Test_Traj_B.c_a_size[0] *
                          Test_Traj_B.d_idx_0) + 1] = 1.0;
    Test_Traj_xzlarf_phmyulbc(Test_Traj_B.n_m, (Test_Traj_B.n_m -
      Test_Traj_B.d_idx_0) - 1, Test_Traj_B.d_idx_0 + Test_Traj_B.im1n_l,
      Test_Traj_B.tau_data, Test_Traj_B.c_a_data, Test_Traj_B.c_a_size,
      Test_Traj_B.in_o, Test_Traj_B.n_m, Test_Traj_B.work_data,
      Test_Traj_B.c_a_data_a, Test_Traj_B.d_a_size);
    Test_Traj_xzlarf_phmyulbc3((Test_Traj_B.n_m - Test_Traj_B.d_idx_0) - 1,
      (Test_Traj_B.n_m - Test_Traj_B.d_idx_0) - 1, Test_Traj_B.d_idx_0 +
      Test_Traj_B.im1n_l, Test_Traj_B.tau_data, Test_Traj_B.c_a_data_a,
      Test_Traj_B.d_a_size, (Test_Traj_B.d_idx_0 + Test_Traj_B.in_o) + 1,
      Test_Traj_B.n_m, Test_Traj_B.work_data, Test_Traj_B.c_a_data,
      Test_Traj_B.c_a_size);
    Test_Traj_B.c_a_data[(Test_Traj_B.d_idx_0 + Test_Traj_B.c_a_size[0] *
                          Test_Traj_B.d_idx_0) + 1] = Test_Traj_B.b_alpha1_o;
  }

  b_a_size[0] = Test_Traj_B.c_a_size[0];
  b_a_size[1] = Test_Traj_B.c_a_size[1];
  Test_Traj_B.loop_ub_p4 = Test_Traj_B.c_a_size[0] * Test_Traj_B.c_a_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_p4) {
    memcpy(&b_a_data[0], &Test_Traj_B.c_a_data[0], (Test_Traj_B.loop_ub_p4 + 1) *
           sizeof(real_T));
  }
}

static real_T Test_Traj_xnrm2_p(int32_T n, const real_T x[3])
{
  real_T y;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[1]);
    } else {
      Test_Traj_B.scale_ea = 3.3121686421112381E-170;
      for (k = 2; k <= n + 1; k++) {
        Test_Traj_B.absxk_e = fabs(x[k - 1]);
        if (Test_Traj_B.absxk_e > Test_Traj_B.scale_ea) {
          Test_Traj_B.t_pn = Test_Traj_B.scale_ea / Test_Traj_B.absxk_e;
          y = y * Test_Traj_B.t_pn * Test_Traj_B.t_pn + 1.0;
          Test_Traj_B.scale_ea = Test_Traj_B.absxk_e;
        } else {
          Test_Traj_B.t_pn = Test_Traj_B.absxk_e / Test_Traj_B.scale_ea;
          y += Test_Traj_B.t_pn * Test_Traj_B.t_pn;
        }
      }

      y = Test_Traj_B.scale_ea * sqrt(y);
    }
  }

  return y;
}

static void Test_Traj_xzlarfg_phm(int32_T n, real_T alpha1, real_T x[3], real_T *
  b_alpha1, real_T *tau)
{
  int32_T knt;
  int32_T k;
  *b_alpha1 = alpha1;
  *tau = 0.0;
  if (n > 0) {
    Test_Traj_B.xnorm_l = Test_Traj_xnrm2_p(n - 1, x);
    if (Test_Traj_B.xnorm_l != 0.0) {
      Test_Traj_B.xnorm_l = Test_Traj_rt_hypotd_snf(alpha1, Test_Traj_B.xnorm_l);
      if (alpha1 >= 0.0) {
        Test_Traj_B.xnorm_l = -Test_Traj_B.xnorm_l;
      }

      if (fabs(Test_Traj_B.xnorm_l) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          for (k = 2; k <= n; k++) {
            x[k - 1] *= 9.9792015476736E+291;
          }

          Test_Traj_B.xnorm_l *= 9.9792015476736E+291;
          *b_alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(Test_Traj_B.xnorm_l) >= 1.0020841800044864E-292));

        Test_Traj_B.xnorm_l = Test_Traj_rt_hypotd_snf(*b_alpha1,
          Test_Traj_xnrm2_p(n - 1, x));
        if (*b_alpha1 >= 0.0) {
          Test_Traj_B.xnorm_l = -Test_Traj_B.xnorm_l;
        }

        *tau = (Test_Traj_B.xnorm_l - *b_alpha1) / Test_Traj_B.xnorm_l;
        *b_alpha1 = 1.0 / (*b_alpha1 - Test_Traj_B.xnorm_l);
        for (k = 2; k <= n; k++) {
          x[k - 1] *= *b_alpha1;
        }

        for (k = 0; k <= knt; k++) {
          Test_Traj_B.xnorm_l *= 1.0020841800044864E-292;
        }

        *b_alpha1 = Test_Traj_B.xnorm_l;
      } else {
        *tau = (Test_Traj_B.xnorm_l - alpha1) / Test_Traj_B.xnorm_l;
        *b_alpha1 = 1.0 / (alpha1 - Test_Traj_B.xnorm_l);
        for (k = 2; k <= n; k++) {
          x[k - 1] *= *b_alpha1;
        }

        *b_alpha1 = Test_Traj_B.xnorm_l;
      }
    }
  }
}

static void Test_Traj_xdlanv2(real_T a, real_T b, real_T c, real_T d, real_T
  *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *b_a, real_T *b_b,
  real_T *b_c, real_T *b_d, real_T *cs, real_T *sn)
{
  int32_T b_0;
  int32_T c_0;
  boolean_T tmp;
  *b_d = d;
  *b_c = c;
  *b_b = b;
  *b_a = a;
  if (c == 0.0) {
    *cs = 1.0;
    *sn = 0.0;
  } else if (b == 0.0) {
    *cs = 0.0;
    *sn = 1.0;
    *b_d = a;
    *b_a = d;
    *b_b = -c;
    *b_c = 0.0;
  } else {
    Test_Traj_B.tau_d = a - d;
    if ((Test_Traj_B.tau_d == 0.0) && ((b < 0.0) != (c < 0.0))) {
      *cs = 1.0;
      *sn = 0.0;
    } else {
      Test_Traj_B.p = 0.5 * Test_Traj_B.tau_d;
      Test_Traj_B.z_m = fabs(b);
      Test_Traj_B.bcmis = fabs(c);
      tmp = rtIsNaN(Test_Traj_B.bcmis);
      if ((Test_Traj_B.z_m > Test_Traj_B.bcmis) || tmp) {
        Test_Traj_B.bcmax = Test_Traj_B.z_m;
      } else {
        Test_Traj_B.bcmax = Test_Traj_B.bcmis;
      }

      if ((Test_Traj_B.z_m < Test_Traj_B.bcmis) || tmp) {
        Test_Traj_B.bcmis = Test_Traj_B.z_m;
      }

      if (!(b < 0.0)) {
        b_0 = 1;
      } else {
        b_0 = -1;
      }

      if (!(c < 0.0)) {
        c_0 = 1;
      } else {
        c_0 = -1;
      }

      Test_Traj_B.bcmis = Test_Traj_B.bcmis * static_cast<real_T>(b_0) *
        static_cast<real_T>(c_0);
      Test_Traj_B.scale_g = fabs(Test_Traj_B.p);
      if ((!(Test_Traj_B.scale_g > Test_Traj_B.bcmax)) && (!rtIsNaN
           (Test_Traj_B.bcmax))) {
        Test_Traj_B.scale_g = Test_Traj_B.bcmax;
      }

      Test_Traj_B.z_m = Test_Traj_B.p / Test_Traj_B.scale_g * Test_Traj_B.p +
        Test_Traj_B.bcmax / Test_Traj_B.scale_g * Test_Traj_B.bcmis;
      if (Test_Traj_B.z_m >= 8.8817841970012523E-16) {
        if (!(Test_Traj_B.p < 0.0)) {
          Test_Traj_B.tau_d = sqrt(Test_Traj_B.scale_g) * sqrt(Test_Traj_B.z_m);
        } else {
          Test_Traj_B.tau_d = -(sqrt(Test_Traj_B.scale_g) * sqrt(Test_Traj_B.z_m));
        }

        Test_Traj_B.z_m = Test_Traj_B.p + Test_Traj_B.tau_d;
        *b_a = d + Test_Traj_B.z_m;
        *b_d = d - Test_Traj_B.bcmax / Test_Traj_B.z_m * Test_Traj_B.bcmis;
        Test_Traj_B.tau_d = Test_Traj_rt_hypotd_snf(c, Test_Traj_B.z_m);
        *cs = Test_Traj_B.z_m / Test_Traj_B.tau_d;
        *sn = c / Test_Traj_B.tau_d;
        *b_b = b - c;
        *b_c = 0.0;
      } else {
        Test_Traj_B.bcmax = b + c;
        Test_Traj_B.tau_d = Test_Traj_rt_hypotd_snf(Test_Traj_B.bcmax,
          Test_Traj_B.tau_d);
        *cs = sqrt((fabs(Test_Traj_B.bcmax) / Test_Traj_B.tau_d + 1.0) * 0.5);
        if (!(Test_Traj_B.bcmax < 0.0)) {
          b_0 = 1;
        } else {
          b_0 = -1;
        }

        *sn = -(Test_Traj_B.p / (Test_Traj_B.tau_d * *cs)) * static_cast<real_T>
          (b_0);
        Test_Traj_B.p = a * *cs + b * *sn;
        Test_Traj_B.tau_d = -a * *sn + b * *cs;
        Test_Traj_B.bcmax = c * *cs + d * *sn;
        Test_Traj_B.z_m = -c * *sn + d * *cs;
        *b_b = Test_Traj_B.tau_d * *cs + Test_Traj_B.z_m * *sn;
        *b_c = -Test_Traj_B.p * *sn + Test_Traj_B.bcmax * *cs;
        Test_Traj_B.bcmax = ((Test_Traj_B.p * *cs + Test_Traj_B.bcmax * *sn) + (
          -Test_Traj_B.tau_d * *sn + Test_Traj_B.z_m * *cs)) * 0.5;
        *b_a = Test_Traj_B.bcmax;
        *b_d = Test_Traj_B.bcmax;
        if (*b_c != 0.0) {
          if (*b_b != 0.0) {
            if ((*b_b < 0.0) == (*b_c < 0.0)) {
              Test_Traj_B.bcmis = sqrt(fabs(*b_b));
              Test_Traj_B.z_m = sqrt(fabs(*b_c));
              if (!(*b_c < 0.0)) {
                Test_Traj_B.p = Test_Traj_B.bcmis * Test_Traj_B.z_m;
              } else {
                Test_Traj_B.p = -(Test_Traj_B.bcmis * Test_Traj_B.z_m);
              }

              Test_Traj_B.tau_d = 1.0 / sqrt(fabs(*b_b + *b_c));
              *b_a = Test_Traj_B.bcmax + Test_Traj_B.p;
              *b_d = Test_Traj_B.bcmax - Test_Traj_B.p;
              *b_b -= *b_c;
              *b_c = 0.0;
              Test_Traj_B.p = Test_Traj_B.bcmis * Test_Traj_B.tau_d;
              Test_Traj_B.tau_d *= Test_Traj_B.z_m;
              Test_Traj_B.bcmax = *cs * Test_Traj_B.p - *sn * Test_Traj_B.tau_d;
              *sn = *cs * Test_Traj_B.tau_d + *sn * Test_Traj_B.p;
              *cs = Test_Traj_B.bcmax;
            }
          } else {
            *b_b = -*b_c;
            *b_c = 0.0;
            Test_Traj_B.bcmax = *cs;
            *cs = -*sn;
            *sn = Test_Traj_B.bcmax;
          }
        }
      }
    }
  }

  *rt1r = *b_a;
  *rt2r = *b_d;
  if (*b_c == 0.0) {
    *rt1i = 0.0;
    *rt2i = 0.0;
  } else {
    *rt1i = sqrt(fabs(*b_b)) * sqrt(fabs(*b_c));
    *rt2i = -*rt1i;
  }
}

static void Test_Traj_xrot_p(int32_T n, const real_T x_data[], const int32_T
  x_size[2], int32_T ix0, int32_T incx, int32_T iy0, int32_T incy, real_T c,
  real_T s, real_T b_x_data[], int32_T b_x_size[2])
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  int32_T loop_ub_tmp;
  loop_ub_tmp = x_size[0] * x_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&Test_Traj_B.c_x_data[0], &x_data[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }

  if (n >= 1) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      temp = c * Test_Traj_B.c_x_data[ix] + s * Test_Traj_B.c_x_data[iy];
      Test_Traj_B.c_x_data[iy] = c * Test_Traj_B.c_x_data[iy] - s *
        Test_Traj_B.c_x_data[ix];
      Test_Traj_B.c_x_data[ix] = temp;
      iy += incx;
      ix += incy;
    }
  }

  b_x_size[0] = x_size[0];
  b_x_size[1] = x_size[1];
  if (0 <= loop_ub_tmp) {
    memcpy(&b_x_data[0], &Test_Traj_B.c_x_data[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }
}

static void Test_Traj_xrot_ph(int32_T n, const real_T x_data[], const int32_T
  x_size[2], int32_T ix0, int32_T iy0, real_T c, real_T s, real_T b_x_data[],
  int32_T b_x_size[2])
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  int32_T loop_ub_tmp;
  loop_ub_tmp = x_size[0] * x_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&Test_Traj_B.c_x_data_a[0], &x_data[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }

  if (n >= 1) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      temp = c * Test_Traj_B.c_x_data_a[ix] + s * Test_Traj_B.c_x_data_a[iy];
      Test_Traj_B.c_x_data_a[iy] = c * Test_Traj_B.c_x_data_a[iy] - s *
        Test_Traj_B.c_x_data_a[ix];
      Test_Traj_B.c_x_data_a[ix] = temp;
      iy++;
      ix++;
    }
  }

  b_x_size[0] = x_size[0];
  b_x_size[1] = x_size[1];
  if (0 <= loop_ub_tmp) {
    memcpy(&b_x_data[0], &Test_Traj_B.c_x_data_a[0], (loop_ub_tmp + 1) * sizeof
           (real_T));
  }
}

static void Test_Traj_eml_dlahqr_p(const real_T h_data[], const int32_T h_size[2],
  real_T b_h_data[], int32_T b_h_size[2], int32_T *info)
{
  boolean_T goto150;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;
  b_h_size[0] = h_size[0];
  b_h_size[1] = h_size[1];
  Test_Traj_B.loop_ub_ec = h_size[0] * h_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_ec) {
    memcpy(&b_h_data[0], &h_data[0], (Test_Traj_B.loop_ub_ec + 1) * sizeof
           (real_T));
  }

  Test_Traj_B.n_md = h_size[0];
  Test_Traj_B.ldh = h_size[0];
  *info = 0;
  if ((h_size[0] != 0) && (1 != h_size[0])) {
    Test_Traj_B.v_k[0] = 0.0;
    Test_Traj_B.v_k[1] = 0.0;
    Test_Traj_B.v_k[2] = 0.0;
    Test_Traj_B.L_i = h_size[0] - 4;
    for (Test_Traj_B.i_gm = 0; Test_Traj_B.i_gm <= Test_Traj_B.L_i;
         Test_Traj_B.i_gm++) {
      Test_Traj_B.b_h_data_tmp = Test_Traj_B.i_gm + b_h_size[0] *
        Test_Traj_B.i_gm;
      b_h_data[Test_Traj_B.b_h_data_tmp + 2] = 0.0;
      b_h_data[Test_Traj_B.b_h_data_tmp + 3] = 0.0;
    }

    if (1 <= h_size[0] - 2) {
      b_h_data[(h_size[0] + h_size[0] * (h_size[0] - 3)) - 1] = 0.0;
    }

    if (10.0 > h_size[0]) {
      Test_Traj_B.itmax = 10.0;
    } else {
      Test_Traj_B.itmax = h_size[0];
    }

    Test_Traj_B.itmax *= 30.0;
    Test_Traj_B.SMLNUM = static_cast<real_T>(h_size[0]) / 2.2204460492503131E-16
      * 2.2250738585072014E-308;
    Test_Traj_B.i_gm = h_size[0] - 1;
    exitg1 = false;
    while ((!exitg1) && (Test_Traj_B.i_gm + 1 >= 1)) {
      Test_Traj_B.L_i = 1;
      goto150 = false;
      Test_Traj_B.loop_ub_ec = 0;
      exitg2 = false;
      while ((!exitg2) && (Test_Traj_B.loop_ub_ec <= static_cast<int32_T>
                           (Test_Traj_B.itmax))) {
        Test_Traj_B.k_k = Test_Traj_B.i_gm;
        exitg3 = false;
        while ((!exitg3) && (Test_Traj_B.k_k + 1 > Test_Traj_B.L_i)) {
          Test_Traj_B.b_h_data_tmp = (Test_Traj_B.k_k - 1) * b_h_size[0] +
            Test_Traj_B.k_k;
          Test_Traj_B.ba_l = fabs(b_h_data[Test_Traj_B.b_h_data_tmp]);
          if (Test_Traj_B.ba_l <= Test_Traj_B.SMLNUM) {
            exitg3 = true;
          } else {
            Test_Traj_B.m_im = b_h_size[0] * Test_Traj_B.k_k + Test_Traj_B.k_k;
            Test_Traj_B.bb_p = fabs(b_h_data[Test_Traj_B.m_im]);
            Test_Traj_B.tst_tmp = Test_Traj_B.b_h_data_tmp - 1;
            Test_Traj_B.tst_j = fabs(b_h_data[Test_Traj_B.tst_tmp]) +
              Test_Traj_B.bb_p;
            if (Test_Traj_B.tst_j == 0.0) {
              if (Test_Traj_B.k_k - 1 >= 1) {
                Test_Traj_B.tst_j = fabs(b_h_data[((Test_Traj_B.k_k - 2) *
                  b_h_size[0] + Test_Traj_B.k_k) - 1]);
              }

              if (Test_Traj_B.k_k + 2 <= Test_Traj_B.n_md) {
                Test_Traj_B.tst_j += fabs(b_h_data[(b_h_size[0] *
                  Test_Traj_B.k_k + Test_Traj_B.k_k) + 1]);
              }
            }

            if (Test_Traj_B.ba_l <= 2.2204460492503131E-16 * Test_Traj_B.tst_j)
            {
              Test_Traj_B.tst_j = fabs(b_h_data[Test_Traj_B.m_im - 1]);
              if (Test_Traj_B.ba_l > Test_Traj_B.tst_j) {
                Test_Traj_B.ab_g = Test_Traj_B.ba_l;
                Test_Traj_B.ba_l = Test_Traj_B.tst_j;
              } else {
                Test_Traj_B.ab_g = Test_Traj_B.tst_j;
              }

              Test_Traj_B.tst_j = fabs(b_h_data[Test_Traj_B.tst_tmp] -
                b_h_data[Test_Traj_B.m_im]);
              if (Test_Traj_B.bb_p > Test_Traj_B.tst_j) {
                Test_Traj_B.aa_k = Test_Traj_B.bb_p;
                Test_Traj_B.bb_p = Test_Traj_B.tst_j;
              } else {
                Test_Traj_B.aa_k = Test_Traj_B.tst_j;
              }

              Test_Traj_B.tst_j = Test_Traj_B.aa_k + Test_Traj_B.ab_g;
              Test_Traj_B.bb_p = Test_Traj_B.aa_k / Test_Traj_B.tst_j *
                Test_Traj_B.bb_p * 2.2204460492503131E-16;
              if ((Test_Traj_B.SMLNUM > Test_Traj_B.bb_p) || rtIsNaN
                  (Test_Traj_B.bb_p)) {
                Test_Traj_B.bb_p = Test_Traj_B.SMLNUM;
              }

              if (Test_Traj_B.ab_g / Test_Traj_B.tst_j * Test_Traj_B.ba_l <=
                  Test_Traj_B.bb_p) {
                exitg3 = true;
              } else {
                Test_Traj_B.k_k--;
              }
            } else {
              Test_Traj_B.k_k--;
            }
          }
        }

        Test_Traj_B.L_i = Test_Traj_B.k_k + 1;
        if (Test_Traj_B.k_k + 1 > 1) {
          b_h_data[Test_Traj_B.k_k + b_h_size[0] * (Test_Traj_B.k_k - 1)] = 0.0;
        }

        if (Test_Traj_B.k_k + 1 >= Test_Traj_B.i_gm) {
          goto150 = true;
          exitg2 = true;
        } else {
          if (Test_Traj_B.loop_ub_ec == 10) {
            Test_Traj_B.tst_tmp = b_h_size[0] * Test_Traj_B.k_k +
              Test_Traj_B.k_k;
            Test_Traj_B.tst_j = fabs(b_h_data[((Test_Traj_B.k_k + 1) * b_h_size
              [0] + Test_Traj_B.k_k) + 2]) + fabs(b_h_data[Test_Traj_B.tst_tmp +
              1]);
            Test_Traj_B.ab_g = b_h_data[Test_Traj_B.tst_tmp] + 0.75 *
              Test_Traj_B.tst_j;
            Test_Traj_B.h12_b = -0.4375 * Test_Traj_B.tst_j;
            Test_Traj_B.aa_k = Test_Traj_B.tst_j;
            Test_Traj_B.ba_l = Test_Traj_B.ab_g;
          } else if (Test_Traj_B.loop_ub_ec == 20) {
            Test_Traj_B.tst_j = fabs(b_h_data[((Test_Traj_B.i_gm - 2) *
              b_h_size[0] + Test_Traj_B.i_gm) - 1]) + fabs(b_h_data
              [(Test_Traj_B.i_gm - 1) * b_h_size[0] + Test_Traj_B.i_gm]);
            Test_Traj_B.ab_g = b_h_data[b_h_size[0] * Test_Traj_B.i_gm +
              Test_Traj_B.i_gm] + 0.75 * Test_Traj_B.tst_j;
            Test_Traj_B.h12_b = -0.4375 * Test_Traj_B.tst_j;
            Test_Traj_B.aa_k = Test_Traj_B.tst_j;
            Test_Traj_B.ba_l = Test_Traj_B.ab_g;
          } else {
            Test_Traj_B.m_im = (Test_Traj_B.i_gm - 1) * b_h_size[0] +
              Test_Traj_B.i_gm;
            Test_Traj_B.ab_g = b_h_data[Test_Traj_B.m_im - 1];
            Test_Traj_B.aa_k = b_h_data[Test_Traj_B.m_im];
            Test_Traj_B.h12_b = b_h_data[(b_h_size[0] * Test_Traj_B.i_gm +
              Test_Traj_B.i_gm) - 1];
            Test_Traj_B.ba_l = b_h_data[b_h_size[0] * Test_Traj_B.i_gm +
              Test_Traj_B.i_gm];
          }

          Test_Traj_B.tst_j = ((fabs(Test_Traj_B.ab_g) + fabs(Test_Traj_B.h12_b))
                               + fabs(Test_Traj_B.aa_k)) + fabs(Test_Traj_B.ba_l);
          if (Test_Traj_B.tst_j == 0.0) {
            Test_Traj_B.ab_g = 0.0;
            Test_Traj_B.ba_l = 0.0;
            Test_Traj_B.bb_p = 0.0;
            Test_Traj_B.aa_k = 0.0;
          } else {
            Test_Traj_B.ab_g /= Test_Traj_B.tst_j;
            Test_Traj_B.aa_k /= Test_Traj_B.tst_j;
            Test_Traj_B.h12_b /= Test_Traj_B.tst_j;
            Test_Traj_B.ba_l /= Test_Traj_B.tst_j;
            Test_Traj_B.bb_p = (Test_Traj_B.ab_g + Test_Traj_B.ba_l) / 2.0;
            Test_Traj_B.ab_g = (Test_Traj_B.ab_g - Test_Traj_B.bb_p) *
              (Test_Traj_B.ba_l - Test_Traj_B.bb_p) - Test_Traj_B.h12_b *
              Test_Traj_B.aa_k;
            Test_Traj_B.aa_k = sqrt(fabs(Test_Traj_B.ab_g));
            if (Test_Traj_B.ab_g >= 0.0) {
              Test_Traj_B.ab_g = Test_Traj_B.bb_p * Test_Traj_B.tst_j;
              Test_Traj_B.bb_p = Test_Traj_B.ab_g;
              Test_Traj_B.ba_l = Test_Traj_B.aa_k * Test_Traj_B.tst_j;
              Test_Traj_B.aa_k = -Test_Traj_B.ba_l;
            } else {
              Test_Traj_B.ab_g = Test_Traj_B.bb_p + Test_Traj_B.aa_k;
              Test_Traj_B.bb_p -= Test_Traj_B.aa_k;
              if (fabs(Test_Traj_B.ab_g - Test_Traj_B.ba_l) <= fabs
                  (Test_Traj_B.bb_p - Test_Traj_B.ba_l)) {
                Test_Traj_B.ab_g *= Test_Traj_B.tst_j;
                Test_Traj_B.bb_p = Test_Traj_B.ab_g;
              } else {
                Test_Traj_B.bb_p *= Test_Traj_B.tst_j;
                Test_Traj_B.ab_g = Test_Traj_B.bb_p;
              }

              Test_Traj_B.ba_l = 0.0;
              Test_Traj_B.aa_k = 0.0;
            }
          }

          Test_Traj_B.m_im = Test_Traj_B.i_gm - 2;
          exitg3 = false;
          while ((!exitg3) && (Test_Traj_B.m_im + 1 >= Test_Traj_B.k_k + 1)) {
            Test_Traj_B.tst_tmp = b_h_size[0] * Test_Traj_B.m_im +
              Test_Traj_B.m_im;
            Test_Traj_B.b_h_data_tmp = Test_Traj_B.tst_tmp + 1;
            Test_Traj_B.h12_b = b_h_data[Test_Traj_B.tst_tmp] - Test_Traj_B.bb_p;
            Test_Traj_B.tst_j = (fabs(Test_Traj_B.h12_b) + fabs(Test_Traj_B.aa_k))
              + fabs(b_h_data[Test_Traj_B.b_h_data_tmp]);
            Test_Traj_B.h21s_i = b_h_data[Test_Traj_B.b_h_data_tmp] /
              Test_Traj_B.tst_j;
            Test_Traj_B.b_h_data_tmp = (Test_Traj_B.m_im + 1) * b_h_size[0] +
              Test_Traj_B.m_im;
            Test_Traj_B.v_k[0] = (Test_Traj_B.h12_b / Test_Traj_B.tst_j *
                                  (b_h_data[Test_Traj_B.tst_tmp] -
              Test_Traj_B.ab_g) + b_h_data[Test_Traj_B.b_h_data_tmp] *
                                  Test_Traj_B.h21s_i) - Test_Traj_B.aa_k /
              Test_Traj_B.tst_j * Test_Traj_B.ba_l;
            Test_Traj_B.nr_m = Test_Traj_B.b_h_data_tmp + 1;
            Test_Traj_B.v_k[1] = (((b_h_data[Test_Traj_B.nr_m] +
              b_h_data[Test_Traj_B.tst_tmp]) - Test_Traj_B.ab_g) -
                                  Test_Traj_B.bb_p) * Test_Traj_B.h21s_i;
            Test_Traj_B.v_k[2] = b_h_data[Test_Traj_B.b_h_data_tmp + 2] *
              Test_Traj_B.h21s_i;
            Test_Traj_B.tst_j = (fabs(Test_Traj_B.v_k[0]) + fabs
                                 (Test_Traj_B.v_k[1])) + fabs(Test_Traj_B.v_k[2]);
            Test_Traj_B.v_k[0] /= Test_Traj_B.tst_j;
            Test_Traj_B.v_k[1] /= Test_Traj_B.tst_j;
            Test_Traj_B.v_k[2] /= Test_Traj_B.tst_j;
            if (Test_Traj_B.m_im + 1 == Test_Traj_B.k_k + 1) {
              exitg3 = true;
            } else {
              Test_Traj_B.b_h_data_tmp = (Test_Traj_B.m_im - 1) * b_h_size[0] +
                Test_Traj_B.m_im;
              if (fabs(b_h_data[Test_Traj_B.b_h_data_tmp]) * (fabs
                   (Test_Traj_B.v_k[1]) + fabs(Test_Traj_B.v_k[2])) <= ((fabs
                    (b_h_data[Test_Traj_B.b_h_data_tmp - 1]) + fabs
                    (b_h_data[Test_Traj_B.tst_tmp])) + fabs
                   (b_h_data[Test_Traj_B.nr_m])) * (2.2204460492503131E-16 *
                   fabs(Test_Traj_B.v_k[0]))) {
                exitg3 = true;
              } else {
                Test_Traj_B.m_im--;
              }
            }
          }

          for (Test_Traj_B.tst_tmp = Test_Traj_B.m_im + 1; Test_Traj_B.tst_tmp <=
               Test_Traj_B.i_gm; Test_Traj_B.tst_tmp++) {
            Test_Traj_B.nr_m = (Test_Traj_B.i_gm - Test_Traj_B.tst_tmp) + 2;
            if (3 < Test_Traj_B.nr_m) {
              Test_Traj_B.nr_m = 3;
            }

            if (Test_Traj_B.tst_tmp > Test_Traj_B.m_im + 1) {
              Test_Traj_B.hoffset_j = ((Test_Traj_B.tst_tmp - 2) *
                Test_Traj_B.ldh + Test_Traj_B.tst_tmp) - 2;
              for (Test_Traj_B.b_h_data_tmp = 0; Test_Traj_B.b_h_data_tmp <
                   Test_Traj_B.nr_m; Test_Traj_B.b_h_data_tmp++) {
                Test_Traj_B.v_k[Test_Traj_B.b_h_data_tmp] = b_h_data
                  [(Test_Traj_B.b_h_data_tmp + Test_Traj_B.hoffset_j) + 1];
              }
            }

            Test_Traj_B.b_v_a[0] = Test_Traj_B.v_k[0];
            Test_Traj_B.b_v_a[1] = Test_Traj_B.v_k[1];
            Test_Traj_B.b_v_a[2] = Test_Traj_B.v_k[2];
            Test_Traj_xzlarfg_phm(Test_Traj_B.nr_m, Test_Traj_B.v_k[0],
                                  Test_Traj_B.b_v_a, &Test_Traj_B.ba_l,
                                  &Test_Traj_B.tst_j);
            Test_Traj_B.v_k[1] = Test_Traj_B.b_v_a[1];
            Test_Traj_B.v_k[2] = Test_Traj_B.b_v_a[2];
            Test_Traj_B.v_k[0] = Test_Traj_B.ba_l;
            if (Test_Traj_B.tst_tmp > Test_Traj_B.m_im + 1) {
              Test_Traj_B.b_h_data_tmp = Test_Traj_B.tst_tmp + b_h_size[0] *
                (Test_Traj_B.tst_tmp - 2);
              b_h_data[Test_Traj_B.b_h_data_tmp - 1] = Test_Traj_B.ba_l;
              b_h_data[Test_Traj_B.b_h_data_tmp] = 0.0;
              if (Test_Traj_B.tst_tmp < Test_Traj_B.i_gm) {
                b_h_data[Test_Traj_B.b_h_data_tmp + 1] = 0.0;
              }
            } else {
              if (Test_Traj_B.m_im + 1 > Test_Traj_B.k_k + 1) {
                Test_Traj_B.b_h_data_tmp = ((Test_Traj_B.tst_tmp - 2) *
                  b_h_size[0] + Test_Traj_B.tst_tmp) - 1;
                b_h_data[Test_Traj_B.b_h_data_tmp] *= 1.0 - Test_Traj_B.tst_j;
              }
            }

            Test_Traj_B.ba_l = Test_Traj_B.b_v_a[1];
            Test_Traj_B.ab_g = Test_Traj_B.tst_j * Test_Traj_B.b_v_a[1];
            if (Test_Traj_B.nr_m == 3) {
              Test_Traj_B.aa_k = Test_Traj_B.b_v_a[2];
              Test_Traj_B.h12_b = Test_Traj_B.tst_j * Test_Traj_B.b_v_a[2];
              for (Test_Traj_B.e_j_a = Test_Traj_B.tst_tmp; Test_Traj_B.e_j_a <=
                   Test_Traj_B.n_md; Test_Traj_B.e_j_a++) {
                Test_Traj_B.b_h_data_tmp = (Test_Traj_B.e_j_a - 1) * b_h_size[0]
                  + Test_Traj_B.tst_tmp;
                Test_Traj_B.nr_m = Test_Traj_B.b_h_data_tmp - 1;
                Test_Traj_B.hoffset_j = Test_Traj_B.b_h_data_tmp + 1;
                Test_Traj_B.bb_p = (b_h_data[Test_Traj_B.nr_m] +
                                    b_h_data[Test_Traj_B.b_h_data_tmp] *
                                    Test_Traj_B.ba_l) +
                  b_h_data[Test_Traj_B.hoffset_j] * Test_Traj_B.aa_k;
                b_h_data[Test_Traj_B.nr_m] -= Test_Traj_B.bb_p *
                  Test_Traj_B.tst_j;
                b_h_data[Test_Traj_B.b_h_data_tmp] -= Test_Traj_B.bb_p *
                  Test_Traj_B.ab_g;
                b_h_data[Test_Traj_B.hoffset_j] -= Test_Traj_B.bb_p *
                  Test_Traj_B.h12_b;
              }

              Test_Traj_B.b_h_data_tmp = Test_Traj_B.tst_tmp + 3;
              Test_Traj_B.nr_m = Test_Traj_B.i_gm + 1;
              if (Test_Traj_B.b_h_data_tmp < Test_Traj_B.nr_m) {
                Test_Traj_B.nr_m = Test_Traj_B.b_h_data_tmp;
              }

              Test_Traj_B.o_i = Test_Traj_B.nr_m - 1;
              for (Test_Traj_B.e_j_a = 0; Test_Traj_B.e_j_a <= Test_Traj_B.o_i;
                   Test_Traj_B.e_j_a++) {
                Test_Traj_B.b_h_data_tmp = (Test_Traj_B.tst_tmp - 1) * b_h_size
                  [0] + Test_Traj_B.e_j_a;
                Test_Traj_B.nr_m = b_h_size[0] * Test_Traj_B.tst_tmp +
                  Test_Traj_B.e_j_a;
                Test_Traj_B.hoffset_j = (Test_Traj_B.tst_tmp + 1) * b_h_size[0]
                  + Test_Traj_B.e_j_a;
                Test_Traj_B.bb_p = (b_h_data[Test_Traj_B.b_h_data_tmp] +
                                    b_h_data[Test_Traj_B.nr_m] *
                                    Test_Traj_B.ba_l) +
                  b_h_data[Test_Traj_B.hoffset_j] * Test_Traj_B.aa_k;
                b_h_data[Test_Traj_B.b_h_data_tmp] -= Test_Traj_B.bb_p *
                  Test_Traj_B.tst_j;
                b_h_data[Test_Traj_B.nr_m] -= Test_Traj_B.bb_p *
                  Test_Traj_B.ab_g;
                b_h_data[Test_Traj_B.hoffset_j] -= Test_Traj_B.bb_p *
                  Test_Traj_B.h12_b;
              }
            } else {
              if (Test_Traj_B.nr_m == 2) {
                for (Test_Traj_B.hoffset_j = Test_Traj_B.tst_tmp;
                     Test_Traj_B.hoffset_j <= Test_Traj_B.n_md;
                     Test_Traj_B.hoffset_j++) {
                  Test_Traj_B.b_h_data_tmp = (Test_Traj_B.hoffset_j - 1) *
                    b_h_size[0] + Test_Traj_B.tst_tmp;
                  Test_Traj_B.nr_m = Test_Traj_B.b_h_data_tmp - 1;
                  Test_Traj_B.bb_p = b_h_data[Test_Traj_B.nr_m] +
                    b_h_data[Test_Traj_B.b_h_data_tmp] * Test_Traj_B.ba_l;
                  b_h_data[Test_Traj_B.nr_m] -= Test_Traj_B.bb_p *
                    Test_Traj_B.tst_j;
                  b_h_data[Test_Traj_B.b_h_data_tmp] -= Test_Traj_B.bb_p *
                    Test_Traj_B.ab_g;
                }

                for (Test_Traj_B.hoffset_j = 0; Test_Traj_B.hoffset_j <=
                     Test_Traj_B.i_gm; Test_Traj_B.hoffset_j++) {
                  Test_Traj_B.b_h_data_tmp = (Test_Traj_B.tst_tmp - 1) *
                    b_h_size[0] + Test_Traj_B.hoffset_j;
                  Test_Traj_B.nr_m = b_h_size[0] * Test_Traj_B.tst_tmp +
                    Test_Traj_B.hoffset_j;
                  Test_Traj_B.bb_p = b_h_data[Test_Traj_B.b_h_data_tmp] +
                    b_h_data[Test_Traj_B.nr_m] * Test_Traj_B.ba_l;
                  b_h_data[Test_Traj_B.b_h_data_tmp] -= Test_Traj_B.bb_p *
                    Test_Traj_B.tst_j;
                  b_h_data[Test_Traj_B.nr_m] -= Test_Traj_B.bb_p *
                    Test_Traj_B.ab_g;
                }
              }
            }
          }

          Test_Traj_B.loop_ub_ec++;
        }
      }

      if (!goto150) {
        *info = Test_Traj_B.i_gm + 1;
        exitg1 = true;
      } else {
        if ((Test_Traj_B.i_gm + 1 != Test_Traj_B.L_i) && (Test_Traj_B.L_i ==
             Test_Traj_B.i_gm)) {
          Test_Traj_xdlanv2(b_h_data[(Test_Traj_B.i_gm + b_h_size[0] *
            (Test_Traj_B.i_gm - 1)) - 1], b_h_data[(Test_Traj_B.i_gm + b_h_size
            [0] * Test_Traj_B.i_gm) - 1], b_h_data[Test_Traj_B.i_gm + b_h_size[0]
                            * (Test_Traj_B.i_gm - 1)], b_h_data[Test_Traj_B.i_gm
                            + b_h_size[0] * Test_Traj_B.i_gm],
                            &Test_Traj_B.tst_j, &Test_Traj_B.ba_l,
                            &Test_Traj_B.ab_g, &Test_Traj_B.bb_p, &b_h_data
                            [(Test_Traj_B.i_gm + b_h_size[0] * (Test_Traj_B.i_gm
            - 1)) - 1], &Test_Traj_B.aa_k, &Test_Traj_B.h12_b,
                            &Test_Traj_B.h21s_i, &Test_Traj_B.cs,
                            &Test_Traj_B.sn_p);
          Test_Traj_B.b_h_data_tmp = Test_Traj_B.i_gm + b_h_size[0] *
            Test_Traj_B.i_gm;
          b_h_data[Test_Traj_B.b_h_data_tmp - 1] = Test_Traj_B.aa_k;
          b_h_data[Test_Traj_B.i_gm + b_h_size[0] * (Test_Traj_B.i_gm - 1)] =
            Test_Traj_B.h12_b;
          b_h_data[Test_Traj_B.b_h_data_tmp] = Test_Traj_B.h21s_i;
          if (Test_Traj_B.n_md > Test_Traj_B.i_gm + 1) {
            Test_Traj_B.b_h_size_p[0] = b_h_size[0];
            Test_Traj_B.b_h_size_p[1] = b_h_size[1];
            Test_Traj_B.loop_ub_ec = b_h_size[0] * b_h_size[1];
            if (0 <= Test_Traj_B.loop_ub_ec - 1) {
              memcpy(&Test_Traj_B.b_h_data[0], &b_h_data[0],
                     Test_Traj_B.loop_ub_ec * sizeof(real_T));
            }

            Test_Traj_xrot_p((Test_Traj_B.n_md - Test_Traj_B.i_gm) - 1,
                             Test_Traj_B.b_h_data, Test_Traj_B.b_h_size_p,
                             Test_Traj_B.i_gm + (Test_Traj_B.i_gm + 1) *
                             Test_Traj_B.ldh, Test_Traj_B.ldh, (Test_Traj_B.i_gm
              + (Test_Traj_B.i_gm + 1) * Test_Traj_B.ldh) + 1, Test_Traj_B.ldh,
                             Test_Traj_B.cs, Test_Traj_B.sn_p, b_h_data,
                             b_h_size);
          }

          Test_Traj_B.b_h_size[0] = b_h_size[0];
          Test_Traj_B.b_h_size[1] = b_h_size[1];
          Test_Traj_B.loop_ub_ec = b_h_size[0] * b_h_size[1];
          if (0 <= Test_Traj_B.loop_ub_ec - 1) {
            memcpy(&Test_Traj_B.b_h_data[0], &b_h_data[0],
                   Test_Traj_B.loop_ub_ec * sizeof(real_T));
          }

          Test_Traj_xrot_ph(Test_Traj_B.i_gm - 1, Test_Traj_B.b_h_data,
                            Test_Traj_B.b_h_size, (Test_Traj_B.i_gm - 1) *
                            Test_Traj_B.ldh + 1, Test_Traj_B.i_gm *
                            Test_Traj_B.ldh + 1, Test_Traj_B.cs,
                            Test_Traj_B.sn_p, b_h_data, b_h_size);
        }

        Test_Traj_B.i_gm = Test_Traj_B.L_i - 2;
      }
    }
  }
}

static void Test_Traj_xhseqr_p(const real_T h_data[], const int32_T h_size[2],
  real_T b_h_data[], int32_T b_h_size[2], int32_T *info)
{
  Test_Traj_eml_dlahqr_p(h_data, h_size, Test_Traj_B.c_h_data,
    Test_Traj_B.c_h_size, info);
  b_h_size[0] = Test_Traj_B.c_h_size[0];
  b_h_size[1] = Test_Traj_B.c_h_size[1];
  Test_Traj_B.m_p = Test_Traj_B.c_h_size[0] * Test_Traj_B.c_h_size[1] - 1;
  if (0 <= Test_Traj_B.m_p) {
    memcpy(&b_h_data[0], &Test_Traj_B.c_h_data[0], (Test_Traj_B.m_p + 1) *
           sizeof(real_T));
  }

  Test_Traj_B.m_p = Test_Traj_B.c_h_size[0];
  if ((Test_Traj_B.c_h_size[0] == 0) || (Test_Traj_B.c_h_size[1] == 0) || (3 >=
       Test_Traj_B.c_h_size[0])) {
  } else {
    Test_Traj_B.istart_e = 4;
    if (Test_Traj_B.c_h_size[0] - 4 < Test_Traj_B.c_h_size[1] - 1) {
      Test_Traj_B.c_h_size_d = Test_Traj_B.c_h_size[0] - 3;
    } else {
      Test_Traj_B.c_h_size_d = Test_Traj_B.c_h_size[1];
    }

    Test_Traj_B.jend = Test_Traj_B.c_h_size_d - 1;
    for (Test_Traj_B.c_h_size_d = 0; Test_Traj_B.c_h_size_d <= Test_Traj_B.jend;
         Test_Traj_B.c_h_size_d++) {
      for (Test_Traj_B.i_ne = Test_Traj_B.istart_e; Test_Traj_B.i_ne <=
           Test_Traj_B.m_p; Test_Traj_B.i_ne++) {
        b_h_data[(Test_Traj_B.i_ne + b_h_size[0] * Test_Traj_B.c_h_size_d) - 1] =
          0.0;
      }

      if (Test_Traj_B.c_h_size_d + 1 >= 1) {
        Test_Traj_B.istart_e++;
      }
    }
  }
}

static void Test_Traj_triu(const real_T x_data[], const int32_T x_size[2],
  real_T b_x_data[], int32_T b_x_size[2])
{
  int32_T m;
  int32_T istart;
  int32_T jend;
  int32_T i;
  int32_T x_size_0;
  b_x_size[0] = x_size[0];
  b_x_size[1] = x_size[1];
  m = x_size[0] * x_size[1] - 1;
  if (0 <= m) {
    memcpy(&b_x_data[0], &x_data[0], (m + 1) * sizeof(real_T));
  }

  m = x_size[0];
  if ((x_size[0] == 0) || (x_size[1] == 0) || (1 >= x_size[0])) {
  } else {
    istart = 2;
    if (x_size[0] - 2 < x_size[1] - 1) {
      x_size_0 = x_size[0] - 1;
    } else {
      x_size_0 = x_size[1];
    }

    jend = x_size_0 - 1;
    for (x_size_0 = 0; x_size_0 <= jend; x_size_0++) {
      for (i = istart; i <= m; i++) {
        b_x_data[(i + b_x_size[0] * x_size_0) - 1] = 0.0;
      }

      if (x_size_0 + 1 >= 1) {
        istart++;
      }
    }
  }
}

static void Test_Traj_schur_p(real_T A_data[], int32_T A_size[2], real_T V_data[],
  int32_T V_size[2])
{
  if (Test_Traj_anyNonFinite(A_data, A_size)) {
    Test_Traj_B.A_size_n[0] = A_size[0];
    Test_Traj_B.A_size_n[1] = A_size[1];
    Test_Traj_B.loop_ub_n2 = A_size[0] * A_size[1];
    for (Test_Traj_B.info = 0; Test_Traj_B.info < Test_Traj_B.loop_ub_n2;
         Test_Traj_B.info++) {
      Test_Traj_B.A_data_e[Test_Traj_B.info] = (rtNaN);
    }

    Test_Traj_triu(Test_Traj_B.A_data_e, Test_Traj_B.A_size_n, V_data, V_size);
  } else {
    Test_Traj_B.A_size_n[0] = A_size[0];
    Test_Traj_B.A_size_n[1] = A_size[1];
    Test_Traj_B.loop_ub_n2 = A_size[0] * A_size[1];
    if (0 <= Test_Traj_B.loop_ub_n2 - 1) {
      memcpy(&Test_Traj_B.A_data_e[0], &A_data[0], Test_Traj_B.loop_ub_n2 *
             sizeof(real_T));
    }

    Test_Traj_xgehrd_p(Test_Traj_B.A_data_e, Test_Traj_B.A_size_n, A_data,
                       A_size);
    Test_Traj_xhseqr_p(A_data, A_size, V_data, V_size, &Test_Traj_B.info);
  }
}

static void Test_Traj_mainDiagZeroImag(const real_T D_data[], const int32_T
  D_size[2], real_T d_data[], int32_T *d_size)
{
  int32_T n;
  int32_T b_k;
  n = D_size[0] - 1;
  *d_size = D_size[0];
  for (b_k = 0; b_k <= n; b_k++) {
    d_data[b_k] = D_data[D_size[0] * b_k + b_k];
  }
}

static void Test_Traj_eig_p(const real_T A_data[], const int32_T A_size[2],
  creal_T V_data[], int32_T *V_size)
{
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
    *V_size = A_size[0];
    Test_Traj_B.loop_ub_cf = A_size[0];
    if (0 <= Test_Traj_B.loop_ub_cf - 1) {
      memset(&V_data[0], 0, Test_Traj_B.loop_ub_cf * sizeof(creal_T));
    }
  } else if (Test_Traj_anyNonFinite(A_data, A_size)) {
    if ((A_size[0] == 1) && (A_size[1] == 1)) {
      *V_size = 1;
      V_data[0].re = (rtNaN);
      V_data[0].im = 0.0;
    } else {
      *V_size = A_size[0];
      Test_Traj_B.loop_ub_cf = A_size[0];
      for (Test_Traj_B.b_info = 0; Test_Traj_B.b_info < Test_Traj_B.loop_ub_cf;
           Test_Traj_B.b_info++) {
        V_data[Test_Traj_B.b_info].re = (rtNaN);
        V_data[Test_Traj_B.b_info].im = 0.0;
      }
    }
  } else if ((A_size[0] == 1) && (A_size[1] == 1)) {
    *V_size = 1;
    V_data[0].re = A_data[0];
    V_data[0].im = 0.0;
  } else if (Test_Traj_ishermitian(A_data, A_size)) {
    Test_Traj_B.A_size_b[0] = A_size[0];
    Test_Traj_B.A_size_b[1] = A_size[1];
    Test_Traj_B.loop_ub_cf = A_size[0] * A_size[1];
    if (0 <= Test_Traj_B.loop_ub_cf - 1) {
      memcpy(&Test_Traj_B.A_data[0], &A_data[0], Test_Traj_B.loop_ub_cf * sizeof
             (real_T));
    }

    Test_Traj_schur_p(Test_Traj_B.A_data, Test_Traj_B.A_size_b,
                      Test_Traj_B.tmp_data_a, Test_Traj_B.tmp_size_gy);
    Test_Traj_mainDiagZeroImag(Test_Traj_B.tmp_data_a, Test_Traj_B.tmp_size_gy,
      Test_Traj_B.tmp_data_hn, &Test_Traj_B.beta1_size);
    *V_size = Test_Traj_B.beta1_size;
    Test_Traj_B.loop_ub_cf = Test_Traj_B.beta1_size;
    for (Test_Traj_B.b_info = 0; Test_Traj_B.b_info < Test_Traj_B.loop_ub_cf;
         Test_Traj_B.b_info++) {
      V_data[Test_Traj_B.b_info].re = Test_Traj_B.tmp_data_hn[Test_Traj_B.b_info];
      V_data[Test_Traj_B.b_info].im = 0.0;
    }
  } else {
    Test_Traj_xzgeev_p(A_data, A_size, &Test_Traj_B.b_info, V_data, V_size,
                       Test_Traj_B.beta1_data, &Test_Traj_B.beta1_size);
    Test_Traj_B.loop_ub_cf = *V_size;
    for (Test_Traj_B.b_info = 0; Test_Traj_B.b_info < Test_Traj_B.loop_ub_cf;
         Test_Traj_B.b_info++) {
      if (Test_Traj_B.beta1_data[Test_Traj_B.b_info].im == 0.0) {
        if (V_data[Test_Traj_B.b_info].im == 0.0) {
          Test_Traj_B.bim_g = V_data[Test_Traj_B.b_info].re /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].re;
          Test_Traj_B.brm_b = 0.0;
        } else if (V_data[Test_Traj_B.b_info].re == 0.0) {
          Test_Traj_B.bim_g = 0.0;
          Test_Traj_B.brm_b = V_data[Test_Traj_B.b_info].im /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].re;
        } else {
          Test_Traj_B.bim_g = V_data[Test_Traj_B.b_info].re /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].re;
          Test_Traj_B.brm_b = V_data[Test_Traj_B.b_info].im /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].re;
        }
      } else if (Test_Traj_B.beta1_data[Test_Traj_B.b_info].re == 0.0) {
        if (V_data[Test_Traj_B.b_info].re == 0.0) {
          Test_Traj_B.bim_g = V_data[Test_Traj_B.b_info].im /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].im;
          Test_Traj_B.brm_b = 0.0;
        } else if (V_data[Test_Traj_B.b_info].im == 0.0) {
          Test_Traj_B.bim_g = 0.0;
          Test_Traj_B.brm_b = -(V_data[Test_Traj_B.b_info].re /
                                Test_Traj_B.beta1_data[Test_Traj_B.b_info].im);
        } else {
          Test_Traj_B.bim_g = V_data[Test_Traj_B.b_info].im /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].im;
          Test_Traj_B.brm_b = -(V_data[Test_Traj_B.b_info].re /
                                Test_Traj_B.beta1_data[Test_Traj_B.b_info].im);
        }
      } else {
        Test_Traj_B.brm_b = fabs(Test_Traj_B.beta1_data[Test_Traj_B.b_info].re);
        Test_Traj_B.bim_g = fabs(Test_Traj_B.beta1_data[Test_Traj_B.b_info].im);
        if (Test_Traj_B.brm_b > Test_Traj_B.bim_g) {
          Test_Traj_B.brm_b = Test_Traj_B.beta1_data[Test_Traj_B.b_info].im /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].re;
          Test_Traj_B.d_b = Test_Traj_B.brm_b *
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].im +
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].re;
          Test_Traj_B.bim_g = (Test_Traj_B.brm_b * V_data[Test_Traj_B.b_info].im
                               + V_data[Test_Traj_B.b_info].re) /
            Test_Traj_B.d_b;
          Test_Traj_B.brm_b = (V_data[Test_Traj_B.b_info].im - Test_Traj_B.brm_b
                               * V_data[Test_Traj_B.b_info].re) /
            Test_Traj_B.d_b;
        } else if (Test_Traj_B.bim_g == Test_Traj_B.brm_b) {
          Test_Traj_B.d_b = Test_Traj_B.beta1_data[Test_Traj_B.b_info].re > 0.0 ?
            0.5 : -0.5;
          Test_Traj_B.sgnbi_o = Test_Traj_B.beta1_data[Test_Traj_B.b_info].im >
            0.0 ? 0.5 : -0.5;
          Test_Traj_B.bim_g = (V_data[Test_Traj_B.b_info].re * Test_Traj_B.d_b +
                               V_data[Test_Traj_B.b_info].im *
                               Test_Traj_B.sgnbi_o) / Test_Traj_B.brm_b;
          Test_Traj_B.brm_b = (V_data[Test_Traj_B.b_info].im * Test_Traj_B.d_b -
                               V_data[Test_Traj_B.b_info].re *
                               Test_Traj_B.sgnbi_o) / Test_Traj_B.brm_b;
        } else {
          Test_Traj_B.brm_b = Test_Traj_B.beta1_data[Test_Traj_B.b_info].re /
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].im;
          Test_Traj_B.d_b = Test_Traj_B.brm_b *
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].re +
            Test_Traj_B.beta1_data[Test_Traj_B.b_info].im;
          Test_Traj_B.bim_g = (Test_Traj_B.brm_b * V_data[Test_Traj_B.b_info].re
                               + V_data[Test_Traj_B.b_info].im) /
            Test_Traj_B.d_b;
          Test_Traj_B.brm_b = (Test_Traj_B.brm_b * V_data[Test_Traj_B.b_info].im
                               - V_data[Test_Traj_B.b_info].re) /
            Test_Traj_B.d_b;
        }
      }

      Test_Traj_B.V_data.re = Test_Traj_B.bim_g;
      Test_Traj_B.V_data.im = Test_Traj_B.brm_b;
      V_data[Test_Traj_B.b_info] = Test_Traj_B.V_data;
    }
  }
}

static real_T Test_Traj_leastEigvJtJ_p(const real_T Jtri_data[], const int32_T
  Jtri_size[2], real_T n)
{
  real_T lev;
  boolean_T exitg1;
  Test_Traj_B.bet_d = 0.0;
  Test_Traj_B.b_idx_j = Jtri_size[0];
  if (0 <= Test_Traj_B.b_idx_j - 1) {
    memset(&Test_Traj_B.oldq_data[0], 0, Test_Traj_B.b_idx_j * sizeof(real_T));
  }

  Test_Traj_B.b_size_bn = Jtri_size[0];
  Test_Traj_B.b_idx_j = Jtri_size[0];
  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.b_data_c[Test_Traj_B.alpha_size_idx_0] = 1.0;
  }

  Test_Traj_B.q_i = Test_Traj_norm_ph(Test_Traj_B.b_data_c,
    &Test_Traj_B.b_size_bn);
  Test_Traj_B.q_size = Jtri_size[0];
  Test_Traj_B.b_idx_j = Jtri_size[0];
  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.q_data_c[Test_Traj_B.alpha_size_idx_0] = 1.0 / Test_Traj_B.q_i;
  }

  Test_Traj_B.c_tmp_o = static_cast<int32_T>(n);
  Test_Traj_B.c_px = Test_Traj_B.c_tmp_o - 1;
  for (Test_Traj_B.b_i_n = 0; Test_Traj_B.b_i_n <= Test_Traj_B.c_px;
       Test_Traj_B.b_i_n++) {
    Test_Traj_solveHessian_p(Jtri_data, Jtri_size, Test_Traj_B.q_data_c,
      &Test_Traj_B.q_size, Test_Traj_B.b_data_c, &Test_Traj_B.b_size_bn);
    Test_Traj_B.q_i = 0.0;
    Test_Traj_B.b_idx_j = Test_Traj_B.q_size;
    for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
         Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
      Test_Traj_B.q_i += Test_Traj_B.q_data_c[Test_Traj_B.alpha_size_idx_0] *
        Test_Traj_B.b_data_c[Test_Traj_B.alpha_size_idx_0];
    }

    Test_Traj_B.b_idx_j = Test_Traj_B.b_size_bn;
    for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
         Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
      Test_Traj_B.b_data_c[Test_Traj_B.alpha_size_idx_0] =
        (Test_Traj_B.b_data_c[Test_Traj_B.alpha_size_idx_0] - Test_Traj_B.bet_d *
         Test_Traj_B.oldq_data[Test_Traj_B.alpha_size_idx_0]) - Test_Traj_B.q_i *
        Test_Traj_B.q_data_c[Test_Traj_B.alpha_size_idx_0];
    }

    Test_Traj_B.bet_d = Test_Traj_norm_ph(Test_Traj_B.b_data_c,
      &Test_Traj_B.b_size_bn);
    Test_Traj_B.b_idx_j = Test_Traj_B.q_size;
    if (0 <= Test_Traj_B.b_idx_j - 1) {
      memcpy(&Test_Traj_B.oldq_data[0], &Test_Traj_B.q_data_c[0],
             Test_Traj_B.b_idx_j * sizeof(real_T));
    }

    Test_Traj_B.q_size = Test_Traj_B.b_size_bn;
    Test_Traj_B.b_idx_j = Test_Traj_B.b_size_bn;
    for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
         Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
      Test_Traj_B.q_data_c[Test_Traj_B.alpha_size_idx_0] =
        Test_Traj_B.b_data_c[Test_Traj_B.alpha_size_idx_0] / Test_Traj_B.bet_d;
    }

    Test_Traj_B.beta_data_k[Test_Traj_B.b_i_n] = Test_Traj_B.bet_d;
    Test_Traj_B.alpha_data_j[Test_Traj_B.b_i_n] = Test_Traj_B.q_i;
  }

  if (1.0 > n - 1.0) {
    Test_Traj_B.c_px = 0;
    Test_Traj_B.b_i_n = 0;
  } else {
    Test_Traj_B.c_px = static_cast<int32_T>(n - 1.0);
    Test_Traj_B.b_i_n = Test_Traj_B.c_px;
  }

  if (rtIsNaN(n - 1.0)) {
    Test_Traj_B.y_size_idx_1_n = 1;
    Test_Traj_B.y_data_fc[0] = (rtNaN);
  } else if (n - 1.0 < 1.0) {
    Test_Traj_B.y_size_idx_1_n = 0;
  } else if (rtIsInf(n - 1.0) && (n - 1.0 == 1.0)) {
    Test_Traj_B.y_size_idx_1_n = 1;
    Test_Traj_B.y_data_fc[0] = (rtNaN);
  } else {
    Test_Traj_B.b_idx_j = static_cast<int32_T>(floor((n - 1.0) - 1.0));
    Test_Traj_B.y_size_idx_1_n = Test_Traj_B.b_idx_j + 1;
    for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <=
         Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
      Test_Traj_B.y_data_fc[Test_Traj_B.alpha_size_idx_0] = static_cast<real_T>
        (Test_Traj_B.alpha_size_idx_0) + 1.0;
    }
  }

  if (rtIsNaN(n)) {
    Test_Traj_B.y_size_idx_1_b = 1;
    Test_Traj_B.y_data_a[0] = (rtNaN);
    Test_Traj_B.y_size_idx_1_j = 1;
    Test_Traj_B.y_data_d4[0] = (rtNaN);
    Test_Traj_B.y_size_idx_1_k = 1;
    Test_Traj_B.y_data_e[0] = (rtNaN);
    Test_Traj_B.y_size_idx_1_d = 1;
    Test_Traj_B.y_data_eh[0] = (rtNaN);
  } else {
    if (n < 1.0) {
      Test_Traj_B.y_size_idx_1_b = 0;
    } else if (rtIsInf(n) && (1.0 == n)) {
      Test_Traj_B.y_size_idx_1_b = 1;
      Test_Traj_B.y_data_a[0] = (rtNaN);
    } else {
      Test_Traj_B.b_idx_j = static_cast<int32_T>(floor(n - 1.0));
      Test_Traj_B.y_size_idx_1_b = Test_Traj_B.b_idx_j + 1;
      for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <=
           Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
        Test_Traj_B.y_data_a[Test_Traj_B.alpha_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.alpha_size_idx_0) + 1.0;
      }
    }

    if (n < 2.0) {
      Test_Traj_B.y_size_idx_1_j = 0;
      Test_Traj_B.y_size_idx_1_k = 0;
    } else {
      if (rtIsInf(n) && (2.0 == n)) {
        Test_Traj_B.y_size_idx_1_j = 1;
        Test_Traj_B.y_data_d4[0] = (rtNaN);
      } else {
        Test_Traj_B.b_idx_j = static_cast<int32_T>(floor(n - 2.0));
        Test_Traj_B.y_size_idx_1_j = Test_Traj_B.b_idx_j + 1;
        for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <=
             Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
          Test_Traj_B.y_data_d4[Test_Traj_B.alpha_size_idx_0] =
            static_cast<real_T>(Test_Traj_B.alpha_size_idx_0) + 2.0;
        }
      }

      if (rtIsInf(n) && (2.0 == n)) {
        Test_Traj_B.y_size_idx_1_k = 1;
        Test_Traj_B.y_data_e[0] = (rtNaN);
      } else {
        Test_Traj_B.y_size_idx_1_k = static_cast<int32_T>(floor(n - 2.0)) + 1;
        Test_Traj_B.b_idx_j = static_cast<int32_T>(floor(n - 2.0));
        for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <=
             Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
          Test_Traj_B.y_data_e[Test_Traj_B.alpha_size_idx_0] =
            static_cast<real_T>(Test_Traj_B.alpha_size_idx_0) + 2.0;
        }
      }
    }

    if (n < 1.0) {
      Test_Traj_B.y_size_idx_1_d = 0;
    } else if (rtIsInf(n) && (1.0 == n)) {
      Test_Traj_B.y_size_idx_1_d = 1;
      Test_Traj_B.y_data_eh[0] = (rtNaN);
    } else {
      Test_Traj_B.y_size_idx_1_d = static_cast<int32_T>(floor(n - 1.0)) + 1;
      Test_Traj_B.b_idx_j = static_cast<int32_T>(floor(n - 1.0));
      for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <=
           Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
        Test_Traj_B.y_data_eh[Test_Traj_B.alpha_size_idx_0] = static_cast<real_T>
          (Test_Traj_B.alpha_size_idx_0) + 1.0;
      }
    }
  }

  if (rtIsNaN(n - 1.0)) {
    Test_Traj_B.y_size_idx_1_dj = 1;
    Test_Traj_B.y_data_b[0] = (rtNaN);
  } else if (n - 1.0 < 1.0) {
    Test_Traj_B.y_size_idx_1_dj = 0;
  } else if (rtIsInf(n - 1.0) && (n - 1.0 == 1.0)) {
    Test_Traj_B.y_size_idx_1_dj = 1;
    Test_Traj_B.y_data_b[0] = (rtNaN);
  } else {
    Test_Traj_B.y_size_idx_1_dj = static_cast<int32_T>(floor((n - 1.0) - 1.0)) +
      1;
    Test_Traj_B.b_idx_j = static_cast<int32_T>(floor((n - 1.0) - 1.0));
    for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <=
         Test_Traj_B.b_idx_j; Test_Traj_B.alpha_size_idx_0++) {
      Test_Traj_B.y_data_b[Test_Traj_B.alpha_size_idx_0] = static_cast<real_T>
        (Test_Traj_B.alpha_size_idx_0) + 1.0;
    }
  }

  Test_Traj_B.y_size_l[0] = (Test_Traj_B.y_size_idx_1_n +
    Test_Traj_B.y_size_idx_1_b) + Test_Traj_B.y_size_idx_1_j;
  Test_Traj_B.y_size_l[1] = 2;
  if (0 <= Test_Traj_B.y_size_idx_1_n - 1) {
    memcpy(&Test_Traj_B.y_data_f[0], &Test_Traj_B.y_data_fc[0],
           Test_Traj_B.y_size_idx_1_n * sizeof(real_T));
  }

  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.y_size_idx_1_b; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.y_data_f[Test_Traj_B.alpha_size_idx_0 +
      Test_Traj_B.y_size_idx_1_n] =
      Test_Traj_B.y_data_a[Test_Traj_B.alpha_size_idx_0];
  }

  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.y_size_idx_1_j; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.y_data_f[(Test_Traj_B.alpha_size_idx_0 +
                          Test_Traj_B.y_size_idx_1_n) +
      Test_Traj_B.y_size_idx_1_b] =
      Test_Traj_B.y_data_d4[Test_Traj_B.alpha_size_idx_0];
  }

  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.y_size_idx_1_k; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.y_data_f[Test_Traj_B.alpha_size_idx_0 + Test_Traj_B.y_size_l[0]]
      = Test_Traj_B.y_data_e[Test_Traj_B.alpha_size_idx_0];
  }

  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.y_size_idx_1_d; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.y_data_f[(Test_Traj_B.alpha_size_idx_0 +
                          Test_Traj_B.y_size_idx_1_k) + Test_Traj_B.y_size_l[0]]
      = Test_Traj_B.y_data_eh[Test_Traj_B.alpha_size_idx_0];
  }

  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.y_size_idx_1_dj; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.y_data_f[((Test_Traj_B.alpha_size_idx_0 +
      Test_Traj_B.y_size_idx_1_k) + Test_Traj_B.y_size_idx_1_d) +
      Test_Traj_B.y_size_l[0]] =
      Test_Traj_B.y_data_b[Test_Traj_B.alpha_size_idx_0];
  }

  Test_Traj_B.beta_size = (Test_Traj_B.c_px + Test_Traj_B.c_tmp_o) +
    Test_Traj_B.b_i_n;
  if (0 <= Test_Traj_B.c_px - 1) {
    memcpy(&Test_Traj_B.beta_data_l[0], &Test_Traj_B.beta_data_k[0],
           Test_Traj_B.c_px * sizeof(real_T));
  }

  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.c_tmp_o; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.beta_data_l[Test_Traj_B.alpha_size_idx_0 + Test_Traj_B.c_px] =
      Test_Traj_B.alpha_data_j[Test_Traj_B.alpha_size_idx_0];
  }

  for (Test_Traj_B.alpha_size_idx_0 = 0; Test_Traj_B.alpha_size_idx_0 <
       Test_Traj_B.b_i_n; Test_Traj_B.alpha_size_idx_0++) {
    Test_Traj_B.beta_data_l[(Test_Traj_B.alpha_size_idx_0 + Test_Traj_B.c_px) +
      Test_Traj_B.c_tmp_o] =
      Test_Traj_B.beta_data_k[Test_Traj_B.alpha_size_idx_0];
  }

  Test_Traj_B.n_c[0] = n;
  Test_Traj_B.n_c[1] = n;
  Test_Traj_accumarray_p(Test_Traj_B.y_data_f, Test_Traj_B.y_size_l,
    Test_Traj_B.beta_data_l, &Test_Traj_B.beta_size, Test_Traj_B.n_c,
    Test_Traj_B.tmp_data_p5, Test_Traj_B.tmp_size_i);
  Test_Traj_eig_p(Test_Traj_B.tmp_data_p5, Test_Traj_B.tmp_size_i,
                  Test_Traj_B.tmp_data_nh, &Test_Traj_B.b_size_bn);
  Test_Traj_abs_ph(Test_Traj_B.tmp_data_nh, &Test_Traj_B.b_size_bn,
                   Test_Traj_B.y_data_fc, &Test_Traj_B.q_size);
  Test_Traj_B.alpha_size_idx_0 = Test_Traj_B.q_size;
  Test_Traj_B.b_idx_j = Test_Traj_B.q_size;
  if (0 <= Test_Traj_B.b_idx_j - 1) {
    memcpy(&Test_Traj_B.alpha_data_j[0], &Test_Traj_B.y_data_fc[0],
           Test_Traj_B.b_idx_j * sizeof(real_T));
  }

  if (Test_Traj_B.q_size <= 2) {
    if (Test_Traj_B.q_size == 0) {
      Test_Traj_B.bet_d = (rtNaN);
    } else if (Test_Traj_B.q_size == 1) {
      Test_Traj_B.bet_d = Test_Traj_B.alpha_data_j[0];
    } else if ((Test_Traj_B.alpha_data_j[0] > Test_Traj_B.alpha_data_j[1]) ||
               (rtIsNaN(Test_Traj_B.alpha_data_j[0]) && (!rtIsNaN
                 (Test_Traj_B.alpha_data_j[1])))) {
      Test_Traj_B.bet_d = Test_Traj_B.alpha_data_j[1];
    } else {
      Test_Traj_B.bet_d = Test_Traj_B.alpha_data_j[0];
    }
  } else {
    if (!rtIsNaN(Test_Traj_B.alpha_data_j[0])) {
      Test_Traj_B.b_idx_j = 1;
    } else {
      Test_Traj_B.b_idx_j = 0;
      Test_Traj_B.b_i_n = 2;
      exitg1 = false;
      while ((!exitg1) && (Test_Traj_B.b_i_n <= Test_Traj_B.alpha_size_idx_0)) {
        if (!rtIsNaN(Test_Traj_B.alpha_data_j[Test_Traj_B.b_i_n - 1])) {
          Test_Traj_B.b_idx_j = Test_Traj_B.b_i_n;
          exitg1 = true;
        } else {
          Test_Traj_B.b_i_n++;
        }
      }
    }

    if (Test_Traj_B.b_idx_j == 0) {
      Test_Traj_B.bet_d = Test_Traj_B.alpha_data_j[0];
    } else {
      Test_Traj_B.bet_d = Test_Traj_B.alpha_data_j[Test_Traj_B.b_idx_j - 1];
      for (Test_Traj_B.b_i_n = Test_Traj_B.b_idx_j + 1; Test_Traj_B.b_i_n <=
           Test_Traj_B.alpha_size_idx_0; Test_Traj_B.b_i_n++) {
        Test_Traj_B.q_i = Test_Traj_B.alpha_data_j[Test_Traj_B.b_i_n - 1];
        if (Test_Traj_B.bet_d > Test_Traj_B.q_i) {
          Test_Traj_B.bet_d = Test_Traj_B.q_i;
        }
      }
    }
  }

  lev = 1.0 / Test_Traj_B.bet_d;
  return lev;
}

static void Test_Traj_fletcher_p(real_T S, real_T Snew, const real_T dx_data[],
  const int32_T *dx_size, const real_T v_data[], const real_T Jtri_data[], const
  int32_T Jtri_size[2], real_T lambda, real_T lambdac, real_T *b_lambda, real_T *
  b_lambdac)
{
  *b_lambdac = lambdac;
  *b_lambda = lambda;
  Test_Traj_mulJtJ(Jtri_data, Jtri_size, dx_data, dx_size,
                   Test_Traj_B.tmp_data_gg, &Test_Traj_B.tmp_size_bp);
  Test_Traj_B.R_o = 0.0;
  Test_Traj_B.loop_ub_p = *dx_size;
  for (Test_Traj_B.i8 = 0; Test_Traj_B.i8 < Test_Traj_B.loop_ub_p;
       Test_Traj_B.i8++) {
    Test_Traj_B.R_o += (2.0 * v_data[Test_Traj_B.i8] -
                        Test_Traj_B.tmp_data_gg[Test_Traj_B.i8]) *
      dx_data[Test_Traj_B.i8];
  }

  Test_Traj_B.R_o = (S - Snew) / Test_Traj_B.R_o;
  if (Test_Traj_B.R_o > 0.75) {
    *b_lambda = lambda / 2.0;
    if (*b_lambda < lambdac) {
      *b_lambda = 0.0;
    }
  } else {
    if (Test_Traj_B.R_o < 0.25) {
      Test_Traj_B.R_o = 0.0;
      Test_Traj_B.loop_ub_p = *dx_size;
      for (Test_Traj_B.i8 = 0; Test_Traj_B.i8 < Test_Traj_B.loop_ub_p;
           Test_Traj_B.i8++) {
        Test_Traj_B.R_o += dx_data[Test_Traj_B.i8] * v_data[Test_Traj_B.i8];
      }

      Test_Traj_B.R_o = (Snew - S) / Test_Traj_B.R_o + 2.0;
      if ((2.0 > Test_Traj_B.R_o) || rtIsNaN(Test_Traj_B.R_o)) {
        Test_Traj_B.R_o = 2.0;
      }

      if (!(Test_Traj_B.R_o < 10.0)) {
        Test_Traj_B.R_o = 10.0;
      }

      if (lambda == 0.0) {
        if (40.0 < Jtri_size[0]) {
          Test_Traj_B.d5 = 40.0;
        } else {
          Test_Traj_B.d5 = Jtri_size[0];
        }

        *b_lambdac = Test_Traj_leastEigvJtJ_p(Jtri_data, Jtri_size,
          Test_Traj_B.d5);
        *b_lambda = *b_lambdac;
        Test_Traj_B.R_o /= 2.0;
      }

      *b_lambda *= Test_Traj_B.R_o;
    }
  }
}

static void Test_Traj_LMFsolve_phmyulbc3(const real_T
  FUN_tunableEnvironment_f1_data[], const int32_T
  FUN_tunableEnvironment_f1_size[2], const real_T
  FUN_tunableEnvironment_f2_data[], const int32_T
  *FUN_tunableEnvironment_f2_size, real_T x_data[], const int32_T *x_size)
{
  boolean_T exitg1;
  Test_Traj_B.maxiter = 100.0 * static_cast<real_T>(*x_size);
  Test_Traj___anon_fcn_ph(FUN_tunableEnvironment_f1_data,
    FUN_tunableEnvironment_f1_size, FUN_tunableEnvironment_f2_data,
    FUN_tunableEnvironment_f2_size, x_data, Test_Traj_B.b_r_data_k,
    &Test_Traj_B.b_r_size, Test_Traj_B.b_varargout_2_data_h,
    Test_Traj_B.b_varargout_2_size);
  Test_Traj_B.Jtri_size[0] = Test_Traj_B.b_varargout_2_size[0];
  Test_Traj_B.Jtri_size[1] = 3;
  Test_Traj_B.loop_ub_tmp = Test_Traj_B.b_varargout_2_size[0] *
    Test_Traj_B.b_varargout_2_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_tmp) {
    memcpy(&Test_Traj_B.Jtri_data_o[0], &Test_Traj_B.b_varargout_2_data_h[0],
           (Test_Traj_B.loop_ub_tmp + 1) * sizeof(real_T));
  }

  Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data_h,
                    Test_Traj_B.b_varargout_2_size, Test_Traj_B.b_r_data_k,
                    &Test_Traj_B.b_r_size, Test_Traj_B.tmp_data_hc,
                    &Test_Traj_B.tmp_size_i1);
  Test_Traj_B.v_size_h = Test_Traj_B.tmp_size_i1;
  Test_Traj_B.loop_ub_m = Test_Traj_B.tmp_size_i1;
  if (0 <= Test_Traj_B.loop_ub_m - 1) {
    memcpy(&Test_Traj_B.v_data_nu[0], &Test_Traj_B.tmp_data_hc[0],
           Test_Traj_B.loop_ub_m * sizeof(real_T));
  }

  Test_Traj_B.S = 0.0;
  Test_Traj_B.loop_ub_m = Test_Traj_B.b_r_size;
  for (Test_Traj_B.loop_ub_tmp = 0; Test_Traj_B.loop_ub_tmp <
       Test_Traj_B.loop_ub_m; Test_Traj_B.loop_ub_tmp++) {
    Test_Traj_B.S += Test_Traj_B.b_r_data_k[Test_Traj_B.loop_ub_tmp] *
      Test_Traj_B.b_r_data_k[Test_Traj_B.loop_ub_tmp];
  }

  Test_Traj_B.lambda = 0.0;
  Test_Traj_B.lambdac = 0.75;
  Test_Traj_B.iter = 0.0;
  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.tmp_data_hc,
                      &Test_Traj_B.tmp_size_i1);
  Test_Traj_B.loop_ub_tmp = Test_Traj_B.tmp_size_i1;
  Test_Traj_B.loop_ub_m = Test_Traj_B.tmp_size_i1;
  if (0 <= Test_Traj_B.loop_ub_m - 1) {
    memcpy(&Test_Traj_B.epsx_data_o[0], &Test_Traj_B.tmp_data_hc[0],
           Test_Traj_B.loop_ub_m * sizeof(real_T));
  }

  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.tmp_data_hc,
                      &Test_Traj_B.tmp_size_i1);
  Test_Traj_B.loop_ub_m = Test_Traj_B.tmp_size_i1;
  if (0 <= Test_Traj_B.loop_ub_m - 1) {
    memcpy(&Test_Traj_B.epsr_data_c[0], &Test_Traj_B.tmp_data_hc[0],
           Test_Traj_B.loop_ub_m * sizeof(real_T));
  }

  Test_Traj_B.dx_size = Test_Traj_B.loop_ub_tmp;
  if (0 <= Test_Traj_B.loop_ub_tmp - 1) {
    memcpy(&Test_Traj_B.dx_data[0], &Test_Traj_B.epsx_data_o[0],
           Test_Traj_B.loop_ub_tmp * sizeof(real_T));
  }

  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.iter < Test_Traj_B.maxiter)) {
    Test_Traj_abs_p(Test_Traj_B.dx_data, &Test_Traj_B.dx_size,
                    Test_Traj_B.tmp_data_hc, &Test_Traj_B.tmp_size_i1);
    Test_Traj_B.tmp_size_ct = Test_Traj_B.tmp_size_i1;
    Test_Traj_B.loop_ub_m = Test_Traj_B.tmp_size_i1;
    for (Test_Traj_B.loop_ub_tmp = 0; Test_Traj_B.loop_ub_tmp <
         Test_Traj_B.loop_ub_m; Test_Traj_B.loop_ub_tmp++) {
      Test_Traj_B.tmp_data_dn[Test_Traj_B.loop_ub_tmp] =
        (Test_Traj_B.tmp_data_hc[Test_Traj_B.loop_ub_tmp] >=
         Test_Traj_B.epsx_data_o[Test_Traj_B.loop_ub_tmp]);
    }

    if (Test_Traj_any_p(Test_Traj_B.tmp_data_dn, &Test_Traj_B.tmp_size_ct)) {
      Test_Traj_abs_p(Test_Traj_B.b_r_data_k, &Test_Traj_B.b_r_size,
                      Test_Traj_B.tmp_data_hc, &Test_Traj_B.tmp_size_i1);
      Test_Traj_B.tmp_size_ni = Test_Traj_B.tmp_size_i1;
      Test_Traj_B.loop_ub_m = Test_Traj_B.tmp_size_i1;
      for (Test_Traj_B.loop_ub_tmp = 0; Test_Traj_B.loop_ub_tmp <
           Test_Traj_B.loop_ub_m; Test_Traj_B.loop_ub_tmp++) {
        Test_Traj_B.tmp_data_dn[Test_Traj_B.loop_ub_tmp] =
          (Test_Traj_B.tmp_data_hc[Test_Traj_B.loop_ub_tmp] >=
           Test_Traj_B.epsr_data_c[Test_Traj_B.loop_ub_tmp]);
      }

      if (Test_Traj_any_p(Test_Traj_B.tmp_data_dn, &Test_Traj_B.tmp_size_ni)) {
        Test_Traj_B.iter++;
        Test_Tra_solveDampenedHessian_p(Test_Traj_B.Jtri_data_o,
          Test_Traj_B.Jtri_size, Test_Traj_B.lambda, Test_Traj_B.v_data_nu,
          &Test_Traj_B.v_size_h, Test_Traj_B.dx_data, &Test_Traj_B.dx_size);
        Test_Traj_B.loop_ub_m = *x_size;
        for (Test_Traj_B.loop_ub_tmp = 0; Test_Traj_B.loop_ub_tmp <
             Test_Traj_B.loop_ub_m; Test_Traj_B.loop_ub_tmp++) {
          Test_Traj_B.xnew_data_n[Test_Traj_B.loop_ub_tmp] =
            x_data[Test_Traj_B.loop_ub_tmp] -
            Test_Traj_B.dx_data[Test_Traj_B.loop_ub_tmp];
        }

        Test_Traj___anon_fcn_ph(FUN_tunableEnvironment_f1_data,
          FUN_tunableEnvironment_f1_size, FUN_tunableEnvironment_f2_data,
          FUN_tunableEnvironment_f2_size, Test_Traj_B.xnew_data_n,
          Test_Traj_B.b_varargout_1_data_a, &Test_Traj_B.b_varargout_1_size,
          Test_Traj_B.b_varargout_2_data_h, Test_Traj_B.b_varargout_2_size);
        Test_Traj_B.b_varargout_1_c = 0.0;
        Test_Traj_B.loop_ub_m = Test_Traj_B.b_varargout_1_size;
        for (Test_Traj_B.loop_ub_tmp = 0; Test_Traj_B.loop_ub_tmp <
             Test_Traj_B.loop_ub_m; Test_Traj_B.loop_ub_tmp++) {
          Test_Traj_B.b_varargout_1_c +=
            Test_Traj_B.b_varargout_1_data_a[Test_Traj_B.loop_ub_tmp] *
            Test_Traj_B.b_varargout_1_data_a[Test_Traj_B.loop_ub_tmp];
        }

        Test_Traj_fletcher_p(Test_Traj_B.S, Test_Traj_B.b_varargout_1_c,
                             Test_Traj_B.dx_data, &Test_Traj_B.dx_size,
                             Test_Traj_B.v_data_nu, Test_Traj_B.Jtri_data_o,
                             Test_Traj_B.Jtri_size, Test_Traj_B.lambda,
                             Test_Traj_B.lambdac, &Test_Traj_B.lambda,
                             &Test_Traj_B.lambdac);
        if (Test_Traj_B.b_varargout_1_c < Test_Traj_B.S) {
          Test_Traj_B.S = Test_Traj_B.b_varargout_1_c;
          Test_Traj_B.loop_ub_m = *x_size;
          if (0 <= Test_Traj_B.loop_ub_m - 1) {
            memcpy(&x_data[0], &Test_Traj_B.xnew_data_n[0],
                   Test_Traj_B.loop_ub_m * sizeof(real_T));
          }

          Test_Traj_B.b_r_size = Test_Traj_B.b_varargout_1_size;
          Test_Traj_B.loop_ub_m = Test_Traj_B.b_varargout_1_size;
          if (0 <= Test_Traj_B.loop_ub_m - 1) {
            memcpy(&Test_Traj_B.b_r_data_k[0],
                   &Test_Traj_B.b_varargout_1_data_a[0], Test_Traj_B.loop_ub_m *
                   sizeof(real_T));
          }

          Test_Traj_B.Jtri_size[0] = Test_Traj_B.b_varargout_2_size[0];
          Test_Traj_B.Jtri_size[1] = 3;
          Test_Traj_B.loop_ub_m = Test_Traj_B.b_varargout_2_size[0] *
            Test_Traj_B.b_varargout_2_size[1] - 1;
          if (0 <= Test_Traj_B.loop_ub_m) {
            memcpy(&Test_Traj_B.Jtri_data_o[0],
                   &Test_Traj_B.b_varargout_2_data_h[0], (Test_Traj_B.loop_ub_m
                    + 1) * sizeof(real_T));
          }

          Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data_h,
                            Test_Traj_B.b_varargout_2_size,
                            Test_Traj_B.b_varargout_1_data_a,
                            &Test_Traj_B.b_varargout_1_size,
                            Test_Traj_B.tmp_data_hc, &Test_Traj_B.tmp_size_i1);
          Test_Traj_B.v_size_h = Test_Traj_B.tmp_size_i1;
          Test_Traj_B.loop_ub_m = Test_Traj_B.tmp_size_i1;
          if (0 <= Test_Traj_B.loop_ub_m - 1) {
            memcpy(&Test_Traj_B.v_data_nu[0], &Test_Traj_B.tmp_data_hc[0],
                   Test_Traj_B.loop_ub_m * sizeof(real_T));
          }
        }
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }
}

static void Test_Traj___anon_fcn_p(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T course_data[], const int32_T *course_size,
  const real_T x_data[], real_T varargout_1_data[], int32_T *varargout_1_size,
  real_T varargout_2_data[], int32_T varargout_2_size[2])
{
  Test_Traj_B.loop_ub_ar = *course_size;
  if (0 <= Test_Traj_B.loop_ub_ar - 1) {
    memcpy(&Test_Traj_B.course_data_d[0], &course_data[0],
           Test_Traj_B.loop_ub_ar * sizeof(real_T));
  }

  Test_Traj_B.loop_ub_ar = waypoints_size[0];
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.loop_ub_ar;
       Test_Traj_B.e_an++) {
    Test_Traj_B.hip_data_k[Test_Traj_B.e_an].re =
      waypoints_data[Test_Traj_B.e_an];
    Test_Traj_B.hip_data_k[Test_Traj_B.e_an].im =
      waypoints_data[Test_Traj_B.e_an + waypoints_size[0]];
  }

  if (2 > *course_size) {
    Test_Traj_B.f_k = 0;
    Test_Traj_B.e_an = 0;
  } else {
    Test_Traj_B.f_k = 1;
    Test_Traj_B.e_an = *course_size;
  }

  Test_Traj_B.g_size_idx_1_tmp_l = Test_Traj_B.e_an - Test_Traj_B.f_k;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.g_size_idx_1_tmp_l;
       Test_Traj_B.e_an++) {
    Test_Traj_B.g_data[Test_Traj_B.e_an] = Test_Traj_B.f_k + Test_Traj_B.e_an;
  }

  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.g_size_idx_1_tmp_l;
       Test_Traj_B.e_an++) {
    Test_Traj_B.course_data_d[Test_Traj_B.g_data[Test_Traj_B.e_an]] =
      x_data[Test_Traj_B.e_an];
  }

  if (1.0 > static_cast<real_T>(waypoints_size[0]) - 1.0) {
    Test_Traj_B.e_an = 0;
    Test_Traj_B.l_m = 0;
  } else {
    Test_Traj_B.e_an = waypoints_size[0] - 1;
    Test_Traj_B.l_m = waypoints_size[0] - 1;
  }

  if (2 > waypoints_size[0]) {
    Test_Traj_B.g_size_idx_1_tmp_l = 0;
    Test_Traj_B.o_j = 0;
    Test_Traj_B.f_k = 0;
    Test_Traj_B.q_j = 0;
  } else {
    Test_Traj_B.g_size_idx_1_tmp_l = 1;
    Test_Traj_B.o_j = waypoints_size[0];
    Test_Traj_B.f_k = 1;
    Test_Traj_B.q_j = waypoints_size[0];
  }

  if (0 <= Test_Traj_B.e_an - 1) {
    memcpy(&Test_Traj_B.hip_data_a[0], &Test_Traj_B.hip_data_k[0],
           Test_Traj_B.e_an * sizeof(creal_T));
  }

  Test_Traj_B.course_size_f4 = Test_Traj_B.l_m;
  if (0 <= Test_Traj_B.l_m - 1) {
    memcpy(&Test_Traj_B.course_data_o[0], &Test_Traj_B.course_data_d[0],
           Test_Traj_B.l_m * sizeof(real_T));
  }

  Test_Traj_B.l_m = Test_Traj_B.o_j - Test_Traj_B.g_size_idx_1_tmp_l;
  Test_Traj_B.hip_size_d = Test_Traj_B.l_m;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.l_m;
       Test_Traj_B.e_an++) {
    Test_Traj_B.hip_data_p[Test_Traj_B.e_an] =
      Test_Traj_B.hip_data_k[Test_Traj_B.g_size_idx_1_tmp_l + Test_Traj_B.e_an];
  }

  Test_Traj_B.g_size_idx_1_tmp_l = Test_Traj_B.q_j - Test_Traj_B.f_k;
  Test_Traj_B.course_size_e = Test_Traj_B.g_size_idx_1_tmp_l;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.g_size_idx_1_tmp_l;
       Test_Traj_B.e_an++) {
    Test_Traj_B.course_data_g[Test_Traj_B.e_an] =
      Test_Traj_B.course_data_d[Test_Traj_B.f_k + Test_Traj_B.e_an];
  }

  Test_Traj_clothoidG1fit2wp_p(Test_Traj_B.hip_data_a, Test_Traj_B.course_data_o,
    &Test_Traj_B.course_size_f4, Test_Traj_B.hip_data_p, &Test_Traj_B.hip_size_d,
    Test_Traj_B.course_data_g, &Test_Traj_B.course_size_e, Test_Traj_B.k0_data_a,
    &Test_Traj_B.k0_size_k, Test_Traj_B.k1_data_i, &Test_Traj_B.k1_size_f,
    Test_Traj_B.unusedU1_data, &Test_Traj_B.unusedU1_size,
    Test_Traj_B.dk0_dc0_data_f, &Test_Traj_B.dk0_dc0_size_cz,
    Test_Traj_B.dk0_dc1_data_j, &Test_Traj_B.dk0_dc1_size_o,
    Test_Traj_B.dk1_dc0_data_o, &Test_Traj_B.dk1_dc0_size_k,
    Test_Traj_B.dk1_dc1_data_fr, &Test_Traj_B.dk1_dc1_size_p);
  if (1.0 > static_cast<real_T>(Test_Traj_B.k1_size_f) - 1.0) {
    Test_Traj_B.f_k = 0;
  } else {
    Test_Traj_B.f_k = Test_Traj_B.k1_size_f - 1;
  }

  if (2 > Test_Traj_B.k0_size_k) {
    Test_Traj_B.g_size_idx_1_tmp_l = 0;
  } else {
    Test_Traj_B.g_size_idx_1_tmp_l = 1;
  }

  if (2 > Test_Traj_B.dk0_dc1_size_o) {
    Test_Traj_B.q_j = 0;
    Test_Traj_B.l_m = 0;
  } else {
    Test_Traj_B.q_j = 1;
    Test_Traj_B.l_m = Test_Traj_B.dk0_dc1_size_o;
  }

  if (2 > Test_Traj_B.dk1_dc0_size_k) {
    Test_Traj_B.o_j = 0;
    Test_Traj_B.e_an = 0;
  } else {
    Test_Traj_B.o_j = 1;
    Test_Traj_B.e_an = Test_Traj_B.dk1_dc0_size_k;
  }

  if (1.0 > static_cast<real_T>(waypoints_size[0]) - 2.0) {
    Test_Traj_B.ib_k = 0;
  } else {
    Test_Traj_B.ib_k = waypoints_size[0] - 2;
  }

  if (2.0 > static_cast<real_T>(waypoints_size[0]) - 1.0) {
    Test_Traj_B.mb_k = 0;
  } else {
    Test_Traj_B.mb_k = 1;
  }

  Test_Traj_B.loop_ub_ar = Test_Traj_B.e_an - Test_Traj_B.o_j;
  Test_Traj_B.reshapes_m[0].f1.size = Test_Traj_B.loop_ub_ar + 1;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.loop_ub_ar;
       Test_Traj_B.e_an++) {
    Test_Traj_B.reshapes_m[0].f1.data[Test_Traj_B.e_an] =
      Test_Traj_B.dk1_dc0_data_o[Test_Traj_B.o_j + Test_Traj_B.e_an];
  }

  Test_Traj_B.reshapes_m[0].f1.data[Test_Traj_B.loop_ub_ar] = 0.0;
  Test_Traj_B.reshapes_m[1].f1.size = Test_Traj_B.ib_k + 1;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.ib_k;
       Test_Traj_B.e_an++) {
    Test_Traj_B.reshapes_m[1].f1.data[Test_Traj_B.e_an] =
      Test_Traj_B.dk1_dc1_data_fr[Test_Traj_B.e_an] -
      Test_Traj_B.dk0_dc0_data_f[Test_Traj_B.mb_k + Test_Traj_B.e_an];
  }

  Test_Traj_B.reshapes_m[1].f1.data[Test_Traj_B.ib_k] =
    Test_Traj_B.dk1_dc1_data_fr[waypoints_size[0] - 2];
  Test_Traj_B.loop_ub_ar = Test_Traj_B.l_m - Test_Traj_B.q_j;
  Test_Traj_B.reshapes_m[2].f1.size = Test_Traj_B.loop_ub_ar + 1;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.loop_ub_ar;
       Test_Traj_B.e_an++) {
    Test_Traj_B.reshapes_m[2].f1.data[Test_Traj_B.e_an] =
      -Test_Traj_B.dk0_dc1_data_j[Test_Traj_B.q_j + Test_Traj_B.e_an];
  }

  Test_Traj_B.reshapes_m[2].f1.data[Test_Traj_B.loop_ub_ar] = 0.0;
  *varargout_1_size = Test_Traj_B.f_k + 1;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.f_k;
       Test_Traj_B.e_an++) {
    varargout_1_data[Test_Traj_B.e_an] = Test_Traj_B.k1_data_i[Test_Traj_B.e_an]
      - Test_Traj_B.k0_data_a[Test_Traj_B.g_size_idx_1_tmp_l + Test_Traj_B.e_an];
  }

  varargout_1_data[Test_Traj_B.f_k] =
    Test_Traj_B.k1_data_i[Test_Traj_B.k1_size_f - 1];
  varargout_2_size[0] = Test_Traj_B.reshapes_m[0].f1.size;
  varargout_2_size[1] = 3;
  Test_Traj_B.loop_ub_ar = Test_Traj_B.reshapes_m[0].f1.size;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.loop_ub_ar;
       Test_Traj_B.e_an++) {
    varargout_2_data[Test_Traj_B.e_an] = Test_Traj_B.reshapes_m[0]
      .f1.data[Test_Traj_B.e_an];
  }

  Test_Traj_B.loop_ub_ar = Test_Traj_B.reshapes_m[1].f1.size;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.loop_ub_ar;
       Test_Traj_B.e_an++) {
    varargout_2_data[Test_Traj_B.e_an + Test_Traj_B.reshapes_m[0].f1.size] =
      Test_Traj_B.reshapes_m[1].f1.data[Test_Traj_B.e_an];
  }

  Test_Traj_B.loop_ub_ar = Test_Traj_B.reshapes_m[2].f1.size;
  for (Test_Traj_B.e_an = 0; Test_Traj_B.e_an < Test_Traj_B.loop_ub_ar;
       Test_Traj_B.e_an++) {
    varargout_2_data[(Test_Traj_B.e_an + Test_Traj_B.reshapes_m[0].f1.size) +
      Test_Traj_B.reshapes_m[1].f1.size] = Test_Traj_B.reshapes_m[2]
      .f1.data[Test_Traj_B.e_an];
  }
}

static void Test_Traj_LMFsolve_phmyulbc(const real_T
  FUN_tunableEnvironment_f1_data[], const int32_T
  FUN_tunableEnvironment_f1_size[2], const real_T
  FUN_tunableEnvironment_f2_data[], const int32_T
  *FUN_tunableEnvironment_f2_size, real_T x_data[], const int32_T *x_size)
{
  boolean_T exitg1;
  Test_Traj_B.maxiter_e = 100.0 * static_cast<real_T>(*x_size);
  Test_Traj___anon_fcn_p(FUN_tunableEnvironment_f1_data,
    FUN_tunableEnvironment_f1_size, FUN_tunableEnvironment_f2_data,
    FUN_tunableEnvironment_f2_size, x_data, Test_Traj_B.b_r_data_i,
    &Test_Traj_B.b_r_size_nc, Test_Traj_B.b_varargout_2_data_e,
    Test_Traj_B.b_varargout_2_size_i0);
  Test_Traj_B.Jtri_size_aq[0] = Test_Traj_B.b_varargout_2_size_i0[0];
  Test_Traj_B.Jtri_size_aq[1] = 3;
  Test_Traj_B.loop_ub_tmp_b = Test_Traj_B.b_varargout_2_size_i0[0] *
    Test_Traj_B.b_varargout_2_size_i0[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_tmp_b) {
    memcpy(&Test_Traj_B.Jtri_data_p[0], &Test_Traj_B.b_varargout_2_data_e[0],
           (Test_Traj_B.loop_ub_tmp_b + 1) * sizeof(real_T));
  }

  Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data_e,
                    Test_Traj_B.b_varargout_2_size_i0, Test_Traj_B.b_r_data_i,
                    &Test_Traj_B.b_r_size_nc, Test_Traj_B.xnew_data_k,
                    &Test_Traj_B.xnew_size_bh);
  Test_Traj_B.v_size_c = Test_Traj_B.xnew_size_bh;
  Test_Traj_B.loop_ub_kw = Test_Traj_B.xnew_size_bh;
  if (0 <= Test_Traj_B.loop_ub_kw - 1) {
    memcpy(&Test_Traj_B.v_data_l[0], &Test_Traj_B.xnew_data_k[0],
           Test_Traj_B.loop_ub_kw * sizeof(real_T));
  }

  Test_Traj_B.S_i = 0.0;
  Test_Traj_B.loop_ub_kw = Test_Traj_B.b_r_size_nc;
  for (Test_Traj_B.loop_ub_tmp_b = 0; Test_Traj_B.loop_ub_tmp_b <
       Test_Traj_B.loop_ub_kw; Test_Traj_B.loop_ub_tmp_b++) {
    Test_Traj_B.S_i += Test_Traj_B.b_r_data_i[Test_Traj_B.loop_ub_tmp_b] *
      Test_Traj_B.b_r_data_i[Test_Traj_B.loop_ub_tmp_b];
  }

  Test_Traj_B.lambda_f = 0.0;
  Test_Traj_B.lambdac_kx = 0.75;
  Test_Traj_B.iter_n = 0.0;
  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.epsx_data_n,
                      &Test_Traj_B.xnew_size_bh);
  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.epsr_data_o,
                      &Test_Traj_B.epsr_size);
  Test_Traj_B.dx_size_j = Test_Traj_B.xnew_size_bh;
  Test_Traj_B.loop_ub_kw = Test_Traj_B.xnew_size_bh;
  if (0 <= Test_Traj_B.loop_ub_kw - 1) {
    memcpy(&Test_Traj_B.dx_data_n[0], &Test_Traj_B.epsx_data_n[0],
           Test_Traj_B.loop_ub_kw * sizeof(real_T));
  }

  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.iter_n < Test_Traj_B.maxiter_e)) {
    Test_Traj_abs_p(Test_Traj_B.dx_data_n, &Test_Traj_B.dx_size_j,
                    Test_Traj_B.xnew_data_k, &Test_Traj_B.xnew_size_bh);
    Test_Traj_B.xnew_size_d = Test_Traj_B.xnew_size_bh;
    Test_Traj_B.loop_ub_kw = Test_Traj_B.xnew_size_bh;
    for (Test_Traj_B.loop_ub_tmp_b = 0; Test_Traj_B.loop_ub_tmp_b <
         Test_Traj_B.loop_ub_kw; Test_Traj_B.loop_ub_tmp_b++) {
      Test_Traj_B.xnew_data_p[Test_Traj_B.loop_ub_tmp_b] =
        (Test_Traj_B.xnew_data_k[Test_Traj_B.loop_ub_tmp_b] >=
         Test_Traj_B.epsx_data_n[Test_Traj_B.loop_ub_tmp_b]);
    }

    if (Test_Traj_any_p(Test_Traj_B.xnew_data_p, &Test_Traj_B.xnew_size_d)) {
      Test_Traj_abs_p(Test_Traj_B.b_r_data_i, &Test_Traj_B.b_r_size_nc,
                      Test_Traj_B.xnew_data_k, &Test_Traj_B.xnew_size_bh);
      Test_Traj_B.xnew_size_hf = Test_Traj_B.xnew_size_bh;
      Test_Traj_B.loop_ub_kw = Test_Traj_B.xnew_size_bh;
      for (Test_Traj_B.loop_ub_tmp_b = 0; Test_Traj_B.loop_ub_tmp_b <
           Test_Traj_B.loop_ub_kw; Test_Traj_B.loop_ub_tmp_b++) {
        Test_Traj_B.xnew_data_p[Test_Traj_B.loop_ub_tmp_b] =
          (Test_Traj_B.xnew_data_k[Test_Traj_B.loop_ub_tmp_b] >=
           Test_Traj_B.epsr_data_o[Test_Traj_B.loop_ub_tmp_b]);
      }

      if (Test_Traj_any_p(Test_Traj_B.xnew_data_p, &Test_Traj_B.xnew_size_hf)) {
        Test_Traj_B.iter_n++;
        Test_Tra_solveDampenedHessian_p(Test_Traj_B.Jtri_data_p,
          Test_Traj_B.Jtri_size_aq, Test_Traj_B.lambda_f, Test_Traj_B.v_data_l,
          &Test_Traj_B.v_size_c, Test_Traj_B.dx_data_n, &Test_Traj_B.dx_size_j);
        Test_Traj_B.loop_ub_kw = *x_size;
        for (Test_Traj_B.loop_ub_tmp_b = 0; Test_Traj_B.loop_ub_tmp_b <
             Test_Traj_B.loop_ub_kw; Test_Traj_B.loop_ub_tmp_b++) {
          Test_Traj_B.xnew_data_k[Test_Traj_B.loop_ub_tmp_b] =
            x_data[Test_Traj_B.loop_ub_tmp_b] -
            Test_Traj_B.dx_data_n[Test_Traj_B.loop_ub_tmp_b];
        }

        Test_Traj___anon_fcn_p(FUN_tunableEnvironment_f1_data,
          FUN_tunableEnvironment_f1_size, FUN_tunableEnvironment_f2_data,
          FUN_tunableEnvironment_f2_size, Test_Traj_B.xnew_data_k,
          Test_Traj_B.b_varargout_1_data_k, &Test_Traj_B.epsr_size,
          Test_Traj_B.b_varargout_2_data_e, Test_Traj_B.b_varargout_2_size_i0);
        Test_Traj_B.b_varargout_1_i = 0.0;
        Test_Traj_B.loop_ub_kw = Test_Traj_B.epsr_size;
        for (Test_Traj_B.loop_ub_tmp_b = 0; Test_Traj_B.loop_ub_tmp_b <
             Test_Traj_B.loop_ub_kw; Test_Traj_B.loop_ub_tmp_b++) {
          Test_Traj_B.b_varargout_1_i +=
            Test_Traj_B.b_varargout_1_data_k[Test_Traj_B.loop_ub_tmp_b] *
            Test_Traj_B.b_varargout_1_data_k[Test_Traj_B.loop_ub_tmp_b];
        }

        Test_Traj_fletcher_p(Test_Traj_B.S_i, Test_Traj_B.b_varargout_1_i,
                             Test_Traj_B.dx_data_n, &Test_Traj_B.dx_size_j,
                             Test_Traj_B.v_data_l, Test_Traj_B.Jtri_data_p,
                             Test_Traj_B.Jtri_size_aq, Test_Traj_B.lambda_f,
                             Test_Traj_B.lambdac_kx, &Test_Traj_B.lambda_f,
                             &Test_Traj_B.lambdac_kx);
        if (Test_Traj_B.b_varargout_1_i < Test_Traj_B.S_i) {
          Test_Traj_B.S_i = Test_Traj_B.b_varargout_1_i;
          Test_Traj_B.loop_ub_kw = *x_size;
          if (0 <= Test_Traj_B.loop_ub_kw - 1) {
            memcpy(&x_data[0], &Test_Traj_B.xnew_data_k[0],
                   Test_Traj_B.loop_ub_kw * sizeof(real_T));
          }

          Test_Traj_B.b_r_size_nc = Test_Traj_B.epsr_size;
          Test_Traj_B.loop_ub_kw = Test_Traj_B.epsr_size;
          if (0 <= Test_Traj_B.loop_ub_kw - 1) {
            memcpy(&Test_Traj_B.b_r_data_i[0],
                   &Test_Traj_B.b_varargout_1_data_k[0], Test_Traj_B.loop_ub_kw *
                   sizeof(real_T));
          }

          Test_Traj_B.Jtri_size_aq[0] = Test_Traj_B.b_varargout_2_size_i0[0];
          Test_Traj_B.Jtri_size_aq[1] = 3;
          Test_Traj_B.loop_ub_kw = Test_Traj_B.b_varargout_2_size_i0[0] *
            Test_Traj_B.b_varargout_2_size_i0[1] - 1;
          if (0 <= Test_Traj_B.loop_ub_kw) {
            memcpy(&Test_Traj_B.Jtri_data_p[0],
                   &Test_Traj_B.b_varargout_2_data_e[0], (Test_Traj_B.loop_ub_kw
                    + 1) * sizeof(real_T));
          }

          Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data_e,
                            Test_Traj_B.b_varargout_2_size_i0,
                            Test_Traj_B.b_varargout_1_data_k,
                            &Test_Traj_B.epsr_size, Test_Traj_B.xnew_data_k,
                            &Test_Traj_B.xnew_size_bh);
          Test_Traj_B.v_size_c = Test_Traj_B.xnew_size_bh;
          Test_Traj_B.loop_ub_kw = Test_Traj_B.xnew_size_bh;
          if (0 <= Test_Traj_B.loop_ub_kw - 1) {
            memcpy(&Test_Traj_B.v_data_l[0], &Test_Traj_B.xnew_data_k[0],
                   Test_Traj_B.loop_ub_kw * sizeof(real_T));
          }
        }
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }
}

static void Test_Traj___anon_fcn(const real_T waypoints_data[], const int32_T
  waypoints_size[2], const real_T course_data[], const int32_T *course_size,
  const real_T x_data[], real_T varargout_1_data[], int32_T *varargout_1_size,
  real_T varargout_2_data[], int32_T varargout_2_size[2])
{
  Test_Traj_B.loop_ub_gn = *course_size;
  if (0 <= Test_Traj_B.loop_ub_gn - 1) {
    memcpy(&Test_Traj_B.course_data_c[0], &course_data[0],
           Test_Traj_B.loop_ub_gn * sizeof(real_T));
  }

  Test_Traj_B.loop_ub_gn = waypoints_size[0];
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.loop_ub_gn;
       Test_Traj_B.e_iw++) {
    Test_Traj_B.hip_data_h3[Test_Traj_B.e_iw].re =
      waypoints_data[Test_Traj_B.e_iw];
    Test_Traj_B.hip_data_h3[Test_Traj_B.e_iw].im =
      waypoints_data[Test_Traj_B.e_iw + waypoints_size[0]];
  }

  if (1.0 > static_cast<real_T>(*course_size) - 1.0) {
    Test_Traj_B.e_iw = 0;
  } else {
    Test_Traj_B.e_iw = *course_size - 1;
  }

  if (0 <= Test_Traj_B.e_iw - 1) {
    memcpy(&Test_Traj_B.course_data_c[0], &x_data[0], Test_Traj_B.e_iw * sizeof
           (real_T));
  }

  if (1.0 > static_cast<real_T>(waypoints_size[0]) - 1.0) {
    Test_Traj_B.e_iw = 0;
    Test_Traj_B.l_o = 0;
  } else {
    Test_Traj_B.e_iw = waypoints_size[0] - 1;
    Test_Traj_B.l_o = waypoints_size[0] - 1;
  }

  if (2 > waypoints_size[0]) {
    Test_Traj_B.p_j = 0;
    Test_Traj_B.loop_ub_gn = 0;
    Test_Traj_B.r_ja = 0;
    Test_Traj_B.q_k = 0;
  } else {
    Test_Traj_B.p_j = 1;
    Test_Traj_B.loop_ub_gn = waypoints_size[0];
    Test_Traj_B.r_ja = 1;
    Test_Traj_B.q_k = waypoints_size[0];
  }

  if (0 <= Test_Traj_B.e_iw - 1) {
    memcpy(&Test_Traj_B.hip_data_ch[0], &Test_Traj_B.hip_data_h3[0],
           Test_Traj_B.e_iw * sizeof(creal_T));
  }

  Test_Traj_B.course_size_a = Test_Traj_B.l_o;
  if (0 <= Test_Traj_B.l_o - 1) {
    memcpy(&Test_Traj_B.course_data_n[0], &Test_Traj_B.course_data_c[0],
           Test_Traj_B.l_o * sizeof(real_T));
  }

  Test_Traj_B.l_o = Test_Traj_B.loop_ub_gn - Test_Traj_B.p_j;
  Test_Traj_B.hip_size_p = Test_Traj_B.l_o;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.l_o;
       Test_Traj_B.e_iw++) {
    Test_Traj_B.hip_data_c[Test_Traj_B.e_iw] =
      Test_Traj_B.hip_data_h3[Test_Traj_B.p_j + Test_Traj_B.e_iw];
  }

  Test_Traj_B.p_j = Test_Traj_B.q_k - Test_Traj_B.r_ja;
  Test_Traj_B.course_size_f = Test_Traj_B.p_j;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.p_j;
       Test_Traj_B.e_iw++) {
    Test_Traj_B.course_data_f[Test_Traj_B.e_iw] =
      Test_Traj_B.course_data_c[Test_Traj_B.r_ja + Test_Traj_B.e_iw];
  }

  Test_Traj_clothoidG1fit2wp_p(Test_Traj_B.hip_data_ch,
    Test_Traj_B.course_data_n, &Test_Traj_B.course_size_a,
    Test_Traj_B.hip_data_c, &Test_Traj_B.hip_size_p, Test_Traj_B.course_data_f,
    &Test_Traj_B.course_size_f, Test_Traj_B.k0_data_lm, &Test_Traj_B.k0_size_c,
    Test_Traj_B.k1_data_k, &Test_Traj_B.k1_size_k, Test_Traj_B.unusedU2_data,
    &Test_Traj_B.unusedU2_size, Test_Traj_B.dk0_dc0_data_j,
    &Test_Traj_B.dk0_dc0_size_j, Test_Traj_B.dk0_dc1_data_f,
    &Test_Traj_B.dk0_dc1_size_h, Test_Traj_B.dk1_dc0_data_c,
    &Test_Traj_B.dk1_dc0_size_c, Test_Traj_B.dk1_dc1_data_f,
    &Test_Traj_B.dk1_dc1_size_d);
  if (1.0 > static_cast<real_T>(Test_Traj_B.k1_size_k) - 1.0) {
    Test_Traj_B.r_ja = 0;
  } else {
    Test_Traj_B.r_ja = Test_Traj_B.k1_size_k - 1;
  }

  if (2 > Test_Traj_B.k0_size_c) {
    Test_Traj_B.p_j = 0;
  } else {
    Test_Traj_B.p_j = 1;
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.dk0_dc1_size_h) - 1.0) {
    Test_Traj_B.q_k = 0;
  } else {
    Test_Traj_B.q_k = Test_Traj_B.dk0_dc1_size_h - 1;
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.dk1_dc0_size_c) - 1.0) {
    Test_Traj_B.loop_ub_gn = 0;
  } else {
    Test_Traj_B.loop_ub_gn = Test_Traj_B.dk1_dc0_size_c - 1;
  }

  if (1.0 > static_cast<real_T>(waypoints_size[0]) - 2.0) {
    Test_Traj_B.ib_d = 0;
  } else {
    Test_Traj_B.ib_d = waypoints_size[0] - 2;
  }

  if (2.0 > static_cast<real_T>(waypoints_size[0]) - 1.0) {
    Test_Traj_B.l_o = 0;
  } else {
    Test_Traj_B.l_o = 1;
  }

  Test_Traj_B.reshapes_l[0].f1.size = Test_Traj_B.loop_ub_gn + 1;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.loop_ub_gn;
       Test_Traj_B.e_iw++) {
    Test_Traj_B.reshapes_l[0].f1.data[Test_Traj_B.e_iw] =
      Test_Traj_B.dk1_dc0_data_c[Test_Traj_B.e_iw];
  }

  Test_Traj_B.reshapes_l[0].f1.data[Test_Traj_B.loop_ub_gn] = 0.0;
  Test_Traj_B.reshapes_l[1].f1.size = Test_Traj_B.ib_d - -1;
  Test_Traj_B.reshapes_l[1].f1.data[0] = 0.0 - Test_Traj_B.dk0_dc0_data_j[0];
  Test_Traj_B.loop_ub_gn = Test_Traj_B.ib_d - -1;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw <= Test_Traj_B.loop_ub_gn - 2;
       Test_Traj_B.e_iw++) {
    Test_Traj_B.reshapes_l[1].f1.data[Test_Traj_B.e_iw + 1] =
      Test_Traj_B.dk1_dc1_data_f[Test_Traj_B.e_iw] -
      Test_Traj_B.dk0_dc0_data_j[Test_Traj_B.l_o + Test_Traj_B.e_iw];
  }

  Test_Traj_B.reshapes_l[2].f1.size = Test_Traj_B.q_k + 1;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.q_k;
       Test_Traj_B.e_iw++) {
    Test_Traj_B.reshapes_l[2].f1.data[Test_Traj_B.e_iw] =
      -Test_Traj_B.dk0_dc1_data_f[Test_Traj_B.e_iw];
  }

  Test_Traj_B.reshapes_l[2].f1.data[Test_Traj_B.q_k] = 0.0;
  *varargout_1_size = Test_Traj_B.r_ja - -1;
  varargout_1_data[0] = 0.0 - Test_Traj_B.k0_data_lm[0];
  Test_Traj_B.loop_ub_gn = Test_Traj_B.r_ja - -1;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw <= Test_Traj_B.loop_ub_gn - 2;
       Test_Traj_B.e_iw++) {
    varargout_1_data[Test_Traj_B.e_iw + 1] =
      Test_Traj_B.k1_data_k[Test_Traj_B.e_iw] -
      Test_Traj_B.k0_data_lm[Test_Traj_B.p_j + Test_Traj_B.e_iw];
  }

  varargout_2_size[0] = Test_Traj_B.reshapes_l[0].f1.size;
  varargout_2_size[1] = 3;
  Test_Traj_B.loop_ub_gn = Test_Traj_B.reshapes_l[0].f1.size;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.loop_ub_gn;
       Test_Traj_B.e_iw++) {
    varargout_2_data[Test_Traj_B.e_iw] = Test_Traj_B.reshapes_l[0]
      .f1.data[Test_Traj_B.e_iw];
  }

  Test_Traj_B.loop_ub_gn = Test_Traj_B.reshapes_l[1].f1.size;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.loop_ub_gn;
       Test_Traj_B.e_iw++) {
    varargout_2_data[Test_Traj_B.e_iw + Test_Traj_B.reshapes_l[0].f1.size] =
      Test_Traj_B.reshapes_l[1].f1.data[Test_Traj_B.e_iw];
  }

  Test_Traj_B.loop_ub_gn = Test_Traj_B.reshapes_l[2].f1.size;
  for (Test_Traj_B.e_iw = 0; Test_Traj_B.e_iw < Test_Traj_B.loop_ub_gn;
       Test_Traj_B.e_iw++) {
    varargout_2_data[(Test_Traj_B.e_iw + Test_Traj_B.reshapes_l[0].f1.size) +
      Test_Traj_B.reshapes_l[1].f1.size] = Test_Traj_B.reshapes_l[2]
      .f1.data[Test_Traj_B.e_iw];
  }
}

static void Test_Traj_LMFsolve_phmyulb(const real_T
  FUN_tunableEnvironment_f1_data[], const int32_T
  FUN_tunableEnvironment_f1_size[2], const real_T
  FUN_tunableEnvironment_f2_data[], const int32_T
  *FUN_tunableEnvironment_f2_size, real_T x_data[], const int32_T *x_size)
{
  boolean_T exitg1;
  Test_Traj_B.maxiter_d = 100.0 * static_cast<real_T>(*x_size);
  Test_Traj___anon_fcn(FUN_tunableEnvironment_f1_data,
                       FUN_tunableEnvironment_f1_size,
                       FUN_tunableEnvironment_f2_data,
                       FUN_tunableEnvironment_f2_size, x_data,
                       Test_Traj_B.b_r_data_j, &Test_Traj_B.b_r_size_n,
                       Test_Traj_B.b_varargout_2_data_f,
                       Test_Traj_B.b_varargout_2_size_a);
  Test_Traj_B.Jtri_size_b[0] = Test_Traj_B.b_varargout_2_size_a[0];
  Test_Traj_B.Jtri_size_b[1] = 3;
  Test_Traj_B.loop_ub_tmp_e = Test_Traj_B.b_varargout_2_size_a[0] *
    Test_Traj_B.b_varargout_2_size_a[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_tmp_e) {
    memcpy(&Test_Traj_B.Jtri_data_c[0], &Test_Traj_B.b_varargout_2_data_f[0],
           (Test_Traj_B.loop_ub_tmp_e + 1) * sizeof(real_T));
  }

  Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data_f,
                    Test_Traj_B.b_varargout_2_size_a, Test_Traj_B.b_r_data_j,
                    &Test_Traj_B.b_r_size_n, Test_Traj_B.tmp_data_na,
                    &Test_Traj_B.tmp_size_oc2);
  Test_Traj_B.v_size_hp = Test_Traj_B.tmp_size_oc2;
  Test_Traj_B.loop_ub_a = Test_Traj_B.tmp_size_oc2;
  if (0 <= Test_Traj_B.loop_ub_a - 1) {
    memcpy(&Test_Traj_B.v_data_a[0], &Test_Traj_B.tmp_data_na[0],
           Test_Traj_B.loop_ub_a * sizeof(real_T));
  }

  Test_Traj_B.S_k = 0.0;
  Test_Traj_B.loop_ub_a = Test_Traj_B.b_r_size_n;
  for (Test_Traj_B.loop_ub_tmp_e = 0; Test_Traj_B.loop_ub_tmp_e <
       Test_Traj_B.loop_ub_a; Test_Traj_B.loop_ub_tmp_e++) {
    Test_Traj_B.S_k += Test_Traj_B.b_r_data_j[Test_Traj_B.loop_ub_tmp_e] *
      Test_Traj_B.b_r_data_j[Test_Traj_B.loop_ub_tmp_e];
  }

  Test_Traj_B.lambda_k = 0.0;
  Test_Traj_B.lambdac_f = 0.75;
  Test_Traj_B.iter_p = 0.0;
  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.tmp_data_na,
                      &Test_Traj_B.tmp_size_oc2);
  Test_Traj_B.loop_ub_tmp_e = Test_Traj_B.tmp_size_oc2;
  Test_Traj_B.loop_ub_a = Test_Traj_B.tmp_size_oc2;
  if (0 <= Test_Traj_B.loop_ub_a - 1) {
    memcpy(&Test_Traj_B.epsx_data_p[0], &Test_Traj_B.tmp_data_na[0],
           Test_Traj_B.loop_ub_a * sizeof(real_T));
  }

  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.tmp_data_na,
                      &Test_Traj_B.tmp_size_oc2);
  Test_Traj_B.loop_ub_a = Test_Traj_B.tmp_size_oc2;
  if (0 <= Test_Traj_B.loop_ub_a - 1) {
    memcpy(&Test_Traj_B.epsr_data_ob[0], &Test_Traj_B.tmp_data_na[0],
           Test_Traj_B.loop_ub_a * sizeof(real_T));
  }

  Test_Traj_B.dx_size_e = Test_Traj_B.loop_ub_tmp_e;
  if (0 <= Test_Traj_B.loop_ub_tmp_e - 1) {
    memcpy(&Test_Traj_B.dx_data_d[0], &Test_Traj_B.epsx_data_p[0],
           Test_Traj_B.loop_ub_tmp_e * sizeof(real_T));
  }

  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.iter_p < Test_Traj_B.maxiter_d)) {
    Test_Traj_abs_p(Test_Traj_B.dx_data_d, &Test_Traj_B.dx_size_e,
                    Test_Traj_B.tmp_data_na, &Test_Traj_B.tmp_size_oc2);
    Test_Traj_B.tmp_size_fo = Test_Traj_B.tmp_size_oc2;
    Test_Traj_B.loop_ub_a = Test_Traj_B.tmp_size_oc2;
    for (Test_Traj_B.loop_ub_tmp_e = 0; Test_Traj_B.loop_ub_tmp_e <
         Test_Traj_B.loop_ub_a; Test_Traj_B.loop_ub_tmp_e++) {
      Test_Traj_B.tmp_data_hj[Test_Traj_B.loop_ub_tmp_e] =
        (Test_Traj_B.tmp_data_na[Test_Traj_B.loop_ub_tmp_e] >=
         Test_Traj_B.epsx_data_p[Test_Traj_B.loop_ub_tmp_e]);
    }

    if (Test_Traj_any_p(Test_Traj_B.tmp_data_hj, &Test_Traj_B.tmp_size_fo)) {
      Test_Traj_abs_p(Test_Traj_B.b_r_data_j, &Test_Traj_B.b_r_size_n,
                      Test_Traj_B.tmp_data_na, &Test_Traj_B.tmp_size_oc2);
      Test_Traj_B.tmp_size_k1 = Test_Traj_B.tmp_size_oc2;
      Test_Traj_B.loop_ub_a = Test_Traj_B.tmp_size_oc2;
      for (Test_Traj_B.loop_ub_tmp_e = 0; Test_Traj_B.loop_ub_tmp_e <
           Test_Traj_B.loop_ub_a; Test_Traj_B.loop_ub_tmp_e++) {
        Test_Traj_B.tmp_data_hj[Test_Traj_B.loop_ub_tmp_e] =
          (Test_Traj_B.tmp_data_na[Test_Traj_B.loop_ub_tmp_e] >=
           Test_Traj_B.epsr_data_ob[Test_Traj_B.loop_ub_tmp_e]);
      }

      if (Test_Traj_any_p(Test_Traj_B.tmp_data_hj, &Test_Traj_B.tmp_size_k1)) {
        Test_Traj_B.iter_p++;
        Test_Tra_solveDampenedHessian_p(Test_Traj_B.Jtri_data_c,
          Test_Traj_B.Jtri_size_b, Test_Traj_B.lambda_k, Test_Traj_B.v_data_a,
          &Test_Traj_B.v_size_hp, Test_Traj_B.dx_data_d, &Test_Traj_B.dx_size_e);
        Test_Traj_B.loop_ub_a = *x_size;
        for (Test_Traj_B.loop_ub_tmp_e = 0; Test_Traj_B.loop_ub_tmp_e <
             Test_Traj_B.loop_ub_a; Test_Traj_B.loop_ub_tmp_e++) {
          Test_Traj_B.xnew_data_o[Test_Traj_B.loop_ub_tmp_e] =
            x_data[Test_Traj_B.loop_ub_tmp_e] -
            Test_Traj_B.dx_data_d[Test_Traj_B.loop_ub_tmp_e];
        }

        Test_Traj___anon_fcn(FUN_tunableEnvironment_f1_data,
                             FUN_tunableEnvironment_f1_size,
                             FUN_tunableEnvironment_f2_data,
                             FUN_tunableEnvironment_f2_size,
                             Test_Traj_B.xnew_data_o,
                             Test_Traj_B.b_varargout_1_data,
                             &Test_Traj_B.b_varargout_1_size_h,
                             Test_Traj_B.b_varargout_2_data_f,
                             Test_Traj_B.b_varargout_2_size_a);
        Test_Traj_B.b_varargout_1_k = 0.0;
        Test_Traj_B.loop_ub_a = Test_Traj_B.b_varargout_1_size_h;
        for (Test_Traj_B.loop_ub_tmp_e = 0; Test_Traj_B.loop_ub_tmp_e <
             Test_Traj_B.loop_ub_a; Test_Traj_B.loop_ub_tmp_e++) {
          Test_Traj_B.b_varargout_1_k +=
            Test_Traj_B.b_varargout_1_data[Test_Traj_B.loop_ub_tmp_e] *
            Test_Traj_B.b_varargout_1_data[Test_Traj_B.loop_ub_tmp_e];
        }

        Test_Traj_fletcher_p(Test_Traj_B.S_k, Test_Traj_B.b_varargout_1_k,
                             Test_Traj_B.dx_data_d, &Test_Traj_B.dx_size_e,
                             Test_Traj_B.v_data_a, Test_Traj_B.Jtri_data_c,
                             Test_Traj_B.Jtri_size_b, Test_Traj_B.lambda_k,
                             Test_Traj_B.lambdac_f, &Test_Traj_B.lambda_k,
                             &Test_Traj_B.lambdac_f);
        if (Test_Traj_B.b_varargout_1_k < Test_Traj_B.S_k) {
          Test_Traj_B.S_k = Test_Traj_B.b_varargout_1_k;
          Test_Traj_B.loop_ub_a = *x_size;
          if (0 <= Test_Traj_B.loop_ub_a - 1) {
            memcpy(&x_data[0], &Test_Traj_B.xnew_data_o[0],
                   Test_Traj_B.loop_ub_a * sizeof(real_T));
          }

          Test_Traj_B.b_r_size_n = Test_Traj_B.b_varargout_1_size_h;
          Test_Traj_B.loop_ub_a = Test_Traj_B.b_varargout_1_size_h;
          if (0 <= Test_Traj_B.loop_ub_a - 1) {
            memcpy(&Test_Traj_B.b_r_data_j[0], &Test_Traj_B.b_varargout_1_data[0],
                   Test_Traj_B.loop_ub_a * sizeof(real_T));
          }

          Test_Traj_B.Jtri_size_b[0] = Test_Traj_B.b_varargout_2_size_a[0];
          Test_Traj_B.Jtri_size_b[1] = 3;
          Test_Traj_B.loop_ub_a = Test_Traj_B.b_varargout_2_size_a[0] *
            Test_Traj_B.b_varargout_2_size_a[1] - 1;
          if (0 <= Test_Traj_B.loop_ub_a) {
            memcpy(&Test_Traj_B.Jtri_data_c[0],
                   &Test_Traj_B.b_varargout_2_data_f[0], (Test_Traj_B.loop_ub_a
                    + 1) * sizeof(real_T));
          }

          Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data_f,
                            Test_Traj_B.b_varargout_2_size_a,
                            Test_Traj_B.b_varargout_1_data,
                            &Test_Traj_B.b_varargout_1_size_h,
                            Test_Traj_B.tmp_data_na, &Test_Traj_B.tmp_size_oc2);
          Test_Traj_B.v_size_hp = Test_Traj_B.tmp_size_oc2;
          Test_Traj_B.loop_ub_a = Test_Traj_B.tmp_size_oc2;
          if (0 <= Test_Traj_B.loop_ub_a - 1) {
            memcpy(&Test_Traj_B.v_data_a[0], &Test_Traj_B.tmp_data_na[0],
                   Test_Traj_B.loop_ub_a * sizeof(real_T));
          }
        }
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }
}

static void Test_Traj_LMFsolve_phmyul(const f_cell_wrap_Test_Traj_T
  *FUN_tunableEnvironment, real_T x_data[], const int32_T *x_size)
{
  boolean_T exitg1;
  Test_Traj_B.maxiter_c = 100.0 * static_cast<real_T>(*x_size);
  Test_Traj_B.loop_ub_o = FUN_tunableEnvironment->f1.size[0];
  for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
       Test_Traj_B.e_id++) {
    Test_Traj_B.hip_data_m[Test_Traj_B.e_id].re =
      FUN_tunableEnvironment->f1.data[Test_Traj_B.e_id];
    Test_Traj_B.hip_data_m[Test_Traj_B.e_id].im =
      FUN_tunableEnvironment->f1.data[Test_Traj_B.e_id +
      FUN_tunableEnvironment->f1.size[0]];
  }

  if (1.0 > static_cast<real_T>(FUN_tunableEnvironment->f1.size[0]) - 1.0) {
    Test_Traj_B.e_id = 0;
    Test_Traj_B.h_e = 0;
  } else {
    Test_Traj_B.e_id = FUN_tunableEnvironment->f1.size[0] - 1;
    Test_Traj_B.h_e = FUN_tunableEnvironment->f1.size[0] - 1;
  }

  if (2 > FUN_tunableEnvironment->f1.size[0]) {
    Test_Traj_B.k_l = 0;
    Test_Traj_B.j_l = 0;
    Test_Traj_B.loop_ub_o = 0;
    Test_Traj_B.l_l = 0;
  } else {
    Test_Traj_B.k_l = 1;
    Test_Traj_B.j_l = FUN_tunableEnvironment->f1.size[0];
    Test_Traj_B.loop_ub_o = 1;
    Test_Traj_B.l_l = FUN_tunableEnvironment->f1.size[0];
  }

  if (0 <= Test_Traj_B.e_id - 1) {
    memcpy(&Test_Traj_B.hip_data_e[0], &Test_Traj_B.hip_data_m[0],
           Test_Traj_B.e_id * sizeof(creal_T));
  }

  Test_Traj_B.x_size_f = Test_Traj_B.h_e;
  if (0 <= Test_Traj_B.h_e - 1) {
    memcpy(&Test_Traj_B.x_data_j[0], &x_data[0], Test_Traj_B.h_e * sizeof(real_T));
  }

  Test_Traj_B.h_e = Test_Traj_B.j_l - Test_Traj_B.k_l;
  Test_Traj_B.hip_size_m = Test_Traj_B.h_e;
  for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.h_e;
       Test_Traj_B.e_id++) {
    Test_Traj_B.hip_data_mc[Test_Traj_B.e_id] =
      Test_Traj_B.hip_data_m[Test_Traj_B.k_l + Test_Traj_B.e_id];
  }

  Test_Traj_B.k_l = Test_Traj_B.l_l - Test_Traj_B.loop_ub_o;
  Test_Traj_B.x_size_k = Test_Traj_B.k_l;
  for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.k_l;
       Test_Traj_B.e_id++) {
    Test_Traj_B.b_r_data[Test_Traj_B.e_id] = x_data[Test_Traj_B.loop_ub_o +
      Test_Traj_B.e_id];
  }

  Test_Traj_clothoidG1fit2wp_p(Test_Traj_B.hip_data_e, Test_Traj_B.x_data_j,
    &Test_Traj_B.x_size_f, Test_Traj_B.hip_data_mc, &Test_Traj_B.hip_size_m,
    Test_Traj_B.b_r_data, &Test_Traj_B.x_size_k, Test_Traj_B.k0_data_l,
    &Test_Traj_B.k0_size_n, Test_Traj_B.k1_data_c, &Test_Traj_B.k1_size_e,
    Test_Traj_B.unusedU4_data, &Test_Traj_B.unusedU4_size,
    Test_Traj_B.dk0_dc0_data_n, &Test_Traj_B.dk0_dc0_size_c,
    Test_Traj_B.dk0_dc1_data_p, &Test_Traj_B.dk0_dc1_size_a,
    Test_Traj_B.dk1_dc0_data_d, &Test_Traj_B.dk1_dc0_size_m,
    Test_Traj_B.dk1_dc1_data_o, &Test_Traj_B.dk1_dc1_size_c);
  if (1.0 > static_cast<real_T>(Test_Traj_B.k1_size_e) - 1.0) {
    Test_Traj_B.k_l = 0;
  } else {
    Test_Traj_B.k_l = Test_Traj_B.k1_size_e - 1;
  }

  if (2 > Test_Traj_B.k0_size_n) {
    Test_Traj_B.l_l = 0;
  } else {
    Test_Traj_B.l_l = 1;
  }

  Test_Traj_B.b_r_size_e = Test_Traj_B.k_l - -2;
  Test_Traj_B.b_r_data[0] = 0.0 - Test_Traj_B.k0_data_l[0];
  Test_Traj_B.loop_ub_o = Test_Traj_B.k_l - -2;
  for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id <= Test_Traj_B.loop_ub_o - 3;
       Test_Traj_B.e_id++) {
    Test_Traj_B.b_r_data[Test_Traj_B.e_id + 1] =
      Test_Traj_B.k1_data_c[Test_Traj_B.e_id] -
      Test_Traj_B.k0_data_l[Test_Traj_B.l_l + Test_Traj_B.e_id];
  }

  Test_Traj_B.b_r_data[Test_Traj_B.k_l + 1] =
    Test_Traj_B.k1_data_c[Test_Traj_B.k1_size_e - 1];
  if (1.0 > static_cast<real_T>(FUN_tunableEnvironment->f1.size[0]) - 2.0) {
    Test_Traj_B.k_l = 0;
  } else {
    Test_Traj_B.k_l = FUN_tunableEnvironment->f1.size[0] - 2;
  }

  if (2.0 > static_cast<real_T>(FUN_tunableEnvironment->f1.size[0]) - 1.0) {
    Test_Traj_B.l_l = 0;
  } else {
    Test_Traj_B.l_l = 1;
  }

  Test_Traj_B.b_varargout_2_size_i[0] = Test_Traj_B.dk1_dc0_size_m + 1;
  Test_Traj_B.b_varargout_2_size_i[1] = 3;
  Test_Traj_B.loop_ub_o = Test_Traj_B.dk1_dc0_size_m;
  if (0 <= Test_Traj_B.loop_ub_o - 1) {
    memcpy(&Test_Traj_B.b_varargout_2_data[0], &Test_Traj_B.dk1_dc0_data_d[0],
           Test_Traj_B.loop_ub_o * sizeof(real_T));
  }

  Test_Traj_B.b_varargout_2_data[Test_Traj_B.dk1_dc0_size_m] = 0.0;
  Test_Traj_B.b_varargout_2_data[Test_Traj_B.b_varargout_2_size_i[0]] = 0.0 -
    Test_Traj_B.dk0_dc0_data_n[0];
  Test_Traj_B.loop_ub_o = Test_Traj_B.k_l - -1;
  for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id <= Test_Traj_B.loop_ub_o - 2;
       Test_Traj_B.e_id++) {
    Test_Traj_B.b_varargout_2_data[(Test_Traj_B.e_id +
      Test_Traj_B.b_varargout_2_size_i[0]) + 1] =
      Test_Traj_B.dk1_dc1_data_o[Test_Traj_B.e_id] -
      Test_Traj_B.dk0_dc0_data_n[Test_Traj_B.l_l + Test_Traj_B.e_id];
  }

  Test_Traj_B.b_varargout_2_data[(Test_Traj_B.k_l +
    Test_Traj_B.b_varargout_2_size_i[0]) + 1] =
    Test_Traj_B.dk1_dc1_data_o[FUN_tunableEnvironment->f1.size[0] - 2];
  Test_Traj_B.loop_ub_o = Test_Traj_B.dk0_dc1_size_a;
  for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
       Test_Traj_B.e_id++) {
    Test_Traj_B.b_varargout_2_data[Test_Traj_B.e_id +
      (Test_Traj_B.b_varargout_2_size_i[0] << 1)] =
      -Test_Traj_B.dk0_dc1_data_p[Test_Traj_B.e_id];
  }

  Test_Traj_B.b_varargout_2_data[Test_Traj_B.dk0_dc1_size_a +
    (Test_Traj_B.b_varargout_2_size_i[0] << 1)] = 0.0;
  Test_Traj_B.Jtri_size_a[0] = Test_Traj_B.b_varargout_2_size_i[0];
  Test_Traj_B.Jtri_size_a[1] = 3;
  Test_Traj_B.loop_ub_o = Test_Traj_B.b_varargout_2_size_i[0] * 3 - 1;
  if (0 <= Test_Traj_B.loop_ub_o) {
    memcpy(&Test_Traj_B.Jtri_data[0], &Test_Traj_B.b_varargout_2_data[0],
           (Test_Traj_B.loop_ub_o + 1) * sizeof(real_T));
  }

  Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data,
                    Test_Traj_B.b_varargout_2_size_i, Test_Traj_B.b_r_data,
                    &Test_Traj_B.b_r_size_e, Test_Traj_B.v_data_n,
                    &Test_Traj_B.x_size_f);
  Test_Traj_B.S_d = 0.0;
  Test_Traj_B.loop_ub_o = Test_Traj_B.b_r_size_e;
  for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
       Test_Traj_B.e_id++) {
    Test_Traj_B.S_d += Test_Traj_B.b_r_data[Test_Traj_B.e_id] *
      Test_Traj_B.b_r_data[Test_Traj_B.e_id];
  }

  Test_Traj_B.lambda_n = 0.0;
  Test_Traj_B.lambdac_n = 0.75;
  Test_Traj_B.iter_c = 0.0;
  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.epsx_data,
                      &Test_Traj_B.k0_size_n);
  Test_Traj_repmat_ph(static_cast<real_T>(*x_size), Test_Traj_B.epsr_data,
                      &Test_Traj_B.k1_size_e);
  Test_Traj_B.dx_size_i = Test_Traj_B.k0_size_n;
  Test_Traj_B.loop_ub_o = Test_Traj_B.k0_size_n;
  if (0 <= Test_Traj_B.loop_ub_o - 1) {
    memcpy(&Test_Traj_B.dx_data_i[0], &Test_Traj_B.epsx_data[0],
           Test_Traj_B.loop_ub_o * sizeof(real_T));
  }

  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.iter_c < Test_Traj_B.maxiter_c)) {
    Test_Traj_abs_p(Test_Traj_B.dx_data_i, &Test_Traj_B.dx_size_i,
                    Test_Traj_B.xnew_data, &Test_Traj_B.k0_size_n);
    Test_Traj_B.xnew_size = Test_Traj_B.k0_size_n;
    Test_Traj_B.loop_ub_o = Test_Traj_B.k0_size_n;
    for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
         Test_Traj_B.e_id++) {
      Test_Traj_B.xnew_data_b[Test_Traj_B.e_id] =
        (Test_Traj_B.xnew_data[Test_Traj_B.e_id] >=
         Test_Traj_B.epsx_data[Test_Traj_B.e_id]);
    }

    if (Test_Traj_any_p(Test_Traj_B.xnew_data_b, &Test_Traj_B.xnew_size)) {
      Test_Traj_abs_p(Test_Traj_B.b_r_data, &Test_Traj_B.b_r_size_e,
                      Test_Traj_B.xnew_data, &Test_Traj_B.k0_size_n);
      Test_Traj_B.xnew_size_b = Test_Traj_B.k0_size_n;
      Test_Traj_B.loop_ub_o = Test_Traj_B.k0_size_n;
      for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
           Test_Traj_B.e_id++) {
        Test_Traj_B.xnew_data_b[Test_Traj_B.e_id] =
          (Test_Traj_B.xnew_data[Test_Traj_B.e_id] >=
           Test_Traj_B.epsr_data[Test_Traj_B.e_id]);
      }

      if (Test_Traj_any_p(Test_Traj_B.xnew_data_b, &Test_Traj_B.xnew_size_b)) {
        Test_Traj_B.iter_c++;
        Test_Tra_solveDampenedHessian_p(Test_Traj_B.Jtri_data,
          Test_Traj_B.Jtri_size_a, Test_Traj_B.lambda_n, Test_Traj_B.v_data_n,
          &Test_Traj_B.x_size_f, Test_Traj_B.dx_data_i, &Test_Traj_B.dx_size_i);
        Test_Traj_B.loop_ub_o = *x_size;
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
             Test_Traj_B.e_id++) {
          Test_Traj_B.xnew_data[Test_Traj_B.e_id] = x_data[Test_Traj_B.e_id] -
            Test_Traj_B.dx_data_i[Test_Traj_B.e_id];
        }

        Test_Traj_B.loop_ub_o = FUN_tunableEnvironment->f1.size[0];
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
             Test_Traj_B.e_id++) {
          Test_Traj_B.hip_data_m[Test_Traj_B.e_id].re =
            FUN_tunableEnvironment->f1.data[Test_Traj_B.e_id];
          Test_Traj_B.hip_data_m[Test_Traj_B.e_id].im =
            FUN_tunableEnvironment->f1.data[Test_Traj_B.e_id +
            FUN_tunableEnvironment->f1.size[0]];
        }

        if (1.0 > static_cast<real_T>(FUN_tunableEnvironment->f1.size[0]) - 1.0)
        {
          Test_Traj_B.e_id = 0;
          Test_Traj_B.h_e = 0;
        } else {
          Test_Traj_B.e_id = FUN_tunableEnvironment->f1.size[0] - 1;
          Test_Traj_B.h_e = FUN_tunableEnvironment->f1.size[0] - 1;
        }

        if (2 > FUN_tunableEnvironment->f1.size[0]) {
          Test_Traj_B.k_l = 0;
          Test_Traj_B.j_l = 0;
          Test_Traj_B.loop_ub_o = 0;
          Test_Traj_B.l_l = 0;
        } else {
          Test_Traj_B.k_l = 1;
          Test_Traj_B.j_l = FUN_tunableEnvironment->f1.size[0];
          Test_Traj_B.loop_ub_o = 1;
          Test_Traj_B.l_l = FUN_tunableEnvironment->f1.size[0];
        }

        if (0 <= Test_Traj_B.e_id - 1) {
          memcpy(&Test_Traj_B.hip_data_e[0], &Test_Traj_B.hip_data_m[0],
                 Test_Traj_B.e_id * sizeof(creal_T));
        }

        Test_Traj_B.xnew_size_h = Test_Traj_B.h_e;
        if (0 <= Test_Traj_B.h_e - 1) {
          memcpy(&Test_Traj_B.x_data_j[0], &Test_Traj_B.xnew_data[0],
                 Test_Traj_B.h_e * sizeof(real_T));
        }

        Test_Traj_B.h_e = Test_Traj_B.j_l - Test_Traj_B.k_l;
        Test_Traj_B.hip_size_h = Test_Traj_B.h_e;
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.h_e;
             Test_Traj_B.e_id++) {
          Test_Traj_B.hip_data_mc[Test_Traj_B.e_id] =
            Test_Traj_B.hip_data_m[Test_Traj_B.k_l + Test_Traj_B.e_id];
        }

        Test_Traj_B.k_l = Test_Traj_B.l_l - Test_Traj_B.loop_ub_o;
        Test_Traj_B.xnew_size_h2 = Test_Traj_B.k_l;
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.k_l;
             Test_Traj_B.e_id++) {
          Test_Traj_B.xnew_data_m[Test_Traj_B.e_id] =
            Test_Traj_B.xnew_data[Test_Traj_B.loop_ub_o + Test_Traj_B.e_id];
        }

        Test_Traj_clothoidG1fit2wp_p(Test_Traj_B.hip_data_e,
          Test_Traj_B.x_data_j, &Test_Traj_B.xnew_size_h,
          Test_Traj_B.hip_data_mc, &Test_Traj_B.hip_size_h,
          Test_Traj_B.xnew_data_m, &Test_Traj_B.xnew_size_h2,
          Test_Traj_B.k0_data_l, &Test_Traj_B.k0_size_n, Test_Traj_B.k1_data_c,
          &Test_Traj_B.k1_size_e, Test_Traj_B.unusedU4_data,
          &Test_Traj_B.unusedU4_size, Test_Traj_B.dk0_dc0_data_n,
          &Test_Traj_B.dk0_dc0_size_c, Test_Traj_B.dk0_dc1_data_p,
          &Test_Traj_B.dk0_dc1_size_a, Test_Traj_B.dk1_dc0_data_d,
          &Test_Traj_B.dk1_dc0_size_m, Test_Traj_B.dk1_dc1_data_o,
          &Test_Traj_B.dk1_dc1_size_c);
        if (1.0 > static_cast<real_T>(Test_Traj_B.k1_size_e) - 1.0) {
          Test_Traj_B.k_l = 0;
        } else {
          Test_Traj_B.k_l = Test_Traj_B.k1_size_e - 1;
        }

        if (2 > Test_Traj_B.k0_size_n) {
          Test_Traj_B.l_l = 0;
        } else {
          Test_Traj_B.l_l = 1;
        }

        Test_Traj_B.b_varargout_1_size_l = Test_Traj_B.k_l - -2;
        Test_Traj_B.xnew_data_m[0] = 0.0 - Test_Traj_B.k0_data_l[0];
        Test_Traj_B.loop_ub_o = Test_Traj_B.k_l - -2;
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id <= Test_Traj_B.loop_ub_o - 3;
             Test_Traj_B.e_id++) {
          Test_Traj_B.xnew_data_m[Test_Traj_B.e_id + 1] =
            Test_Traj_B.k1_data_c[Test_Traj_B.e_id] -
            Test_Traj_B.k0_data_l[Test_Traj_B.l_l + Test_Traj_B.e_id];
        }

        Test_Traj_B.xnew_data_m[Test_Traj_B.k_l + 1] =
          Test_Traj_B.k1_data_c[Test_Traj_B.k1_size_e - 1];
        if (1.0 > static_cast<real_T>(FUN_tunableEnvironment->f1.size[0]) - 2.0)
        {
          Test_Traj_B.k_l = 0;
        } else {
          Test_Traj_B.k_l = FUN_tunableEnvironment->f1.size[0] - 2;
        }

        if (2.0 > static_cast<real_T>(FUN_tunableEnvironment->f1.size[0]) - 1.0)
        {
          Test_Traj_B.l_l = 0;
        } else {
          Test_Traj_B.l_l = 1;
        }

        Test_Traj_B.b_varargout_2_size_i[0] = Test_Traj_B.dk1_dc0_size_m + 1;
        Test_Traj_B.b_varargout_2_size_i[1] = 3;
        Test_Traj_B.loop_ub_o = Test_Traj_B.dk1_dc0_size_m;
        if (0 <= Test_Traj_B.loop_ub_o - 1) {
          memcpy(&Test_Traj_B.b_varargout_2_data[0],
                 &Test_Traj_B.dk1_dc0_data_d[0], Test_Traj_B.loop_ub_o * sizeof
                 (real_T));
        }

        Test_Traj_B.b_varargout_2_data[Test_Traj_B.dk1_dc0_size_m] = 0.0;
        Test_Traj_B.b_varargout_2_data[Test_Traj_B.b_varargout_2_size_i[0]] =
          0.0 - Test_Traj_B.dk0_dc0_data_n[0];
        Test_Traj_B.loop_ub_o = Test_Traj_B.k_l - -1;
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id <= Test_Traj_B.loop_ub_o - 2;
             Test_Traj_B.e_id++) {
          Test_Traj_B.b_varargout_2_data[(Test_Traj_B.e_id +
            Test_Traj_B.b_varargout_2_size_i[0]) + 1] =
            Test_Traj_B.dk1_dc1_data_o[Test_Traj_B.e_id] -
            Test_Traj_B.dk0_dc0_data_n[Test_Traj_B.l_l + Test_Traj_B.e_id];
        }

        Test_Traj_B.b_varargout_2_data[(Test_Traj_B.k_l +
          Test_Traj_B.b_varargout_2_size_i[0]) + 1] =
          Test_Traj_B.dk1_dc1_data_o[FUN_tunableEnvironment->f1.size[0] - 2];
        Test_Traj_B.loop_ub_o = Test_Traj_B.dk0_dc1_size_a;
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
             Test_Traj_B.e_id++) {
          Test_Traj_B.b_varargout_2_data[Test_Traj_B.e_id +
            (Test_Traj_B.b_varargout_2_size_i[0] << 1)] =
            -Test_Traj_B.dk0_dc1_data_p[Test_Traj_B.e_id];
        }

        Test_Traj_B.b_varargout_2_data[Test_Traj_B.dk0_dc1_size_a +
          (Test_Traj_B.b_varargout_2_size_i[0] << 1)] = 0.0;
        Test_Traj_B.b_varargout_1_n = 0.0;
        Test_Traj_B.loop_ub_o = Test_Traj_B.b_varargout_1_size_l;
        for (Test_Traj_B.e_id = 0; Test_Traj_B.e_id < Test_Traj_B.loop_ub_o;
             Test_Traj_B.e_id++) {
          Test_Traj_B.b_varargout_1_n +=
            Test_Traj_B.xnew_data_m[Test_Traj_B.e_id] *
            Test_Traj_B.xnew_data_m[Test_Traj_B.e_id];
        }

        Test_Traj_fletcher_p(Test_Traj_B.S_d, Test_Traj_B.b_varargout_1_n,
                             Test_Traj_B.dx_data_i, &Test_Traj_B.dx_size_i,
                             Test_Traj_B.v_data_n, Test_Traj_B.Jtri_data,
                             Test_Traj_B.Jtri_size_a, Test_Traj_B.lambda_n,
                             Test_Traj_B.lambdac_n, &Test_Traj_B.lambda_n,
                             &Test_Traj_B.lambdac_n);
        if (Test_Traj_B.b_varargout_1_n < Test_Traj_B.S_d) {
          Test_Traj_B.S_d = Test_Traj_B.b_varargout_1_n;
          Test_Traj_B.loop_ub_o = *x_size;
          if (0 <= Test_Traj_B.loop_ub_o - 1) {
            memcpy(&x_data[0], &Test_Traj_B.xnew_data[0], Test_Traj_B.loop_ub_o *
                   sizeof(real_T));
          }

          Test_Traj_B.b_r_size_e = Test_Traj_B.b_varargout_1_size_l;
          Test_Traj_B.loop_ub_o = Test_Traj_B.b_varargout_1_size_l;
          if (0 <= Test_Traj_B.loop_ub_o - 1) {
            memcpy(&Test_Traj_B.b_r_data[0], &Test_Traj_B.xnew_data_m[0],
                   Test_Traj_B.loop_ub_o * sizeof(real_T));
          }

          Test_Traj_B.Jtri_size_a[0] = Test_Traj_B.b_varargout_2_size_i[0];
          Test_Traj_B.Jtri_size_a[1] = 3;
          Test_Traj_B.loop_ub_o = Test_Traj_B.b_varargout_2_size_i[0] * 3 - 1;
          if (0 <= Test_Traj_B.loop_ub_o) {
            memcpy(&Test_Traj_B.Jtri_data[0], &Test_Traj_B.b_varargout_2_data[0],
                   (Test_Traj_B.loop_ub_o + 1) * sizeof(real_T));
          }

          Test_Traj_mulJt_p(Test_Traj_B.b_varargout_2_data,
                            Test_Traj_B.b_varargout_2_size_i,
                            Test_Traj_B.xnew_data_m,
                            &Test_Traj_B.b_varargout_1_size_l,
                            Test_Traj_B.v_data_n, &Test_Traj_B.x_size_f);
        }
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }
}

static void Test_Traj_fitCourse_p(const real_T waypoints_data[], const int32_T
  waypoints_size[2], real_T course_data[], int32_T *course_size)
{
  Test_Traj_B.freelead = rtIsNaN(course_data[0]);
  Test_Traj_B.freetail_tmp = course_data[*course_size - 1];
  Test_Traj_B.freetail = rtIsNaN(Test_Traj_B.freetail_tmp);
  Test_Traj_B.dy[0] = course_data[0];
  Test_Traj_B.dv13[0] = 1.0;
  Test_Traj_B.dy[1] = Test_Traj_B.freetail_tmp;
  Test_Traj_B.dv13[1] = 1.0;
  Test_Traj_pol2cart_p(Test_Traj_B.dy, Test_Traj_B.dv13, Test_Traj_B.dx_f);
  Test_Traj_B.loop_ub = waypoints_size[0];
  Test_Traj_B.waypoints_size_k = waypoints_size[0];
  if (0 <= Test_Traj_B.loop_ub - 1) {
    memcpy(&Test_Traj_B.waypoints_data_c[0], &waypoints_data[0],
           Test_Traj_B.loop_ub * sizeof(real_T));
  }

  Test_Traj_B.loop_ub = waypoints_size[0];
  for (Test_Traj_B.l_b = 0; Test_Traj_B.l_b < Test_Traj_B.loop_ub;
       Test_Traj_B.l_b++) {
    Test_Traj_B.waypoints_data_f[Test_Traj_B.l_b] =
      waypoints_data[Test_Traj_B.l_b + waypoints_size[0]];
  }

  Test_Traj_dclothoidwp_p(Test_Traj_B.waypoints_data_c,
    &Test_Traj_B.waypoints_size_k, Test_Traj_B.waypoints_data_f,
    Test_Traj_B.dx_f, Test_Traj_B.dy, Test_Traj_B.u_data, &Test_Traj_B.u_size_m,
    Test_Traj_B.v_data, &Test_Traj_B.v_size);
  Test_Traj_B.c_b = waypoints_size[0] - 3;
  for (Test_Traj_B.loop_ub = 0; Test_Traj_B.loop_ub <= Test_Traj_B.c_b;
       Test_Traj_B.loop_ub++) {
    Test_Traj_B.freetail_tmp = (static_cast<real_T>(Test_Traj_B.loop_ub) + 1.0) *
      128.0;
    Test_Traj_B.l_b = static_cast<int32_T>(Test_Traj_B.freetail_tmp + 1.0) - 1;
    Test_Traj_B.i3 = static_cast<int32_T>(Test_Traj_B.freetail_tmp) - 1;
    course_data[static_cast<int32_T>((static_cast<real_T>(Test_Traj_B.loop_ub) +
      1.0) + 1.0) - 1] = rt_atan2d_snf(Test_Traj_B.v_data[Test_Traj_B.l_b] -
      Test_Traj_B.v_data[Test_Traj_B.i3], Test_Traj_B.u_data[Test_Traj_B.l_b] -
      Test_Traj_B.u_data[Test_Traj_B.i3]);
  }

  if (Test_Traj_B.freelead) {
    course_data[0] = rt_atan2d_snf(Test_Traj_B.v_data[1] - Test_Traj_B.v_data[0],
      Test_Traj_B.u_data[1] - Test_Traj_B.u_data[0]);
  }

  if (Test_Traj_B.freetail) {
    course_data[*course_size - 1] = rt_atan2d_snf
      (Test_Traj_B.v_data[Test_Traj_B.v_size - 1] -
       Test_Traj_B.v_data[Test_Traj_B.v_size - 2],
       Test_Traj_B.u_data[Test_Traj_B.u_size_m - 1] -
       Test_Traj_B.u_data[Test_Traj_B.u_size_m - 2]);
  }

  if (Test_Traj_B.freelead && Test_Traj_B.freetail) {
    Test_Traj_B.tunableEnvironment.f1.size[0] = waypoints_size[0];
    Test_Traj_B.tunableEnvironment.f1.size[1] = 3;
    Test_Traj_B.loop_ub = waypoints_size[0] * waypoints_size[1] - 1;
    for (Test_Traj_B.l_b = 0; Test_Traj_B.l_b <= Test_Traj_B.loop_ub;
         Test_Traj_B.l_b++) {
      Test_Traj_B.tunableEnvironment.f1.data[Test_Traj_B.l_b] =
        waypoints_data[Test_Traj_B.l_b];
    }

    Test_Traj_B.tmp_size_m = *course_size;
    Test_Traj_B.loop_ub = *course_size;
    if (0 <= Test_Traj_B.loop_ub - 1) {
      memcpy(&Test_Traj_B.waypoints_data_c[0], &course_data[0],
             Test_Traj_B.loop_ub * sizeof(real_T));
    }

    Test_Traj_LMFsolve_phmyul(&Test_Traj_B.tunableEnvironment,
      Test_Traj_B.waypoints_data_c, &Test_Traj_B.tmp_size_m);
    Test_Traj_B.l_b = Test_Traj_B.tmp_size_m;
    Test_Traj_B.loop_ub = Test_Traj_B.tmp_size_m;
    if (0 <= Test_Traj_B.loop_ub - 1) {
      memcpy(&Test_Traj_B.courselsq_data[0], &Test_Traj_B.waypoints_data_c[0],
             Test_Traj_B.loop_ub * sizeof(real_T));
    }
  } else if (Test_Traj_B.freelead) {
    if (1.0 > static_cast<real_T>(*course_size) - 1.0) {
      Test_Traj_B.l_b = 0;
    } else {
      Test_Traj_B.l_b = *course_size - 1;
    }

    Test_Traj_B.tmp_size_m = Test_Traj_B.l_b;
    if (0 <= Test_Traj_B.l_b - 1) {
      memcpy(&Test_Traj_B.tmp_data_h2[0], &course_data[0], Test_Traj_B.l_b *
             sizeof(real_T));
    }

    Test_Traj_LMFsolve_phmyulb(waypoints_data, waypoints_size, course_data,
      course_size, Test_Traj_B.tmp_data_h2, &Test_Traj_B.tmp_size_m);
    Test_Traj_B.loop_ub = Test_Traj_B.tmp_size_m;
    if (0 <= Test_Traj_B.loop_ub - 1) {
      memcpy(&Test_Traj_B.courselsq_data[0], &Test_Traj_B.tmp_data_h2[0],
             Test_Traj_B.loop_ub * sizeof(real_T));
    }

    Test_Traj_B.l_b = Test_Traj_B.tmp_size_m + 1;
    Test_Traj_B.courselsq_data[Test_Traj_B.tmp_size_m] =
      course_data[waypoints_size[0] - 1];
  } else if (Test_Traj_B.freetail) {
    if (2 > *course_size) {
      Test_Traj_B.loop_ub = 0;
      Test_Traj_B.l_b = 0;
    } else {
      Test_Traj_B.loop_ub = 1;
      Test_Traj_B.l_b = *course_size;
    }

    Test_Traj_B.c_b = Test_Traj_B.l_b - Test_Traj_B.loop_ub;
    Test_Traj_B.tmp_size_m = Test_Traj_B.c_b;
    for (Test_Traj_B.l_b = 0; Test_Traj_B.l_b < Test_Traj_B.c_b; Test_Traj_B.l_b
         ++) {
      Test_Traj_B.waypoints_data_c[Test_Traj_B.l_b] =
        course_data[Test_Traj_B.loop_ub + Test_Traj_B.l_b];
    }

    Test_Traj_LMFsolve_phmyulbc(waypoints_data, waypoints_size, course_data,
      course_size, Test_Traj_B.waypoints_data_c, &Test_Traj_B.tmp_size_m);
    Test_Traj_B.l_b = Test_Traj_B.tmp_size_m;
    Test_Traj_B.loop_ub = Test_Traj_B.tmp_size_m;
    if (0 <= Test_Traj_B.loop_ub - 1) {
      memcpy(&Test_Traj_B.courselsq_data[0], &Test_Traj_B.waypoints_data_c[0],
             Test_Traj_B.loop_ub * sizeof(real_T));
    }

    Test_Traj_B.loop_ub = Test_Traj_B.tmp_size_m + 1;
    Test_Traj_B.course_data_i[0] = course_data[0];
    if (0 <= Test_Traj_B.l_b - 1) {
      memcpy(&Test_Traj_B.course_data_i[1], &Test_Traj_B.courselsq_data[0],
             Test_Traj_B.l_b * sizeof(real_T));
    }

    Test_Traj_B.l_b = Test_Traj_B.loop_ub;
    if (0 <= Test_Traj_B.loop_ub - 1) {
      memcpy(&Test_Traj_B.courselsq_data[0], &Test_Traj_B.course_data_i[0],
             Test_Traj_B.loop_ub * sizeof(real_T));
    }
  } else {
    if (2.0 > static_cast<real_T>(*course_size) - 1.0) {
      Test_Traj_B.loop_ub = 0;
      Test_Traj_B.l_b = 0;
    } else {
      Test_Traj_B.loop_ub = 1;
      Test_Traj_B.l_b = *course_size - 1;
    }

    Test_Traj_B.c_b = Test_Traj_B.l_b - Test_Traj_B.loop_ub;
    Test_Traj_B.tmp_size_m = Test_Traj_B.c_b;
    for (Test_Traj_B.l_b = 0; Test_Traj_B.l_b < Test_Traj_B.c_b; Test_Traj_B.l_b
         ++) {
      Test_Traj_B.tmp_data_h2[Test_Traj_B.l_b] = course_data[Test_Traj_B.loop_ub
        + Test_Traj_B.l_b];
    }

    Test_Traj_LMFsolve_phmyulbc3(waypoints_data, waypoints_size, course_data,
      course_size, Test_Traj_B.tmp_data_h2, &Test_Traj_B.tmp_size_m);
    Test_Traj_B.l_b = Test_Traj_B.tmp_size_m;
    Test_Traj_B.loop_ub = Test_Traj_B.tmp_size_m;
    if (0 <= Test_Traj_B.loop_ub - 1) {
      memcpy(&Test_Traj_B.courselsq_data[0], &Test_Traj_B.tmp_data_h2[0],
             Test_Traj_B.loop_ub * sizeof(real_T));
    }

    Test_Traj_B.loop_ub = Test_Traj_B.tmp_size_m + 2;
    Test_Traj_B.course_data[0] = course_data[0];
    if (0 <= Test_Traj_B.l_b - 1) {
      memcpy(&Test_Traj_B.course_data[1], &Test_Traj_B.courselsq_data[0],
             Test_Traj_B.l_b * sizeof(real_T));
    }

    Test_Traj_B.course_data[Test_Traj_B.tmp_size_m + 1] =
      course_data[waypoints_size[0] - 1];
    Test_Traj_B.l_b = Test_Traj_B.loop_ub;
    if (0 <= Test_Traj_B.loop_ub - 1) {
      memcpy(&Test_Traj_B.courselsq_data[0], &Test_Traj_B.course_data[0],
             Test_Traj_B.loop_ub * sizeof(real_T));
    }
  }

  *course_size = Test_Traj_B.l_b;
  if (0 <= Test_Traj_B.l_b - 1) {
    memcpy(&course_data[0], &Test_Traj_B.courselsq_data[0], Test_Traj_B.l_b *
           sizeof(real_T));
  }
}

static void Test_Traj_fitPartialCourse(const real_T waypoints[63], real_T
  course[21])
{
  for (Test_Traj_B.i_ep = 0; Test_Traj_B.i_ep < 21; Test_Traj_B.i_ep++) {
    course[Test_Traj_B.i_ep] = (rtNaN);
  }

  Test_Traj_B.waypoints_size_l[0] = 21;
  Test_Traj_B.waypoints_size_l[1] = 3;
  for (Test_Traj_B.i_ep = 0; Test_Traj_B.i_ep < 1; Test_Traj_B.i_ep++) {
    for (Test_Traj_B.loop_ub_k = 0; Test_Traj_B.loop_ub_k < 21;
         Test_Traj_B.loop_ub_k++) {
      Test_Traj_B.d_data_f[Test_Traj_B.loop_ub_k] = static_cast<int8_T>
        (Test_Traj_B.loop_ub_k + 1);
      Test_Traj_B.range_data_h[Test_Traj_B.loop_ub_k] = 1.0 + static_cast<real_T>
        (Test_Traj_B.loop_ub_k);
    }

    Test_Traj_B.tmp_size_k4 = 21;
    for (Test_Traj_B.loop_ub_k = 0; Test_Traj_B.loop_ub_k < 21;
         Test_Traj_B.loop_ub_k++) {
      Test_Traj_B.tmp_data_m4[Test_Traj_B.loop_ub_k] = course
        [static_cast<int32_T>(Test_Traj_B.range_data_h[Test_Traj_B.loop_ub_k]) -
        1];
    }

    for (Test_Traj_B.loop_ub_k = 0; Test_Traj_B.loop_ub_k < 3;
         Test_Traj_B.loop_ub_k++) {
      for (Test_Traj_B.i6 = 0; Test_Traj_B.i6 < 21; Test_Traj_B.i6++) {
        Test_Traj_B.waypoints_data_pt[Test_Traj_B.i6 + 21 *
          Test_Traj_B.loop_ub_k] = waypoints[(21 * Test_Traj_B.loop_ub_k +
          static_cast<int32_T>(Test_Traj_B.range_data_h[Test_Traj_B.i6])) - 1];
      }
    }

    Test_Traj_fitCourse_p(Test_Traj_B.waypoints_data_pt,
                          Test_Traj_B.waypoints_size_l, Test_Traj_B.tmp_data_m4,
                          &Test_Traj_B.tmp_size_k4);
    Test_Traj_B.loop_ub_k = Test_Traj_B.tmp_size_k4;
    if (0 <= Test_Traj_B.loop_ub_k - 1) {
      memcpy(&Test_Traj_B.e_data_o[0], &Test_Traj_B.tmp_data_m4[0],
             Test_Traj_B.loop_ub_k * sizeof(real_T));
    }

    for (Test_Traj_B.loop_ub_k = 0; Test_Traj_B.loop_ub_k < 21;
         Test_Traj_B.loop_ub_k++) {
      course[Test_Traj_B.d_data_f[Test_Traj_B.loop_ub_k] - 1] =
        Test_Traj_B.e_data_o[Test_Traj_B.loop_ub_k];
    }
  }
}

static void Test_Traj_partitionCourse(const real_T course[21], real_T
  ibegin_data[], int32_T *ibegin_size, real_T iend_data[], int32_T *iend_size)
{
  int32_T b_ii;
  int32_T i;
  boolean_T exitg1;
  for (i = 0; i < 20; i++) {
    Test_Traj_B.x_j1[i] = ((!rtIsNaN(course[i])) && rtIsNaN(course[i + 1]));
  }

  i = 0;
  b_ii = 1;
  exitg1 = false;
  while ((!exitg1) && (b_ii - 1 < 20)) {
    if (Test_Traj_B.x_j1[b_ii - 1]) {
      i++;
      Test_Traj_B.ii_data_l[i - 1] = b_ii;
      if (i >= 20) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > i) {
    i = 0;
  }

  *ibegin_size = i;
  for (b_ii = 0; b_ii < i; b_ii++) {
    ibegin_data[b_ii] = Test_Traj_B.ii_data_l[b_ii];
  }

  if (i == 0) {
    *ibegin_size = 0;
  }

  for (i = 0; i < 20; i++) {
    Test_Traj_B.x_j1[i] = (rtIsNaN(course[i]) && (!rtIsNaN(course[i + 1])));
  }

  i = 0;
  b_ii = 1;
  exitg1 = false;
  while ((!exitg1) && (b_ii - 1 < 20)) {
    if (Test_Traj_B.x_j1[b_ii - 1]) {
      i++;
      Test_Traj_B.ii_data_l[i - 1] = b_ii;
      if (i >= 20) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }

  if (1 > i) {
    i = 0;
  }

  *iend_size = i;
  for (b_ii = 0; b_ii < i; b_ii++) {
    iend_data[b_ii] = static_cast<real_T>(Test_Traj_B.ii_data_l[b_ii]) + 1.0;
  }

  if (i == 0) {
    *iend_size = 0;
  }
}

static void Test_Traj_endpointpadding(const creal_T zcurrent_data[], const
  int32_T zcurrent_size[2], const creal_T zorig_data[], const int32_T
  zorig_size[2], creal_T *zleft, creal_T *zright)
{
  if ((zorig_data[zorig_size[1] - 1].re == zorig_data[0].re) &&
      (zorig_data[zorig_size[1] - 1].im == zorig_data[0].im) && (zorig_size[1] >
       2)) {
    *zleft = zcurrent_data[zcurrent_size[1] - 2];
    *zright = zcurrent_data[1];
  } else {
    zleft->re = (zcurrent_data[0].re - zcurrent_data[1].re) * 100.0 +
      zcurrent_data[0].re;
    zleft->im = (zcurrent_data[0].im - zcurrent_data[1].im) * 100.0 +
      zcurrent_data[0].im;
    zright->re = (zcurrent_data[zcurrent_size[1] - 1].re -
                  zcurrent_data[zcurrent_size[1] - 2].re) * 100.0 +
      zcurrent_data[zcurrent_size[1] - 1].re;
    zright->im = (zcurrent_data[zcurrent_size[1] - 1].im -
                  zcurrent_data[zcurrent_size[1] - 2].im) * 100.0 +
      zcurrent_data[zcurrent_size[1] - 1].im;
  }
}

static void Test_Traj_insertCodegen(const creal_T zorig[2561], real_T m, creal_T
  Zout_data[], int32_T Zout_size[2])
{
  if (1.0 > m) {
    Test_Traj_B.b_tmp = 0;
    Test_Traj_B.d_bi = 0;
  } else {
    Test_Traj_B.b_tmp = static_cast<int32_T>(m);
    Test_Traj_B.d_bi = Test_Traj_B.b_tmp;
  }

  Test_Traj_B.zorig_size_g[0] = 1;
  Test_Traj_B.zorig_size_g[1] = Test_Traj_B.b_tmp;
  if (0 <= Test_Traj_B.b_tmp - 1) {
    memcpy(&Test_Traj_B.b_Zout[0], &zorig[0], Test_Traj_B.b_tmp * sizeof(creal_T));
  }

  Test_Traj_B.zorig_size_c[0] = 1;
  Test_Traj_B.zorig_size_c[1] = Test_Traj_B.d_bi;
  if (0 <= Test_Traj_B.d_bi - 1) {
    memcpy(&Test_Traj_B.zorig_data_b[0], &zorig[0], Test_Traj_B.d_bi * sizeof
           (creal_T));
  }

  Test_Traj_endpointpadding(Test_Traj_B.b_Zout, Test_Traj_B.zorig_size_g,
    Test_Traj_B.zorig_data_b, Test_Traj_B.zorig_size_c, &Test_Traj_B.z_data_bs[0],
    &Test_Traj_B.zright_c);
  if (1.0 > m) {
    Test_Traj_B.d_bi = 0;
  } else {
    Test_Traj_B.d_bi = static_cast<int32_T>(m);
  }

  Test_Traj_B.z_size_l[0] = 1;
  Test_Traj_B.z_size_l[1] = Test_Traj_B.d_bi - -2;
  Test_Traj_B.b_tmp = Test_Traj_B.d_bi - -2;
  if (0 <= Test_Traj_B.b_tmp - 3) {
    memcpy(&Test_Traj_B.z_data_bs[1], &zorig[0], (Test_Traj_B.b_tmp + -2) *
           sizeof(creal_T));
  }

  Test_Traj_B.z_data_bs[Test_Traj_B.d_bi + 1] = Test_Traj_B.zright_c;
  Test_Traj_diff(Test_Traj_B.z_data_bs, Test_Traj_B.z_size_l,
                 Test_Traj_B.tmp_data, Test_Traj_B.zorig_size_g);
  Test_Traj_B.dz_size_c[0] = 1;
  Test_Traj_B.dz_size_c[1] = Test_Traj_B.zorig_size_g[1];
  Test_Traj_B.b_tmp = Test_Traj_B.zorig_size_g[0] * Test_Traj_B.zorig_size_g[1];
  if (0 <= Test_Traj_B.b_tmp - 1) {
    memcpy(&Test_Traj_B.dz_data_h[0], &Test_Traj_B.tmp_data[0],
           Test_Traj_B.b_tmp * sizeof(creal_T));
  }

  Test_Traj_abs(Test_Traj_B.dz_data_h, Test_Traj_B.dz_size_c,
                Test_Traj_B.tmp_data_m, Test_Traj_B.zorig_size_c);
  Test_Traj_B.b_tmp = Test_Traj_B.zorig_size_c[0] * Test_Traj_B.zorig_size_c[1];
  if (0 <= Test_Traj_B.b_tmp - 1) {
    memcpy(&Test_Traj_B.l_data_j[0], &Test_Traj_B.tmp_data_m[0],
           Test_Traj_B.b_tmp * sizeof(real_T));
  }

  if (2 > Test_Traj_B.zorig_size_g[1]) {
    Test_Traj_B.d_bi = 0;
    Test_Traj_B.b_tmp = 0;
  } else {
    Test_Traj_B.d_bi = 1;
    Test_Traj_B.b_tmp = Test_Traj_B.zorig_size_g[1];
  }

  Test_Traj_B.dz_size_l[0] = 1;
  Test_Traj_B.dz_size_tmp_b = Test_Traj_B.b_tmp - Test_Traj_B.d_bi;
  Test_Traj_B.dz_size_l[1] = Test_Traj_B.dz_size_tmp_b;
  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp < Test_Traj_B.dz_size_tmp_b;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.dz_data_re_tmp_m = Test_Traj_B.d_bi + Test_Traj_B.b_tmp;
    Test_Traj_B.b_Zout[Test_Traj_B.b_tmp].re =
      Test_Traj_B.dz_data_h[Test_Traj_B.dz_data_re_tmp_m].re *
      Test_Traj_B.dz_data_h[Test_Traj_B.b_tmp].re -
      -Test_Traj_B.dz_data_h[Test_Traj_B.dz_data_re_tmp_m].im *
      Test_Traj_B.dz_data_h[Test_Traj_B.b_tmp].im;
    Test_Traj_B.b_Zout[Test_Traj_B.b_tmp].im =
      Test_Traj_B.dz_data_h[Test_Traj_B.dz_data_re_tmp_m].re *
      Test_Traj_B.dz_data_h[Test_Traj_B.b_tmp].im +
      -Test_Traj_B.dz_data_h[Test_Traj_B.dz_data_re_tmp_m].im *
      Test_Traj_B.dz_data_h[Test_Traj_B.b_tmp].re;
  }

  Test_Traj_angle(Test_Traj_B.b_Zout, Test_Traj_B.dz_size_l,
                  Test_Traj_B.tmp_data_j, Test_Traj_B.dz_size_c);
  Test_Traj_B.b_tmp = Test_Traj_B.dz_size_c[0] * Test_Traj_B.dz_size_c[1];
  if (0 <= Test_Traj_B.b_tmp - 1) {
    memcpy(&Test_Traj_B.alpha_data_i[0], &Test_Traj_B.tmp_data_j[0],
           Test_Traj_B.b_tmp * sizeof(real_T));
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.z_size_l[1]) - 2.0) {
    Test_Traj_B.dz_size_tmp_b = 0;
    Test_Traj_B.b_tmp = 0;
  } else {
    Test_Traj_B.dz_size_tmp_b = 1;
    Test_Traj_B.b_tmp = Test_Traj_B.z_size_l[1] - 2;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.zorig_size_g[1]) - 1.0) {
    Test_Traj_B.w_ih = 0;
    Test_Traj_B.v_p = 0;
  } else {
    Test_Traj_B.w_ih = 1;
    Test_Traj_B.v_p = Test_Traj_B.zorig_size_g[1] - 1;
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.zorig_size_c[1]) - 2.0) {
    Test_Traj_B.y_k = 0;
  } else {
    Test_Traj_B.y_k = Test_Traj_B.zorig_size_c[1] - 2;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.zorig_size_c[1]) - 1.0) {
    Test_Traj_B.dz_data_re_tmp_m = 0;
    Test_Traj_B.cb = 0;
  } else {
    Test_Traj_B.dz_data_re_tmp_m = 1;
    Test_Traj_B.cb = Test_Traj_B.zorig_size_c[1] - 1;
  }

  if (3 > Test_Traj_B.zorig_size_c[1]) {
    Test_Traj_B.gb_c = 0;
    Test_Traj_B.fb = 0;
  } else {
    Test_Traj_B.gb_c = 2;
    Test_Traj_B.fb = Test_Traj_B.zorig_size_c[1];
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.dz_size_c[1]) - 1.0) {
    Test_Traj_B.ib_n = 0;
  } else {
    Test_Traj_B.ib_n = Test_Traj_B.dz_size_c[1] - 1;
  }

  if (2 > Test_Traj_B.dz_size_c[1]) {
    Test_Traj_B.d_bi = 0;
    Test_Traj_B.lb = 0;
  } else {
    Test_Traj_B.d_bi = 1;
    Test_Traj_B.lb = Test_Traj_B.dz_size_c[1];
  }

  Test_Traj_B.z_size_e[0] = 1;
  Test_Traj_B.z_size_tmp_m = Test_Traj_B.b_tmp - Test_Traj_B.dz_size_tmp_b;
  Test_Traj_B.z_size_e[1] = Test_Traj_B.z_size_tmp_m;
  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp < Test_Traj_B.z_size_tmp_m;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.znew_data_f[Test_Traj_B.b_tmp] =
      Test_Traj_B.z_data_bs[Test_Traj_B.dz_size_tmp_b + Test_Traj_B.b_tmp];
  }

  Test_Traj_B.dz_size_tmp_b = Test_Traj_B.v_p - Test_Traj_B.w_ih;
  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp < Test_Traj_B.dz_size_tmp_b;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.b_Zout[Test_Traj_B.b_tmp] =
      Test_Traj_B.dz_data_h[Test_Traj_B.w_ih + Test_Traj_B.b_tmp];
  }

  Test_Traj_B.l_size_dt[0] = 1;
  Test_Traj_B.l_size_dt[1] = Test_Traj_B.y_k;
  if (0 <= Test_Traj_B.y_k - 1) {
    memcpy(&Test_Traj_B.l_data_m[0], &Test_Traj_B.l_data_j[0], Test_Traj_B.y_k *
           sizeof(real_T));
  }

  Test_Traj_B.l_size_m[0] = 1;
  Test_Traj_B.w_ih = Test_Traj_B.cb - Test_Traj_B.dz_data_re_tmp_m;
  Test_Traj_B.l_size_m[1] = Test_Traj_B.w_ih;
  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp < Test_Traj_B.w_ih;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.l_data_o[Test_Traj_B.b_tmp] =
      Test_Traj_B.l_data_j[Test_Traj_B.dz_data_re_tmp_m + Test_Traj_B.b_tmp];
  }

  Test_Traj_B.l_size_f[0] = 1;
  Test_Traj_B.w_ih = Test_Traj_B.fb - Test_Traj_B.gb_c;
  Test_Traj_B.l_size_f[1] = Test_Traj_B.w_ih;
  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp < Test_Traj_B.w_ih;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.l_data_jz[Test_Traj_B.b_tmp] =
      Test_Traj_B.l_data_j[Test_Traj_B.gb_c + Test_Traj_B.b_tmp];
  }

  if (0 <= Test_Traj_B.ib_n - 1) {
    memcpy(&Test_Traj_B.alpha_data_c[0], &Test_Traj_B.alpha_data_i[0],
           Test_Traj_B.ib_n * sizeof(real_T));
  }

  Test_Traj_B.dz_data_re_tmp_m = Test_Traj_B.lb - Test_Traj_B.d_bi;
  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp < Test_Traj_B.dz_data_re_tmp_m;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.alpha_data_n[Test_Traj_B.b_tmp] =
      Test_Traj_B.alpha_data_i[Test_Traj_B.d_bi + Test_Traj_B.b_tmp];
  }

  Test_Traj_midcurve(Test_Traj_B.znew_data_f, Test_Traj_B.z_size_e,
                     Test_Traj_B.b_Zout, Test_Traj_B.l_data_m,
                     Test_Traj_B.l_size_dt, Test_Traj_B.l_data_o,
                     Test_Traj_B.l_size_m, Test_Traj_B.l_data_jz,
                     Test_Traj_B.l_size_f, Test_Traj_B.alpha_data_c,
                     Test_Traj_B.alpha_data_n, Test_Traj_B.tmp_data_p,
                     Test_Traj_B.zorig_size_g);
  Test_Traj_B.d_bi = Test_Traj_B.zorig_size_g[1];
  Test_Traj_B.b_tmp = Test_Traj_B.zorig_size_g[0] * Test_Traj_B.zorig_size_g[1];
  if (0 <= Test_Traj_B.b_tmp - 1) {
    memcpy(&Test_Traj_B.znew_data_f[0], &Test_Traj_B.tmp_data_p[0],
           Test_Traj_B.b_tmp * sizeof(creal_T));
  }

  memset(&Test_Traj_B.b_Zout[0], 0, 2561U * sizeof(creal_T));
  if (1.0 > m) {
    Test_Traj_B.dz_data_re_tmp_m = -1;
  } else {
    Test_Traj_B.dz_data_re_tmp_m = static_cast<int32_T>(m) - 1;
  }

  Test_Traj_B.yb = 2.0 * m - 1.0;
  if (1.0 > Test_Traj_B.yb) {
    Test_Traj_B.gb_c = 1;
  } else {
    Test_Traj_B.gb_c = 2;
  }

  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp <= Test_Traj_B.dz_data_re_tmp_m;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.b_Zout[Test_Traj_B.gb_c * Test_Traj_B.b_tmp] =
      zorig[Test_Traj_B.b_tmp];
  }

  if (2.0 > 2.0 * static_cast<real_T>(Test_Traj_B.zorig_size_g[1]) + 1.0) {
    Test_Traj_B.dz_data_re_tmp_m = 0;
    Test_Traj_B.gb_c = 1;
  } else {
    Test_Traj_B.dz_data_re_tmp_m = 1;
    Test_Traj_B.gb_c = 2;
  }

  for (Test_Traj_B.b_tmp = 0; Test_Traj_B.b_tmp < Test_Traj_B.d_bi;
       Test_Traj_B.b_tmp++) {
    Test_Traj_B.b_Zout[Test_Traj_B.dz_data_re_tmp_m + Test_Traj_B.gb_c *
      Test_Traj_B.b_tmp] = Test_Traj_B.znew_data_f[Test_Traj_B.b_tmp];
  }

  if (1.0 > Test_Traj_B.yb) {
    Test_Traj_B.b_tmp = 0;
  } else {
    Test_Traj_B.b_tmp = static_cast<int32_T>(Test_Traj_B.yb);
  }

  Zout_size[0] = 1;
  Zout_size[1] = Test_Traj_B.b_tmp;
  if (0 <= Test_Traj_B.b_tmp - 1) {
    memcpy(&Zout_data[0], &Test_Traj_B.b_Zout[0], Test_Traj_B.b_tmp * sizeof
           (creal_T));
  }
}

static void Test_Traj_endpointpadding_p(const creal_T zcurrent_data[], const
  int32_T zcurrent_size[2], const creal_T zorig[21], creal_T *zleft, creal_T
  *zright)
{
  if ((zorig[0].re == zorig[20].re) && (zorig[0].im == zorig[20].im)) {
    *zleft = zcurrent_data[zcurrent_size[1] - 2];
    *zright = zcurrent_data[1];
  } else {
    zleft->re = (zcurrent_data[0].re - zcurrent_data[1].re) * 100.0 +
      zcurrent_data[0].re;
    zleft->im = (zcurrent_data[0].im - zcurrent_data[1].im) * 100.0 +
      zcurrent_data[0].im;
    zright->re = (zcurrent_data[zcurrent_size[1] - 1].re -
                  zcurrent_data[zcurrent_size[1] - 2].re) * 100.0 +
      zcurrent_data[zcurrent_size[1] - 1].re;
    zright->im = (zcurrent_data[zcurrent_size[1] - 1].im -
                  zcurrent_data[zcurrent_size[1] - 2].im) * 100.0 +
      zcurrent_data[zcurrent_size[1] - 1].im;
  }
}

static void Test_Traj_optimize(const creal_T zcurrent_data[], const int32_T
  zcurrent_size[2], const creal_T zorig[21], creal_T Zout_data[], int32_T
  Zout_size[2])
{
  Test_Traj_endpointpadding_p(zcurrent_data, zcurrent_size, zorig,
    &Test_Traj_B.z_data_l[0], &Test_Traj_B.zright_b);
  Test_Traj_B.z_size_a[0] = 1;
  Test_Traj_B.z_size_a[1] = zcurrent_size[1] + 2;
  Test_Traj_B.loop_ub_os = zcurrent_size[0] * zcurrent_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_os) {
    memcpy(&Test_Traj_B.z_data_l[1], &zcurrent_data[0], (Test_Traj_B.loop_ub_os
            + 1) * sizeof(creal_T));
  }

  Test_Traj_B.z_data_l[Test_Traj_B.loop_ub_os + 2] = Test_Traj_B.zright_b;
  Test_Traj_diff(Test_Traj_B.z_data_l, Test_Traj_B.z_size_a,
                 Test_Traj_B.tmp_data_c, Test_Traj_B.tmp_size_fm);
  Test_Traj_B.d1_size[0] = 1;
  Test_Traj_B.d1_size[1] = Test_Traj_B.tmp_size_fm[1];
  Test_Traj_B.loop_ub_os = Test_Traj_B.tmp_size_fm[0] * Test_Traj_B.tmp_size_fm
    [1];
  if (0 <= Test_Traj_B.loop_ub_os - 1) {
    memcpy(&Test_Traj_B.d1_data_b[0], &Test_Traj_B.tmp_data_c[0],
           Test_Traj_B.loop_ub_os * sizeof(creal_T));
  }

  Test_Traj_abs(Test_Traj_B.d1_data_b, Test_Traj_B.d1_size,
                Test_Traj_B.tmp_data_n, Test_Traj_B.tmp_size_gr);
  Test_Traj_B.loop_ub_os = Test_Traj_B.tmp_size_gr[0] * Test_Traj_B.tmp_size_gr
    [1];
  if (0 <= Test_Traj_B.loop_ub_os - 1) {
    memcpy(&Test_Traj_B.l1_data_o4[0], &Test_Traj_B.tmp_data_n[0],
           Test_Traj_B.loop_ub_os * sizeof(real_T));
  }

  if (3 > Test_Traj_B.z_size_a[1]) {
    Test_Traj_B.d_o = 0;
    Test_Traj_B.loop_ub_os = 0;
  } else {
    Test_Traj_B.d_o = 2;
    Test_Traj_B.loop_ub_os = Test_Traj_B.z_size_a[1];
  }

  Test_Traj_B.d2_size_idx_1_tmp = Test_Traj_B.loop_ub_os - Test_Traj_B.d_o;
  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <
       Test_Traj_B.d2_size_idx_1_tmp; Test_Traj_B.loop_ub_os++) {
    Test_Traj_B.d2_size_tmp = Test_Traj_B.d_o + Test_Traj_B.loop_ub_os;
    Test_Traj_B.d2_data_j[Test_Traj_B.loop_ub_os].re =
      Test_Traj_B.z_data_l[Test_Traj_B.d2_size_tmp].re -
      Test_Traj_B.z_data_l[Test_Traj_B.loop_ub_os].re;
    Test_Traj_B.d2_data_j[Test_Traj_B.loop_ub_os].im =
      Test_Traj_B.z_data_l[Test_Traj_B.d2_size_tmp].im -
      Test_Traj_B.z_data_l[Test_Traj_B.loop_ub_os].im;
  }

  if (2 > Test_Traj_B.d2_size_idx_1_tmp - 1) {
    Test_Traj_B.d_o = 0;
    Test_Traj_B.loop_ub_os = 0;
  } else {
    Test_Traj_B.d_o = 1;
    Test_Traj_B.loop_ub_os = Test_Traj_B.d2_size_idx_1_tmp - 1;
  }

  Test_Traj_B.d2_size[0] = 1;
  Test_Traj_B.d2_size_tmp = Test_Traj_B.loop_ub_os - Test_Traj_B.d_o;
  Test_Traj_B.d2_size[1] = Test_Traj_B.d2_size_tmp;
  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <
       Test_Traj_B.d2_size_tmp; Test_Traj_B.loop_ub_os++) {
    Test_Traj_B.d2_data_re_tmp = Test_Traj_B.d_o + Test_Traj_B.loop_ub_os;
    Test_Traj_B.d2_data_a[Test_Traj_B.loop_ub_os].re =
      Test_Traj_B.d2_data_j[Test_Traj_B.d2_data_re_tmp].re *
      Test_Traj_B.d1_data_b[Test_Traj_B.loop_ub_os].re -
      -Test_Traj_B.d2_data_j[Test_Traj_B.d2_data_re_tmp].im *
      Test_Traj_B.d1_data_b[Test_Traj_B.loop_ub_os].im;
    Test_Traj_B.d2_data_a[Test_Traj_B.loop_ub_os].im =
      Test_Traj_B.d2_data_j[Test_Traj_B.d2_data_re_tmp].re *
      Test_Traj_B.d1_data_b[Test_Traj_B.loop_ub_os].im +
      -Test_Traj_B.d2_data_j[Test_Traj_B.d2_data_re_tmp].im *
      Test_Traj_B.d1_data_b[Test_Traj_B.loop_ub_os].re;
  }

  Test_Traj_angle(Test_Traj_B.d2_data_a, Test_Traj_B.d2_size,
                  Test_Traj_B.tmp_data_d, Test_Traj_B.z_size_a);
  Test_Traj_B.d2_size_tmp = Test_Traj_B.z_size_a[0] * Test_Traj_B.z_size_a[1];
  if (0 <= Test_Traj_B.d2_size_tmp - 1) {
    memcpy(&Test_Traj_B.alpha_data_m[0], &Test_Traj_B.tmp_data_d[0],
           Test_Traj_B.d2_size_tmp * sizeof(real_T));
  }

  if (4 > Test_Traj_B.tmp_size_fm[1]) {
    Test_Traj_B.d_o = 0;
    Test_Traj_B.loop_ub_os = 0;
  } else {
    Test_Traj_B.d_o = 3;
    Test_Traj_B.loop_ub_os = Test_Traj_B.tmp_size_fm[1];
  }

  if (2 > Test_Traj_B.d2_size_idx_1_tmp - 1) {
    Test_Traj_B.d2_data_re_tmp = 0;
  } else {
    Test_Traj_B.d2_data_re_tmp = 1;
  }

  Test_Traj_B.d1_size_b[0] = 1;
  Test_Traj_B.d1_size_tmp = Test_Traj_B.loop_ub_os - Test_Traj_B.d_o;
  Test_Traj_B.d1_size_b[1] = Test_Traj_B.d1_size_tmp;
  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <
       Test_Traj_B.d1_size_tmp; Test_Traj_B.loop_ub_os++) {
    Test_Traj_B.d1_data_re_tmp = Test_Traj_B.d_o + Test_Traj_B.loop_ub_os;
    Test_Traj_B.d2_size_tmp = Test_Traj_B.d2_data_re_tmp +
      Test_Traj_B.loop_ub_os;
    Test_Traj_B.d2_data_a[Test_Traj_B.loop_ub_os].re =
      Test_Traj_B.d2_data_j[Test_Traj_B.d2_size_tmp].re *
      Test_Traj_B.d1_data_b[Test_Traj_B.d1_data_re_tmp].re -
      Test_Traj_B.d2_data_j[Test_Traj_B.d2_size_tmp].im *
      -Test_Traj_B.d1_data_b[Test_Traj_B.d1_data_re_tmp].im;
    Test_Traj_B.d2_data_a[Test_Traj_B.loop_ub_os].im =
      Test_Traj_B.d2_data_j[Test_Traj_B.d2_size_tmp].im *
      Test_Traj_B.d1_data_b[Test_Traj_B.d1_data_re_tmp].re +
      Test_Traj_B.d2_data_j[Test_Traj_B.d2_size_tmp].re *
      -Test_Traj_B.d1_data_b[Test_Traj_B.d1_data_re_tmp].im;
  }

  Test_Traj_angle(Test_Traj_B.d2_data_a, Test_Traj_B.d1_size_b,
                  Test_Traj_B.tmp_data_d, Test_Traj_B.z_size_a);
  Test_Traj_B.loop_ub_os = Test_Traj_B.z_size_a[0] * Test_Traj_B.z_size_a[1];
  if (0 <= Test_Traj_B.loop_ub_os - 1) {
    memcpy(&Test_Traj_B.beta_data_j[0], &Test_Traj_B.tmp_data_d[0],
           Test_Traj_B.loop_ub_os * sizeof(real_T));
  }

  if (1.0 > static_cast<real_T>(zcurrent_size[1]) - 2.0) {
    Test_Traj_B.loop_ub_os = 0;
  } else {
    Test_Traj_B.loop_ub_os = zcurrent_size[1] - 2;
  }

  if (2 > Test_Traj_B.d2_size_idx_1_tmp - 1) {
    Test_Traj_B.d_o = 0;
    Test_Traj_B.d2_size_tmp = 0;
  } else {
    Test_Traj_B.d_o = 1;
    Test_Traj_B.d2_size_tmp = Test_Traj_B.d2_size_idx_1_tmp - 1;
  }

  if (1.0 > static_cast<real_T>(Test_Traj_B.tmp_size_gr[1]) - 3.0) {
    Test_Traj_B.hb = 0;
  } else {
    Test_Traj_B.hb = Test_Traj_B.tmp_size_gr[1] - 3;
  }

  if (2.0 > static_cast<real_T>(Test_Traj_B.tmp_size_gr[1]) - 2.0) {
    Test_Traj_B.d2_size_idx_1_tmp = 0;
    Test_Traj_B.kb = 0;
  } else {
    Test_Traj_B.d2_size_idx_1_tmp = 1;
    Test_Traj_B.kb = Test_Traj_B.tmp_size_gr[1] - 2;
  }

  if (3.0 > static_cast<real_T>(Test_Traj_B.tmp_size_gr[1]) - 1.0) {
    Test_Traj_B.d2_data_re_tmp = 0;
  } else {
    Test_Traj_B.d2_data_re_tmp = 2;
  }

  if (4 > Test_Traj_B.tmp_size_gr[1]) {
    Test_Traj_B.d1_size_tmp = 0;
    Test_Traj_B.d1_data_re_tmp = 0;
  } else {
    Test_Traj_B.d1_size_tmp = 3;
    Test_Traj_B.d1_data_re_tmp = Test_Traj_B.tmp_size_gr[1];
  }

  Test_Traj_B.zcurrent_size[0] = 1;
  Test_Traj_B.zcurrent_size[1] = Test_Traj_B.loop_ub_os;
  if (0 <= Test_Traj_B.loop_ub_os - 1) {
    memcpy(&Test_Traj_B.zcurrent_data[0], &zcurrent_data[0],
           Test_Traj_B.loop_ub_os * sizeof(creal_T));
  }

  Test_Traj_B.d2_size_tmp -= Test_Traj_B.d_o;
  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <
       Test_Traj_B.d2_size_tmp; Test_Traj_B.loop_ub_os++) {
    Test_Traj_B.d2_data_a[Test_Traj_B.loop_ub_os] =
      Test_Traj_B.d2_data_j[Test_Traj_B.d_o + Test_Traj_B.loop_ub_os];
  }

  Test_Traj_B.l1_size[0] = 1;
  Test_Traj_B.l1_size[1] = Test_Traj_B.hb;
  if (0 <= Test_Traj_B.hb - 1) {
    memcpy(&Test_Traj_B.l1_data_h[0], &Test_Traj_B.l1_data_o4[0], Test_Traj_B.hb
           * sizeof(real_T));
  }

  Test_Traj_B.l1_size_k[0] = 1;
  Test_Traj_B.d2_size_tmp = Test_Traj_B.kb - Test_Traj_B.d2_size_idx_1_tmp;
  Test_Traj_B.l1_size_k[1] = Test_Traj_B.d2_size_tmp;
  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <
       Test_Traj_B.d2_size_tmp; Test_Traj_B.loop_ub_os++) {
    Test_Traj_B.l1_data_m[Test_Traj_B.loop_ub_os] =
      Test_Traj_B.l1_data_o4[Test_Traj_B.d2_size_idx_1_tmp +
      Test_Traj_B.loop_ub_os] +
      Test_Traj_B.l1_data_o4[Test_Traj_B.d2_data_re_tmp + Test_Traj_B.loop_ub_os];
  }

  Test_Traj_B.l1_size_k1[0] = 1;
  Test_Traj_B.d2_size_tmp = Test_Traj_B.d1_data_re_tmp - Test_Traj_B.d1_size_tmp;
  Test_Traj_B.l1_size_k1[1] = Test_Traj_B.d2_size_tmp;
  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <
       Test_Traj_B.d2_size_tmp; Test_Traj_B.loop_ub_os++) {
    Test_Traj_B.l1_data_ny[Test_Traj_B.loop_ub_os] =
      Test_Traj_B.l1_data_o4[Test_Traj_B.d1_size_tmp + Test_Traj_B.loop_ub_os];
  }

  Test_Traj_midcurve(Test_Traj_B.zcurrent_data, Test_Traj_B.zcurrent_size,
                     Test_Traj_B.d2_data_a, Test_Traj_B.l1_data_h,
                     Test_Traj_B.l1_size, Test_Traj_B.l1_data_m,
                     Test_Traj_B.l1_size_k, Test_Traj_B.l1_data_ny,
                     Test_Traj_B.l1_size_k1, Test_Traj_B.alpha_data_m,
                     Test_Traj_B.beta_data_j, Test_Traj_B.tmp_data_cv,
                     Test_Traj_B.tmp_size_fm);
  Zout_size[0] = 1;
  Zout_size[1] = Test_Traj_B.tmp_size_fm[1] + 2;
  Zout_data[0] = zorig[0];
  Test_Traj_B.d2_size_tmp = Test_Traj_B.tmp_size_fm[0] *
    Test_Traj_B.tmp_size_fm[1];
  if (0 <= Test_Traj_B.d2_size_tmp - 1) {
    memcpy(&Zout_data[1], &Test_Traj_B.tmp_data_cv[0], Test_Traj_B.d2_size_tmp *
           sizeof(creal_T));
  }

  Zout_data[Test_Traj_B.d2_size_tmp + 1] = zorig[20];
  Test_Traj_B.ub_tmp = (static_cast<real_T>(zcurrent_size[1]) - 21.0) / 20.0 +
    1.0;
  if ((Test_Traj_B.ub_tmp == 0.0) || (((Test_Traj_B.ub_tmp > 0.0) && (1 >
         Zout_size[1])) || ((0.0 > Test_Traj_B.ub_tmp) && (Zout_size[1] > 1))))
  {
    Test_Traj_B.d2_size_idx_1_tmp = 1;
    Test_Traj_B.loop_ub_os = 0;
  } else {
    Test_Traj_B.d2_size_idx_1_tmp = static_cast<int32_T>(Test_Traj_B.ub_tmp);
    Test_Traj_B.loop_ub_os = Zout_size[1];
  }

  Test_Traj_B.d2_size_tmp = div_s32_floor(Test_Traj_B.loop_ub_os - 1,
    Test_Traj_B.d2_size_idx_1_tmp);
  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <=
       Test_Traj_B.d2_size_tmp; Test_Traj_B.loop_ub_os++) {
    Test_Traj_B.ac_data[Test_Traj_B.loop_ub_os] = Test_Traj_B.d2_size_idx_1_tmp *
      Test_Traj_B.loop_ub_os;
  }

  for (Test_Traj_B.loop_ub_os = 0; Test_Traj_B.loop_ub_os <=
       Test_Traj_B.d2_size_tmp; Test_Traj_B.loop_ub_os++) {
    Zout_data[Test_Traj_B.ac_data[Test_Traj_B.loop_ub_os]] =
      zorig[Test_Traj_B.loop_ub_os];
  }
}

static void Test_Traj_cloth(const creal_T z[21], real_T r[2561], real_T s[2561])
{
  memset(&Test_Traj_B.Zout[0], 0, 2561U * sizeof(creal_T));
  Test_Traj_B.m_i = 21.0;
  memcpy(&Test_Traj_B.Zout[0], &z[0], 21U * sizeof(creal_T));
  Test_Traj_B.Zout_size_p[0] = 1;
  Test_Traj_B.Zout_size_i[0] = 1;
  Test_Traj_B.Zout_size_js[0] = 1;
  for (Test_Traj_B.i_a = 0; Test_Traj_B.i_a < 7; Test_Traj_B.i_a++) {
    Test_Traj_B.mnew_c = 2.0 * Test_Traj_B.m_i - 1.0;
    Test_Traj_insertCodegen(Test_Traj_B.Zout, Test_Traj_B.m_i,
      Test_Traj_B.tmp_data_da, Test_Traj_B.tmp_size_nz);
    Test_Traj_B.loop_ub_b5 = Test_Traj_B.tmp_size_nz[1];
    if (0 <= Test_Traj_B.loop_ub_b5 - 1) {
      memcpy(&Test_Traj_B.Zout[0], &Test_Traj_B.tmp_data_da[0],
             Test_Traj_B.loop_ub_b5 * sizeof(creal_T));
    }

    Test_Traj_B.e_tmp_n = static_cast<int32_T>(Test_Traj_B.mnew_c);
    Test_Traj_B.Zout_size_p[1] = Test_Traj_B.e_tmp_n;
    if (0 <= Test_Traj_B.e_tmp_n - 1) {
      memcpy(&Test_Traj_B.Zout_data_e[0], &Test_Traj_B.Zout[0],
             Test_Traj_B.e_tmp_n * sizeof(creal_T));
    }

    Test_Traj_optimize(Test_Traj_B.Zout_data_e, Test_Traj_B.Zout_size_p, z,
                       Test_Traj_B.tmp_data_da, Test_Traj_B.tmp_size_nz);
    Test_Traj_B.loop_ub_b5 = Test_Traj_B.tmp_size_nz[1];
    if (0 <= Test_Traj_B.loop_ub_b5 - 1) {
      memcpy(&Test_Traj_B.Zout[0], &Test_Traj_B.tmp_data_da[0],
             Test_Traj_B.loop_ub_b5 * sizeof(creal_T));
    }

    Test_Traj_B.Zout_size_i[1] = Test_Traj_B.e_tmp_n;
    if (0 <= Test_Traj_B.e_tmp_n - 1) {
      memcpy(&Test_Traj_B.Zout_data_e[0], &Test_Traj_B.Zout[0],
             Test_Traj_B.e_tmp_n * sizeof(creal_T));
    }

    Test_Traj_optimize(Test_Traj_B.Zout_data_e, Test_Traj_B.Zout_size_i, z,
                       Test_Traj_B.tmp_data_da, Test_Traj_B.tmp_size_nz);
    Test_Traj_B.loop_ub_b5 = Test_Traj_B.tmp_size_nz[1];
    if (0 <= Test_Traj_B.loop_ub_b5 - 1) {
      memcpy(&Test_Traj_B.Zout[0], &Test_Traj_B.tmp_data_da[0],
             Test_Traj_B.loop_ub_b5 * sizeof(creal_T));
    }

    Test_Traj_B.Zout_size_js[1] = Test_Traj_B.e_tmp_n;
    if (0 <= Test_Traj_B.e_tmp_n - 1) {
      memcpy(&Test_Traj_B.Zout_data_e[0], &Test_Traj_B.Zout[0],
             Test_Traj_B.e_tmp_n * sizeof(creal_T));
    }

    Test_Traj_optimize(Test_Traj_B.Zout_data_e, Test_Traj_B.Zout_size_js, z,
                       Test_Traj_B.tmp_data_da, Test_Traj_B.tmp_size_nz);
    Test_Traj_B.loop_ub_b5 = Test_Traj_B.tmp_size_nz[1];
    if (0 <= Test_Traj_B.loop_ub_b5 - 1) {
      memcpy(&Test_Traj_B.Zout[0], &Test_Traj_B.tmp_data_da[0],
             Test_Traj_B.loop_ub_b5 * sizeof(creal_T));
    }

    Test_Traj_B.m_i = Test_Traj_B.mnew_c;
  }

  for (Test_Traj_B.i_a = 0; Test_Traj_B.i_a < 2561; Test_Traj_B.i_a++) {
    r[Test_Traj_B.i_a] = Test_Traj_B.Zout[Test_Traj_B.i_a].re;
    s[Test_Traj_B.i_a] = Test_Traj_B.Zout[Test_Traj_B.i_a].im;
  }
}

static void Test_Traj_packageCodegen(const real_T r[2561], const real_T s[2561],
  real_T u[2561], real_T v[2561])
{
  int32_T i;
  for (i = 0; i < 2561; i++) {
    u[i] = 0.0;
    v[i] = 0.0;
    u[i] = r[i];
    v[i] = s[i];
  }
}

static void Test_Traj_dclothoidwp(const real_T x[21], const real_T y[21], real_T
  u[2561], real_T v[2561])
{
  for (Test_Traj_B.i20 = 0; Test_Traj_B.i20 < 21; Test_Traj_B.i20++) {
    Test_Traj_B.x_j[Test_Traj_B.i20].re = x[Test_Traj_B.i20];
    Test_Traj_B.x_j[Test_Traj_B.i20].im = y[Test_Traj_B.i20];
  }

  Test_Traj_cloth(Test_Traj_B.x_j, Test_Traj_B.r, Test_Traj_B.s);
  Test_Traj_packageCodegen(Test_Traj_B.r, Test_Traj_B.s, u, v);
}

static void Test_Traj_power(const real_T a[20], real_T y[20])
{
  int32_T b_k;
  for (b_k = 0; b_k < 20; b_k++) {
    y[b_k] = Test_Traj_rt_powd_snf(a[b_k], 2.0);
  }
}

static void Test_Traj_repmat(const real_T a[20], real_T b[500])
{
  int32_T b_jtilecol;
  for (b_jtilecol = 0; b_jtilecol < 25; b_jtilecol++) {
    memcpy(&b[(b_jtilecol * 20 - 1) + 1], &a[0], 20U * sizeof(real_T));
  }
}

static void Test_Traj_fetchAgrad(const real_T x[20], const real_T y[20], real_T
  a[20], real_T dadx[20], real_T dady[20])
{
  static const real_T tmp[351] = { -1.5361481088532109E-40,
    -5.1782003708968662E-38, 5.8080516979367073E-38, -6.2922109794702842E-36,
    1.7744129415359022E-35, -9.8266873453160865E-36, -3.0557011816989596E-34,
    1.9988681524430764E-33, -2.7007621230825949E-33, 9.6497076628562535E-34,
    -8.50146594503621E-33, 8.7613736854720049E-32, -2.8258679893784358E-31,
    2.3637604856716169E-31, -5.8556266604372106E-32, -1.2863962524996432E-31,
    2.229093841830142E-30, -1.1057059963507232E-29, 2.3139349101185755E-29,
    -1.2630223562649489E-29, 2.0068564650639364E-30, -1.1052377502159136E-30,
    3.0309726719642508E-29, -2.57153235020298E-28, 7.9357820762496212E-28,
    -1.1834423538462616E-27, 3.7518152500494656E-28, -9.5988758699827141E-30,
    -5.8444661902772888E-30, 2.2799302267031842E-28, -3.118708591261201E-27,
    1.6937953593997347E-26, -3.4234259338177584E-26, 3.675290577810477E-26,
    -1.6183294340108731E-27, -2.9209077909746285E-27, -2.0493494333051533E-29,
    1.0232091530758262E-27, -2.0119872415420161E-26, 1.8157191663212143E-25,
    -6.8278782273948665E-25, 7.9289707228553727E-25, -5.1713140278139824E-25,
    -3.5757401738269863E-25, 1.7191521549607673E-25, -5.001307006229815E-29,
    2.9234616420394369E-27, -7.3372627735809734E-26, 9.6978563886575261E-25,
    -6.3976458551757164E-24, 1.6073455072306433E-23, -7.37463587795066E-25,
    -7.0522343048774666E-24, 1.4805755563608624E-23, -5.1965352404273039E-24,
    -8.5391792173019132E-29, 5.4962692899068422E-27, -1.5546891778194411E-25,
    2.6049795261751296E-24, -2.6172058881327836E-23, 1.2985982037510549E-22,
    -1.423772303418446E-22, -5.8282903661876709E-22, 4.1133508360308628E-22,
    -1.742659308147939E-22, 8.07786256209318E-23, -9.7738126735700558E-29,
    6.6212355845436972E-27, -1.7707072436748613E-25, 2.8057133511879665E-24,
    -3.4869970759687543E-23, 3.0241871214865029E-22, -9.92012310209099E-22,
    -3.2149566866116185E-21, 1.8710249707031661E-20, -1.2453541845369618E-21,
    -7.5062472154050874E-21, 2.8499865852964518E-22, -6.9207112182904389E-29,
    4.4179830835754724E-27, -4.4762524882779791E-26, -2.450817653228083E-24,
    7.1914140604820392E-23, -7.2673875098954476E-22, 3.3571441047866719E-21,
    -1.5906878744538782E-20, 1.0715370660853569E-19, -2.1813900762258771E-19,
    -3.7882773476137619E-19, 4.4188357957185649E-19, -5.2046323054922296E-20,
    -2.8170935396816464E-29, 7.8914114794548443E-28, 1.528966070127476E-25,
    -1.1332880987718864E-23, 3.3104475572268851E-22, -4.9647512138578754E-21,
    3.9715384015216385E-20, -1.6290821269847189E-19, 3.36612516663913E-19,
    -3.36275918384194E-19, -2.8323208988729979E-18, 1.5348780107717589E-17,
    -1.2231243924447674E-17, 1.5460269152965008E-18, -1.0350259940425787E-29,
    -4.7414043171551787E-28, 1.9707672417753685E-25, -1.4495788889042659E-23,
    5.1378340796211685E-22, -1.0210774519786583E-20, 1.165542649503511E-19,
    -7.1421779330877591E-19, 1.6365283191176908E-18, 4.9170568130837211E-18,
    -4.4186234291063853E-17, 1.6247947613884891E-16, -3.4187835062780104E-16,
    2.2495563268135524E-16, -2.8304172442233909E-17, -9.54190907880087E-30,
    4.33416352213585E-28, 7.30606772876727E-26, -8.4789175470441986E-24,
    3.9746370968729408E-22, -1.0350198533651566E-20, 1.589371276512773E-19,
    -1.3721089740423357E-18, 4.7868869804965763E-18, 1.9699426816042335E-17,
    -2.7595647699194014E-16, 1.2612122765846683E-15, -3.3199758280144047E-15,
    5.1284109097493322E-15, -2.9773954125181772E-15, 3.6686222388116938E-16,
    -7.13761114432792E-30, 8.6070327678610011E-28, -2.5253411261423782E-26,
    -1.429985806399278E-24, 1.4200678258817658E-22, -5.2901273901739912E-21,
    1.0879148930261737E-19, -1.2468905412479112E-18, 5.651703115185149E-18,
    4.073824764700649E-17, -7.7193016891576893E-16, 5.1280294092344238E-15,
    -1.8830251965098877E-14, 4.2082102420983456E-14, -5.4816521831539046E-14,
    2.9056289127761095E-14, -3.5049036301087839E-15, -2.7032712394278119E-30,
    4.4439845217679321E-28, -2.8561533629781625E-26, 7.4263493149653183E-25,
    7.7648205291611823E-24, -1.1313407629960782E-21, 3.4992489982228452E-20,
    -5.11237062122324E-19, 1.9082838069139238E-18, 6.02161124473958E-17,
    -1.1855133738581856E-15, 1.0647602057665829E-14, -5.5915318620809614E-14,
    1.8096099090326831E-13, -3.6385985586845819E-13, 4.2410069501559273E-13,
    -2.106362282048389E-13, 2.4385529408308407E-14, -4.8547818044528891E-31,
    9.5570081279537094E-29, -7.8572054752482576E-27, 3.3174769183447452E-25,
    -6.2142341258768858E-24, -5.0991712996566211E-23, 5.1392990708290932E-21,
    -8.807706142947147E-20, -5.8182766640448854E-19, 5.1419279154935842E-17,
    -1.04407697522146E-15, 1.1898094238539857E-14, -8.5367937011271162E-14,
    3.9513126620957262E-13, -1.1748533341492665E-12, 2.1917257282808794E-12,
    -2.3566809884820566E-12, 1.0795020408261728E-12, -1.5837465906955864E-13,
    -2.7533507225420422E-32, 5.7619182837708977E-30, -4.6471657116787863E-28,
    1.4048422360791874E-26, 3.7650962241144584E-25, -4.9228435831327322E-23,
    1.9071729205179347E-21, -3.3490783882201909E-20, -7.018689437542322E-20,
    1.8324124104655822E-17, -4.7883976550407734E-16, 7.0487303907715931E-15,
    -6.735734123826801E-14, 4.3114382655453385E-13, -1.8436618496422663E-12,
    5.1655481921478335E-12, -9.1498502333527442E-12, 9.53768065186612E-12,
    -5.5096965823391316E-12, -1.9256688414961511E-12, 2.6993907913031997E-33,
    -8.3658508533748674E-31, 1.2360111759498158E-28, -1.1391057286564071E-26,
    7.1943116140837765E-25, -3.2278401611187206E-23, 1.0313736180462972E-21,
    -2.2595952680170383E-20, 2.9013328570466337E-19, -1.4189880636575127E-19,
    -8.2575877751974837E-17, 1.9535524420193836E-15, -2.60333162544509E-14,
    2.2905798368369833E-13, -1.3730942326110817E-12, 5.5797967300488639E-12,
    -1.5044456366394642E-11, 2.5612747661164289E-11, -1.9627816796196334E-11,
    -2.8036172295220303E-11, -1.9615478304946413E-10, 3.8934925377973957E-34,
    -1.2639609126235819E-31, 1.9287682878359229E-29, -1.8332237204928374E-27,
    1.2092531131064511E-25, -5.8236835135326278E-24, 2.0915581782354698E-22,
    -5.5964099612773872E-21, 1.0833579869797173E-19, -1.3736666335311385E-18,
    6.6209633655847283E-18, 1.4362053626673917E-16, -4.0159095765450877E-15,
    5.320276578988179E-14, -4.5399145021925304E-13, 2.6343951113716903E-12,
    -1.0426603808524378E-11, 2.7378813158203465E-11, -2.4213032965198892E-11,
    -6.43589148489966E-11, 8.7111108876109732E-11, -1.58880825805031E-8,
    1.2049379324305816E-35, -4.3610770108214582E-33, 7.4936434757448969E-31,
    -8.1105245364317889E-29, 6.1705088386370215E-27, -3.480752271664829E-25,
    1.4948191338667704E-23, -4.9368146563727049E-22, 1.2499110582545291E-20,
    -2.3793207120554828E-19, 3.2322327482741956E-18, -2.6498507726404211E-17,
    7.8731033015748051E-18, 3.2775331491296092E-15, -5.1807698267687295E-14,
    4.62732644627914E-13, -2.7239785524170987E-12, 1.0896716883650769E-11,
    -1.8645986337651637E-11, 2.5459617591435155E-12, -1.3347654837468073E-8,
    1.3161132276731047E-7, -1.3227534741608429E-6, -9.7984625010885519E-38,
    3.2900432333335651E-35, -4.4581754057254838E-33, 2.5824817729473294E-31,
    5.2049615357860253E-30, -2.1583876518311414E-27, 1.9476950757610683E-25,
    -1.0716316264212252E-23, 4.1440657240625748E-22, -1.1817624319451798E-20,
    2.5249339155046378E-19, -4.0233948389965105E-18, 4.64169135391771E-17,
    -3.5476759515651092E-16, 1.1999262837080123E-15, 8.516412269170767E-15,
    -1.527199343162684E-13, 1.1449867637138848E-12, -3.6599461401055181E-12,
    -4.6103940452468584E-11, -4.7424213964325014E-9, 1.4095535848735113E-8,
    1.1415162393763462E-5, -0.00011904761791914855, -7.7487127476207258E-39,
    3.1576790378728681E-36, -5.9250135047007422E-34, 6.7643789484475193E-32,
    -5.220570875188387E-30, 2.8506788574160792E-28, -1.1098370767710674E-26,
    2.9468645436878283E-25, -4.2328657438375513E-24, -3.3901276335768838E-23,
    3.8407990599986091E-21, -1.1933448342985106E-19, 2.3702576054378613E-18,
    -3.3709086299905129E-17, 3.5240422748635714E-16, -2.688297081936284E-15,
    1.4426938768292247E-14, -4.5785087028675909E-14, 1.6710103243486247E-14,
    -1.1024143067873009E-11, -3.3079062392811025E-10, 2.8376658214791753E-8,
    2.8265347449301076E-6, 3.9682541488440042E-5, -0.016666666666889381,
    -8.6841596356231729E-42, 3.1939131296905081E-39, -4.8490390875687847E-37,
    3.2729122440862841E-35, 5.3980586162289553E-34, -3.3686936226391223E-31,
    3.7197707807256541E-29, -2.5380412938111731E-27, 1.2494404817163045E-25,
    -4.6966036280739172E-24, 1.3852307187625331E-22, -3.2509821682467773E-21,
    6.1100085267801761E-20, -9.20594856358596E-19, 1.1081925404564449E-17,
    -1.0575868027372313E-16, 7.920139233623936E-16, -4.5514965597202215E-15,
    1.3296256931854534E-14, -3.345171633728989E-13, 1.7101904098836834E-11,
    2.4300392651460408E-9, 4.6155748216027864E-8, -1.5460729722609369E-5,
    -0.00238095238099261, 1.0000000000000047 };

  const real_T *c;
  for (Test_Traj_B.i_pa = 0; Test_Traj_B.i_pa < 20; Test_Traj_B.i_pa++) {
    Test_Traj_B.u_k[Test_Traj_B.i_pa] = x[Test_Traj_B.i_pa] - y[Test_Traj_B.i_pa];
    Test_Traj_B.v_i[Test_Traj_B.i_pa] = x[Test_Traj_B.i_pa] + y[Test_Traj_B.i_pa];
  }

  c = &tmp[0];
  Test_Traj_B.n_iy = 351;
  Test_Traj_power(Test_Traj_B.u_k, Test_Traj_B.dadr);
  Test_Traj_repmat(Test_Traj_B.dadr, Test_Traj_B.dv);
  for (Test_Traj_B.b_k_j = 0; Test_Traj_B.b_k_j < 20; Test_Traj_B.b_k_j++) {
    Test_Traj_B.x[Test_Traj_B.b_k_j] = 1.0;
  }

  memcpy(&Test_Traj_B.x[20], &Test_Traj_B.dv[0], 500U * sizeof(real_T));
  for (Test_Traj_B.b_k_j = 0; Test_Traj_B.b_k_j < 25; Test_Traj_B.b_k_j++) {
    Test_Traj_B.b_subsb_idx_1 = Test_Traj_B.b_k_j + 1;
    for (Test_Traj_B.i_pa = 0; Test_Traj_B.i_pa < 20; Test_Traj_B.i_pa++) {
      Test_Traj_B.x_tmp_d = 20 * Test_Traj_B.b_subsb_idx_1 + Test_Traj_B.i_pa;
      Test_Traj_B.x[Test_Traj_B.x_tmp_d] *= Test_Traj_B.x[20 * Test_Traj_B.b_k_j
        + Test_Traj_B.i_pa];
    }
  }

  Test_Traj_power(Test_Traj_B.v_i, Test_Traj_B.dadr);
  Test_Traj_repmat(Test_Traj_B.dadr, Test_Traj_B.dv);
  for (Test_Traj_B.b_k_j = 0; Test_Traj_B.b_k_j < 20; Test_Traj_B.b_k_j++) {
    Test_Traj_B.x_o[Test_Traj_B.b_k_j] = 1.0;
  }

  memcpy(&Test_Traj_B.x_o[20], &Test_Traj_B.dv[0], 500U * sizeof(real_T));
  for (Test_Traj_B.b_k_j = 0; Test_Traj_B.b_k_j < 25; Test_Traj_B.b_k_j++) {
    Test_Traj_B.b_subsb_idx_1 = Test_Traj_B.b_k_j + 1;
    for (Test_Traj_B.i_pa = 0; Test_Traj_B.i_pa < 20; Test_Traj_B.i_pa++) {
      Test_Traj_B.x_tmp_d = 20 * Test_Traj_B.b_subsb_idx_1 + Test_Traj_B.i_pa;
      Test_Traj_B.x_o[Test_Traj_B.x_tmp_d] *= Test_Traj_B.x_o[20 *
        Test_Traj_B.b_k_j + Test_Traj_B.i_pa];
    }
  }

  memset(&a[0], 0, 20U * sizeof(real_T));
  memset(&Test_Traj_B.dadr[0], 0, 20U * sizeof(real_T));
  memset(&dady[0], 0, 20U * sizeof(real_T));
  Test_Traj_B.i_d = 0.0;
  Test_Traj_B.j_g = 0.0;
  while (Test_Traj_B.n_iy > 0) {
    Test_Traj_B.c_tmp_e = c[Test_Traj_B.n_iy - 1];
    Test_Traj_B.b_subsb_idx_1 = static_cast<int32_T>(Test_Traj_B.i_d + 1.0);
    Test_Traj_B.x_tmp_d = static_cast<int32_T>(Test_Traj_B.j_g + 1.0);
    for (Test_Traj_B.b_k_j = 0; Test_Traj_B.b_k_j < 20; Test_Traj_B.b_k_j++) {
      a[Test_Traj_B.b_k_j] += Test_Traj_B.x[(Test_Traj_B.b_subsb_idx_1 - 1) * 20
        + Test_Traj_B.b_k_j] * Test_Traj_B.c_tmp_e * Test_Traj_B.x_o
        [(Test_Traj_B.x_tmp_d - 1) * 20 + Test_Traj_B.b_k_j];
    }

    if (Test_Traj_B.i_d > 0.0) {
      Test_Traj_B.i_e = (Test_Traj_B.i_d + 1.0) * Test_Traj_B.c_tmp_e;
      Test_Traj_B.i_pa = static_cast<int32_T>(Test_Traj_B.i_d);
      for (Test_Traj_B.b_k_j = 0; Test_Traj_B.b_k_j < 20; Test_Traj_B.b_k_j++) {
        Test_Traj_B.dadr[Test_Traj_B.b_k_j] += Test_Traj_B.x[(Test_Traj_B.i_pa -
          1) * 20 + Test_Traj_B.b_k_j] * Test_Traj_B.i_e * Test_Traj_B.x_o
          [(Test_Traj_B.x_tmp_d - 1) * 20 + Test_Traj_B.b_k_j];
      }
    }

    if (Test_Traj_B.j_g > 0.0) {
      Test_Traj_B.c_tmp_e *= Test_Traj_B.j_g + 1.0;
      Test_Traj_B.i_pa = static_cast<int32_T>(Test_Traj_B.j_g);
      for (Test_Traj_B.b_k_j = 0; Test_Traj_B.b_k_j < 20; Test_Traj_B.b_k_j++) {
        dady[Test_Traj_B.b_k_j] += Test_Traj_B.x[(Test_Traj_B.b_subsb_idx_1 - 1)
          * 20 + Test_Traj_B.b_k_j] * Test_Traj_B.c_tmp_e * Test_Traj_B.x_o
          [(Test_Traj_B.i_pa - 1) * 20 + Test_Traj_B.b_k_j];
      }
    }

    Test_Traj_B.j_g++;
    if (Test_Traj_B.i_d + Test_Traj_B.j_g > 25.0) {
      Test_Traj_B.i_d++;
      Test_Traj_B.j_g = 0.0;
    }

    Test_Traj_B.n_iy--;
  }

  for (Test_Traj_B.i_pa = 0; Test_Traj_B.i_pa < 20; Test_Traj_B.i_pa++) {
    Test_Traj_B.i_d = dady[Test_Traj_B.i_pa] * Test_Traj_B.v_i[Test_Traj_B.i_pa];
    Test_Traj_B.j_g = Test_Traj_B.dadr[Test_Traj_B.i_pa] *
      Test_Traj_B.u_k[Test_Traj_B.i_pa];
    dadx[Test_Traj_B.i_pa] = (2.0 * Test_Traj_B.v_i[Test_Traj_B.i_pa] *
      (Test_Traj_B.i_d + Test_Traj_B.j_g) + a[Test_Traj_B.i_pa]) * 3.0;
    dady[Test_Traj_B.i_pa] = (2.0 * Test_Traj_B.v_i[Test_Traj_B.i_pa] *
      (Test_Traj_B.i_d - Test_Traj_B.j_g) + a[Test_Traj_B.i_pa]) * 3.0;
    Test_Traj_B.dadr[Test_Traj_B.i_pa] = Test_Traj_B.j_g;
    a[Test_Traj_B.i_pa] *= 3.0 * Test_Traj_B.v_i[Test_Traj_B.i_pa];
  }
}

static void Test_Traj_fresnelg1(const real_T a[20], const real_T d[20], const
  real_T c[20], creal_T z[20], creal_T dz[20])
{
  boolean_T exitg1;
  for (Test_Traj_B.i_g2 = 0; Test_Traj_B.i_g2 < 20; Test_Traj_B.i_g2++) {
    z[Test_Traj_B.i_g2].re = 0.0;
    z[Test_Traj_B.i_g2].im = 0.0;
    dz[Test_Traj_B.i_g2].re = 0.0;
    dz[Test_Traj_B.i_g2].im = 0.0;
    Test_Traj_B.d_j[Test_Traj_B.i_g2] = d[Test_Traj_B.i_g2] - a[Test_Traj_B.i_g2];
  }

  Test_Traj_power(Test_Traj_B.d_j, Test_Traj_B.x_a);
  for (Test_Traj_B.i_g2 = 0; Test_Traj_B.i_g2 < 20; Test_Traj_B.i_g2++) {
    Test_Traj_B.x_iei = Test_Traj_B.x_a[Test_Traj_B.i_g2] / (4.0 *
      a[Test_Traj_B.i_g2]);
    Test_Traj_B.criteria_d[Test_Traj_B.i_g2] = (fabs(Test_Traj_B.x_iei) <
      628.31853071795865);
    Test_Traj_B.x_a[Test_Traj_B.i_g2] = Test_Traj_B.x_iei;
  }

  Test_Traj_B.idx_kv = 0;
  Test_Traj_B.b_ii_b = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii_b - 1 < 20)) {
    if (Test_Traj_B.criteria_d[Test_Traj_B.b_ii_b - 1]) {
      Test_Traj_B.idx_kv++;
      Test_Traj_B.ii_data_h[Test_Traj_B.idx_kv - 1] = Test_Traj_B.b_ii_b;
      if (Test_Traj_B.idx_kv >= 20) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii_b++;
      }
    } else {
      Test_Traj_B.b_ii_b++;
    }
  }

  if (1 > Test_Traj_B.idx_kv) {
    Test_Traj_B.idx_kv = 0;
  }

  for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_kv;
       Test_Traj_B.b_ii_b++) {
    Test_Traj_B.ilarge_data_a[Test_Traj_B.b_ii_b] =
      Test_Traj_B.ii_data_h[Test_Traj_B.b_ii_b];
  }

  Test_Traj_B.i_g2 = 0;
  Test_Traj_B.b_ii_b = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii_b - 1 < 20)) {
    if (!Test_Traj_B.criteria_d[Test_Traj_B.b_ii_b - 1]) {
      Test_Traj_B.i_g2++;
      Test_Traj_B.ii_data_h[Test_Traj_B.i_g2 - 1] = Test_Traj_B.b_ii_b;
      if (Test_Traj_B.i_g2 >= 20) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii_b++;
      }
    } else {
      Test_Traj_B.b_ii_b++;
    }
  }

  if (1 > Test_Traj_B.i_g2) {
    Test_Traj_B.i_g2 = 0;
  }

  for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.i_g2;
       Test_Traj_B.b_ii_b++) {
    Test_Traj_B.ismall_data_h[Test_Traj_B.b_ii_b] =
      Test_Traj_B.ii_data_h[Test_Traj_B.b_ii_b];
  }

  Test_Traj_B.idx_l = 0;
  Test_Traj_B.b_ii_b = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii_b - 1 < 20)) {
    Test_Traj_B.ii_g = Test_Traj_B.b_ii_b - 1;
    if ((d[Test_Traj_B.ii_g] == 0.0) && (a[Test_Traj_B.ii_g] == 0.0)) {
      Test_Traj_B.idx_l++;
      Test_Traj_B.ii_data_h[Test_Traj_B.idx_l - 1] = Test_Traj_B.ii_g + 1;
      if (Test_Traj_B.idx_l >= 20) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii_b++;
      }
    } else {
      Test_Traj_B.b_ii_b++;
    }
  }

  if (1 > Test_Traj_B.idx_l) {
    Test_Traj_B.idx_l = 0;
  }

  for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_l;
       Test_Traj_B.b_ii_b++) {
    Test_Traj_B.izero_data_o[Test_Traj_B.b_ii_b] =
      Test_Traj_B.ii_data_h[Test_Traj_B.b_ii_b];
  }

  if (Test_Traj_B.idx_kv != 0) {
    Test_Traj_B.a_size_eo = Test_Traj_B.idx_kv;
    Test_Traj_B.d_size_fb = Test_Traj_B.idx_kv;
    Test_Traj_B.c_size_k = Test_Traj_B.idx_kv;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_kv;
         Test_Traj_B.b_ii_b++) {
      Test_Traj_B.d_j[Test_Traj_B.b_ii_b] =
        a[Test_Traj_B.ilarge_data_a[Test_Traj_B.b_ii_b] - 1];
      Test_Traj_B.x_a[Test_Traj_B.b_ii_b] =
        d[Test_Traj_B.ilarge_data_a[Test_Traj_B.b_ii_b] - 1];
      Test_Traj_B.c_data_g[Test_Traj_B.b_ii_b] =
        c[Test_Traj_B.ilarge_data_a[Test_Traj_B.b_ii_b] - 1];
    }

    Test_Traj_fresnelgLargea1(Test_Traj_B.d_j, &Test_Traj_B.a_size_eo,
      Test_Traj_B.x_a, &Test_Traj_B.d_size_fb, Test_Traj_B.c_data_g,
      &Test_Traj_B.c_size_k, Test_Traj_B.q_data_m, &Test_Traj_B.q_size_n,
      Test_Traj_B.r_data_o, &Test_Traj_B.r_size_c);
    Test_Traj_B.idx_kv = Test_Traj_B.q_size_n;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_kv;
         Test_Traj_B.b_ii_b++) {
      z[Test_Traj_B.ilarge_data_a[Test_Traj_B.b_ii_b] - 1] =
        Test_Traj_B.q_data_m[Test_Traj_B.b_ii_b];
    }

    Test_Traj_B.idx_kv = Test_Traj_B.r_size_c;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_kv;
         Test_Traj_B.b_ii_b++) {
      dz[Test_Traj_B.ilarge_data_a[Test_Traj_B.b_ii_b] - 1] =
        Test_Traj_B.r_data_o[Test_Traj_B.b_ii_b];
    }
  }

  if (Test_Traj_B.i_g2 != 0) {
    Test_Traj_B.a_size_c = Test_Traj_B.i_g2;
    Test_Traj_B.d_size_d = Test_Traj_B.i_g2;
    Test_Traj_B.c_size_m = Test_Traj_B.i_g2;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.i_g2;
         Test_Traj_B.b_ii_b++) {
      Test_Traj_B.d_j[Test_Traj_B.b_ii_b] =
        a[Test_Traj_B.ismall_data_h[Test_Traj_B.b_ii_b] - 1];
      Test_Traj_B.x_a[Test_Traj_B.b_ii_b] =
        d[Test_Traj_B.ismall_data_h[Test_Traj_B.b_ii_b] - 1];
      Test_Traj_B.c_data_g[Test_Traj_B.b_ii_b] =
        c[Test_Traj_B.ismall_data_h[Test_Traj_B.b_ii_b] - 1];
    }

    Test_Traj_fresnelgSmalla1(Test_Traj_B.d_j, &Test_Traj_B.a_size_c,
      Test_Traj_B.x_a, &Test_Traj_B.d_size_d, Test_Traj_B.c_data_g,
      &Test_Traj_B.c_size_m, Test_Traj_B.q_data_m, &Test_Traj_B.q_size_n,
      Test_Traj_B.r_data_o, &Test_Traj_B.r_size_c);
    Test_Traj_B.idx_kv = Test_Traj_B.q_size_n;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_kv;
         Test_Traj_B.b_ii_b++) {
      z[Test_Traj_B.ismall_data_h[Test_Traj_B.b_ii_b] - 1] =
        Test_Traj_B.q_data_m[Test_Traj_B.b_ii_b];
    }

    Test_Traj_B.idx_kv = Test_Traj_B.r_size_c;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_kv;
         Test_Traj_B.b_ii_b++) {
      dz[Test_Traj_B.ismall_data_h[Test_Traj_B.b_ii_b] - 1] =
        Test_Traj_B.r_data_o[Test_Traj_B.b_ii_b];
    }
  }

  if (Test_Traj_B.idx_l != 0) {
    Test_Traj_B.q_size_n = Test_Traj_B.idx_l;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_l;
         Test_Traj_B.b_ii_b++) {
      Test_Traj_B.x_iei = c[Test_Traj_B.izero_data_o[Test_Traj_B.b_ii_b] - 1];
      Test_Traj_B.q_data_m[Test_Traj_B.b_ii_b].re = Test_Traj_B.x_iei * 0.0;
      Test_Traj_B.q_data_m[Test_Traj_B.b_ii_b].im = Test_Traj_B.x_iei;
      Test_Traj_B.ii_data_h[Test_Traj_B.b_ii_b] =
        Test_Traj_B.izero_data_o[Test_Traj_B.b_ii_b];
    }

    Test_Traj_exp_p(Test_Traj_B.q_data_m, &Test_Traj_B.q_size_n);
    Test_Traj_B.idx_kv = Test_Traj_B.q_size_n;
    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_kv;
         Test_Traj_B.b_ii_b++) {
      z[Test_Traj_B.izero_data_o[Test_Traj_B.b_ii_b] - 1] =
        Test_Traj_B.q_data_m[Test_Traj_B.b_ii_b];
    }

    for (Test_Traj_B.b_ii_b = 0; Test_Traj_B.b_ii_b < Test_Traj_B.idx_l;
         Test_Traj_B.b_ii_b++) {
      dz[Test_Traj_B.ii_data_h[Test_Traj_B.b_ii_b] - 1].re = 0.0;
      dz[Test_Traj_B.ii_data_h[Test_Traj_B.b_ii_b] - 1].im = 0.0;
    }
  }
}

static void Test_Traj_clothoidG1fit2wp(const creal_T z0[20], const real_T
  theta0[20], const creal_T z1[20], const real_T theta1[20], real_T k0[20],
  real_T k1[20], real_T l[20], real_T dk0_dtheta0[20], real_T dk0_dtheta1[20],
  real_T dk1_dtheta0[20], real_T dk1_dtheta1[20])
{
  for (Test_Traj_B.b_k_m = 0; Test_Traj_B.b_k_m < 20; Test_Traj_B.b_k_m++) {
    Test_Traj_B.z_hs.re = z1[Test_Traj_B.b_k_m].re - z0[Test_Traj_B.b_k_m].re;
    Test_Traj_B.z_hs.im = z1[Test_Traj_B.b_k_m].im - z0[Test_Traj_B.b_k_m].im;
    Test_Traj_B.phi_h = rt_atan2d_snf(Test_Traj_B.z_hs.im, Test_Traj_B.z_hs.re);
    Test_Traj_B.b_x_tmp = theta0[Test_Traj_B.b_k_m] - Test_Traj_B.phi_h;
    Test_Traj_B.b_x_n.re = Test_Traj_B.b_x_tmp * 0.0;
    if (Test_Traj_B.b_x_tmp == 0.0) {
      Test_Traj_B.a_re_a = exp(Test_Traj_B.b_x_n.re);
      Test_Traj_B.b_x_tmp = 0.0;
    } else if (rtIsInf(Test_Traj_B.b_x_tmp) && rtIsInf(Test_Traj_B.b_x_n.re) &&
               (Test_Traj_B.b_x_n.re < 0.0)) {
      Test_Traj_B.a_re_a = 0.0;
      Test_Traj_B.b_x_tmp = 0.0;
    } else {
      Test_Traj_B.r_e = exp(Test_Traj_B.b_x_n.re / 2.0);
      Test_Traj_B.a_re_a = Test_Traj_B.r_e * cos(Test_Traj_B.b_x_tmp) *
        Test_Traj_B.r_e;
      Test_Traj_B.b_x_tmp = Test_Traj_B.r_e * sin(Test_Traj_B.b_x_tmp) *
        Test_Traj_B.r_e;
    }

    Test_Traj_B.phi0[Test_Traj_B.b_k_m] = rt_atan2d_snf(Test_Traj_B.b_x_tmp,
      Test_Traj_B.a_re_a);
    Test_Traj_B.b_x_tmp = theta1[Test_Traj_B.b_k_m] - Test_Traj_B.phi_h;
    Test_Traj_B.b_x_n.re = Test_Traj_B.b_x_tmp * 0.0;
    Test_Traj_B.b_x_n.im = Test_Traj_B.b_x_tmp;
    Test_Traj_B.z_b[Test_Traj_B.b_k_m] = Test_Traj_B.z_hs;
    Test_Traj_B.b_x[Test_Traj_B.b_k_m] = Test_Traj_B.b_x_n;
  }

  for (Test_Traj_B.b_k_m = 0; Test_Traj_B.b_k_m < 20; Test_Traj_B.b_k_m++) {
    if (Test_Traj_B.b_x[Test_Traj_B.b_k_m].im == 0.0) {
      Test_Traj_B.a_re_a = exp(Test_Traj_B.b_x[Test_Traj_B.b_k_m].re);
      Test_Traj_B.b_x_tmp = 0.0;
    } else if (rtIsInf(Test_Traj_B.b_x[Test_Traj_B.b_k_m].im) && rtIsInf
               (Test_Traj_B.b_x[Test_Traj_B.b_k_m].re) &&
               (Test_Traj_B.b_x[Test_Traj_B.b_k_m].re < 0.0)) {
      Test_Traj_B.a_re_a = 0.0;
      Test_Traj_B.b_x_tmp = 0.0;
    } else {
      Test_Traj_B.r_e = exp(Test_Traj_B.b_x[Test_Traj_B.b_k_m].re / 2.0);
      Test_Traj_B.a_re_a = Test_Traj_B.r_e * cos
        (Test_Traj_B.b_x[Test_Traj_B.b_k_m].im) * Test_Traj_B.r_e;
      Test_Traj_B.b_x_tmp = Test_Traj_B.r_e * sin
        (Test_Traj_B.b_x[Test_Traj_B.b_k_m].im) * Test_Traj_B.r_e;
    }

    Test_Traj_B.b_x_f.re = Test_Traj_B.a_re_a;
    Test_Traj_B.b_x_f.im = Test_Traj_B.b_x_tmp;
    Test_Traj_B.phi_h = rt_atan2d_snf(Test_Traj_B.b_x_tmp, Test_Traj_B.a_re_a);
    k1[Test_Traj_B.b_k_m] = Test_Traj_B.phi_h -
      Test_Traj_B.phi0[Test_Traj_B.b_k_m];
    Test_Traj_B.b_x[Test_Traj_B.b_k_m] = Test_Traj_B.b_x_f;
    Test_Traj_B.phi1[Test_Traj_B.b_k_m] = Test_Traj_B.phi_h;
  }

  Test_Traj_fetchAgrad(Test_Traj_B.phi0, Test_Traj_B.phi1, Test_Traj_B.phi,
                       Test_Traj_B.da_dphi0, Test_Traj_B.da_dphi1);
  Test_Traj_fresnelg1(Test_Traj_B.phi, k1, Test_Traj_B.phi0, Test_Traj_B.b_x,
                      Test_Traj_B.df_da);
  for (Test_Traj_B.b_k_m = 0; Test_Traj_B.b_k_m < 20; Test_Traj_B.b_k_m++) {
    Test_Traj_B.a_re_a = Test_Traj_rt_hypotd_snf
      (Test_Traj_B.z_b[Test_Traj_B.b_k_m].re, Test_Traj_B.z_b[Test_Traj_B.b_k_m]
       .im);
    Test_Traj_B.phi_h = Test_Traj_B.a_re_a / Test_Traj_B.b_x[Test_Traj_B.b_k_m].
      re;
    Test_Traj_B.z_a.re = Test_Traj_B.b_x[Test_Traj_B.b_k_m].re *
      Test_Traj_B.b_x[Test_Traj_B.b_k_m].re - Test_Traj_B.b_x[Test_Traj_B.b_k_m]
      .im * Test_Traj_B.b_x[Test_Traj_B.b_k_m].im;
    Test_Traj_B.b_x_tmp = Test_Traj_B.b_x[Test_Traj_B.b_k_m].re *
      Test_Traj_B.b_x[Test_Traj_B.b_k_m].im;
    Test_Traj_B.z_a.im = Test_Traj_B.b_x_tmp + Test_Traj_B.b_x_tmp;
    if (Test_Traj_B.z_a.im == 0.0) {
      if (Test_Traj_B.df_da[Test_Traj_B.b_k_m].im == 0.0) {
        Test_Traj_B.b_x_tmp = Test_Traj_B.df_da[Test_Traj_B.b_k_m].re /
          Test_Traj_B.z_a.re;
      } else if (Test_Traj_B.df_da[Test_Traj_B.b_k_m].re == 0.0) {
        Test_Traj_B.b_x_tmp = 0.0;
      } else {
        Test_Traj_B.b_x_tmp = Test_Traj_B.df_da[Test_Traj_B.b_k_m].re /
          Test_Traj_B.z_a.re;
      }
    } else if (Test_Traj_B.z_a.re == 0.0) {
      if (Test_Traj_B.df_da[Test_Traj_B.b_k_m].re == 0.0) {
        Test_Traj_B.b_x_tmp = Test_Traj_B.df_da[Test_Traj_B.b_k_m].im /
          Test_Traj_B.z_a.im;
      } else if (Test_Traj_B.df_da[Test_Traj_B.b_k_m].im == 0.0) {
        Test_Traj_B.b_x_tmp = 0.0;
      } else {
        Test_Traj_B.b_x_tmp = Test_Traj_B.df_da[Test_Traj_B.b_k_m].im /
          Test_Traj_B.z_a.im;
      }
    } else {
      Test_Traj_B.b_x_tmp = fabs(Test_Traj_B.z_a.re);
      Test_Traj_B.r_e = fabs(Test_Traj_B.z_a.im);
      if (Test_Traj_B.b_x_tmp > Test_Traj_B.r_e) {
        Test_Traj_B.b_x_tmp = Test_Traj_B.z_a.im / Test_Traj_B.z_a.re;
        Test_Traj_B.b_x_tmp = (Test_Traj_B.b_x_tmp *
          Test_Traj_B.df_da[Test_Traj_B.b_k_m].im +
          Test_Traj_B.df_da[Test_Traj_B.b_k_m].re) / (Test_Traj_B.b_x_tmp *
          Test_Traj_B.z_a.im + Test_Traj_B.z_a.re);
      } else if (Test_Traj_B.r_e == Test_Traj_B.b_x_tmp) {
        Test_Traj_B.b_x_tmp = ((Test_Traj_B.z_a.re > 0.0 ? 0.5 : -0.5) *
          Test_Traj_B.df_da[Test_Traj_B.b_k_m].re + (Test_Traj_B.z_a.im > 0.0 ?
          0.5 : -0.5) * Test_Traj_B.df_da[Test_Traj_B.b_k_m].im) /
          Test_Traj_B.b_x_tmp;
      } else {
        Test_Traj_B.b_x_tmp = Test_Traj_B.z_a.re / Test_Traj_B.z_a.im;
        Test_Traj_B.b_x_tmp = (Test_Traj_B.b_x_tmp *
          Test_Traj_B.df_da[Test_Traj_B.b_k_m].re +
          Test_Traj_B.df_da[Test_Traj_B.b_k_m].im) / (Test_Traj_B.b_x_tmp *
          Test_Traj_B.z_a.re + Test_Traj_B.z_a.im);
      }
    }

    Test_Traj_B.a_re_a = -Test_Traj_B.a_re_a * Test_Traj_B.b_x_tmp;
    Test_Traj_B.b_x_tmp = Test_Traj_rt_powd_snf(Test_Traj_B.phi_h, 2.0);
    Test_Traj_B.r_e = k1[Test_Traj_B.b_k_m] - Test_Traj_B.phi[Test_Traj_B.b_k_m];
    Test_Traj_B.dk1_dtheta0 = -Test_Traj_B.a_re_a *
      Test_Traj_B.da_dphi0[Test_Traj_B.b_k_m];
    Test_Traj_B.dk0_dtheta0 = Test_Traj_B.dk1_dtheta0 / Test_Traj_B.b_x_tmp *
      Test_Traj_B.r_e + (-1.0 - Test_Traj_B.da_dphi0[Test_Traj_B.b_k_m]) /
      Test_Traj_B.phi_h;
    Test_Traj_B.a_re_a = -Test_Traj_B.a_re_a *
      Test_Traj_B.da_dphi1[Test_Traj_B.b_k_m];
    Test_Traj_B.dk0_dtheta1 = Test_Traj_B.a_re_a / Test_Traj_B.b_x_tmp *
      Test_Traj_B.r_e + (1.0 - Test_Traj_B.da_dphi1[Test_Traj_B.b_k_m]) /
      Test_Traj_B.phi_h;
    Test_Traj_B.k1_e = k1[Test_Traj_B.b_k_m] + Test_Traj_B.phi[Test_Traj_B.b_k_m];
    Test_Traj_B.dk1_dtheta0 = Test_Traj_B.dk1_dtheta0 / Test_Traj_B.b_x_tmp *
      Test_Traj_B.k1_e + (Test_Traj_B.da_dphi0[Test_Traj_B.b_k_m] + -1.0) /
      Test_Traj_B.phi_h;
    Test_Traj_B.a_re_a = Test_Traj_B.a_re_a / Test_Traj_B.b_x_tmp *
      Test_Traj_B.k1_e + (Test_Traj_B.da_dphi1[Test_Traj_B.b_k_m] + 1.0) /
      Test_Traj_B.phi_h;
    if (Test_Traj_B.phi_h == 0.0) {
      Test_Traj_B.dk0_dtheta0 = 0.0;
      Test_Traj_B.dk0_dtheta1 = 0.0;
      Test_Traj_B.dk1_dtheta0 = 0.0;
      Test_Traj_B.a_re_a = 0.0;
    }

    Test_Traj_B.r_e /= Test_Traj_B.phi_h;
    Test_Traj_B.k1_e /= Test_Traj_B.phi_h;
    if (Test_Traj_B.phi_h == 0.0) {
      Test_Traj_B.r_e = 0.0;
      Test_Traj_B.k1_e = 0.0;
    }

    Test_Traj_B.z_b[Test_Traj_B.b_k_m] = Test_Traj_B.z_a;
    l[Test_Traj_B.b_k_m] = Test_Traj_B.phi_h;
    dk1_dtheta1[Test_Traj_B.b_k_m] = Test_Traj_B.a_re_a;
    dk0_dtheta0[Test_Traj_B.b_k_m] = Test_Traj_B.dk0_dtheta0;
    k1[Test_Traj_B.b_k_m] = Test_Traj_B.k1_e;
    k0[Test_Traj_B.b_k_m] = Test_Traj_B.r_e;
    dk1_dtheta0[Test_Traj_B.b_k_m] = Test_Traj_B.dk1_dtheta0;
    dk0_dtheta1[Test_Traj_B.b_k_m] = Test_Traj_B.dk0_dtheta1;
  }
}

static void Test_Traj_mulJt(const real_T Jtri[60], const real_T x[20], real_T y
  [20])
{
  int32_T y_tmp;
  Test_Traj_B.iv5[19] = 0;
  Test_Traj_B.iv6[0] = 19;
  Test_Traj_B.iv7[0] = 19;
  for (y_tmp = 0; y_tmp < 19; y_tmp++) {
    Test_Traj_B.iv5[y_tmp] = static_cast<int8_T>(y_tmp + 1);
    Test_Traj_B.iv6[y_tmp + 1] = static_cast<int8_T>(y_tmp);
    Test_Traj_B.iv7[y_tmp + 1] = static_cast<int8_T>(y_tmp);
  }

  for (y_tmp = 0; y_tmp < 20; y_tmp++) {
    y[y_tmp] = (Jtri[y_tmp + 20] * x[y_tmp] + Jtri[y_tmp] *
                x[Test_Traj_B.iv5[y_tmp]]) + Jtri[Test_Traj_B.iv6[y_tmp] + 40] *
      x[Test_Traj_B.iv7[y_tmp]];
  }
}

static boolean_T Test_Traj_any(const boolean_T x[20])
{
  boolean_T y;
  int32_T b_k;
  boolean_T exitg1;
  y = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k <= 19)) {
    if (!x[b_k]) {
      b_k++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

static void Test_Traj_sympentdisolve(const real_T d[20], const real_T e[20],
  const real_T f[20], const real_T b[100], real_T x[100])
{
  int32_T k;
  int32_T tmp;
  int32_T i;
  int32_T z_tmp;
  memset(&x[0], 0, 100U * sizeof(real_T));
  memset(&Test_Traj_B.alpha_l[0], 0, 20U * sizeof(real_T));
  memset(&Test_Traj_B.b_gamma_o[0], 0, 19U * sizeof(real_T));
  memset(&Test_Traj_B.delta_c[0], 0, 18U * sizeof(real_T));
  Test_Traj_B.alpha_l[0] = d[0];
  Test_Traj_B.b_gamma_o[0] = e[0] / d[0];
  Test_Traj_B.delta_c[0] = f[0] / d[0];
  Test_Traj_B.alpha_l[1] = d[1] - e[0] * Test_Traj_B.b_gamma_o[0];
  Test_Traj_B.b_gamma_o[1] = (e[1] - f[0] * Test_Traj_B.b_gamma_o[0]) /
    Test_Traj_B.alpha_l[1];
  Test_Traj_B.delta_c[1] = f[1] / Test_Traj_B.alpha_l[1];
  for (Test_Traj_B.b_k_mc = 0; Test_Traj_B.b_k_mc < 16; Test_Traj_B.b_k_mc++) {
    Test_Traj_B.alpha_tmp_g = Test_Traj_B.b_gamma_o[Test_Traj_B.b_k_mc + 1];
    Test_Traj_B.alpha_l[Test_Traj_B.b_k_mc + 2] = (d[Test_Traj_B.b_k_mc + 2] -
      f[Test_Traj_B.b_k_mc] * Test_Traj_B.delta_c[Test_Traj_B.b_k_mc]) -
      Test_Traj_B.alpha_tmp_g * Test_Traj_B.alpha_tmp_g *
      Test_Traj_B.alpha_l[Test_Traj_B.b_k_mc + 1];
    Test_Traj_B.b_gamma_tmp_g = Test_Traj_B.alpha_l[Test_Traj_B.b_k_mc + 2];
    Test_Traj_B.b_gamma_o[Test_Traj_B.b_k_mc + 2] = (e[Test_Traj_B.b_k_mc + 2] -
      f[Test_Traj_B.b_k_mc + 1] * Test_Traj_B.alpha_tmp_g) /
      Test_Traj_B.b_gamma_tmp_g;
    Test_Traj_B.delta_c[Test_Traj_B.b_k_mc + 2] = f[Test_Traj_B.b_k_mc + 2] /
      Test_Traj_B.b_gamma_tmp_g;
  }

  Test_Traj_B.alpha_l[18] = (d[18] - f[16] * Test_Traj_B.delta_c[16]) -
    Test_Traj_B.b_gamma_o[17] * Test_Traj_B.b_gamma_o[17] * Test_Traj_B.alpha_l
    [17];
  Test_Traj_B.b_gamma_o[18] = (e[18] - f[17] * Test_Traj_B.b_gamma_o[17]) /
    Test_Traj_B.alpha_l[18];
  Test_Traj_B.alpha_l[19] = (d[19] - f[17] * Test_Traj_B.delta_c[17]) -
    Test_Traj_B.b_gamma_o[18] * Test_Traj_B.b_gamma_o[18] * Test_Traj_B.alpha_l
    [18];
  memset(&Test_Traj_B.z[0], 0, 100U * sizeof(real_T));
  for (Test_Traj_B.b_k_mc = 0; Test_Traj_B.b_k_mc < 5; Test_Traj_B.b_k_mc++) {
    Test_Traj_B.z[20 * Test_Traj_B.b_k_mc] = b[20 * Test_Traj_B.b_k_mc];
    z_tmp = 20 * Test_Traj_B.b_k_mc + 1;
    Test_Traj_B.z[z_tmp] = b[z_tmp] - Test_Traj_B.z[20 * Test_Traj_B.b_k_mc] *
      Test_Traj_B.b_gamma_o[0];
  }

  for (Test_Traj_B.c_k = 0; Test_Traj_B.c_k < 18; Test_Traj_B.c_k++) {
    Test_Traj_B.alpha_tmp_g = Test_Traj_B.b_gamma_o[Test_Traj_B.c_k + 1];
    Test_Traj_B.b_k_mc = Test_Traj_B.c_k + 2;
    z_tmp = Test_Traj_B.c_k + 1;
    for (k = 0; k < 5; k++) {
      Test_Traj_B.b_o[k] = (b[(20 * k + Test_Traj_B.c_k) + 2] - Test_Traj_B.z
                            [(20 * k + Test_Traj_B.b_k_mc) - 1] *
                            Test_Traj_B.alpha_tmp_g) - Test_Traj_B.z[(20 * k +
        z_tmp) - 1] * Test_Traj_B.delta_c[Test_Traj_B.c_k];
    }

    for (Test_Traj_B.b_k_mc = 0; Test_Traj_B.b_k_mc < 5; Test_Traj_B.b_k_mc++) {
      Test_Traj_B.z[(Test_Traj_B.c_k + 20 * Test_Traj_B.b_k_mc) + 2] =
        Test_Traj_B.b_o[Test_Traj_B.b_k_mc];
    }
  }

  for (Test_Traj_B.b_k_mc = 0; Test_Traj_B.b_k_mc < 5; Test_Traj_B.b_k_mc++) {
    for (k = 0; k < 20; k++) {
      z_tmp = 20 * Test_Traj_B.b_k_mc + k;
      Test_Traj_B.c[z_tmp] = Test_Traj_B.z[z_tmp] / Test_Traj_B.alpha_l[k];
    }

    k = 20 * Test_Traj_B.b_k_mc + 19;
    x[k] = Test_Traj_B.c[k];
    z_tmp = 20 * Test_Traj_B.b_k_mc + 18;
    Test_Traj_B.b_o[Test_Traj_B.b_k_mc] = Test_Traj_B.c[z_tmp] - x[k] *
      Test_Traj_B.b_gamma_o[18];
    x[z_tmp] = Test_Traj_B.b_o[Test_Traj_B.b_k_mc];
  }

  for (Test_Traj_B.c_k = 0; Test_Traj_B.c_k < 18; Test_Traj_B.c_k++) {
    Test_Traj_B.b_k_mc = 18 - Test_Traj_B.c_k;
    Test_Traj_B.alpha_tmp_g = Test_Traj_B.b_gamma_o[17 - Test_Traj_B.c_k];
    z_tmp = 19 - Test_Traj_B.c_k;
    Test_Traj_B.b_gamma_tmp_g = Test_Traj_B.delta_c[17 - Test_Traj_B.c_k];
    k = 20 - Test_Traj_B.c_k;
    tmp = 18 - Test_Traj_B.c_k;
    for (i = 0; i < 5; i++) {
      Test_Traj_B.b_o[i] = (Test_Traj_B.c[(20 * i + Test_Traj_B.b_k_mc) - 1] -
                            x[(20 * i + z_tmp) - 1] * Test_Traj_B.alpha_tmp_g) -
        x[(20 * i + k) - 1] * Test_Traj_B.b_gamma_tmp_g;
    }

    for (Test_Traj_B.b_k_mc = 0; Test_Traj_B.b_k_mc < 5; Test_Traj_B.b_k_mc++) {
      x[(tmp + 20 * Test_Traj_B.b_k_mc) - 1] =
        Test_Traj_B.b_o[Test_Traj_B.b_k_mc];
    }
  }
}

static void Test_Traj_cycsympentdisolve(const real_T d[20], const real_T e[20],
  const real_T f[20], const real_T b[20], real_T x[20])
{
  static const int8_T tmp[80] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  for (Test_Traj_B.i10 = 0; Test_Traj_B.i10 < 80; Test_Traj_B.i10++) {
    Test_Traj_B.dv3[Test_Traj_B.i10] = tmp[Test_Traj_B.i10];
  }

  memcpy(&Test_Traj_B.dv3[80], &b[0], 20U * sizeof(real_T));
  Test_Traj_sympentdisolve(d, e, f, Test_Traj_B.dv3, Test_Traj_B.zy);
  memset(&Test_Traj_B.v_l[0], 0, 80U * sizeof(real_T));
  Test_Traj_B.v_l[18] = f[18];
  Test_Traj_B.v_l[19] = e[19];
  Test_Traj_B.v_l[39] = f[19];
  Test_Traj_B.v_l[40] = f[18];
  Test_Traj_B.v_l[60] = e[19];
  Test_Traj_B.v_l[61] = f[19];
  for (Test_Traj_B.i10 = 0; Test_Traj_B.i10 < 16; Test_Traj_B.i10++) {
    Test_Traj_B.b_I_m[Test_Traj_B.i10] = 0;
  }

  Test_Traj_B.b_I_m[0] = 1;
  Test_Traj_B.b_I_m[5] = 1;
  Test_Traj_B.b_I_m[10] = 1;
  Test_Traj_B.b_I_m[15] = 1;
  for (Test_Traj_B.i10 = 0; Test_Traj_B.i10 < 20; Test_Traj_B.i10++) {
    Test_Traj_B.x_tmp_tmp = Test_Traj_B.i10 << 2;
    Test_Traj_B.x_tmp[Test_Traj_B.x_tmp_tmp] = Test_Traj_B.v_l[Test_Traj_B.i10];
    Test_Traj_B.x_tmp[Test_Traj_B.x_tmp_tmp + 1] =
      Test_Traj_B.v_l[Test_Traj_B.i10 + 20];
    Test_Traj_B.x_tmp[Test_Traj_B.x_tmp_tmp + 2] =
      Test_Traj_B.v_l[Test_Traj_B.i10 + 40];
    Test_Traj_B.x_tmp[Test_Traj_B.x_tmp_tmp + 3] =
      Test_Traj_B.v_l[Test_Traj_B.i10 + 60];
  }

  for (Test_Traj_B.i10 = 0; Test_Traj_B.i10 < 4; Test_Traj_B.i10++) {
    Test_Traj_B.dv12[Test_Traj_B.i10] = 0.0;
    for (Test_Traj_B.x_tmp_tmp = 0; Test_Traj_B.x_tmp_tmp < 20;
         Test_Traj_B.x_tmp_tmp++) {
      Test_Traj_B.dv12[Test_Traj_B.i10] += Test_Traj_B.x_tmp
        [(Test_Traj_B.x_tmp_tmp << 2) + Test_Traj_B.i10] *
        Test_Traj_B.zy[Test_Traj_B.x_tmp_tmp + 80];
    }

    for (Test_Traj_B.x_tmp_tmp = 0; Test_Traj_B.x_tmp_tmp < 4;
         Test_Traj_B.x_tmp_tmp++) {
      Test_Traj_B.d8 = 0.0;
      for (Test_Traj_B.b_I_tmp = 0; Test_Traj_B.b_I_tmp < 20;
           Test_Traj_B.b_I_tmp++) {
        Test_Traj_B.d8 += Test_Traj_B.x_tmp[(Test_Traj_B.b_I_tmp << 2) +
          Test_Traj_B.i10] * Test_Traj_B.zy[20 * Test_Traj_B.x_tmp_tmp +
          Test_Traj_B.b_I_tmp];
      }

      Test_Traj_B.b_I_tmp = (Test_Traj_B.x_tmp_tmp << 2) + Test_Traj_B.i10;
      Test_Traj_B.b_I[Test_Traj_B.b_I_tmp] = static_cast<real_T>
        (Test_Traj_B.b_I_m[Test_Traj_B.b_I_tmp]) + Test_Traj_B.d8;
    }
  }

  Test_Traj_mldivide_ph(Test_Traj_B.b_I, Test_Traj_B.dv12);
  for (Test_Traj_B.i10 = 0; Test_Traj_B.i10 < 20; Test_Traj_B.i10++) {
    x[Test_Traj_B.i10] = Test_Traj_B.zy[Test_Traj_B.i10 + 80] -
      (((Test_Traj_B.zy[Test_Traj_B.i10 + 20] * Test_Traj_B.dv12[1] +
         Test_Traj_B.zy[Test_Traj_B.i10] * Test_Traj_B.dv12[0]) +
        Test_Traj_B.zy[Test_Traj_B.i10 + 40] * Test_Traj_B.dv12[2]) +
       Test_Traj_B.zy[Test_Traj_B.i10 + 60] * Test_Traj_B.dv12[3]);
  }
}

static void Test_Traj_solveDampenedHessian(const real_T Jtri[60], real_T lambda,
  const real_T v[20], real_T dx[20])
{
  static const int8_T tmp[20] = { 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18 };

  for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 20; Test_Traj_B.b_k_jb++) {
    Test_Traj_B.d[Test_Traj_B.b_k_jb] = ((Test_Traj_rt_powd_snf
      (Jtri[Test_Traj_B.b_k_jb], 2.0) + Test_Traj_rt_powd_snf
      (Jtri[Test_Traj_B.b_k_jb + 20], 2.0)) + Test_Traj_rt_powd_snf
      (Jtri[tmp[Test_Traj_B.b_k_jb] + 40], 2.0)) * (lambda + 1.0);
  }

  for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 19; Test_Traj_B.b_k_jb++) {
    Test_Traj_B.e_tmp_k = Test_Traj_B.b_k_jb + 1;
    Test_Traj_B.e_tmp[Test_Traj_B.b_k_jb] = static_cast<int8_T>
      (Test_Traj_B.e_tmp_k);
    Test_Traj_B.e_tmp_p[Test_Traj_B.b_k_jb] = static_cast<int8_T>
      (Test_Traj_B.e_tmp_k);
  }

  Test_Traj_B.e_tmp[19] = 0;
  for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 20; Test_Traj_B.b_k_jb++) {
    Test_Traj_B.e_h[Test_Traj_B.b_k_jb] =
      Jtri[Test_Traj_B.e_tmp[Test_Traj_B.b_k_jb] + 20] * Jtri[Test_Traj_B.b_k_jb]
      + Jtri[Test_Traj_B.b_k_jb + 20] * Jtri[Test_Traj_B.b_k_jb + 40];
  }

  for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 19; Test_Traj_B.b_k_jb++) {
    Test_Traj_B.e_tmp[Test_Traj_B.b_k_jb] =
      Test_Traj_B.e_tmp_p[Test_Traj_B.b_k_jb];
  }

  Test_Traj_B.e_tmp[19] = 0;
  for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 20; Test_Traj_B.b_k_jb++) {
    Test_Traj_B.f_m[Test_Traj_B.b_k_jb] =
      Jtri[Test_Traj_B.e_tmp[Test_Traj_B.b_k_jb] + 40] * Jtri[Test_Traj_B.b_k_jb];
  }

  if ((Jtri[19] == 0.0) && (Jtri[59] == 0.0)) {
    memset(&dx[0], 0, 20U * sizeof(real_T));
    memset(&Test_Traj_B.alpha_g[0], 0, 20U * sizeof(real_T));
    memset(&Test_Traj_B.b_gamma[0], 0, 19U * sizeof(real_T));
    memset(&Test_Traj_B.delta[0], 0, 18U * sizeof(real_T));
    Test_Traj_B.alpha_g[0] = Test_Traj_B.d[0];
    Test_Traj_B.b_gamma[0] = Test_Traj_B.e_h[0] / Test_Traj_B.d[0];
    Test_Traj_B.delta[0] = Test_Traj_B.f_m[0] / Test_Traj_B.d[0];
    Test_Traj_B.alpha_g[1] = Test_Traj_B.d[1] - Test_Traj_B.e_h[0] *
      Test_Traj_B.b_gamma[0];
    Test_Traj_B.b_gamma[1] = (Test_Traj_B.e_h[1] - Test_Traj_B.f_m[0] *
      Test_Traj_B.b_gamma[0]) / Test_Traj_B.alpha_g[1];
    Test_Traj_B.delta[1] = Test_Traj_B.f_m[1] / Test_Traj_B.alpha_g[1];
    for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 16; Test_Traj_B.b_k_jb++)
    {
      Test_Traj_B.alpha_tmp = Test_Traj_B.b_gamma[Test_Traj_B.b_k_jb + 1];
      Test_Traj_B.alpha_g[Test_Traj_B.b_k_jb + 2] =
        (Test_Traj_B.d[Test_Traj_B.b_k_jb + 2] -
         Test_Traj_B.f_m[Test_Traj_B.b_k_jb] *
         Test_Traj_B.delta[Test_Traj_B.b_k_jb]) - Test_Traj_B.alpha_tmp *
        Test_Traj_B.alpha_tmp * Test_Traj_B.alpha_g[Test_Traj_B.b_k_jb + 1];
      Test_Traj_B.b_gamma_tmp = Test_Traj_B.alpha_g[Test_Traj_B.b_k_jb + 2];
      Test_Traj_B.b_gamma[Test_Traj_B.b_k_jb + 2] =
        (Test_Traj_B.e_h[Test_Traj_B.b_k_jb + 2] -
         Test_Traj_B.f_m[Test_Traj_B.b_k_jb + 1] * Test_Traj_B.alpha_tmp) /
        Test_Traj_B.b_gamma_tmp;
      Test_Traj_B.delta[Test_Traj_B.b_k_jb + 2] =
        Test_Traj_B.f_m[Test_Traj_B.b_k_jb + 2] / Test_Traj_B.b_gamma_tmp;
    }

    Test_Traj_B.alpha_g[18] = (Test_Traj_B.d[18] - Test_Traj_B.f_m[16] *
      Test_Traj_B.delta[16]) - Test_Traj_B.b_gamma[17] * Test_Traj_B.b_gamma[17]
      * Test_Traj_B.alpha_g[17];
    Test_Traj_B.b_gamma[18] = (Test_Traj_B.e_h[18] - Test_Traj_B.f_m[17] *
      Test_Traj_B.b_gamma[17]) / Test_Traj_B.alpha_g[18];
    Test_Traj_B.alpha_g[19] = (Test_Traj_B.d[19] - Test_Traj_B.f_m[17] *
      Test_Traj_B.delta[17]) - Test_Traj_B.b_gamma[18] * Test_Traj_B.b_gamma[18]
      * Test_Traj_B.alpha_g[18];
    memset(&Test_Traj_B.d[0], 0, 20U * sizeof(real_T));
    Test_Traj_B.d[0] = v[0];
    Test_Traj_B.d[1] = v[1] - Test_Traj_B.b_gamma[0] * v[0];
    for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 18; Test_Traj_B.b_k_jb++)
    {
      Test_Traj_B.d[Test_Traj_B.b_k_jb + 2] = (v[Test_Traj_B.b_k_jb + 2] -
        Test_Traj_B.b_gamma[Test_Traj_B.b_k_jb + 1] *
        Test_Traj_B.d[Test_Traj_B.b_k_jb + 1]) -
        Test_Traj_B.delta[Test_Traj_B.b_k_jb] * Test_Traj_B.d[Test_Traj_B.b_k_jb];
    }

    for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 20; Test_Traj_B.b_k_jb++)
    {
      Test_Traj_B.e_h[Test_Traj_B.b_k_jb] = Test_Traj_B.d[Test_Traj_B.b_k_jb] /
        Test_Traj_B.alpha_g[Test_Traj_B.b_k_jb];
    }

    dx[19] = Test_Traj_B.e_h[19];
    dx[18] = Test_Traj_B.e_h[18] - Test_Traj_B.b_gamma[18] * Test_Traj_B.e_h[19];
    for (Test_Traj_B.b_k_jb = 0; Test_Traj_B.b_k_jb < 18; Test_Traj_B.b_k_jb++)
    {
      dx[17 - Test_Traj_B.b_k_jb] = (Test_Traj_B.e_h[17 - Test_Traj_B.b_k_jb] -
        Test_Traj_B.b_gamma[17 - Test_Traj_B.b_k_jb] * dx[18 -
        Test_Traj_B.b_k_jb]) - Test_Traj_B.delta[17 - Test_Traj_B.b_k_jb] * dx
        [19 - Test_Traj_B.b_k_jb];
    }
  } else {
    Test_Traj_cycsympentdisolve(Test_Traj_B.d, Test_Traj_B.e_h, Test_Traj_B.f_m,
      v, dx);
  }
}

static void Test_Traj_cyctridisolve_ph(const real_T a[20], real_T b[20], const
  real_T c[20], real_T d[20])
{
  real_T mu;
  int32_T b_j;
  Test_Traj_B.b_gamma_p = -b[0];
  b[0] -= -b[0];
  b[19] -= a[19] * c[19] / Test_Traj_B.b_gamma_p;
  memcpy(&Test_Traj_B.b_j[0], &b[0], 20U * sizeof(real_T));
  for (b_j = 0; b_j < 19; b_j++) {
    mu = a[b_j] / Test_Traj_B.b_j[b_j];
    Test_Traj_B.b_j[b_j + 1] -= mu * c[b_j];
    d[b_j + 1] -= mu * d[b_j];
  }

  d[19] /= Test_Traj_B.b_j[19];
  for (b_j = 0; b_j < 19; b_j++) {
    d[18 - b_j] = (d[18 - b_j] - c[18 - b_j] * d[19 - b_j]) / Test_Traj_B.b_j[18
      - b_j];
  }

  memset(&Test_Traj_B.z_j[0], 0, 20U * sizeof(real_T));
  Test_Traj_B.z_j[0] = Test_Traj_B.b_gamma_p;
  Test_Traj_B.z_j[19] = c[19];
  memset(&Test_Traj_B.z_j[1], 0, 18U * sizeof(real_T));
  memcpy(&Test_Traj_B.b_j[0], &b[0], 20U * sizeof(real_T));
  for (b_j = 0; b_j < 19; b_j++) {
    mu = a[b_j] / Test_Traj_B.b_j[b_j];
    Test_Traj_B.b_j[b_j + 1] -= mu * c[b_j];
    Test_Traj_B.z_j[b_j + 1] -= mu * Test_Traj_B.z_j[b_j];
  }

  Test_Traj_B.z_j[19] /= Test_Traj_B.b_j[19];
  for (b_j = 0; b_j < 19; b_j++) {
    Test_Traj_B.z_j[18 - b_j] = (Test_Traj_B.z_j[18 - b_j] - c[18 - b_j] *
      Test_Traj_B.z_j[19 - b_j]) / Test_Traj_B.b_j[18 - b_j];
  }

  Test_Traj_B.b_gamma_p = (a[19] * d[19] / Test_Traj_B.b_gamma_p + d[0]) / (a[19]
    * Test_Traj_B.z_j[19] / Test_Traj_B.b_gamma_p + (Test_Traj_B.z_j[0] + 1.0));
  for (b_j = 0; b_j < 20; b_j++) {
    d[b_j] -= Test_Traj_B.b_gamma_p * Test_Traj_B.z_j[b_j];
  }
}

static void Test_Traj_solveHessian_ph(const real_T Jtri[60], real_T v[20])
{
  int32_T b_j;
  if ((Jtri[19] == 0.0) && (Jtri[59] == 0.0)) {
    memcpy(&Test_Traj_B.Jtri_e[0], &Jtri[20], 20U * sizeof(real_T));
    for (b_j = 0; b_j < 19; b_j++) {
      Test_Traj_B.mu_n = Jtri[b_j + 40] / Test_Traj_B.Jtri_e[b_j];
      Test_Traj_B.Jtri_e[b_j + 1] -= Test_Traj_B.mu_n * Jtri[b_j];
      v[b_j + 1] -= Test_Traj_B.mu_n * v[b_j];
    }

    v[19] /= Test_Traj_B.Jtri_e[19];
    for (b_j = 0; b_j < 19; b_j++) {
      v[18 - b_j] = (v[18 - b_j] - Jtri[18 - b_j] * v[19 - b_j]) /
        Test_Traj_B.Jtri_e[18 - b_j];
    }

    memcpy(&Test_Traj_B.Jtri_e[0], &Jtri[20], 20U * sizeof(real_T));
    for (b_j = 0; b_j < 19; b_j++) {
      Test_Traj_B.mu_n = Jtri[b_j] / Test_Traj_B.Jtri_e[b_j];
      Test_Traj_B.Jtri_e[b_j + 1] -= Jtri[b_j + 40] * Test_Traj_B.mu_n;
      v[b_j + 1] -= Test_Traj_B.mu_n * v[b_j];
    }

    v[19] /= Test_Traj_B.Jtri_e[19];
    for (b_j = 0; b_j < 19; b_j++) {
      v[18 - b_j] = (v[18 - b_j] - Jtri[58 - b_j] * v[19 - b_j]) /
        Test_Traj_B.Jtri_e[18 - b_j];
    }
  } else {
    memcpy(&Test_Traj_B.Jtri_e[0], &(*(real_T (*)[20])&Jtri[20])[0], 20U *
           sizeof(real_T));
    Test_Traj_cyctridisolve_ph(&Jtri[40], Test_Traj_B.Jtri_e, &Jtri[0], v);
    memcpy(&Test_Traj_B.Jtri_e[0], &(*(real_T (*)[20])&Jtri[20])[0], 20U *
           sizeof(real_T));
    Test_Traj_cyctridisolve_ph(&Jtri[0], Test_Traj_B.Jtri_e, &Jtri[40], v);
  }
}

static real_T Test_Traj_norm_p(const real_T x[20])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  int32_T b_k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (b_k = 0; b_k < 20; b_k++) {
    absxk = fabs(x[b_k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

static void Test_Traj_accumarray(const real_T val[58], real_T A[400])
{
  int32_T b_k;
  static const int8_T tmp[116] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
    17, 18, 19, 20, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2,
    3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };

  int32_T i;
  const int8_T *subs;
  subs = &tmp[0];
  for (i = 0; i < 400; i++) {
    Test_Traj_B.filled[i] = true;
    A[i] = 0.0;
  }

  for (b_k = 0; b_k < 58; b_k++) {
    i = ((subs[b_k + 58] - 1) * 20 + subs[b_k]) - 1;
    if (Test_Traj_B.filled[i]) {
      Test_Traj_B.filled[i] = false;
      A[i] = val[b_k];
    } else {
      A[i] += val[b_k];
    }
  }
}

static real_T Test_Traj_xzlangeM(const creal_T x[400])
{
  real_T y;
  real_T absxk;
  int32_T b_k;
  boolean_T exitg1;
  y = 0.0;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 400)) {
    absxk = Test_Traj_rt_hypotd_snf(x[b_k].re, x[b_k].im);
    if (rtIsNaN(absxk)) {
      y = (rtNaN);
      exitg1 = true;
    } else {
      if (absxk > y) {
        y = absxk;
      }

      b_k++;
    }
  }

  return y;
}

static void Test_Traj_xzlascl(real_T cfrom, real_T cto, const creal_T A[400],
  creal_T b_A[400])
{
  boolean_T notdone;
  real_T mul;
  int32_T i;
  memcpy(&b_A[0], &A[0], 400U * sizeof(creal_T));
  Test_Traj_B.cfromc_c = cfrom;
  Test_Traj_B.ctoc_g = cto;
  notdone = true;
  while (notdone) {
    Test_Traj_B.cfrom1_c = Test_Traj_B.cfromc_c * 2.0041683600089728E-292;
    Test_Traj_B.cto1_i = Test_Traj_B.ctoc_g / 4.9896007738368E+291;
    if ((fabs(Test_Traj_B.cfrom1_c) > fabs(Test_Traj_B.ctoc_g)) &&
        (Test_Traj_B.ctoc_g != 0.0)) {
      mul = 2.0041683600089728E-292;
      Test_Traj_B.cfromc_c = Test_Traj_B.cfrom1_c;
    } else if (fabs(Test_Traj_B.cto1_i) > fabs(Test_Traj_B.cfromc_c)) {
      mul = 4.9896007738368E+291;
      Test_Traj_B.ctoc_g = Test_Traj_B.cto1_i;
    } else {
      mul = Test_Traj_B.ctoc_g / Test_Traj_B.cfromc_c;
      notdone = false;
    }

    for (i = 0; i < 400; i++) {
      Test_Traj_B.b_A_i.re = mul * b_A[i].re;
      Test_Traj_B.b_A_i.im = mul * b_A[i].im;
      b_A[i] = Test_Traj_B.b_A_i;
    }
  }
}

static void Test_Traj_xzggbal(const creal_T A[400], creal_T b_A[400], int32_T
  *ilo, int32_T *ihi, int32_T rscale[20])
{
  boolean_T found;
  int32_T b_jj;
  int32_T i;
  int32_T atmp_re_tmp_tmp;
  int32_T exitg1;
  int32_T exitg2;
  boolean_T exitg3;
  boolean_T exitg4;
  memcpy(&b_A[0], &A[0], 400U * sizeof(creal_T));
  for (i = 0; i < 20; i++) {
    rscale[i] = 1;
  }

  *ilo = 1;
  *ihi = 20;
  do {
    exitg2 = 0;
    i = -1;
    Test_Traj_B.j_gu = 0;
    found = false;
    Test_Traj_B.ii_o = *ihi;
    exitg3 = false;
    while ((!exitg3) && (Test_Traj_B.ii_o > 0)) {
      Test_Traj_B.nzcount_a = 0;
      i = Test_Traj_B.ii_o - 1;
      Test_Traj_B.j_gu = *ihi;
      b_jj = 1;
      exitg4 = false;
      while ((!exitg4) && (b_jj - 1 <= *ihi - 1)) {
        atmp_re_tmp_tmp = ((b_jj - 1) * 20 + Test_Traj_B.ii_o) - 1;
        if ((b_A[atmp_re_tmp_tmp].re != 0.0) || (b_A[atmp_re_tmp_tmp].im != 0.0)
            || (Test_Traj_B.ii_o == b_jj)) {
          if (Test_Traj_B.nzcount_a == 0) {
            Test_Traj_B.j_gu = b_jj;
            Test_Traj_B.nzcount_a = 1;
            b_jj++;
          } else {
            Test_Traj_B.nzcount_a = 2;
            exitg4 = true;
          }
        } else {
          b_jj++;
        }
      }

      if (Test_Traj_B.nzcount_a < 2) {
        found = true;
        exitg3 = true;
      } else {
        Test_Traj_B.ii_o--;
      }
    }

    if (!found) {
      exitg2 = 2;
    } else {
      if (i + 1 != *ihi) {
        for (Test_Traj_B.nzcount_a = 1; Test_Traj_B.nzcount_a < 21;
             Test_Traj_B.nzcount_a++) {
          atmp_re_tmp_tmp = (Test_Traj_B.nzcount_a - 1) * 20;
          Test_Traj_B.ii_o = atmp_re_tmp_tmp + i;
          Test_Traj_B.atmp_re_f = b_A[Test_Traj_B.ii_o].re;
          Test_Traj_B.atmp_im_a = b_A[Test_Traj_B.ii_o].im;
          atmp_re_tmp_tmp = (atmp_re_tmp_tmp + *ihi) - 1;
          b_A[Test_Traj_B.ii_o] = b_A[atmp_re_tmp_tmp];
          b_A[atmp_re_tmp_tmp].re = Test_Traj_B.atmp_re_f;
          b_A[atmp_re_tmp_tmp].im = Test_Traj_B.atmp_im_a;
        }
      }

      if (Test_Traj_B.j_gu != *ihi) {
        for (i = 0; i < *ihi; i++) {
          Test_Traj_B.ii_o = (Test_Traj_B.j_gu - 1) * 20 + i;
          Test_Traj_B.atmp_re_f = b_A[Test_Traj_B.ii_o].re;
          Test_Traj_B.atmp_im_a = b_A[Test_Traj_B.ii_o].im;
          atmp_re_tmp_tmp = (*ihi - 1) * 20 + i;
          b_A[Test_Traj_B.ii_o] = b_A[atmp_re_tmp_tmp];
          b_A[atmp_re_tmp_tmp].re = Test_Traj_B.atmp_re_f;
          b_A[atmp_re_tmp_tmp].im = Test_Traj_B.atmp_im_a;
        }
      }

      rscale[*ihi - 1] = Test_Traj_B.j_gu;
      (*ihi)--;
      if (*ihi == 1) {
        rscale[0] = 1;
        exitg2 = 1;
      }
    }
  } while (exitg2 == 0);

  if (exitg2 == 1) {
  } else {
    do {
      exitg1 = 0;
      i = 0;
      Test_Traj_B.j_gu = 0;
      found = false;
      b_jj = *ilo;
      exitg3 = false;
      while ((!exitg3) && (b_jj <= *ihi)) {
        Test_Traj_B.nzcount_a = 0;
        i = *ihi;
        Test_Traj_B.j_gu = b_jj;
        Test_Traj_B.ii_o = *ilo;
        exitg4 = false;
        while ((!exitg4) && (Test_Traj_B.ii_o <= *ihi)) {
          atmp_re_tmp_tmp = ((b_jj - 1) * 20 + Test_Traj_B.ii_o) - 1;
          if ((b_A[atmp_re_tmp_tmp].re != 0.0) || (b_A[atmp_re_tmp_tmp].im !=
               0.0) || (Test_Traj_B.ii_o == b_jj)) {
            if (Test_Traj_B.nzcount_a == 0) {
              i = Test_Traj_B.ii_o;
              Test_Traj_B.nzcount_a = 1;
              Test_Traj_B.ii_o++;
            } else {
              Test_Traj_B.nzcount_a = 2;
              exitg4 = true;
            }
          } else {
            Test_Traj_B.ii_o++;
          }
        }

        if (Test_Traj_B.nzcount_a < 2) {
          found = true;
          exitg3 = true;
        } else {
          b_jj++;
        }
      }

      if (!found) {
        exitg1 = 1;
      } else {
        if (i != *ilo) {
          for (Test_Traj_B.nzcount_a = *ilo; Test_Traj_B.nzcount_a < 21;
               Test_Traj_B.nzcount_a++) {
            atmp_re_tmp_tmp = (Test_Traj_B.nzcount_a - 1) * 20;
            Test_Traj_B.ii_o = (atmp_re_tmp_tmp + i) - 1;
            Test_Traj_B.atmp_re_f = b_A[Test_Traj_B.ii_o].re;
            Test_Traj_B.atmp_im_a = b_A[Test_Traj_B.ii_o].im;
            atmp_re_tmp_tmp = (atmp_re_tmp_tmp + *ilo) - 1;
            b_A[Test_Traj_B.ii_o] = b_A[atmp_re_tmp_tmp];
            b_A[atmp_re_tmp_tmp].re = Test_Traj_B.atmp_re_f;
            b_A[atmp_re_tmp_tmp].im = Test_Traj_B.atmp_im_a;
          }
        }

        if (Test_Traj_B.j_gu != *ilo) {
          for (i = 0; i < *ihi; i++) {
            Test_Traj_B.ii_o = (Test_Traj_B.j_gu - 1) * 20 + i;
            Test_Traj_B.atmp_re_f = b_A[Test_Traj_B.ii_o].re;
            Test_Traj_B.atmp_im_a = b_A[Test_Traj_B.ii_o].im;
            atmp_re_tmp_tmp = (*ilo - 1) * 20 + i;
            b_A[Test_Traj_B.ii_o] = b_A[atmp_re_tmp_tmp];
            b_A[atmp_re_tmp_tmp].re = Test_Traj_B.atmp_re_f;
            b_A[atmp_re_tmp_tmp].im = Test_Traj_B.atmp_im_a;
          }
        }

        rscale[*ilo - 1] = Test_Traj_B.j_gu;
        (*ilo)++;
        if (*ilo == *ihi) {
          rscale[*ilo - 1] = *ilo;
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void Test_Traj_xzgghrd(int32_T ilo, int32_T ihi, const creal_T A[400],
  creal_T b_A[400])
{
  int32_T stemp_re_tmp_tmp;
  memcpy(&b_A[0], &A[0], 400U * sizeof(creal_T));
  if (ihi >= ilo + 2) {
    Test_Traj_B.jcol_j = ilo - 1;
    while (Test_Traj_B.jcol_j + 1 < ihi - 1) {
      Test_Traj_B.jrow_i = ihi - 2;
      while (Test_Traj_B.jrow_i + 2 > Test_Traj_B.jcol_j + 2) {
        Test_Traj_xzlartg(b_A[Test_Traj_B.jrow_i + 20 * Test_Traj_B.jcol_j],
                          b_A[(Test_Traj_B.jrow_i + 20 * Test_Traj_B.jcol_j) + 1],
                          &Test_Traj_B.c_m, &Test_Traj_B.s_f,
                          &b_A[Test_Traj_B.jrow_i + 20 * Test_Traj_B.jcol_j]);
        Test_Traj_B.stemp_re_tmp_c = (Test_Traj_B.jrow_i + 20 *
          Test_Traj_B.jcol_j) + 1;
        b_A[Test_Traj_B.stemp_re_tmp_c].re = 0.0;
        b_A[Test_Traj_B.stemp_re_tmp_c].im = 0.0;
        for (Test_Traj_B.j_c = Test_Traj_B.jcol_j + 2; Test_Traj_B.j_c < 21;
             Test_Traj_B.j_c++) {
          stemp_re_tmp_tmp = (Test_Traj_B.j_c - 1) * 20 + Test_Traj_B.jrow_i;
          Test_Traj_B.stemp_re_tmp_c = stemp_re_tmp_tmp + 1;
          Test_Traj_B.stemp_re_f = (b_A[Test_Traj_B.stemp_re_tmp_c].re *
            Test_Traj_B.s_f.re - b_A[Test_Traj_B.stemp_re_tmp_c].im *
            Test_Traj_B.s_f.im) + b_A[stemp_re_tmp_tmp].re * Test_Traj_B.c_m;
          Test_Traj_B.stemp_im_m = (b_A[Test_Traj_B.stemp_re_tmp_c].im *
            Test_Traj_B.s_f.re + b_A[Test_Traj_B.stemp_re_tmp_c].re *
            Test_Traj_B.s_f.im) + b_A[stemp_re_tmp_tmp].im * Test_Traj_B.c_m;
          Test_Traj_B.d10 = b_A[stemp_re_tmp_tmp].re;
          b_A[Test_Traj_B.stemp_re_tmp_c].re = b_A[Test_Traj_B.stemp_re_tmp_c].
            re * Test_Traj_B.c_m - (b_A[stemp_re_tmp_tmp].re *
            Test_Traj_B.s_f.re + b_A[stemp_re_tmp_tmp].im * Test_Traj_B.s_f.im);
          b_A[Test_Traj_B.stemp_re_tmp_c].im = b_A[Test_Traj_B.stemp_re_tmp_c].
            im * Test_Traj_B.c_m - (b_A[stemp_re_tmp_tmp].im *
            Test_Traj_B.s_f.re - Test_Traj_B.s_f.im * Test_Traj_B.d10);
          b_A[stemp_re_tmp_tmp].re = Test_Traj_B.stemp_re_f;
          b_A[stemp_re_tmp_tmp].im = Test_Traj_B.stemp_im_m;
        }

        Test_Traj_B.s_f.re = -Test_Traj_B.s_f.re;
        Test_Traj_B.s_f.im = -Test_Traj_B.s_f.im;
        for (Test_Traj_B.j_c = 1; Test_Traj_B.j_c <= ihi; Test_Traj_B.j_c++) {
          Test_Traj_B.stemp_re_tmp_c = (20 * Test_Traj_B.jrow_i +
            Test_Traj_B.j_c) - 1;
          stemp_re_tmp_tmp = ((Test_Traj_B.jrow_i + 1) * 20 + Test_Traj_B.j_c) -
            1;
          Test_Traj_B.stemp_re_f = b_A[stemp_re_tmp_tmp].re * Test_Traj_B.c_m +
            (b_A[Test_Traj_B.stemp_re_tmp_c].re * Test_Traj_B.s_f.re -
             b_A[Test_Traj_B.stemp_re_tmp_c].im * Test_Traj_B.s_f.im);
          Test_Traj_B.stemp_im_m = b_A[stemp_re_tmp_tmp].im * Test_Traj_B.c_m +
            (b_A[Test_Traj_B.stemp_re_tmp_c].im * Test_Traj_B.s_f.re +
             b_A[Test_Traj_B.stemp_re_tmp_c].re * Test_Traj_B.s_f.im);
          Test_Traj_B.d10 = b_A[stemp_re_tmp_tmp].re;
          b_A[Test_Traj_B.stemp_re_tmp_c].re = b_A[Test_Traj_B.stemp_re_tmp_c].
            re * Test_Traj_B.c_m - (b_A[stemp_re_tmp_tmp].re *
            Test_Traj_B.s_f.re + b_A[stemp_re_tmp_tmp].im * Test_Traj_B.s_f.im);
          b_A[Test_Traj_B.stemp_re_tmp_c].im = b_A[Test_Traj_B.stemp_re_tmp_c].
            im * Test_Traj_B.c_m - (b_A[stemp_re_tmp_tmp].im *
            Test_Traj_B.s_f.re - Test_Traj_B.s_f.im * Test_Traj_B.d10);
          b_A[stemp_re_tmp_tmp].re = Test_Traj_B.stemp_re_f;
          b_A[stemp_re_tmp_tmp].im = Test_Traj_B.stemp_im_m;
        }

        Test_Traj_B.jrow_i--;
      }

      Test_Traj_B.jcol_j++;
    }
  }
}

static real_T Test_Traj_xzlanhs(const creal_T A[400], int32_T ilo, int32_T ihi)
{
  real_T f;
  boolean_T firstNonZero;
  int32_T i;
  int32_T reAij_tmp;
  f = 0.0;
  if (ilo <= ihi) {
    Test_Traj_B.scale_nf = 0.0;
    Test_Traj_B.sumsq = 0.0;
    firstNonZero = true;
    for (Test_Traj_B.j_n = ilo; Test_Traj_B.j_n <= ihi; Test_Traj_B.j_n++) {
      Test_Traj_B.b_br = Test_Traj_B.j_n + 1;
      if (ihi < Test_Traj_B.j_n + 1) {
        Test_Traj_B.b_br = ihi;
      }

      for (i = ilo; i <= Test_Traj_B.b_br; i++) {
        reAij_tmp = ((Test_Traj_B.j_n - 1) * 20 + i) - 1;
        if (A[reAij_tmp].re != 0.0) {
          Test_Traj_B.temp1_m = fabs(A[reAij_tmp].re);
          if (firstNonZero) {
            Test_Traj_B.sumsq = 1.0;
            Test_Traj_B.scale_nf = Test_Traj_B.temp1_m;
            firstNonZero = false;
          } else if (Test_Traj_B.scale_nf < Test_Traj_B.temp1_m) {
            Test_Traj_B.temp2_b = Test_Traj_B.scale_nf / Test_Traj_B.temp1_m;
            Test_Traj_B.sumsq = Test_Traj_B.sumsq * Test_Traj_B.temp2_b *
              Test_Traj_B.temp2_b + 1.0;
            Test_Traj_B.scale_nf = Test_Traj_B.temp1_m;
          } else {
            Test_Traj_B.temp2_b = Test_Traj_B.temp1_m / Test_Traj_B.scale_nf;
            Test_Traj_B.sumsq += Test_Traj_B.temp2_b * Test_Traj_B.temp2_b;
          }
        }

        if (A[reAij_tmp].im != 0.0) {
          Test_Traj_B.temp1_m = fabs(A[reAij_tmp].im);
          if (firstNonZero) {
            Test_Traj_B.sumsq = 1.0;
            Test_Traj_B.scale_nf = Test_Traj_B.temp1_m;
            firstNonZero = false;
          } else if (Test_Traj_B.scale_nf < Test_Traj_B.temp1_m) {
            Test_Traj_B.temp2_b = Test_Traj_B.scale_nf / Test_Traj_B.temp1_m;
            Test_Traj_B.sumsq = Test_Traj_B.sumsq * Test_Traj_B.temp2_b *
              Test_Traj_B.temp2_b + 1.0;
            Test_Traj_B.scale_nf = Test_Traj_B.temp1_m;
          } else {
            Test_Traj_B.temp2_b = Test_Traj_B.temp1_m / Test_Traj_B.scale_nf;
            Test_Traj_B.sumsq += Test_Traj_B.temp2_b * Test_Traj_B.temp2_b;
          }
        }
      }
    }

    f = Test_Traj_B.scale_nf * sqrt(Test_Traj_B.sumsq);
  }

  return f;
}

static void Test_Traj_xzhgeqz(const creal_T A[400], int32_T ilo, int32_T ihi,
  int32_T *info, creal_T alpha1[20], creal_T beta1[20])
{
  boolean_T failed;
  boolean_T goto60;
  boolean_T goto70;
  boolean_T goto90;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&Test_Traj_B.b_A[0], &A[0], 400U * sizeof(creal_T));
  *info = 0;
  for (Test_Traj_B.i_f = 0; Test_Traj_B.i_f < 20; Test_Traj_B.i_f++) {
    alpha1[Test_Traj_B.i_f].re = 0.0;
    alpha1[Test_Traj_B.i_f].im = 0.0;
    beta1[Test_Traj_B.i_f].re = 1.0;
    beta1[Test_Traj_B.i_f].im = 0.0;
  }

  Test_Traj_B.eshift_re_i = 0.0;
  Test_Traj_B.eshift_im_c = 0.0;
  Test_Traj_B.ctemp_n.re = 0.0;
  Test_Traj_B.ctemp_n.im = 0.0;
  Test_Traj_B.anorm_j = Test_Traj_xzlanhs(A, ilo, ihi);
  Test_Traj_B.stemp_re_g = 2.2204460492503131E-16 * Test_Traj_B.anorm_j;
  Test_Traj_B.b_atol_e = 2.2250738585072014E-308;
  if (Test_Traj_B.stemp_re_g > 2.2250738585072014E-308) {
    Test_Traj_B.b_atol_e = Test_Traj_B.stemp_re_g;
  }

  Test_Traj_B.stemp_re_g = 2.2250738585072014E-308;
  if (Test_Traj_B.anorm_j > 2.2250738585072014E-308) {
    Test_Traj_B.stemp_re_g = Test_Traj_B.anorm_j;
  }

  Test_Traj_B.anorm_j = 1.0 / Test_Traj_B.stemp_re_g;
  failed = true;
  for (Test_Traj_B.ilast = ihi + 1; Test_Traj_B.ilast < 21; Test_Traj_B.ilast++)
  {
    alpha1[Test_Traj_B.ilast - 1] = A[((Test_Traj_B.ilast - 1) * 20 +
      Test_Traj_B.ilast) - 1];
  }

  guard1 = false;
  guard2 = false;
  if (ihi >= ilo) {
    Test_Traj_B.ifirst_j = ilo;
    Test_Traj_B.istart_c = ilo;
    Test_Traj_B.ilast = ihi - 1;
    Test_Traj_B.ilastm1_b = ihi - 2;
    Test_Traj_B.ilastm_i = ihi;
    Test_Traj_B.iiter_k = 0;
    goto60 = false;
    goto70 = false;
    goto90 = false;
    Test_Traj_B.jiter_j = 0;
    do {
      exitg1 = 0;
      if (Test_Traj_B.jiter_j <= ((ihi - ilo) + 1) * 30 - 1) {
        if (Test_Traj_B.ilast + 1 == ilo) {
          goto60 = true;
        } else {
          Test_Traj_B.jp1_l = 20 * Test_Traj_B.ilastm1_b + Test_Traj_B.ilast;
          if (fabs(Test_Traj_B.b_A[Test_Traj_B.jp1_l].re) + fabs
              (Test_Traj_B.b_A[Test_Traj_B.jp1_l].im) <= Test_Traj_B.b_atol_e) {
            Test_Traj_B.b_A[Test_Traj_B.jp1_l].re = 0.0;
            Test_Traj_B.b_A[Test_Traj_B.jp1_l].im = 0.0;
            goto60 = true;
          } else {
            Test_Traj_B.j_l2 = Test_Traj_B.ilastm1_b + 1;
            guard3 = false;
            exitg2 = false;
            while ((!exitg2) && (Test_Traj_B.j_l2 >= ilo)) {
              if (Test_Traj_B.j_l2 == ilo) {
                guard3 = true;
                exitg2 = true;
              } else {
                Test_Traj_B.jp1_l = ((Test_Traj_B.j_l2 - 2) * 20 +
                                     Test_Traj_B.j_l2) - 1;
                if (fabs(Test_Traj_B.b_A[Test_Traj_B.jp1_l].re) + fabs
                    (Test_Traj_B.b_A[Test_Traj_B.jp1_l].im) <=
                    Test_Traj_B.b_atol_e) {
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].re = 0.0;
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].im = 0.0;
                  guard3 = true;
                  exitg2 = true;
                } else {
                  Test_Traj_B.j_l2--;
                  guard3 = false;
                }
              }
            }

            if (guard3) {
              Test_Traj_B.ifirst_j = Test_Traj_B.j_l2;
              goto70 = true;
            }
          }
        }

        if (goto60 || goto70) {
          if (goto60) {
            goto60 = false;
            alpha1[Test_Traj_B.ilast] = Test_Traj_B.b_A[20 * Test_Traj_B.ilast +
              Test_Traj_B.ilast];
            Test_Traj_B.ilast = Test_Traj_B.ilastm1_b;
            Test_Traj_B.ilastm1_b--;
            if (Test_Traj_B.ilast + 1 < ilo) {
              failed = false;
              guard2 = true;
              exitg1 = 1;
            } else {
              Test_Traj_B.iiter_k = 0;
              Test_Traj_B.eshift_re_i = 0.0;
              Test_Traj_B.eshift_im_c = 0.0;
              Test_Traj_B.ilastm_i = Test_Traj_B.ilast + 1;
              Test_Traj_B.jiter_j++;
            }
          } else {
            if (goto70) {
              goto70 = false;
              Test_Traj_B.iiter_k++;
              if (Test_Traj_mod(Test_Traj_B.iiter_k) != 0) {
                Test_Traj_B.j_l2 = 20 * Test_Traj_B.ilastm1_b +
                  Test_Traj_B.ilastm1_b;
                Test_Traj_B.tempr_o = Test_Traj_B.b_A[Test_Traj_B.j_l2].re *
                  Test_Traj_B.anorm_j;
                Test_Traj_B.ai_d = Test_Traj_B.b_A[Test_Traj_B.j_l2].im *
                  Test_Traj_B.anorm_j;
                if (Test_Traj_B.ai_d == 0.0) {
                  Test_Traj_B.ad11_d.re = Test_Traj_B.tempr_o /
                    0.22360679774997896;
                  Test_Traj_B.ad11_d.im = 0.0;
                } else if (Test_Traj_B.tempr_o == 0.0) {
                  Test_Traj_B.ad11_d.re = 0.0;
                  Test_Traj_B.ad11_d.im = Test_Traj_B.ai_d / 0.22360679774997896;
                } else {
                  Test_Traj_B.ad11_d.re = Test_Traj_B.tempr_o /
                    0.22360679774997896;
                  Test_Traj_B.ad11_d.im = Test_Traj_B.ai_d / 0.22360679774997896;
                }

                Test_Traj_B.j_l2 = 20 * Test_Traj_B.ilast + Test_Traj_B.ilast;
                Test_Traj_B.tempr_o = Test_Traj_B.b_A[Test_Traj_B.j_l2].re *
                  Test_Traj_B.anorm_j;
                Test_Traj_B.ai_d = Test_Traj_B.b_A[Test_Traj_B.j_l2].im *
                  Test_Traj_B.anorm_j;
                if (Test_Traj_B.ai_d == 0.0) {
                  Test_Traj_B.stemp_re_g = Test_Traj_B.tempr_o /
                    0.22360679774997896;
                  Test_Traj_B.stemp_im_i = 0.0;
                } else if (Test_Traj_B.tempr_o == 0.0) {
                  Test_Traj_B.stemp_re_g = 0.0;
                  Test_Traj_B.stemp_im_i = Test_Traj_B.ai_d /
                    0.22360679774997896;
                } else {
                  Test_Traj_B.stemp_re_g = Test_Traj_B.tempr_o /
                    0.22360679774997896;
                  Test_Traj_B.stemp_im_i = Test_Traj_B.ai_d /
                    0.22360679774997896;
                }

                Test_Traj_B.t1_ih.re = (Test_Traj_B.ad11_d.re +
                  Test_Traj_B.stemp_re_g) * 0.5;
                Test_Traj_B.t1_ih.im = (Test_Traj_B.ad11_d.im +
                  Test_Traj_B.stemp_im_i) * 0.5;
                Test_Traj_B.j_l2 = 20 * Test_Traj_B.ilast +
                  Test_Traj_B.ilastm1_b;
                Test_Traj_B.tempr_o = Test_Traj_B.b_A[Test_Traj_B.j_l2].re *
                  Test_Traj_B.anorm_j;
                Test_Traj_B.ai_d = Test_Traj_B.b_A[Test_Traj_B.j_l2].im *
                  Test_Traj_B.anorm_j;
                if (Test_Traj_B.ai_d == 0.0) {
                  Test_Traj_B.temp_p = Test_Traj_B.tempr_o / 0.22360679774997896;
                  Test_Traj_B.temp2_n = 0.0;
                } else if (Test_Traj_B.tempr_o == 0.0) {
                  Test_Traj_B.temp_p = 0.0;
                  Test_Traj_B.temp2_n = Test_Traj_B.ai_d / 0.22360679774997896;
                } else {
                  Test_Traj_B.temp_p = Test_Traj_B.tempr_o / 0.22360679774997896;
                  Test_Traj_B.temp2_n = Test_Traj_B.ai_d / 0.22360679774997896;
                }

                Test_Traj_B.j_l2 = 20 * Test_Traj_B.ilastm1_b +
                  Test_Traj_B.ilast;
                Test_Traj_B.tempr_o = Test_Traj_B.b_A[Test_Traj_B.j_l2].re *
                  Test_Traj_B.anorm_j;
                Test_Traj_B.ai_d = Test_Traj_B.b_A[Test_Traj_B.j_l2].im *
                  Test_Traj_B.anorm_j;
                if (Test_Traj_B.ai_d == 0.0) {
                  Test_Traj_B.tempr_o /= 0.22360679774997896;
                  Test_Traj_B.ai_d = 0.0;
                } else if (Test_Traj_B.tempr_o == 0.0) {
                  Test_Traj_B.tempr_o = 0.0;
                  Test_Traj_B.ai_d /= 0.22360679774997896;
                } else {
                  Test_Traj_B.tempr_o /= 0.22360679774997896;
                  Test_Traj_B.ai_d /= 0.22360679774997896;
                }

                Test_Traj_B.t1_b.re = ((Test_Traj_B.t1_ih.re *
                  Test_Traj_B.t1_ih.re - Test_Traj_B.t1_ih.im *
                  Test_Traj_B.t1_ih.im) + (Test_Traj_B.temp_p *
                  Test_Traj_B.tempr_o - Test_Traj_B.temp2_n * Test_Traj_B.ai_d))
                  - (Test_Traj_B.ad11_d.re * Test_Traj_B.stemp_re_g -
                     Test_Traj_B.ad11_d.im * Test_Traj_B.stemp_im_i);
                Test_Traj_B.t1_tmp_b = Test_Traj_B.t1_ih.re *
                  Test_Traj_B.t1_ih.im;
                Test_Traj_B.t1_b.im = ((Test_Traj_B.t1_tmp_b +
                  Test_Traj_B.t1_tmp_b) + (Test_Traj_B.temp_p * Test_Traj_B.ai_d
                  + Test_Traj_B.temp2_n * Test_Traj_B.tempr_o)) -
                  (Test_Traj_B.ad11_d.re * Test_Traj_B.stemp_im_i +
                   Test_Traj_B.ad11_d.im * Test_Traj_B.stemp_re_g);
                Test_Traj_B.ad11_d = Test_Traj_sqrt_p(Test_Traj_B.t1_b);
                if ((Test_Traj_B.t1_ih.re - Test_Traj_B.stemp_re_g) *
                    Test_Traj_B.ad11_d.re + (Test_Traj_B.t1_ih.im -
                     Test_Traj_B.stemp_im_i) * Test_Traj_B.ad11_d.im <= 0.0) {
                  Test_Traj_B.stemp_re_g = Test_Traj_B.t1_ih.re +
                    Test_Traj_B.ad11_d.re;
                  Test_Traj_B.stemp_im_i = Test_Traj_B.t1_ih.im +
                    Test_Traj_B.ad11_d.im;
                } else {
                  Test_Traj_B.stemp_re_g = Test_Traj_B.t1_ih.re -
                    Test_Traj_B.ad11_d.re;
                  Test_Traj_B.stemp_im_i = Test_Traj_B.t1_ih.im -
                    Test_Traj_B.ad11_d.im;
                }
              } else {
                Test_Traj_B.j_l2 = 20 * Test_Traj_B.ilastm1_b +
                  Test_Traj_B.ilast;
                Test_Traj_B.tempr_o = Test_Traj_B.b_A[Test_Traj_B.j_l2].re *
                  Test_Traj_B.anorm_j;
                Test_Traj_B.ai_d = Test_Traj_B.b_A[Test_Traj_B.j_l2].im *
                  Test_Traj_B.anorm_j;
                if (Test_Traj_B.ai_d == 0.0) {
                  Test_Traj_B.temp_p = Test_Traj_B.tempr_o / 0.22360679774997896;
                  Test_Traj_B.temp2_n = 0.0;
                } else if (Test_Traj_B.tempr_o == 0.0) {
                  Test_Traj_B.temp_p = 0.0;
                  Test_Traj_B.temp2_n = Test_Traj_B.ai_d / 0.22360679774997896;
                } else {
                  Test_Traj_B.temp_p = Test_Traj_B.tempr_o / 0.22360679774997896;
                  Test_Traj_B.temp2_n = Test_Traj_B.ai_d / 0.22360679774997896;
                }

                Test_Traj_B.eshift_re_i += Test_Traj_B.temp_p;
                Test_Traj_B.eshift_im_c += Test_Traj_B.temp2_n;
                Test_Traj_B.stemp_re_g = Test_Traj_B.eshift_re_i;
                Test_Traj_B.stemp_im_i = Test_Traj_B.eshift_im_c;
              }

              Test_Traj_B.j_l2 = Test_Traj_B.ilastm1_b;
              Test_Traj_B.jp1_l = Test_Traj_B.ilastm1_b + 1;
              exitg2 = false;
              while ((!exitg2) && (Test_Traj_B.j_l2 + 1 > Test_Traj_B.ifirst_j))
              {
                Test_Traj_B.istart_c = Test_Traj_B.j_l2 + 1;
                Test_Traj_B.ctemp_tmp_d = 20 * Test_Traj_B.j_l2 +
                  Test_Traj_B.j_l2;
                Test_Traj_B.ctemp_n.re = Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d]
                  .re * Test_Traj_B.anorm_j - Test_Traj_B.stemp_re_g *
                  0.22360679774997896;
                Test_Traj_B.ctemp_n.im = Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d]
                  .im * Test_Traj_B.anorm_j - Test_Traj_B.stemp_im_i *
                  0.22360679774997896;
                Test_Traj_B.temp_p = fabs(Test_Traj_B.ctemp_n.re) + fabs
                  (Test_Traj_B.ctemp_n.im);
                Test_Traj_B.jp1_l += 20 * Test_Traj_B.j_l2;
                Test_Traj_B.temp2_n = (fabs(Test_Traj_B.b_A[Test_Traj_B.jp1_l].
                  re) + fabs(Test_Traj_B.b_A[Test_Traj_B.jp1_l].im)) *
                  Test_Traj_B.anorm_j;
                Test_Traj_B.tempr_o = Test_Traj_B.temp_p;
                if (Test_Traj_B.temp2_n > Test_Traj_B.temp_p) {
                  Test_Traj_B.tempr_o = Test_Traj_B.temp2_n;
                }

                if ((Test_Traj_B.tempr_o < 1.0) && (Test_Traj_B.tempr_o != 0.0))
                {
                  Test_Traj_B.temp_p /= Test_Traj_B.tempr_o;
                  Test_Traj_B.temp2_n /= Test_Traj_B.tempr_o;
                }

                Test_Traj_B.jp1_l = (Test_Traj_B.j_l2 - 1) * 20 +
                  Test_Traj_B.j_l2;
                if ((fabs(Test_Traj_B.b_A[Test_Traj_B.jp1_l].re) + fabs
                     (Test_Traj_B.b_A[Test_Traj_B.jp1_l].im)) *
                    Test_Traj_B.temp2_n <= Test_Traj_B.temp_p *
                    Test_Traj_B.b_atol_e) {
                  goto90 = true;
                  exitg2 = true;
                } else {
                  Test_Traj_B.jp1_l = Test_Traj_B.j_l2;
                  Test_Traj_B.j_l2--;
                }
              }

              if (!goto90) {
                Test_Traj_B.istart_c = Test_Traj_B.ifirst_j;
                Test_Traj_B.ctemp_tmp_d = ((Test_Traj_B.ifirst_j - 1) * 20 +
                  Test_Traj_B.ifirst_j) - 1;
                Test_Traj_B.ctemp_n.re = Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d]
                  .re * Test_Traj_B.anorm_j - Test_Traj_B.stemp_re_g *
                  0.22360679774997896;
                Test_Traj_B.ctemp_n.im = Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d]
                  .im * Test_Traj_B.anorm_j - Test_Traj_B.stemp_im_i *
                  0.22360679774997896;
              }

              goto90 = false;
              Test_Traj_B.j_l2 = (Test_Traj_B.istart_c - 1) * 20 +
                Test_Traj_B.istart_c;
              Test_Traj_B.ascale_n.re = Test_Traj_B.b_A[Test_Traj_B.j_l2].re *
                Test_Traj_B.anorm_j;
              Test_Traj_B.ascale_n.im = Test_Traj_B.b_A[Test_Traj_B.j_l2].im *
                Test_Traj_B.anorm_j;
              Test_Traj_xzlartg_p(Test_Traj_B.ctemp_n, Test_Traj_B.ascale_n,
                                  &Test_Traj_B.temp_p, &Test_Traj_B.t1_ih);
              Test_Traj_B.j_l2 = Test_Traj_B.istart_c;
              Test_Traj_B.jp1_l = Test_Traj_B.istart_c - 2;
              while (Test_Traj_B.j_l2 < Test_Traj_B.ilast + 1) {
                if (Test_Traj_B.j_l2 > Test_Traj_B.istart_c) {
                  Test_Traj_xzlartg(Test_Traj_B.b_A[(Test_Traj_B.j_l2 + 20 *
                    Test_Traj_B.jp1_l) - 1], Test_Traj_B.b_A[Test_Traj_B.j_l2 +
                                    20 * Test_Traj_B.jp1_l], &Test_Traj_B.temp_p,
                                    &Test_Traj_B.t1_ih, &Test_Traj_B.b_A
                                    [(Test_Traj_B.j_l2 + 20 * Test_Traj_B.jp1_l)
                                    - 1]);
                  Test_Traj_B.jp1_l = Test_Traj_B.j_l2 + 20 * Test_Traj_B.jp1_l;
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].re = 0.0;
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].im = 0.0;
                }

                for (Test_Traj_B.i_f = Test_Traj_B.j_l2; Test_Traj_B.i_f <=
                     Test_Traj_B.ilastm_i; Test_Traj_B.i_f++) {
                  Test_Traj_B.jp1_l = (Test_Traj_B.i_f - 1) * 20 +
                    Test_Traj_B.j_l2;
                  Test_Traj_B.ctemp_tmp_d = Test_Traj_B.jp1_l - 1;
                  Test_Traj_B.stemp_re_g =
                    Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].re *
                    Test_Traj_B.temp_p + (Test_Traj_B.b_A[Test_Traj_B.jp1_l].re *
                    Test_Traj_B.t1_ih.re - Test_Traj_B.b_A[Test_Traj_B.jp1_l].im
                    * Test_Traj_B.t1_ih.im);
                  Test_Traj_B.stemp_im_i =
                    Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im *
                    Test_Traj_B.temp_p + (Test_Traj_B.b_A[Test_Traj_B.jp1_l].im *
                    Test_Traj_B.t1_ih.re + Test_Traj_B.b_A[Test_Traj_B.jp1_l].re
                    * Test_Traj_B.t1_ih.im);
                  Test_Traj_B.temp2_n = Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d]
                    .re;
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].re =
                    Test_Traj_B.b_A[Test_Traj_B.jp1_l].re * Test_Traj_B.temp_p -
                    (Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].re *
                     Test_Traj_B.t1_ih.re +
                     Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im *
                     Test_Traj_B.t1_ih.im);
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].im =
                    Test_Traj_B.b_A[Test_Traj_B.jp1_l].im * Test_Traj_B.temp_p -
                    (Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im *
                     Test_Traj_B.t1_ih.re - Test_Traj_B.t1_ih.im *
                     Test_Traj_B.temp2_n);
                  Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].re =
                    Test_Traj_B.stemp_re_g;
                  Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im =
                    Test_Traj_B.stemp_im_i;
                }

                Test_Traj_B.t1_ih.re = -Test_Traj_B.t1_ih.re;
                Test_Traj_B.t1_ih.im = -Test_Traj_B.t1_ih.im;
                Test_Traj_B.b_x_m = Test_Traj_B.j_l2 + 2;
                if (Test_Traj_B.ilast + 1 < Test_Traj_B.j_l2 + 2) {
                  Test_Traj_B.b_x_m = Test_Traj_B.ilast + 1;
                }

                for (Test_Traj_B.i_f = Test_Traj_B.ifirst_j; Test_Traj_B.i_f <=
                     Test_Traj_B.b_x_m; Test_Traj_B.i_f++) {
                  Test_Traj_B.jp1_l = ((Test_Traj_B.j_l2 - 1) * 20 +
                                       Test_Traj_B.i_f) - 1;
                  Test_Traj_B.ctemp_tmp_d = (20 * Test_Traj_B.j_l2 +
                    Test_Traj_B.i_f) - 1;
                  Test_Traj_B.stemp_re_g = (Test_Traj_B.b_A[Test_Traj_B.jp1_l].
                    re * Test_Traj_B.t1_ih.re -
                    Test_Traj_B.b_A[Test_Traj_B.jp1_l].im * Test_Traj_B.t1_ih.im)
                    + Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].re *
                    Test_Traj_B.temp_p;
                  Test_Traj_B.stemp_im_i = (Test_Traj_B.b_A[Test_Traj_B.jp1_l].
                    im * Test_Traj_B.t1_ih.re +
                    Test_Traj_B.b_A[Test_Traj_B.jp1_l].re * Test_Traj_B.t1_ih.im)
                    + Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im *
                    Test_Traj_B.temp_p;
                  Test_Traj_B.temp2_n = Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d]
                    .re;
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].re =
                    Test_Traj_B.b_A[Test_Traj_B.jp1_l].re * Test_Traj_B.temp_p -
                    (Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].re *
                     Test_Traj_B.t1_ih.re +
                     Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im *
                     Test_Traj_B.t1_ih.im);
                  Test_Traj_B.b_A[Test_Traj_B.jp1_l].im =
                    Test_Traj_B.b_A[Test_Traj_B.jp1_l].im * Test_Traj_B.temp_p -
                    (Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im *
                     Test_Traj_B.t1_ih.re - Test_Traj_B.t1_ih.im *
                     Test_Traj_B.temp2_n);
                  Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].re =
                    Test_Traj_B.stemp_re_g;
                  Test_Traj_B.b_A[Test_Traj_B.ctemp_tmp_d].im =
                    Test_Traj_B.stemp_im_i;
                }

                Test_Traj_B.jp1_l = Test_Traj_B.j_l2 - 1;
                Test_Traj_B.j_l2++;
              }
            }

            Test_Traj_B.jiter_j++;
          }
        } else {
          for (Test_Traj_B.i_f = 0; Test_Traj_B.i_f < 20; Test_Traj_B.i_f++) {
            alpha1[Test_Traj_B.i_f].re = (rtNaN);
            alpha1[Test_Traj_B.i_f].im = 0.0;
            beta1[Test_Traj_B.i_f].re = (rtNaN);
            beta1[Test_Traj_B.i_f].im = 0.0;
          }

          *info = 1;
          exitg1 = 1;
        }
      } else {
        guard2 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    guard1 = true;
  }

  if (guard2) {
    if (failed) {
      *info = Test_Traj_B.ilast + 1;
      for (Test_Traj_B.ifirst_j = 0; Test_Traj_B.ifirst_j <= Test_Traj_B.ilast;
           Test_Traj_B.ifirst_j++) {
        alpha1[Test_Traj_B.ifirst_j].re = (rtNaN);
        alpha1[Test_Traj_B.ifirst_j].im = 0.0;
        beta1[Test_Traj_B.ifirst_j].re = (rtNaN);
        beta1[Test_Traj_B.ifirst_j].im = 0.0;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    Test_Traj_B.ilast = ilo - 2;
    for (Test_Traj_B.ifirst_j = 0; Test_Traj_B.ifirst_j <= Test_Traj_B.ilast;
         Test_Traj_B.ifirst_j++) {
      alpha1[Test_Traj_B.ifirst_j] = Test_Traj_B.b_A[20 * Test_Traj_B.ifirst_j +
        Test_Traj_B.ifirst_j];
    }
  }
}

static void Test_Traj_xzlascl_phmy(real_T cfrom, real_T cto, creal_T A[20])
{
  boolean_T notdone;
  real_T mul;
  int32_T i;
  Test_Traj_B.cfromc_f = cfrom;
  Test_Traj_B.ctoc_gy = cto;
  notdone = true;
  while (notdone) {
    Test_Traj_B.cfrom1_g = Test_Traj_B.cfromc_f * 2.0041683600089728E-292;
    Test_Traj_B.cto1_a = Test_Traj_B.ctoc_gy / 4.9896007738368E+291;
    if ((fabs(Test_Traj_B.cfrom1_g) > fabs(Test_Traj_B.ctoc_gy)) &&
        (Test_Traj_B.ctoc_gy != 0.0)) {
      mul = 2.0041683600089728E-292;
      Test_Traj_B.cfromc_f = Test_Traj_B.cfrom1_g;
    } else if (fabs(Test_Traj_B.cto1_a) > fabs(Test_Traj_B.cfromc_f)) {
      mul = 4.9896007738368E+291;
      Test_Traj_B.ctoc_gy = Test_Traj_B.cto1_a;
    } else {
      mul = Test_Traj_B.ctoc_gy / Test_Traj_B.cfromc_f;
      notdone = false;
    }

    for (i = 0; i < 20; i++) {
      A[i].re *= mul;
      A[i].im *= mul;
    }
  }
}

static void Test_Traj_xzgeev(const real_T A[400], int32_T *info, creal_T alpha1
  [20], creal_T beta1[20])
{
  boolean_T ilascl;
  for (Test_Traj_B.i_j = 0; Test_Traj_B.i_j < 400; Test_Traj_B.i_j++) {
    Test_Traj_B.b_At[Test_Traj_B.i_j].re = A[Test_Traj_B.i_j];
    Test_Traj_B.b_At[Test_Traj_B.i_j].im = 0.0;
    Test_Traj_B.At[Test_Traj_B.i_j].re = A[Test_Traj_B.i_j];
    Test_Traj_B.At[Test_Traj_B.i_j].im = 0.0;
  }

  *info = 0;
  Test_Traj_B.anrm_o = Test_Traj_xzlangeM(Test_Traj_B.At);
  if (!Test_Traj_isfinite(Test_Traj_B.anrm_o)) {
    for (Test_Traj_B.i_j = 0; Test_Traj_B.i_j < 20; Test_Traj_B.i_j++) {
      alpha1[Test_Traj_B.i_j].re = (rtNaN);
      alpha1[Test_Traj_B.i_j].im = 0.0;
      beta1[Test_Traj_B.i_j].re = (rtNaN);
      beta1[Test_Traj_B.i_j].im = 0.0;
    }
  } else {
    ilascl = false;
    Test_Traj_B.anrmto_c = Test_Traj_B.anrm_o;
    if ((Test_Traj_B.anrm_o > 0.0) && (Test_Traj_B.anrm_o <
         6.7178761075670888E-139)) {
      Test_Traj_B.anrmto_c = 6.7178761075670888E-139;
      ilascl = true;
      Test_Traj_xzlascl(Test_Traj_B.anrm_o, Test_Traj_B.anrmto_c, Test_Traj_B.At,
                        Test_Traj_B.b_At);
    } else {
      if (Test_Traj_B.anrm_o > 1.4885657073574029E+138) {
        Test_Traj_B.anrmto_c = 1.4885657073574029E+138;
        ilascl = true;
        Test_Traj_xzlascl(Test_Traj_B.anrm_o, Test_Traj_B.anrmto_c,
                          Test_Traj_B.At, Test_Traj_B.b_At);
      }
    }

    Test_Traj_xzggbal(Test_Traj_B.b_At, Test_Traj_B.At, &Test_Traj_B.i_j,
                      &Test_Traj_B.ihi, Test_Traj_B.rscale);
    Test_Traj_xzgghrd(Test_Traj_B.i_j, Test_Traj_B.ihi, Test_Traj_B.At,
                      Test_Traj_B.b_At);
    Test_Traj_xzhgeqz(Test_Traj_B.b_At, Test_Traj_B.i_j, Test_Traj_B.ihi, info,
                      alpha1, beta1);
    if ((*info == 0) && ilascl) {
      Test_Traj_xzlascl_phmy(Test_Traj_B.anrmto_c, Test_Traj_B.anrm_o, alpha1);
    }
  }
}

static real_T Test_Traj_xnrm2(int32_T n, const real_T x[400], int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      Test_Traj_B.scale = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (k = ix0; k < kend; k++) {
        Test_Traj_B.absxk = fabs(x[k - 1]);
        if (Test_Traj_B.absxk > Test_Traj_B.scale) {
          Test_Traj_B.t_l = Test_Traj_B.scale / Test_Traj_B.absxk;
          y = y * Test_Traj_B.t_l * Test_Traj_B.t_l + 1.0;
          Test_Traj_B.scale = Test_Traj_B.absxk;
        } else {
          Test_Traj_B.t_l = Test_Traj_B.absxk / Test_Traj_B.scale;
          y += Test_Traj_B.t_l * Test_Traj_B.t_l;
        }
      }

      y = Test_Traj_B.scale * sqrt(y);
    }
  }

  return y;
}

static void Test_Traj_xzlarfg(int32_T n, real_T alpha1, const real_T x[400],
  int32_T ix0, real_T *b_alpha1, real_T b_x[400], real_T *tau)
{
  int32_T b_tmp;
  memcpy(&b_x[0], &x[0], 400U * sizeof(real_T));
  *b_alpha1 = alpha1;
  *tau = 0.0;
  if (n > 0) {
    Test_Traj_B.xnorm = Test_Traj_xnrm2(n - 1, x, ix0);
    if (Test_Traj_B.xnorm != 0.0) {
      Test_Traj_B.xnorm = Test_Traj_rt_hypotd_snf(alpha1, Test_Traj_B.xnorm);
      if (alpha1 >= 0.0) {
        Test_Traj_B.xnorm = -Test_Traj_B.xnorm;
      }

      if (fabs(Test_Traj_B.xnorm) < 1.0020841800044864E-292) {
        Test_Traj_B.knt = -1;
        b_tmp = ix0 + n;
        do {
          Test_Traj_B.knt++;
          for (Test_Traj_B.k_c = ix0; Test_Traj_B.k_c <= b_tmp - 2;
               Test_Traj_B.k_c++) {
            b_x[Test_Traj_B.k_c - 1] *= 9.9792015476736E+291;
          }

          Test_Traj_B.xnorm *= 9.9792015476736E+291;
          *b_alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(Test_Traj_B.xnorm) >= 1.0020841800044864E-292));

        Test_Traj_B.xnorm = Test_Traj_rt_hypotd_snf(*b_alpha1, Test_Traj_xnrm2(n
          - 1, b_x, ix0));
        if (*b_alpha1 >= 0.0) {
          Test_Traj_B.xnorm = -Test_Traj_B.xnorm;
        }

        *tau = (Test_Traj_B.xnorm - *b_alpha1) / Test_Traj_B.xnorm;
        *b_alpha1 = 1.0 / (*b_alpha1 - Test_Traj_B.xnorm);
        for (Test_Traj_B.k_c = ix0; Test_Traj_B.k_c <= b_tmp - 2;
             Test_Traj_B.k_c++) {
          b_x[Test_Traj_B.k_c - 1] *= *b_alpha1;
        }

        for (Test_Traj_B.k_c = 0; Test_Traj_B.k_c <= Test_Traj_B.knt;
             Test_Traj_B.k_c++) {
          Test_Traj_B.xnorm *= 1.0020841800044864E-292;
        }

        *b_alpha1 = Test_Traj_B.xnorm;
      } else {
        *tau = (Test_Traj_B.xnorm - alpha1) / Test_Traj_B.xnorm;
        *b_alpha1 = 1.0 / (alpha1 - Test_Traj_B.xnorm);
        Test_Traj_B.knt = ix0 + n;
        for (Test_Traj_B.k_c = ix0; Test_Traj_B.k_c <= Test_Traj_B.knt - 2;
             Test_Traj_B.k_c++) {
          b_x[Test_Traj_B.k_c - 1] *= *b_alpha1;
        }

        *b_alpha1 = Test_Traj_B.xnorm;
      }
    }
  }
}

static void Test_Traj_xzlarf_phmyu(int32_T n, int32_T iv0, real_T tau, const
  real_T C[400], int32_T ic0, real_T work[20], real_T b_C[400])
{
  int32_T d;
  int32_T jA;
  int32_T jy;
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&b_C[0], &C[0], 400U * sizeof(real_T));
  if (tau != 0.0) {
    Test_Traj_B.lastv_b = n;
    Test_Traj_B.lastc_k = (iv0 + n) - 2;
    while ((Test_Traj_B.lastv_b > 0) && (C[Test_Traj_B.lastc_k] == 0.0)) {
      Test_Traj_B.lastv_b--;
      Test_Traj_B.lastc_k--;
    }

    Test_Traj_B.lastc_k = 20;
    exitg2 = false;
    while ((!exitg2) && (Test_Traj_B.lastc_k > 0)) {
      Test_Traj_B.rowleft = (ic0 + Test_Traj_B.lastc_k) - 1;
      Test_Traj_B.ia_h = Test_Traj_B.rowleft;
      do {
        exitg1 = 0;
        if (Test_Traj_B.ia_h <= (Test_Traj_B.lastv_b - 1) * 20 +
            Test_Traj_B.rowleft) {
          if (C[Test_Traj_B.ia_h - 1] != 0.0) {
            exitg1 = 1;
          } else {
            Test_Traj_B.ia_h += 20;
          }
        } else {
          Test_Traj_B.lastc_k--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    Test_Traj_B.lastv_b = 0;
    Test_Traj_B.lastc_k = 0;
  }

  if (Test_Traj_B.lastv_b > 0) {
    if (Test_Traj_B.lastc_k != 0) {
      if (0 <= Test_Traj_B.lastc_k - 1) {
        memset(&work[0], 0, Test_Traj_B.lastc_k * sizeof(real_T));
      }

      Test_Traj_B.rowleft = iv0 - 1;
      jA = (Test_Traj_B.lastv_b - 1) * 20 + ic0;
      for (Test_Traj_B.iac_d = ic0; Test_Traj_B.iac_d <= jA; Test_Traj_B.iac_d +=
           20) {
        jy = 0;
        d = Test_Traj_B.iac_d + Test_Traj_B.lastc_k;
        for (Test_Traj_B.ia_h = Test_Traj_B.iac_d; Test_Traj_B.ia_h < d;
             Test_Traj_B.ia_h++) {
          work[jy] += b_C[Test_Traj_B.ia_h - 1] * b_C[Test_Traj_B.rowleft];
          jy++;
        }

        Test_Traj_B.rowleft++;
      }
    }

    if (!(-tau == 0.0)) {
      jA = ic0;
      jy = iv0 - 1;
      for (Test_Traj_B.ia_h = 0; Test_Traj_B.ia_h < Test_Traj_B.lastv_b;
           Test_Traj_B.ia_h++) {
        if (b_C[jy] != 0.0) {
          Test_Traj_B.temp_i = b_C[jy] * -tau;
          Test_Traj_B.rowleft = 0;
          d = (Test_Traj_B.lastc_k + jA) - 1;
          for (Test_Traj_B.iac_d = jA; Test_Traj_B.iac_d <= d; Test_Traj_B.iac_d
               ++) {
            b_C[Test_Traj_B.iac_d - 1] += work[Test_Traj_B.rowleft] *
              Test_Traj_B.temp_i;
            Test_Traj_B.rowleft++;
          }
        }

        jy++;
        jA += 20;
      }
    }
  }
}

static void Test_Traj_xzlarf_phmyul(int32_T m, int32_T n, int32_T iv0, real_T
  tau, const real_T C[400], int32_T ic0, real_T work[20], real_T b_C[400])
{
  int32_T d;
  int32_T jA;
  int32_T jy;
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&b_C[0], &C[0], 400U * sizeof(real_T));
  if (tau != 0.0) {
    Test_Traj_B.lastv_e = m;
    Test_Traj_B.lastc_h = (iv0 + m) - 2;
    while ((Test_Traj_B.lastv_e > 0) && (C[Test_Traj_B.lastc_h] == 0.0)) {
      Test_Traj_B.lastv_e--;
      Test_Traj_B.lastc_h--;
    }

    Test_Traj_B.lastc_h = n;
    exitg2 = false;
    while ((!exitg2) && (Test_Traj_B.lastc_h > 0)) {
      Test_Traj_B.coltop = (Test_Traj_B.lastc_h - 1) * 20 + ic0;
      Test_Traj_B.ia_j = Test_Traj_B.coltop;
      do {
        exitg1 = 0;
        if (Test_Traj_B.ia_j <= (Test_Traj_B.coltop + Test_Traj_B.lastv_e) - 1)
        {
          if (C[Test_Traj_B.ia_j - 1] != 0.0) {
            exitg1 = 1;
          } else {
            Test_Traj_B.ia_j++;
          }
        } else {
          Test_Traj_B.lastc_h--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    Test_Traj_B.lastc_h--;
  } else {
    Test_Traj_B.lastv_e = 0;
    Test_Traj_B.lastc_h = -1;
  }

  if (Test_Traj_B.lastv_e > 0) {
    if (Test_Traj_B.lastc_h + 1 != 0) {
      if (0 <= Test_Traj_B.lastc_h) {
        memset(&work[0], 0, (Test_Traj_B.lastc_h + 1) * sizeof(real_T));
      }

      jA = 0;
      jy = 20 * Test_Traj_B.lastc_h + ic0;
      for (Test_Traj_B.iac = ic0; Test_Traj_B.iac <= jy; Test_Traj_B.iac += 20)
      {
        Test_Traj_B.coltop = iv0 - 1;
        Test_Traj_B.c_mq = 0.0;
        d = Test_Traj_B.iac + Test_Traj_B.lastv_e;
        for (Test_Traj_B.ia_j = Test_Traj_B.iac; Test_Traj_B.ia_j < d;
             Test_Traj_B.ia_j++) {
          Test_Traj_B.c_mq += b_C[Test_Traj_B.ia_j - 1] * b_C[Test_Traj_B.coltop];
          Test_Traj_B.coltop++;
        }

        work[jA] += Test_Traj_B.c_mq;
        jA++;
      }
    }

    if (!(-tau == 0.0)) {
      jA = ic0;
      jy = 0;
      for (Test_Traj_B.ia_j = 0; Test_Traj_B.ia_j <= Test_Traj_B.lastc_h;
           Test_Traj_B.ia_j++) {
        if (work[jy] != 0.0) {
          Test_Traj_B.c_mq = work[jy] * -tau;
          Test_Traj_B.coltop = iv0 - 1;
          d = (Test_Traj_B.lastv_e + jA) - 1;
          for (Test_Traj_B.iac = jA; Test_Traj_B.iac <= d; Test_Traj_B.iac++) {
            b_C[Test_Traj_B.iac - 1] += b_C[Test_Traj_B.coltop] *
              Test_Traj_B.c_mq;
            Test_Traj_B.coltop++;
          }
        }

        jy++;
        jA += 20;
      }
    }
  }
}

static void Test_Traj_xgehrd(const real_T a[400], real_T b_a[400])
{
  memcpy(&b_a[0], &a[0], 400U * sizeof(real_T));
  memset(&Test_Traj_B.work[0], 0, 20U * sizeof(real_T));
  for (Test_Traj_B.b_i_d = 0; Test_Traj_B.b_i_d < 19; Test_Traj_B.b_i_d++) {
    Test_Traj_B.im1n = Test_Traj_B.b_i_d * 20 + 2;
    Test_Traj_B.in = (Test_Traj_B.b_i_d + 1) * 20 + 1;
    Test_Traj_B.u0_e = Test_Traj_B.b_i_d + 3;
    if (Test_Traj_B.u0_e >= 20) {
      Test_Traj_B.u0_e = 20;
    }

    memcpy(&Test_Traj_B.b_a[0], &b_a[0], 400U * sizeof(real_T));
    Test_Traj_xzlarfg(19 - Test_Traj_B.b_i_d, b_a[(Test_Traj_B.b_i_d + 20 *
      Test_Traj_B.b_i_d) + 1], Test_Traj_B.b_a, Test_Traj_B.u0_e +
                      Test_Traj_B.b_i_d * 20, &Test_Traj_B.b_alpha1, b_a,
                      &Test_Traj_B.tau);
    Test_Traj_B.u0_e = (Test_Traj_B.b_i_d + 20 * Test_Traj_B.b_i_d) + 1;
    b_a[Test_Traj_B.u0_e] = 1.0;
    Test_Traj_xzlarf_phmyu(19 - Test_Traj_B.b_i_d, Test_Traj_B.b_i_d +
      Test_Traj_B.im1n, Test_Traj_B.tau, b_a, Test_Traj_B.in, Test_Traj_B.work,
      Test_Traj_B.b_a);
    Test_Traj_xzlarf_phmyul(19 - Test_Traj_B.b_i_d, 19 - Test_Traj_B.b_i_d,
      Test_Traj_B.b_i_d + Test_Traj_B.im1n, Test_Traj_B.tau, Test_Traj_B.b_a,
      (Test_Traj_B.b_i_d + Test_Traj_B.in) + 1, Test_Traj_B.work, b_a);
    b_a[Test_Traj_B.u0_e] = Test_Traj_B.b_alpha1;
  }
}

static void Test_Traj_xrot(int32_T n, const real_T x[400], int32_T ix0, int32_T
  iy0, real_T c, real_T s, real_T b_x[400])
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  memcpy(&b_x[0], &x[0], 400U * sizeof(real_T));
  if (n >= 1) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      temp = c * b_x[ix] + s * b_x[iy];
      b_x[iy] = c * b_x[iy] - s * b_x[ix];
      b_x[ix] = temp;
      iy += 20;
      ix += 20;
    }
  }
}

static void Test_Traj_eml_dlahqr(const real_T h[400], real_T b_h[400], int32_T
  *info)
{
  boolean_T goto150;
  int32_T tst_tmp;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;
  memcpy(&b_h[0], &h[0], 400U * sizeof(real_T));
  *info = 0;
  Test_Traj_B.v_o[0] = 0.0;
  Test_Traj_B.v_o[1] = 0.0;
  Test_Traj_B.v_o[2] = 0.0;
  for (Test_Traj_B.L = 0; Test_Traj_B.L < 17; Test_Traj_B.L++) {
    Test_Traj_B.hoffset = Test_Traj_B.L + 20 * Test_Traj_B.L;
    b_h[Test_Traj_B.hoffset + 2] = 0.0;
    b_h[Test_Traj_B.hoffset + 3] = 0.0;
  }

  b_h[359] = 0.0;
  Test_Traj_B.i_nr = 19;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.i_nr + 1 >= 1)) {
    Test_Traj_B.L = 1;
    goto150 = false;
    Test_Traj_B.ix = 0;
    exitg2 = false;
    while ((!exitg2) && (Test_Traj_B.ix < 601)) {
      Test_Traj_B.k_c2 = Test_Traj_B.i_nr;
      exitg3 = false;
      while ((!exitg3) && (Test_Traj_B.k_c2 + 1 > Test_Traj_B.L)) {
        Test_Traj_B.hoffset = (Test_Traj_B.k_c2 - 1) * 20 + Test_Traj_B.k_c2;
        Test_Traj_B.ba = fabs(b_h[Test_Traj_B.hoffset]);
        if (Test_Traj_B.ba <= 2.0041683600089728E-291) {
          exitg3 = true;
        } else {
          Test_Traj_B.m_c = 20 * Test_Traj_B.k_c2 + Test_Traj_B.k_c2;
          Test_Traj_B.bb = fabs(b_h[Test_Traj_B.m_c]);
          tst_tmp = Test_Traj_B.hoffset - 1;
          Test_Traj_B.tst = fabs(b_h[tst_tmp]) + Test_Traj_B.bb;
          if (Test_Traj_B.tst == 0.0) {
            if (Test_Traj_B.k_c2 - 1 >= 1) {
              Test_Traj_B.tst = fabs(b_h[((Test_Traj_B.k_c2 - 2) * 20 +
                Test_Traj_B.k_c2) - 1]);
            }

            if (Test_Traj_B.k_c2 + 2 <= 20) {
              Test_Traj_B.tst += fabs(b_h[(20 * Test_Traj_B.k_c2 +
                Test_Traj_B.k_c2) + 1]);
            }
          }

          if (Test_Traj_B.ba <= 2.2204460492503131E-16 * Test_Traj_B.tst) {
            Test_Traj_B.tst = fabs(b_h[Test_Traj_B.m_c - 1]);
            if (Test_Traj_B.ba > Test_Traj_B.tst) {
              Test_Traj_B.ab = Test_Traj_B.ba;
              Test_Traj_B.ba = Test_Traj_B.tst;
            } else {
              Test_Traj_B.ab = Test_Traj_B.tst;
            }

            Test_Traj_B.tst = fabs(b_h[tst_tmp] - b_h[Test_Traj_B.m_c]);
            if (Test_Traj_B.bb > Test_Traj_B.tst) {
              Test_Traj_B.aa = Test_Traj_B.bb;
              Test_Traj_B.bb = Test_Traj_B.tst;
            } else {
              Test_Traj_B.aa = Test_Traj_B.tst;
            }

            Test_Traj_B.tst = Test_Traj_B.aa + Test_Traj_B.ab;
            Test_Traj_B.bb = Test_Traj_B.aa / Test_Traj_B.tst * Test_Traj_B.bb *
              2.2204460492503131E-16;
            if ((2.0041683600089728E-291 > Test_Traj_B.bb) || rtIsNaN
                (Test_Traj_B.bb)) {
              Test_Traj_B.bb = 2.0041683600089728E-291;
            }

            if (Test_Traj_B.ab / Test_Traj_B.tst * Test_Traj_B.ba <=
                Test_Traj_B.bb) {
              exitg3 = true;
            } else {
              Test_Traj_B.k_c2--;
            }
          } else {
            Test_Traj_B.k_c2--;
          }
        }
      }

      Test_Traj_B.L = Test_Traj_B.k_c2 + 1;
      if (Test_Traj_B.k_c2 + 1 > 1) {
        b_h[Test_Traj_B.k_c2 + 20 * (Test_Traj_B.k_c2 - 1)] = 0.0;
      }

      if (Test_Traj_B.k_c2 + 1 >= Test_Traj_B.i_nr) {
        goto150 = true;
        exitg2 = true;
      } else {
        if (Test_Traj_B.ix == 10) {
          tst_tmp = 20 * Test_Traj_B.k_c2 + Test_Traj_B.k_c2;
          Test_Traj_B.tst = fabs(b_h[((Test_Traj_B.k_c2 + 1) * 20 +
            Test_Traj_B.k_c2) + 2]) + fabs(b_h[tst_tmp + 1]);
          Test_Traj_B.ab = b_h[tst_tmp] + 0.75 * Test_Traj_B.tst;
          Test_Traj_B.h12 = -0.4375 * Test_Traj_B.tst;
          Test_Traj_B.aa = Test_Traj_B.tst;
          Test_Traj_B.ba = Test_Traj_B.ab;
        } else if (Test_Traj_B.ix == 20) {
          Test_Traj_B.tst = fabs(b_h[((Test_Traj_B.i_nr - 2) * 20 +
            Test_Traj_B.i_nr) - 1]) + fabs(b_h[(Test_Traj_B.i_nr - 1) * 20 +
            Test_Traj_B.i_nr]);
          Test_Traj_B.ab = b_h[20 * Test_Traj_B.i_nr + Test_Traj_B.i_nr] + 0.75 *
            Test_Traj_B.tst;
          Test_Traj_B.h12 = -0.4375 * Test_Traj_B.tst;
          Test_Traj_B.aa = Test_Traj_B.tst;
          Test_Traj_B.ba = Test_Traj_B.ab;
        } else {
          Test_Traj_B.m_c = (Test_Traj_B.i_nr - 1) * 20 + Test_Traj_B.i_nr;
          Test_Traj_B.ab = b_h[Test_Traj_B.m_c - 1];
          Test_Traj_B.aa = b_h[Test_Traj_B.m_c];
          Test_Traj_B.h12 = b_h[(20 * Test_Traj_B.i_nr + Test_Traj_B.i_nr) - 1];
          Test_Traj_B.ba = b_h[20 * Test_Traj_B.i_nr + Test_Traj_B.i_nr];
        }

        Test_Traj_B.tst = ((fabs(Test_Traj_B.ab) + fabs(Test_Traj_B.h12)) + fabs
                           (Test_Traj_B.aa)) + fabs(Test_Traj_B.ba);
        if (Test_Traj_B.tst == 0.0) {
          Test_Traj_B.ab = 0.0;
          Test_Traj_B.ba = 0.0;
          Test_Traj_B.bb = 0.0;
          Test_Traj_B.aa = 0.0;
        } else {
          Test_Traj_B.ab /= Test_Traj_B.tst;
          Test_Traj_B.aa /= Test_Traj_B.tst;
          Test_Traj_B.h12 /= Test_Traj_B.tst;
          Test_Traj_B.ba /= Test_Traj_B.tst;
          Test_Traj_B.bb = (Test_Traj_B.ab + Test_Traj_B.ba) / 2.0;
          Test_Traj_B.ab = (Test_Traj_B.ab - Test_Traj_B.bb) * (Test_Traj_B.ba -
            Test_Traj_B.bb) - Test_Traj_B.h12 * Test_Traj_B.aa;
          Test_Traj_B.aa = sqrt(fabs(Test_Traj_B.ab));
          if (Test_Traj_B.ab >= 0.0) {
            Test_Traj_B.ab = Test_Traj_B.bb * Test_Traj_B.tst;
            Test_Traj_B.bb = Test_Traj_B.ab;
            Test_Traj_B.ba = Test_Traj_B.aa * Test_Traj_B.tst;
            Test_Traj_B.aa = -Test_Traj_B.ba;
          } else {
            Test_Traj_B.ab = Test_Traj_B.bb + Test_Traj_B.aa;
            Test_Traj_B.bb -= Test_Traj_B.aa;
            if (fabs(Test_Traj_B.ab - Test_Traj_B.ba) <= fabs(Test_Traj_B.bb -
                 Test_Traj_B.ba)) {
              Test_Traj_B.ab *= Test_Traj_B.tst;
              Test_Traj_B.bb = Test_Traj_B.ab;
            } else {
              Test_Traj_B.bb *= Test_Traj_B.tst;
              Test_Traj_B.ab = Test_Traj_B.bb;
            }

            Test_Traj_B.ba = 0.0;
            Test_Traj_B.aa = 0.0;
          }
        }

        Test_Traj_B.m_c = Test_Traj_B.i_nr - 2;
        exitg3 = false;
        while ((!exitg3) && (Test_Traj_B.m_c + 1 >= Test_Traj_B.k_c2 + 1)) {
          tst_tmp = 20 * Test_Traj_B.m_c + Test_Traj_B.m_c;
          Test_Traj_B.hoffset = tst_tmp + 1;
          Test_Traj_B.h12 = b_h[tst_tmp] - Test_Traj_B.bb;
          Test_Traj_B.tst = (fabs(Test_Traj_B.h12) + fabs(Test_Traj_B.aa)) +
            fabs(b_h[Test_Traj_B.hoffset]);
          Test_Traj_B.h21s = b_h[Test_Traj_B.hoffset] / Test_Traj_B.tst;
          Test_Traj_B.hoffset = (Test_Traj_B.m_c + 1) * 20 + Test_Traj_B.m_c;
          Test_Traj_B.v_o[0] = (Test_Traj_B.h12 / Test_Traj_B.tst * (b_h[tst_tmp]
            - Test_Traj_B.ab) + b_h[Test_Traj_B.hoffset] * Test_Traj_B.h21s) -
            Test_Traj_B.aa / Test_Traj_B.tst * Test_Traj_B.ba;
          Test_Traj_B.nr = Test_Traj_B.hoffset + 1;
          Test_Traj_B.v_o[1] = (((b_h[Test_Traj_B.nr] + b_h[tst_tmp]) -
            Test_Traj_B.ab) - Test_Traj_B.bb) * Test_Traj_B.h21s;
          Test_Traj_B.v_o[2] = b_h[Test_Traj_B.hoffset + 2] * Test_Traj_B.h21s;
          Test_Traj_B.tst = (fabs(Test_Traj_B.v_o[0]) + fabs(Test_Traj_B.v_o[1]))
            + fabs(Test_Traj_B.v_o[2]);
          Test_Traj_B.v_o[0] /= Test_Traj_B.tst;
          Test_Traj_B.v_o[1] /= Test_Traj_B.tst;
          Test_Traj_B.v_o[2] /= Test_Traj_B.tst;
          if (Test_Traj_B.m_c + 1 == Test_Traj_B.k_c2 + 1) {
            exitg3 = true;
          } else {
            Test_Traj_B.hoffset = (Test_Traj_B.m_c - 1) * 20 + Test_Traj_B.m_c;
            if (fabs(b_h[Test_Traj_B.hoffset]) * (fabs(Test_Traj_B.v_o[1]) +
                 fabs(Test_Traj_B.v_o[2])) <= ((fabs(b_h[Test_Traj_B.hoffset - 1])
                  + fabs(b_h[tst_tmp])) + fabs(b_h[Test_Traj_B.nr])) *
                (2.2204460492503131E-16 * fabs(Test_Traj_B.v_o[0]))) {
              exitg3 = true;
            } else {
              Test_Traj_B.m_c--;
            }
          }
        }

        for (tst_tmp = Test_Traj_B.m_c + 1; tst_tmp <= Test_Traj_B.i_nr; tst_tmp
             ++) {
          Test_Traj_B.nr = (Test_Traj_B.i_nr - tst_tmp) + 2;
          if (3 < Test_Traj_B.nr) {
            Test_Traj_B.nr = 3;
          }

          if (tst_tmp > Test_Traj_B.m_c + 1) {
            Test_Traj_B.hoffset = ((tst_tmp - 2) * 20 + tst_tmp) - 2;
            for (Test_Traj_B.c_j_i = 0; Test_Traj_B.c_j_i < Test_Traj_B.nr;
                 Test_Traj_B.c_j_i++) {
              Test_Traj_B.v_o[Test_Traj_B.c_j_i] = b_h[(Test_Traj_B.c_j_i +
                Test_Traj_B.hoffset) + 1];
            }
          }

          Test_Traj_B.b_v[0] = Test_Traj_B.v_o[0];
          Test_Traj_B.b_v[1] = Test_Traj_B.v_o[1];
          Test_Traj_B.b_v[2] = Test_Traj_B.v_o[2];
          Test_Traj_xzlarfg_phm(Test_Traj_B.nr, Test_Traj_B.v_o[0],
                                Test_Traj_B.b_v, &Test_Traj_B.ba,
                                &Test_Traj_B.tst);
          Test_Traj_B.v_o[1] = Test_Traj_B.b_v[1];
          Test_Traj_B.v_o[2] = Test_Traj_B.b_v[2];
          Test_Traj_B.v_o[0] = Test_Traj_B.ba;
          if (tst_tmp > Test_Traj_B.m_c + 1) {
            Test_Traj_B.hoffset = tst_tmp + 20 * (tst_tmp - 2);
            b_h[Test_Traj_B.hoffset - 1] = Test_Traj_B.ba;
            b_h[Test_Traj_B.hoffset] = 0.0;
            if (tst_tmp < Test_Traj_B.i_nr) {
              b_h[Test_Traj_B.hoffset + 1] = 0.0;
            }
          } else {
            if (Test_Traj_B.m_c + 1 > Test_Traj_B.k_c2 + 1) {
              Test_Traj_B.hoffset = ((tst_tmp - 2) * 20 + tst_tmp) - 1;
              b_h[Test_Traj_B.hoffset] *= 1.0 - Test_Traj_B.tst;
            }
          }

          Test_Traj_B.ba = Test_Traj_B.b_v[1];
          Test_Traj_B.ab = Test_Traj_B.tst * Test_Traj_B.b_v[1];
          if (Test_Traj_B.nr == 3) {
            Test_Traj_B.aa = Test_Traj_B.b_v[2];
            Test_Traj_B.h12 = Test_Traj_B.tst * Test_Traj_B.b_v[2];
            for (Test_Traj_B.d_j_h = tst_tmp; Test_Traj_B.d_j_h < 21;
                 Test_Traj_B.d_j_h++) {
              Test_Traj_B.hoffset = (Test_Traj_B.d_j_h - 1) * 20 + tst_tmp;
              Test_Traj_B.nr = Test_Traj_B.hoffset - 1;
              Test_Traj_B.c_j_i = Test_Traj_B.hoffset + 1;
              Test_Traj_B.bb = (b_h[Test_Traj_B.nr] + b_h[Test_Traj_B.hoffset] *
                                Test_Traj_B.ba) + b_h[Test_Traj_B.c_j_i] *
                Test_Traj_B.aa;
              b_h[Test_Traj_B.nr] -= Test_Traj_B.bb * Test_Traj_B.tst;
              b_h[Test_Traj_B.hoffset] -= Test_Traj_B.bb * Test_Traj_B.ab;
              b_h[Test_Traj_B.c_j_i] -= Test_Traj_B.bb * Test_Traj_B.h12;
            }

            Test_Traj_B.hoffset = tst_tmp + 3;
            Test_Traj_B.nr = Test_Traj_B.i_nr + 1;
            if (Test_Traj_B.hoffset < Test_Traj_B.nr) {
              Test_Traj_B.nr = Test_Traj_B.hoffset;
            }

            Test_Traj_B.d_j_h = Test_Traj_B.nr - 1;
            for (Test_Traj_B.e_j = 0; Test_Traj_B.e_j <= Test_Traj_B.d_j_h;
                 Test_Traj_B.e_j++) {
              Test_Traj_B.hoffset = (tst_tmp - 1) * 20 + Test_Traj_B.e_j;
              Test_Traj_B.nr = 20 * tst_tmp + Test_Traj_B.e_j;
              Test_Traj_B.c_j_i = (tst_tmp + 1) * 20 + Test_Traj_B.e_j;
              Test_Traj_B.bb = (b_h[Test_Traj_B.hoffset] + b_h[Test_Traj_B.nr] *
                                Test_Traj_B.ba) + b_h[Test_Traj_B.c_j_i] *
                Test_Traj_B.aa;
              b_h[Test_Traj_B.hoffset] -= Test_Traj_B.bb * Test_Traj_B.tst;
              b_h[Test_Traj_B.nr] -= Test_Traj_B.bb * Test_Traj_B.ab;
              b_h[Test_Traj_B.c_j_i] -= Test_Traj_B.bb * Test_Traj_B.h12;
            }
          } else {
            if (Test_Traj_B.nr == 2) {
              for (Test_Traj_B.c_j_i = tst_tmp; Test_Traj_B.c_j_i < 21;
                   Test_Traj_B.c_j_i++) {
                Test_Traj_B.hoffset = (Test_Traj_B.c_j_i - 1) * 20 + tst_tmp;
                Test_Traj_B.nr = Test_Traj_B.hoffset - 1;
                Test_Traj_B.bb = b_h[Test_Traj_B.nr] + b_h[Test_Traj_B.hoffset] *
                  Test_Traj_B.ba;
                b_h[Test_Traj_B.nr] -= Test_Traj_B.bb * Test_Traj_B.tst;
                b_h[Test_Traj_B.hoffset] -= Test_Traj_B.bb * Test_Traj_B.ab;
              }

              for (Test_Traj_B.c_j_i = 0; Test_Traj_B.c_j_i <= Test_Traj_B.i_nr;
                   Test_Traj_B.c_j_i++) {
                Test_Traj_B.hoffset = (tst_tmp - 1) * 20 + Test_Traj_B.c_j_i;
                Test_Traj_B.nr = 20 * tst_tmp + Test_Traj_B.c_j_i;
                Test_Traj_B.bb = b_h[Test_Traj_B.hoffset] + b_h[Test_Traj_B.nr] *
                  Test_Traj_B.ba;
                b_h[Test_Traj_B.hoffset] -= Test_Traj_B.bb * Test_Traj_B.tst;
                b_h[Test_Traj_B.nr] -= Test_Traj_B.bb * Test_Traj_B.ab;
              }
            }
          }
        }

        Test_Traj_B.ix++;
      }
    }

    if (!goto150) {
      *info = Test_Traj_B.i_nr + 1;
      exitg1 = true;
    } else {
      if ((Test_Traj_B.i_nr + 1 != Test_Traj_B.L) && (Test_Traj_B.L ==
           Test_Traj_B.i_nr)) {
        Test_Traj_xdlanv2(b_h[(Test_Traj_B.i_nr + 20 * (Test_Traj_B.i_nr - 1)) -
                          1], b_h[(Test_Traj_B.i_nr + 20 * Test_Traj_B.i_nr) - 1],
                          b_h[Test_Traj_B.i_nr + 20 * (Test_Traj_B.i_nr - 1)],
                          b_h[Test_Traj_B.i_nr + 20 * Test_Traj_B.i_nr],
                          &Test_Traj_B.ab, &Test_Traj_B.bb, &Test_Traj_B.aa,
                          &Test_Traj_B.h12, &b_h[(Test_Traj_B.i_nr + 20 *
          (Test_Traj_B.i_nr - 1)) - 1], &Test_Traj_B.h21s, &Test_Traj_B.d_f,
                          &Test_Traj_B.e_a, &Test_Traj_B.tst, &Test_Traj_B.ba);
        Test_Traj_B.hoffset = Test_Traj_B.i_nr + 20 * Test_Traj_B.i_nr;
        b_h[Test_Traj_B.hoffset - 1] = Test_Traj_B.h21s;
        Test_Traj_B.ix = 20 * (Test_Traj_B.i_nr - 1);
        b_h[Test_Traj_B.i_nr + Test_Traj_B.ix] = Test_Traj_B.d_f;
        b_h[Test_Traj_B.hoffset] = Test_Traj_B.e_a;
        if (20 > Test_Traj_B.i_nr + 1) {
          Test_Traj_B.hoffset = (Test_Traj_B.i_nr + 1) * 20 + Test_Traj_B.i_nr;
          memcpy(&Test_Traj_B.b_h[0], &b_h[0], 400U * sizeof(real_T));
          Test_Traj_xrot(19 - Test_Traj_B.i_nr, Test_Traj_B.b_h,
                         Test_Traj_B.hoffset, Test_Traj_B.hoffset + 1,
                         Test_Traj_B.tst, Test_Traj_B.ba, b_h);
        }

        Test_Traj_B.m_c = Test_Traj_B.i_nr - 2;
        if (Test_Traj_B.i_nr - 1 >= 1) {
          Test_Traj_B.i_nr *= 20;
          for (Test_Traj_B.k_c2 = 0; Test_Traj_B.k_c2 <= Test_Traj_B.m_c;
               Test_Traj_B.k_c2++) {
            Test_Traj_B.ab = Test_Traj_B.tst * b_h[Test_Traj_B.ix] +
              Test_Traj_B.ba * b_h[Test_Traj_B.i_nr];
            b_h[Test_Traj_B.i_nr] = Test_Traj_B.tst * b_h[Test_Traj_B.i_nr] -
              Test_Traj_B.ba * b_h[Test_Traj_B.ix];
            b_h[Test_Traj_B.ix] = Test_Traj_B.ab;
            Test_Traj_B.i_nr++;
            Test_Traj_B.ix++;
          }
        }
      }

      Test_Traj_B.i_nr = Test_Traj_B.L - 2;
    }
  }
}

static void Test_Traj_xhseqr(const real_T h[400], real_T b_h[400], int32_T *info)
{
  Test_Traj_eml_dlahqr(h, b_h, info);
  Test_Traj_B.istart_i = 4;
  for (Test_Traj_B.b_j_c = 0; Test_Traj_B.b_j_c < 17; Test_Traj_B.b_j_c++) {
    if (Test_Traj_B.istart_i <= 20) {
      memset(&b_h[(Test_Traj_B.b_j_c * 20 + Test_Traj_B.istart_i) + -1], 0, (21
              - Test_Traj_B.istart_i) * sizeof(real_T));
    }

    Test_Traj_B.istart_i++;
  }
}

static void Test_Traj_schur(real_T A[400], real_T V[400])
{
  boolean_T p;
  p = true;
  for (Test_Traj_B.istart = 0; Test_Traj_B.istart < 400; Test_Traj_B.istart++) {
    if (p && ((!rtIsInf(A[Test_Traj_B.istart])) && (!rtIsNaN
          (A[Test_Traj_B.istart])))) {
    } else {
      p = false;
    }
  }

  if (!p) {
    for (Test_Traj_B.istart = 0; Test_Traj_B.istart < 400; Test_Traj_B.istart++)
    {
      V[Test_Traj_B.istart] = (rtNaN);
    }

    Test_Traj_B.istart = 2;
    for (Test_Traj_B.b_j_d = 0; Test_Traj_B.b_j_d < 19; Test_Traj_B.b_j_d++) {
      if (Test_Traj_B.istart <= 20) {
        memset(&V[(Test_Traj_B.b_j_d * 20 + Test_Traj_B.istart) + -1], 0, (21 -
                Test_Traj_B.istart) * sizeof(real_T));
      }

      Test_Traj_B.istart++;
    }
  } else {
    memcpy(&Test_Traj_B.A_i[0], &A[0], 400U * sizeof(real_T));
    Test_Traj_xgehrd(Test_Traj_B.A_i, A);
    Test_Traj_xhseqr(A, V, &Test_Traj_B.istart);
  }
}

static void Test_Traj_eig(const real_T A[400], creal_T V[20])
{
  boolean_T p;
  int32_T exitg1;
  boolean_T exitg2;
  p = true;
  for (Test_Traj_B.i_g = 0; Test_Traj_B.i_g < 400; Test_Traj_B.i_g++) {
    if (p && ((!rtIsInf(A[Test_Traj_B.i_g])) && (!rtIsNaN(A[Test_Traj_B.i_g]))))
    {
    } else {
      p = false;
    }
  }

  if (!p) {
    for (Test_Traj_B.i_g = 0; Test_Traj_B.i_g < 20; Test_Traj_B.i_g++) {
      V[Test_Traj_B.i_g].re = (rtNaN);
      V[Test_Traj_B.i_g].im = 0.0;
    }
  } else {
    p = true;
    Test_Traj_B.i_g = 0;
    exitg2 = false;
    while ((!exitg2) && (Test_Traj_B.i_g < 20)) {
      Test_Traj_B.b_i_fi = 0;
      do {
        exitg1 = 0;
        if (Test_Traj_B.b_i_fi <= Test_Traj_B.i_g) {
          if (!(A[20 * Test_Traj_B.i_g + Test_Traj_B.b_i_fi] == A[20 *
                Test_Traj_B.b_i_fi + Test_Traj_B.i_g])) {
            p = false;
            exitg1 = 1;
          } else {
            Test_Traj_B.b_i_fi++;
          }
        } else {
          Test_Traj_B.i_g++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    if (p) {
      memcpy(&Test_Traj_B.A[0], &A[0], 400U * sizeof(real_T));
      Test_Traj_schur(Test_Traj_B.A, Test_Traj_B.T);
      for (Test_Traj_B.i_g = 0; Test_Traj_B.i_g < 20; Test_Traj_B.i_g++) {
        V[Test_Traj_B.i_g].re = Test_Traj_B.T[20 * Test_Traj_B.i_g +
          Test_Traj_B.i_g];
        V[Test_Traj_B.i_g].im = 0.0;
      }
    } else {
      Test_Traj_xzgeev(A, &Test_Traj_B.i_g, V, Test_Traj_B.beta1);
      for (Test_Traj_B.i_g = 0; Test_Traj_B.i_g < 20; Test_Traj_B.i_g++) {
        if (Test_Traj_B.beta1[Test_Traj_B.i_g].im == 0.0) {
          if (V[Test_Traj_B.i_g].im == 0.0) {
            Test_Traj_B.bim_o = V[Test_Traj_B.i_g].re /
              Test_Traj_B.beta1[Test_Traj_B.i_g].re;
            Test_Traj_B.brm_f = 0.0;
          } else if (V[Test_Traj_B.i_g].re == 0.0) {
            Test_Traj_B.bim_o = 0.0;
            Test_Traj_B.brm_f = V[Test_Traj_B.i_g].im /
              Test_Traj_B.beta1[Test_Traj_B.i_g].re;
          } else {
            Test_Traj_B.bim_o = V[Test_Traj_B.i_g].re /
              Test_Traj_B.beta1[Test_Traj_B.i_g].re;
            Test_Traj_B.brm_f = V[Test_Traj_B.i_g].im /
              Test_Traj_B.beta1[Test_Traj_B.i_g].re;
          }
        } else if (Test_Traj_B.beta1[Test_Traj_B.i_g].re == 0.0) {
          if (V[Test_Traj_B.i_g].re == 0.0) {
            Test_Traj_B.bim_o = V[Test_Traj_B.i_g].im /
              Test_Traj_B.beta1[Test_Traj_B.i_g].im;
            Test_Traj_B.brm_f = 0.0;
          } else if (V[Test_Traj_B.i_g].im == 0.0) {
            Test_Traj_B.bim_o = 0.0;
            Test_Traj_B.brm_f = -(V[Test_Traj_B.i_g].re /
                                  Test_Traj_B.beta1[Test_Traj_B.i_g].im);
          } else {
            Test_Traj_B.bim_o = V[Test_Traj_B.i_g].im /
              Test_Traj_B.beta1[Test_Traj_B.i_g].im;
            Test_Traj_B.brm_f = -(V[Test_Traj_B.i_g].re /
                                  Test_Traj_B.beta1[Test_Traj_B.i_g].im);
          }
        } else {
          Test_Traj_B.brm_f = fabs(Test_Traj_B.beta1[Test_Traj_B.i_g].re);
          Test_Traj_B.bim_o = fabs(Test_Traj_B.beta1[Test_Traj_B.i_g].im);
          if (Test_Traj_B.brm_f > Test_Traj_B.bim_o) {
            Test_Traj_B.brm_f = Test_Traj_B.beta1[Test_Traj_B.i_g].im /
              Test_Traj_B.beta1[Test_Traj_B.i_g].re;
            Test_Traj_B.d_l = Test_Traj_B.brm_f *
              Test_Traj_B.beta1[Test_Traj_B.i_g].im +
              Test_Traj_B.beta1[Test_Traj_B.i_g].re;
            Test_Traj_B.bim_o = (Test_Traj_B.brm_f * V[Test_Traj_B.i_g].im +
                                 V[Test_Traj_B.i_g].re) / Test_Traj_B.d_l;
            Test_Traj_B.brm_f = (V[Test_Traj_B.i_g].im - Test_Traj_B.brm_f *
                                 V[Test_Traj_B.i_g].re) / Test_Traj_B.d_l;
          } else if (Test_Traj_B.bim_o == Test_Traj_B.brm_f) {
            Test_Traj_B.d_l = Test_Traj_B.beta1[Test_Traj_B.i_g].re > 0.0 ? 0.5 :
              -0.5;
            Test_Traj_B.sgnbi_d = Test_Traj_B.beta1[Test_Traj_B.i_g].im > 0.0 ?
              0.5 : -0.5;
            Test_Traj_B.bim_o = (V[Test_Traj_B.i_g].re * Test_Traj_B.d_l +
                                 V[Test_Traj_B.i_g].im * Test_Traj_B.sgnbi_d) /
              Test_Traj_B.brm_f;
            Test_Traj_B.brm_f = (V[Test_Traj_B.i_g].im * Test_Traj_B.d_l -
                                 V[Test_Traj_B.i_g].re * Test_Traj_B.sgnbi_d) /
              Test_Traj_B.brm_f;
          } else {
            Test_Traj_B.brm_f = Test_Traj_B.beta1[Test_Traj_B.i_g].re /
              Test_Traj_B.beta1[Test_Traj_B.i_g].im;
            Test_Traj_B.d_l = Test_Traj_B.brm_f *
              Test_Traj_B.beta1[Test_Traj_B.i_g].re +
              Test_Traj_B.beta1[Test_Traj_B.i_g].im;
            Test_Traj_B.bim_o = (Test_Traj_B.brm_f * V[Test_Traj_B.i_g].re +
                                 V[Test_Traj_B.i_g].im) / Test_Traj_B.d_l;
            Test_Traj_B.brm_f = (Test_Traj_B.brm_f * V[Test_Traj_B.i_g].im -
                                 V[Test_Traj_B.i_g].re) / Test_Traj_B.d_l;
          }
        }

        Test_Traj_B.V.re = Test_Traj_B.bim_o;
        Test_Traj_B.V.im = Test_Traj_B.brm_f;
        V[Test_Traj_B.i_g] = Test_Traj_B.V;
      }
    }
  }
}

static real_T Test_Traj_leastEigvJtJ(const real_T Jtri[60])
{
  real_T lev;
  boolean_T exitg1;
  Test_Traj_B.bet = 0.0;
  for (Test_Traj_B.i_ni = 0; Test_Traj_B.i_ni < 20; Test_Traj_B.i_ni++) {
    Test_Traj_B.oldq[Test_Traj_B.i_ni] = 0.0;
    Test_Traj_B.q[Test_Traj_B.i_ni] = 0.22360679774997896;
  }

  for (Test_Traj_B.b_idx = 0; Test_Traj_B.b_idx < 20; Test_Traj_B.b_idx++) {
    memcpy(&Test_Traj_B.v_li[0], &Test_Traj_B.q[0], 20U * sizeof(real_T));
    Test_Traj_solveHessian_ph(Jtri, Test_Traj_B.v_li);
    Test_Traj_B.q_cx = 0.0;
    for (Test_Traj_B.i_ni = 0; Test_Traj_B.i_ni < 20; Test_Traj_B.i_ni++) {
      Test_Traj_B.q_cx += Test_Traj_B.q[Test_Traj_B.i_ni] *
        Test_Traj_B.v_li[Test_Traj_B.i_ni];
    }

    Test_Traj_B.alpha[Test_Traj_B.b_idx] = Test_Traj_B.q_cx;
    for (Test_Traj_B.i_ni = 0; Test_Traj_B.i_ni < 20; Test_Traj_B.i_ni++) {
      Test_Traj_B.v_li[Test_Traj_B.i_ni] = (Test_Traj_B.v_li[Test_Traj_B.i_ni] -
        Test_Traj_B.bet * Test_Traj_B.oldq[Test_Traj_B.i_ni]) -
        Test_Traj_B.alpha[Test_Traj_B.b_idx] * Test_Traj_B.q[Test_Traj_B.i_ni];
      Test_Traj_B.oldq[Test_Traj_B.i_ni] = Test_Traj_B.q[Test_Traj_B.i_ni];
    }

    Test_Traj_B.bet = Test_Traj_norm_p(Test_Traj_B.v_li);
    for (Test_Traj_B.i_ni = 0; Test_Traj_B.i_ni < 20; Test_Traj_B.i_ni++) {
      Test_Traj_B.q[Test_Traj_B.i_ni] = Test_Traj_B.v_li[Test_Traj_B.i_ni] /
        Test_Traj_B.bet;
    }

    Test_Traj_B.beta_d[Test_Traj_B.b_idx] = Test_Traj_B.bet;
  }

  memcpy(&Test_Traj_B.beta[0], &Test_Traj_B.beta_d[0], 19U * sizeof(real_T));
  memcpy(&Test_Traj_B.beta[19], &Test_Traj_B.alpha[0], 20U * sizeof(real_T));
  memcpy(&Test_Traj_B.beta[39], &Test_Traj_B.beta_d[0], 19U * sizeof(real_T));
  Test_Traj_accumarray(Test_Traj_B.beta, Test_Traj_B.dv2);
  Test_Traj_eig(Test_Traj_B.dv2, Test_Traj_B.x_fn);
  for (Test_Traj_B.b_idx = 0; Test_Traj_B.b_idx < 20; Test_Traj_B.b_idx++) {
    Test_Traj_B.oldq[Test_Traj_B.b_idx] = Test_Traj_rt_hypotd_snf
      (Test_Traj_B.x_fn[Test_Traj_B.b_idx].re,
       Test_Traj_B.x_fn[Test_Traj_B.b_idx].im);
  }

  if (!rtIsNaN(Test_Traj_B.oldq[0])) {
    Test_Traj_B.b_idx = 1;
  } else {
    Test_Traj_B.b_idx = 0;
    Test_Traj_B.i_ni = 2;
    exitg1 = false;
    while ((!exitg1) && (Test_Traj_B.i_ni <= 20)) {
      if (!rtIsNaN(Test_Traj_B.oldq[Test_Traj_B.i_ni - 1])) {
        Test_Traj_B.b_idx = Test_Traj_B.i_ni;
        exitg1 = true;
      } else {
        Test_Traj_B.i_ni++;
      }
    }
  }

  if (Test_Traj_B.b_idx == 0) {
    Test_Traj_B.bet = Test_Traj_B.oldq[0];
  } else {
    Test_Traj_B.bet = Test_Traj_B.oldq[Test_Traj_B.b_idx - 1];
    for (Test_Traj_B.i_ni = Test_Traj_B.b_idx + 1; Test_Traj_B.i_ni < 21;
         Test_Traj_B.i_ni++) {
      Test_Traj_B.q_cx = Test_Traj_B.oldq[Test_Traj_B.i_ni - 1];
      if (Test_Traj_B.bet > Test_Traj_B.q_cx) {
        Test_Traj_B.bet = Test_Traj_B.q_cx;
      }
    }
  }

  lev = 1.0 / Test_Traj_B.bet;
  return lev;
}

static void Test_Traj_fletcher(real_T S, real_T Snew, const real_T dx[20], const
  real_T v[20], const real_T Jtri[60], real_T lambda, real_T lambdac, real_T
  *b_lambda, real_T *b_lambdac)
{
  *b_lambdac = lambdac;
  *b_lambda = lambda;
  memcpy(&Test_Traj_B.lower[0], &Jtri[0], 20U * sizeof(real_T));
  memcpy(&Test_Traj_B.upper[0], &Jtri[40], 20U * sizeof(real_T));
  Test_Traj_B.z_tmp[19] = 0;
  Test_Traj_B.iv3[0] = 19;
  Test_Traj_B.iv4[0] = 19;
  for (Test_Traj_B.z_tmp_b = 0; Test_Traj_B.z_tmp_b < 19; Test_Traj_B.z_tmp_b++)
  {
    Test_Traj_B.z_tmp_o = Test_Traj_B.z_tmp_b + 1;
    Test_Traj_B.z_tmp[Test_Traj_B.z_tmp_b] = static_cast<int8_T>
      (Test_Traj_B.z_tmp_o);
    Test_Traj_B.iv3[Test_Traj_B.z_tmp_b + 1] = static_cast<int8_T>
      (Test_Traj_B.z_tmp_b);
    Test_Traj_B.iv4[Test_Traj_B.z_tmp_b + 1] = static_cast<int8_T>
      (Test_Traj_B.z_tmp_b);
    Test_Traj_B.z_tmp_j[Test_Traj_B.z_tmp_b] = static_cast<int8_T>
      (Test_Traj_B.z_tmp_b);
    Test_Traj_B.z_tmp_l[Test_Traj_B.z_tmp_b] = static_cast<int8_T>
      (Test_Traj_B.z_tmp_o);
  }

  for (Test_Traj_B.z_tmp_b = 0; Test_Traj_B.z_tmp_b < 20; Test_Traj_B.z_tmp_b++)
  {
    Test_Traj_B.z_f[Test_Traj_B.z_tmp_b] = (Jtri[Test_Traj_B.z_tmp_b + 20] *
      dx[Test_Traj_B.z_tmp_b] + Test_Traj_B.upper[Test_Traj_B.z_tmp_b] *
      dx[Test_Traj_B.z_tmp[Test_Traj_B.z_tmp_b]]) +
      Test_Traj_B.lower[Test_Traj_B.iv3[Test_Traj_B.z_tmp_b]] *
      dx[Test_Traj_B.iv4[Test_Traj_B.z_tmp_b]];
  }

  Test_Traj_B.z_tmp[19] = 0;
  Test_Traj_B.iv3[0] = 19;
  Test_Traj_B.iv4[0] = 19;
  for (Test_Traj_B.z_tmp_b = 0; Test_Traj_B.z_tmp_b < 19; Test_Traj_B.z_tmp_b++)
  {
    Test_Traj_B.z_tmp[Test_Traj_B.z_tmp_b] =
      Test_Traj_B.z_tmp_l[Test_Traj_B.z_tmp_b];
    Test_Traj_B.iv3[Test_Traj_B.z_tmp_b + 1] =
      Test_Traj_B.z_tmp_j[Test_Traj_B.z_tmp_b];
    Test_Traj_B.iv4[Test_Traj_B.z_tmp_b + 1] =
      Test_Traj_B.z_tmp_j[Test_Traj_B.z_tmp_b];
  }

  Test_Traj_B.R = 0.0;
  for (Test_Traj_B.z_tmp_b = 0; Test_Traj_B.z_tmp_b < 20; Test_Traj_B.z_tmp_b++)
  {
    Test_Traj_B.R += (2.0 * v[Test_Traj_B.z_tmp_b] - ((Jtri[Test_Traj_B.z_tmp_b
      + 20] * Test_Traj_B.z_f[Test_Traj_B.z_tmp_b] +
      Test_Traj_B.lower[Test_Traj_B.z_tmp_b] *
      Test_Traj_B.z_f[Test_Traj_B.z_tmp[Test_Traj_B.z_tmp_b]]) +
      Test_Traj_B.upper[Test_Traj_B.iv3[Test_Traj_B.z_tmp_b]] *
      Test_Traj_B.z_f[Test_Traj_B.iv4[Test_Traj_B.z_tmp_b]])) *
      dx[Test_Traj_B.z_tmp_b];
  }

  Test_Traj_B.R = (S - Snew) / Test_Traj_B.R;
  if (Test_Traj_B.R > 0.75) {
    *b_lambda = lambda / 2.0;
    if (*b_lambda < lambdac) {
      *b_lambda = 0.0;
    }
  } else {
    if (Test_Traj_B.R < 0.25) {
      Test_Traj_B.R = 0.0;
      for (Test_Traj_B.z_tmp_b = 0; Test_Traj_B.z_tmp_b < 20;
           Test_Traj_B.z_tmp_b++) {
        Test_Traj_B.R += dx[Test_Traj_B.z_tmp_b] * v[Test_Traj_B.z_tmp_b];
      }

      Test_Traj_B.R = (Snew - S) / Test_Traj_B.R + 2.0;
      if ((2.0 > Test_Traj_B.R) || rtIsNaN(Test_Traj_B.R)) {
        Test_Traj_B.R = 2.0;
      }

      if (!(Test_Traj_B.R < 10.0)) {
        Test_Traj_B.R = 10.0;
      }

      if (lambda == 0.0) {
        *b_lambdac = Test_Traj_leastEigvJtJ(Jtri);
        *b_lambda = *b_lambdac;
        Test_Traj_B.R /= 2.0;
      }

      *b_lambda *= Test_Traj_B.R;
    }
  }
}

static void Test_Traj_LMFsolve_phmyu(const d_cell_wrap_Test_Traj_T
  *FUN_tunableEnvironment, real_T x[20])
{
  static const int8_T tmp[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 0 };

  static const int8_T tmp_0[20] = { 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18 };

  boolean_T exitg1;
  for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 21; Test_Traj_B.i_k++) {
    Test_Traj_B.hip_n[Test_Traj_B.i_k].re = FUN_tunableEnvironment->
      f1[Test_Traj_B.i_k];
    Test_Traj_B.hip_n[Test_Traj_B.i_k].im = FUN_tunableEnvironment->
      f1[Test_Traj_B.i_k + 21];
  }

  for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
    Test_Traj_B.b_r[Test_Traj_B.i_k] = x[tmp[Test_Traj_B.i_k]];
  }

  Test_Traj_clothoidG1fit2wp(&Test_Traj_B.hip_n[0], x, &Test_Traj_B.hip_n[1],
    Test_Traj_B.b_r, Test_Traj_B.k0_k, Test_Traj_B.k1_j, Test_Traj_B.unusedU0,
    Test_Traj_B.dk0_dc0, Test_Traj_B.dk0_dc1, Test_Traj_B.dk1_dc0,
    Test_Traj_B.dk1_dc1);
  Test_Traj_B.b_r[0] = Test_Traj_B.k1_j[19] - Test_Traj_B.k0_k[0];
  for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 19; Test_Traj_B.i_k++) {
    Test_Traj_B.b_r[Test_Traj_B.i_k + 1] = Test_Traj_B.k1_j[Test_Traj_B.i_k] -
      Test_Traj_B.k0_k[(Test_Traj_B.i_k + 2) - 1];
  }

  for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
    Test_Traj_B.b_varargout_2[Test_Traj_B.i_k] =
      Test_Traj_B.dk1_dc0[Test_Traj_B.i_k];
    Test_Traj_B.b_varargout_2[Test_Traj_B.i_k + 20] =
      Test_Traj_B.dk1_dc1[tmp_0[Test_Traj_B.i_k]] -
      Test_Traj_B.dk0_dc0[Test_Traj_B.i_k];
    Test_Traj_B.b_varargout_2[Test_Traj_B.i_k + 40] =
      -Test_Traj_B.dk0_dc1[Test_Traj_B.i_k];
  }

  memcpy(&Test_Traj_B.Jtri[0], &Test_Traj_B.b_varargout_2[0], 60U * sizeof
         (real_T));
  Test_Traj_mulJt(Test_Traj_B.b_varargout_2, Test_Traj_B.b_r, Test_Traj_B.v_m);
  Test_Traj_B.S_l = 0.0;
  Test_Traj_B.lambda_p = 0.0;
  Test_Traj_B.lambdac_k = 0.75;
  Test_Traj_B.iter_nt = 0;
  for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
    Test_Traj_B.S_l += Test_Traj_B.b_r[Test_Traj_B.i_k] *
      Test_Traj_B.b_r[Test_Traj_B.i_k];
    Test_Traj_B.dx[Test_Traj_B.i_k] = 1.0E-7;
  }

  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.iter_nt < 2000)) {
    for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
      Test_Traj_B.k0_c[Test_Traj_B.i_k] = (fabs(Test_Traj_B.dx[Test_Traj_B.i_k])
        >= 1.0E-7);
    }

    if (Test_Traj_any(Test_Traj_B.k0_c)) {
      for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
        Test_Traj_B.k0_c[Test_Traj_B.i_k] = (fabs
          (Test_Traj_B.b_r[Test_Traj_B.i_k]) >= 1.0E-7);
      }

      if (Test_Traj_any(Test_Traj_B.k0_c)) {
        Test_Traj_B.iter_nt++;
        Test_Traj_solveDampenedHessian(Test_Traj_B.Jtri, Test_Traj_B.lambda_p,
          Test_Traj_B.v_m, Test_Traj_B.dx);
        for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
          Test_Traj_B.xnew[Test_Traj_B.i_k] = x[Test_Traj_B.i_k] -
            Test_Traj_B.dx[Test_Traj_B.i_k];
        }

        for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 21; Test_Traj_B.i_k++) {
          Test_Traj_B.hip_n[Test_Traj_B.i_k].re = FUN_tunableEnvironment->
            f1[Test_Traj_B.i_k];
          Test_Traj_B.hip_n[Test_Traj_B.i_k].im = FUN_tunableEnvironment->
            f1[Test_Traj_B.i_k + 21];
        }

        for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
          Test_Traj_B.xnew_h[Test_Traj_B.i_k] =
            Test_Traj_B.xnew[tmp[Test_Traj_B.i_k]];
        }

        Test_Traj_clothoidG1fit2wp(&Test_Traj_B.hip_n[0], Test_Traj_B.xnew,
          &Test_Traj_B.hip_n[1], Test_Traj_B.xnew_h, Test_Traj_B.k0_k,
          Test_Traj_B.k1_j, Test_Traj_B.unusedU0, Test_Traj_B.dk0_dc0,
          Test_Traj_B.dk0_dc1, Test_Traj_B.dk1_dc0, Test_Traj_B.dk1_dc1);
        Test_Traj_B.unusedU0[0] = Test_Traj_B.k1_j[19] - Test_Traj_B.k0_k[0];
        for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 19; Test_Traj_B.i_k++) {
          Test_Traj_B.unusedU0[Test_Traj_B.i_k + 1] =
            Test_Traj_B.k1_j[Test_Traj_B.i_k] - Test_Traj_B.k0_k
            [(Test_Traj_B.i_k + 2) - 1];
        }

        Test_Traj_B.unusedU0_b = 0.0;
        for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
          Test_Traj_B.b_varargout_2[Test_Traj_B.i_k] =
            Test_Traj_B.dk1_dc0[Test_Traj_B.i_k];
          Test_Traj_B.b_varargout_2[Test_Traj_B.i_k + 20] =
            Test_Traj_B.dk1_dc1[tmp_0[Test_Traj_B.i_k]] -
            Test_Traj_B.dk0_dc0[Test_Traj_B.i_k];
          Test_Traj_B.b_varargout_2[Test_Traj_B.i_k + 40] =
            -Test_Traj_B.dk0_dc1[Test_Traj_B.i_k];
          Test_Traj_B.unusedU0_b += Test_Traj_B.unusedU0[Test_Traj_B.i_k] *
            Test_Traj_B.unusedU0[Test_Traj_B.i_k];
        }

        Test_Traj_fletcher(Test_Traj_B.S_l, Test_Traj_B.unusedU0_b,
                           Test_Traj_B.dx, Test_Traj_B.v_m, Test_Traj_B.Jtri,
                           Test_Traj_B.lambda_p, Test_Traj_B.lambdac_k,
                           &Test_Traj_B.lambda_p, &Test_Traj_B.lambdac_k);
        if (Test_Traj_B.unusedU0_b < Test_Traj_B.S_l) {
          Test_Traj_B.S_l = Test_Traj_B.unusedU0_b;
          memcpy(&x[0], &Test_Traj_B.xnew[0], 20U * sizeof(real_T));
          memcpy(&Test_Traj_B.b_r[0], &Test_Traj_B.unusedU0[0], 20U * sizeof
                 (real_T));
          memcpy(&Test_Traj_B.Jtri[0], &Test_Traj_B.b_varargout_2[0], 60U *
                 sizeof(real_T));
          Test_Traj_B.iv[19] = 0;
          Test_Traj_B.iv1[0] = 19;
          Test_Traj_B.iv2[0] = 19;
          for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 19; Test_Traj_B.i_k++) {
            Test_Traj_B.iv[Test_Traj_B.i_k] = static_cast<int8_T>
              (Test_Traj_B.i_k + 1);
            Test_Traj_B.iv1[Test_Traj_B.i_k + 1] = static_cast<int8_T>
              (Test_Traj_B.i_k);
            Test_Traj_B.iv2[Test_Traj_B.i_k + 1] = static_cast<int8_T>
              (Test_Traj_B.i_k);
          }

          for (Test_Traj_B.i_k = 0; Test_Traj_B.i_k < 20; Test_Traj_B.i_k++) {
            Test_Traj_B.v_m[Test_Traj_B.i_k] =
              (Test_Traj_B.b_varargout_2[Test_Traj_B.i_k + 20] *
               Test_Traj_B.unusedU0[Test_Traj_B.i_k] +
               Test_Traj_B.b_varargout_2[Test_Traj_B.i_k] *
               Test_Traj_B.unusedU0[Test_Traj_B.iv[Test_Traj_B.i_k]]) +
              Test_Traj_B.b_varargout_2[Test_Traj_B.iv1[Test_Traj_B.i_k] + 40] *
              Test_Traj_B.unusedU0[Test_Traj_B.iv2[Test_Traj_B.i_k]];
          }
        }
      } else {
        exitg1 = true;
      }
    } else {
      exitg1 = true;
    }
  }
}

static void Test_Traj_fitLoopCourse(const real_T waypoints[63], real_T course[21])
{
  Test_Traj_dclothoidwp(&waypoints[0], &waypoints[21], Test_Traj_B.u,
                        Test_Traj_B.v);
  memset(&course[0], 0, 21U * sizeof(real_T));
  course[0] = rt_atan2d_snf(Test_Traj_B.v[1] - Test_Traj_B.v[0], Test_Traj_B.u[1]
    - Test_Traj_B.u[0]);
  course[20] = rt_atan2d_snf(Test_Traj_B.v[2560] - Test_Traj_B.v[2559],
    Test_Traj_B.u[2560] - Test_Traj_B.u[2559]);
  for (Test_Traj_B.b_i_l = 0; Test_Traj_B.b_i_l < 19; Test_Traj_B.b_i_l++) {
    Test_Traj_B.course_tmp = (Test_Traj_B.b_i_l + 1) << 7;
    Test_Traj_B.course_tmp_h = Test_Traj_B.course_tmp - 1;
    course[Test_Traj_B.b_i_l + 1] = rt_atan2d_snf
      (Test_Traj_B.v[Test_Traj_B.course_tmp] -
       Test_Traj_B.v[Test_Traj_B.course_tmp_h],
       Test_Traj_B.u[Test_Traj_B.course_tmp] -
       Test_Traj_B.u[Test_Traj_B.course_tmp_h]);
  }

  memcpy(&Test_Traj_B.tunableEnvironment_f.f1[0], &waypoints[0], 63U * sizeof
         (real_T));
  memcpy(&Test_Traj_B.courselsq[0], &course[0], 20U * sizeof(real_T));
  Test_Traj_LMFsolve_phmyu(&Test_Traj_B.tunableEnvironment_f,
    Test_Traj_B.courselsq);
  memcpy(&course[0], &Test_Traj_B.courselsq[0], 20U * sizeof(real_T));
  course[20] = Test_Traj_B.courselsq[0];
}

static void Test_Traj_fitPartialCourseLoop(const real_T waypoints[63], real_T
  course[21])
{
  for (Test_Traj_B.i_na = 0; Test_Traj_B.i_na < 21; Test_Traj_B.i_na++) {
    course[Test_Traj_B.i_na] = (rtNaN);
  }

  course[0] = (rtNaN);
  Test_Traj_partitionCourse(course, Test_Traj_B.ibegin_data,
    &Test_Traj_B.ibegin_size, Test_Traj_B.iend_data, &Test_Traj_B.iend_size);
  if (Test_Traj_B.ibegin_size == 0) {
    Test_Traj_fitLoopCourse(waypoints, course);
  } else {
    Test_Traj_B.cdiff = Test_Traj_B.ibegin_data[Test_Traj_B.ibegin_size - 1];
    if (rtIsNaN(Test_Traj_B.cdiff)) {
      Test_Traj_B.i_na = 1;
      Test_Traj_B.y_data_ew[0] = (rtNaN);
    } else if (20.0 < Test_Traj_B.cdiff) {
      Test_Traj_B.i_na = 0;
    } else if (rtIsInf(Test_Traj_B.cdiff) && (Test_Traj_B.cdiff == 20.0)) {
      Test_Traj_B.i_na = 1;
      Test_Traj_B.y_data_ew[0] = (rtNaN);
    } else if (floor(Test_Traj_B.cdiff) == Test_Traj_B.cdiff) {
      Test_Traj_B.ndbl_a = static_cast<int32_T>(floor(20.0 -
        Test_Traj_B.ibegin_data[Test_Traj_B.ibegin_size - 1]));
      Test_Traj_B.i_na = Test_Traj_B.ndbl_a + 1;
      for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k <= Test_Traj_B.ndbl_a;
           Test_Traj_B.n_k++) {
        Test_Traj_B.y_data_ew[Test_Traj_B.n_k] = Test_Traj_B.cdiff +
          static_cast<real_T>(Test_Traj_B.n_k);
      }
    } else {
      Test_Traj_B.ndbl = floor((20.0 - Test_Traj_B.cdiff) + 0.5);
      Test_Traj_B.apnd = Test_Traj_B.cdiff + Test_Traj_B.ndbl;
      Test_Traj_B.u0 = fabs(Test_Traj_B.cdiff);
      if (!(Test_Traj_B.u0 > 20.0)) {
        Test_Traj_B.u0 = 20.0;
      }

      if (fabs(Test_Traj_B.apnd - 20.0) < 4.4408920985006262E-16 *
          Test_Traj_B.u0) {
        Test_Traj_B.ndbl++;
        Test_Traj_B.apnd = 20.0;
      } else if (Test_Traj_B.apnd - 20.0 > 0.0) {
        Test_Traj_B.apnd = Test_Traj_B.cdiff + (Test_Traj_B.ndbl - 1.0);
      } else {
        Test_Traj_B.ndbl++;
      }

      if (Test_Traj_B.ndbl >= 0.0) {
        Test_Traj_B.ndbl_a = static_cast<int32_T>(Test_Traj_B.ndbl);
      } else {
        Test_Traj_B.ndbl_a = 0;
      }

      Test_Traj_B.n_k = Test_Traj_B.ndbl_a - 1;
      Test_Traj_B.i_na = Test_Traj_B.n_k + 1;
      if (Test_Traj_B.n_k + 1 > 0) {
        Test_Traj_B.y_data_ew[0] = Test_Traj_B.cdiff;
        if (Test_Traj_B.n_k + 1 > 1) {
          Test_Traj_B.y_data_ew[Test_Traj_B.n_k] = Test_Traj_B.apnd;
          Test_Traj_B.nm1d2 = Test_Traj_B.n_k / 2;
          Test_Traj_B.ndbl_a = Test_Traj_B.nm1d2 - 2;
          for (Test_Traj_B.b_k = 0; Test_Traj_B.b_k <= Test_Traj_B.ndbl_a;
               Test_Traj_B.b_k++) {
            Test_Traj_B.k = Test_Traj_B.b_k + 1;
            Test_Traj_B.y_data_ew[Test_Traj_B.k] = Test_Traj_B.cdiff +
              static_cast<real_T>(Test_Traj_B.k);
            Test_Traj_B.y_data_ew[Test_Traj_B.n_k - Test_Traj_B.k] =
              Test_Traj_B.apnd - static_cast<real_T>(Test_Traj_B.k);
          }

          if (Test_Traj_B.nm1d2 << 1 == Test_Traj_B.n_k) {
            Test_Traj_B.y_data_ew[Test_Traj_B.nm1d2] = (Test_Traj_B.cdiff +
              Test_Traj_B.apnd) / 2.0;
          } else {
            Test_Traj_B.y_data_ew[Test_Traj_B.nm1d2] = Test_Traj_B.cdiff +
              static_cast<real_T>(Test_Traj_B.nm1d2);
            Test_Traj_B.y_data_ew[Test_Traj_B.nm1d2 + 1] = Test_Traj_B.apnd -
              static_cast<real_T>(Test_Traj_B.nm1d2);
          }
        }
      }
    }

    if (rtIsNaN(Test_Traj_B.iend_data[0])) {
      Test_Traj_B.y_size_idx_1 = 1;
      Test_Traj_B.y_data_i[0] = (rtNaN);
    } else if (Test_Traj_B.iend_data[0] < 1.0) {
      Test_Traj_B.y_size_idx_1 = 0;
    } else if (rtIsInf(Test_Traj_B.iend_data[0]) && (1.0 ==
                Test_Traj_B.iend_data[0])) {
      Test_Traj_B.y_size_idx_1 = 1;
      Test_Traj_B.y_data_i[0] = (rtNaN);
    } else {
      Test_Traj_B.ndbl_a = static_cast<int32_T>(floor(Test_Traj_B.iend_data[0] -
        1.0));
      Test_Traj_B.y_size_idx_1 = Test_Traj_B.ndbl_a + 1;
      for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k <= Test_Traj_B.ndbl_a;
           Test_Traj_B.n_k++) {
        Test_Traj_B.y_data_i[Test_Traj_B.n_k] = static_cast<real_T>
          (Test_Traj_B.n_k) + 1.0;
      }
    }

    Test_Traj_B.ndbl_a = Test_Traj_B.i_na + Test_Traj_B.y_size_idx_1;
    Test_Traj_B.nm1d2 = Test_Traj_B.y_size_idx_1 - 1;
    if (0 <= Test_Traj_B.i_na - 1) {
      memcpy(&Test_Traj_B.range_data[0], &Test_Traj_B.y_data_ew[0],
             Test_Traj_B.i_na * sizeof(real_T));
    }

    for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k <= Test_Traj_B.nm1d2;
         Test_Traj_B.n_k++) {
      Test_Traj_B.range_data[Test_Traj_B.n_k + Test_Traj_B.i_na] =
        Test_Traj_B.y_data_i[Test_Traj_B.n_k];
    }

    Test_Traj_B.nm1d2 = Test_Traj_B.ndbl_a - 1;
    for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k <= Test_Traj_B.nm1d2;
         Test_Traj_B.n_k++) {
      Test_Traj_B.b_data_f[Test_Traj_B.n_k] = static_cast<int32_T>
        (Test_Traj_B.range_data[Test_Traj_B.n_k]);
    }

    Test_Traj_B.c_size_o = Test_Traj_B.ndbl_a;
    for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k < Test_Traj_B.ndbl_a;
         Test_Traj_B.n_k++) {
      Test_Traj_B.c_data_o[Test_Traj_B.n_k] = (rtNaN);
    }

    Test_Traj_B.waypoints_size[0] = Test_Traj_B.ndbl_a;
    Test_Traj_B.waypoints_size[1] = 3;
    for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k < 3; Test_Traj_B.n_k++) {
      for (Test_Traj_B.nm1d2 = 0; Test_Traj_B.nm1d2 < Test_Traj_B.ndbl_a;
           Test_Traj_B.nm1d2++) {
        Test_Traj_B.waypoints_data[Test_Traj_B.nm1d2 + Test_Traj_B.ndbl_a *
          Test_Traj_B.n_k] = waypoints[(21 * Test_Traj_B.n_k +
          static_cast<int32_T>(Test_Traj_B.range_data[Test_Traj_B.nm1d2])) - 1];
      }
    }

    Test_Traj_fitCourse_p(Test_Traj_B.waypoints_data, Test_Traj_B.waypoints_size,
                          Test_Traj_B.c_data_o, &Test_Traj_B.c_size_o);
    for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k < Test_Traj_B.ndbl_a;
         Test_Traj_B.n_k++) {
      course[Test_Traj_B.b_data_f[Test_Traj_B.n_k] - 1] =
        Test_Traj_B.c_data_o[Test_Traj_B.n_k];
    }

    course[20] = course[0];
    if (2 > Test_Traj_B.iend_size) {
      Test_Traj_B.i_na = 0;
    } else {
      Test_Traj_B.i_na = 1;
    }

    if (1.0 > static_cast<real_T>(Test_Traj_B.ibegin_size) - 1.0) {
      Test_Traj_B.n_k = 0;
    } else {
      Test_Traj_B.n_k = Test_Traj_B.ibegin_size - 1;
    }

    Test_Traj_B.y_size_idx_1 = Test_Traj_B.n_k - 1;
    if (0 <= Test_Traj_B.y_size_idx_1) {
      Test_Traj_B.waypoints_size_j[1] = 3;
    }

    for (Test_Traj_B.b_i_f = 0; Test_Traj_B.b_i_f <= Test_Traj_B.y_size_idx_1;
         Test_Traj_B.b_i_f++) {
      Test_Traj_B.ndbl_a = Test_Traj_B.i_na + Test_Traj_B.b_i_f;
      if (rtIsNaN(Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]) || rtIsNaN
          (Test_Traj_B.iend_data[Test_Traj_B.ndbl_a])) {
        Test_Traj_B.ndbl_a = 1;
        Test_Traj_B.range_data_c[0] = (rtNaN);
      } else if (Test_Traj_B.iend_data[Test_Traj_B.ndbl_a] <
                 Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]) {
        Test_Traj_B.ndbl_a = 0;
      } else if ((rtIsInf(Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]) || rtIsInf
                  (Test_Traj_B.iend_data[Test_Traj_B.ndbl_a])) &&
                 (Test_Traj_B.iend_data[Test_Traj_B.ndbl_a] ==
                  Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f])) {
        Test_Traj_B.ndbl_a = 1;
        Test_Traj_B.range_data_c[0] = (rtNaN);
      } else if (floor(Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]) ==
                 Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]) {
        Test_Traj_B.nm1d2 = static_cast<int32_T>(floor
          (Test_Traj_B.iend_data[Test_Traj_B.ndbl_a] -
           Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]));
        Test_Traj_B.ndbl_a = Test_Traj_B.nm1d2 + 1;
        for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k <= Test_Traj_B.nm1d2;
             Test_Traj_B.n_k++) {
          Test_Traj_B.range_data_c[Test_Traj_B.n_k] =
            Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f] + static_cast<real_T>
            (Test_Traj_B.n_k);
        }
      } else {
        Test_Traj_B.ndbl = floor((Test_Traj_B.iend_data[Test_Traj_B.ndbl_a] -
          Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]) + 0.5);
        Test_Traj_B.apnd = Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f] +
          Test_Traj_B.ndbl;
        Test_Traj_B.cdiff = Test_Traj_B.apnd -
          Test_Traj_B.iend_data[Test_Traj_B.ndbl_a];
        Test_Traj_B.u0 = fabs(Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f]);
        Test_Traj_B.u1 = fabs(Test_Traj_B.iend_data[Test_Traj_B.ndbl_a]);
        if ((Test_Traj_B.u0 > Test_Traj_B.u1) || rtIsNaN(Test_Traj_B.u1)) {
          Test_Traj_B.u1 = Test_Traj_B.u0;
        }

        if (fabs(Test_Traj_B.cdiff) < 4.4408920985006262E-16 * Test_Traj_B.u1) {
          Test_Traj_B.ndbl++;
          Test_Traj_B.apnd = Test_Traj_B.iend_data[Test_Traj_B.ndbl_a];
        } else if (Test_Traj_B.cdiff > 0.0) {
          Test_Traj_B.apnd = (Test_Traj_B.ndbl - 1.0) +
            Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f];
        } else {
          Test_Traj_B.ndbl++;
        }

        if (Test_Traj_B.ndbl >= 0.0) {
          Test_Traj_B.ndbl_a = static_cast<int32_T>(Test_Traj_B.ndbl);
        } else {
          Test_Traj_B.ndbl_a = 0;
        }

        Test_Traj_B.n_k = Test_Traj_B.ndbl_a - 1;
        Test_Traj_B.ndbl_a = Test_Traj_B.n_k + 1;
        if (Test_Traj_B.n_k + 1 > 0) {
          Test_Traj_B.range_data_c[0] =
            Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f];
          if (Test_Traj_B.n_k + 1 > 1) {
            Test_Traj_B.range_data_c[Test_Traj_B.n_k] = Test_Traj_B.apnd;
            Test_Traj_B.nm1d2 = Test_Traj_B.n_k / 2;
            Test_Traj_B.c_e = Test_Traj_B.nm1d2 - 2;
            for (Test_Traj_B.b_k = 0; Test_Traj_B.b_k <= Test_Traj_B.c_e;
                 Test_Traj_B.b_k++) {
              Test_Traj_B.k = Test_Traj_B.b_k + 1;
              Test_Traj_B.range_data_c[Test_Traj_B.k] =
                Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f] + static_cast<real_T>
                (Test_Traj_B.k);
              Test_Traj_B.range_data_c[Test_Traj_B.n_k - Test_Traj_B.k] =
                Test_Traj_B.apnd - static_cast<real_T>(Test_Traj_B.k);
            }

            if (Test_Traj_B.nm1d2 << 1 == Test_Traj_B.n_k) {
              Test_Traj_B.range_data_c[Test_Traj_B.nm1d2] =
                (Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f] + Test_Traj_B.apnd) /
                2.0;
            } else {
              Test_Traj_B.range_data_c[Test_Traj_B.nm1d2] =
                Test_Traj_B.ibegin_data[Test_Traj_B.b_i_f] + static_cast<real_T>
                (Test_Traj_B.nm1d2);
              Test_Traj_B.range_data_c[Test_Traj_B.nm1d2 + 1] = Test_Traj_B.apnd
                - static_cast<real_T>(Test_Traj_B.nm1d2);
            }
          }
        }
      }

      Test_Traj_B.nm1d2 = Test_Traj_B.ndbl_a - 1;
      for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k <= Test_Traj_B.nm1d2;
           Test_Traj_B.n_k++) {
        Test_Traj_B.d_data_i[Test_Traj_B.n_k] = static_cast<int32_T>
          (Test_Traj_B.range_data_c[Test_Traj_B.n_k]);
      }

      Test_Traj_B.c_size_o = Test_Traj_B.ndbl_a;
      for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k < Test_Traj_B.ndbl_a;
           Test_Traj_B.n_k++) {
        Test_Traj_B.c_data_o[Test_Traj_B.n_k] = course[static_cast<int32_T>
          (Test_Traj_B.range_data_c[Test_Traj_B.n_k]) - 1];
      }

      Test_Traj_B.waypoints_size_j[0] = Test_Traj_B.ndbl_a;
      for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k < 3; Test_Traj_B.n_k++) {
        for (Test_Traj_B.nm1d2 = 0; Test_Traj_B.nm1d2 < Test_Traj_B.ndbl_a;
             Test_Traj_B.nm1d2++) {
          Test_Traj_B.waypoints_data_p[Test_Traj_B.nm1d2 + Test_Traj_B.ndbl_a *
            Test_Traj_B.n_k] = waypoints[(21 * Test_Traj_B.n_k +
            static_cast<int32_T>(Test_Traj_B.range_data_c[Test_Traj_B.nm1d2])) -
            1];
        }
      }

      Test_Traj_fitCourse_p(Test_Traj_B.waypoints_data_p,
                            Test_Traj_B.waypoints_size_j, Test_Traj_B.c_data_o,
                            &Test_Traj_B.c_size_o);
      Test_Traj_B.nm1d2 = Test_Traj_B.c_size_o;
      if (0 <= Test_Traj_B.nm1d2 - 1) {
        memcpy(&Test_Traj_B.e_data_j[0], &Test_Traj_B.c_data_o[0],
               Test_Traj_B.nm1d2 * sizeof(real_T));
      }

      for (Test_Traj_B.n_k = 0; Test_Traj_B.n_k < Test_Traj_B.ndbl_a;
           Test_Traj_B.n_k++) {
        course[Test_Traj_B.d_data_i[Test_Traj_B.n_k] - 1] =
          Test_Traj_B.e_data_j[Test_Traj_B.n_k];
      }
    }
  }
}

static void Test_clothoidG2fitMissingCourse(const real_T waypoints[63], real_T
  course[21])
{
  Test_Traj_B.waypoints[0] = waypoints[0];
  Test_Traj_B.waypoints_a[0] = waypoints[20];
  Test_Traj_B.waypoints[1] = waypoints[21];
  Test_Traj_B.waypoints_a[1] = waypoints[41];
  if (Test_Traj_isequal_p(Test_Traj_B.waypoints, Test_Traj_B.waypoints_a)) {
    Test_Traj_fitPartialCourseLoop(waypoints, course);
  } else {
    Test_Traj_fitPartialCourse(waypoints, course);
  }
}

static void Test_Traj_fetchA(const real_T x[20], const real_T y[20], real_T a[20])
{
  static const real_T tmp[351] = { -1.5361481088532109E-40,
    -5.1782003708968662E-38, 5.8080516979367073E-38, -6.2922109794702842E-36,
    1.7744129415359022E-35, -9.8266873453160865E-36, -3.0557011816989596E-34,
    1.9988681524430764E-33, -2.7007621230825949E-33, 9.6497076628562535E-34,
    -8.50146594503621E-33, 8.7613736854720049E-32, -2.8258679893784358E-31,
    2.3637604856716169E-31, -5.8556266604372106E-32, -1.2863962524996432E-31,
    2.229093841830142E-30, -1.1057059963507232E-29, 2.3139349101185755E-29,
    -1.2630223562649489E-29, 2.0068564650639364E-30, -1.1052377502159136E-30,
    3.0309726719642508E-29, -2.57153235020298E-28, 7.9357820762496212E-28,
    -1.1834423538462616E-27, 3.7518152500494656E-28, -9.5988758699827141E-30,
    -5.8444661902772888E-30, 2.2799302267031842E-28, -3.118708591261201E-27,
    1.6937953593997347E-26, -3.4234259338177584E-26, 3.675290577810477E-26,
    -1.6183294340108731E-27, -2.9209077909746285E-27, -2.0493494333051533E-29,
    1.0232091530758262E-27, -2.0119872415420161E-26, 1.8157191663212143E-25,
    -6.8278782273948665E-25, 7.9289707228553727E-25, -5.1713140278139824E-25,
    -3.5757401738269863E-25, 1.7191521549607673E-25, -5.001307006229815E-29,
    2.9234616420394369E-27, -7.3372627735809734E-26, 9.6978563886575261E-25,
    -6.3976458551757164E-24, 1.6073455072306433E-23, -7.37463587795066E-25,
    -7.0522343048774666E-24, 1.4805755563608624E-23, -5.1965352404273039E-24,
    -8.5391792173019132E-29, 5.4962692899068422E-27, -1.5546891778194411E-25,
    2.6049795261751296E-24, -2.6172058881327836E-23, 1.2985982037510549E-22,
    -1.423772303418446E-22, -5.8282903661876709E-22, 4.1133508360308628E-22,
    -1.742659308147939E-22, 8.07786256209318E-23, -9.7738126735700558E-29,
    6.6212355845436972E-27, -1.7707072436748613E-25, 2.8057133511879665E-24,
    -3.4869970759687543E-23, 3.0241871214865029E-22, -9.92012310209099E-22,
    -3.2149566866116185E-21, 1.8710249707031661E-20, -1.2453541845369618E-21,
    -7.5062472154050874E-21, 2.8499865852964518E-22, -6.9207112182904389E-29,
    4.4179830835754724E-27, -4.4762524882779791E-26, -2.450817653228083E-24,
    7.1914140604820392E-23, -7.2673875098954476E-22, 3.3571441047866719E-21,
    -1.5906878744538782E-20, 1.0715370660853569E-19, -2.1813900762258771E-19,
    -3.7882773476137619E-19, 4.4188357957185649E-19, -5.2046323054922296E-20,
    -2.8170935396816464E-29, 7.8914114794548443E-28, 1.528966070127476E-25,
    -1.1332880987718864E-23, 3.3104475572268851E-22, -4.9647512138578754E-21,
    3.9715384015216385E-20, -1.6290821269847189E-19, 3.36612516663913E-19,
    -3.36275918384194E-19, -2.8323208988729979E-18, 1.5348780107717589E-17,
    -1.2231243924447674E-17, 1.5460269152965008E-18, -1.0350259940425787E-29,
    -4.7414043171551787E-28, 1.9707672417753685E-25, -1.4495788889042659E-23,
    5.1378340796211685E-22, -1.0210774519786583E-20, 1.165542649503511E-19,
    -7.1421779330877591E-19, 1.6365283191176908E-18, 4.9170568130837211E-18,
    -4.4186234291063853E-17, 1.6247947613884891E-16, -3.4187835062780104E-16,
    2.2495563268135524E-16, -2.8304172442233909E-17, -9.54190907880087E-30,
    4.33416352213585E-28, 7.30606772876727E-26, -8.4789175470441986E-24,
    3.9746370968729408E-22, -1.0350198533651566E-20, 1.589371276512773E-19,
    -1.3721089740423357E-18, 4.7868869804965763E-18, 1.9699426816042335E-17,
    -2.7595647699194014E-16, 1.2612122765846683E-15, -3.3199758280144047E-15,
    5.1284109097493322E-15, -2.9773954125181772E-15, 3.6686222388116938E-16,
    -7.13761114432792E-30, 8.6070327678610011E-28, -2.5253411261423782E-26,
    -1.429985806399278E-24, 1.4200678258817658E-22, -5.2901273901739912E-21,
    1.0879148930261737E-19, -1.2468905412479112E-18, 5.651703115185149E-18,
    4.073824764700649E-17, -7.7193016891576893E-16, 5.1280294092344238E-15,
    -1.8830251965098877E-14, 4.2082102420983456E-14, -5.4816521831539046E-14,
    2.9056289127761095E-14, -3.5049036301087839E-15, -2.7032712394278119E-30,
    4.4439845217679321E-28, -2.8561533629781625E-26, 7.4263493149653183E-25,
    7.7648205291611823E-24, -1.1313407629960782E-21, 3.4992489982228452E-20,
    -5.11237062122324E-19, 1.9082838069139238E-18, 6.02161124473958E-17,
    -1.1855133738581856E-15, 1.0647602057665829E-14, -5.5915318620809614E-14,
    1.8096099090326831E-13, -3.6385985586845819E-13, 4.2410069501559273E-13,
    -2.106362282048389E-13, 2.4385529408308407E-14, -4.8547818044528891E-31,
    9.5570081279537094E-29, -7.8572054752482576E-27, 3.3174769183447452E-25,
    -6.2142341258768858E-24, -5.0991712996566211E-23, 5.1392990708290932E-21,
    -8.807706142947147E-20, -5.8182766640448854E-19, 5.1419279154935842E-17,
    -1.04407697522146E-15, 1.1898094238539857E-14, -8.5367937011271162E-14,
    3.9513126620957262E-13, -1.1748533341492665E-12, 2.1917257282808794E-12,
    -2.3566809884820566E-12, 1.0795020408261728E-12, -1.5837465906955864E-13,
    -2.7533507225420422E-32, 5.7619182837708977E-30, -4.6471657116787863E-28,
    1.4048422360791874E-26, 3.7650962241144584E-25, -4.9228435831327322E-23,
    1.9071729205179347E-21, -3.3490783882201909E-20, -7.018689437542322E-20,
    1.8324124104655822E-17, -4.7883976550407734E-16, 7.0487303907715931E-15,
    -6.735734123826801E-14, 4.3114382655453385E-13, -1.8436618496422663E-12,
    5.1655481921478335E-12, -9.1498502333527442E-12, 9.53768065186612E-12,
    -5.5096965823391316E-12, -1.9256688414961511E-12, 2.6993907913031997E-33,
    -8.3658508533748674E-31, 1.2360111759498158E-28, -1.1391057286564071E-26,
    7.1943116140837765E-25, -3.2278401611187206E-23, 1.0313736180462972E-21,
    -2.2595952680170383E-20, 2.9013328570466337E-19, -1.4189880636575127E-19,
    -8.2575877751974837E-17, 1.9535524420193836E-15, -2.60333162544509E-14,
    2.2905798368369833E-13, -1.3730942326110817E-12, 5.5797967300488639E-12,
    -1.5044456366394642E-11, 2.5612747661164289E-11, -1.9627816796196334E-11,
    -2.8036172295220303E-11, -1.9615478304946413E-10, 3.8934925377973957E-34,
    -1.2639609126235819E-31, 1.9287682878359229E-29, -1.8332237204928374E-27,
    1.2092531131064511E-25, -5.8236835135326278E-24, 2.0915581782354698E-22,
    -5.5964099612773872E-21, 1.0833579869797173E-19, -1.3736666335311385E-18,
    6.6209633655847283E-18, 1.4362053626673917E-16, -4.0159095765450877E-15,
    5.320276578988179E-14, -4.5399145021925304E-13, 2.6343951113716903E-12,
    -1.0426603808524378E-11, 2.7378813158203465E-11, -2.4213032965198892E-11,
    -6.43589148489966E-11, 8.7111108876109732E-11, -1.58880825805031E-8,
    1.2049379324305816E-35, -4.3610770108214582E-33, 7.4936434757448969E-31,
    -8.1105245364317889E-29, 6.1705088386370215E-27, -3.480752271664829E-25,
    1.4948191338667704E-23, -4.9368146563727049E-22, 1.2499110582545291E-20,
    -2.3793207120554828E-19, 3.2322327482741956E-18, -2.6498507726404211E-17,
    7.8731033015748051E-18, 3.2775331491296092E-15, -5.1807698267687295E-14,
    4.62732644627914E-13, -2.7239785524170987E-12, 1.0896716883650769E-11,
    -1.8645986337651637E-11, 2.5459617591435155E-12, -1.3347654837468073E-8,
    1.3161132276731047E-7, -1.3227534741608429E-6, -9.7984625010885519E-38,
    3.2900432333335651E-35, -4.4581754057254838E-33, 2.5824817729473294E-31,
    5.2049615357860253E-30, -2.1583876518311414E-27, 1.9476950757610683E-25,
    -1.0716316264212252E-23, 4.1440657240625748E-22, -1.1817624319451798E-20,
    2.5249339155046378E-19, -4.0233948389965105E-18, 4.64169135391771E-17,
    -3.5476759515651092E-16, 1.1999262837080123E-15, 8.516412269170767E-15,
    -1.527199343162684E-13, 1.1449867637138848E-12, -3.6599461401055181E-12,
    -4.6103940452468584E-11, -4.7424213964325014E-9, 1.4095535848735113E-8,
    1.1415162393763462E-5, -0.00011904761791914855, -7.7487127476207258E-39,
    3.1576790378728681E-36, -5.9250135047007422E-34, 6.7643789484475193E-32,
    -5.220570875188387E-30, 2.8506788574160792E-28, -1.1098370767710674E-26,
    2.9468645436878283E-25, -4.2328657438375513E-24, -3.3901276335768838E-23,
    3.8407990599986091E-21, -1.1933448342985106E-19, 2.3702576054378613E-18,
    -3.3709086299905129E-17, 3.5240422748635714E-16, -2.688297081936284E-15,
    1.4426938768292247E-14, -4.5785087028675909E-14, 1.6710103243486247E-14,
    -1.1024143067873009E-11, -3.3079062392811025E-10, 2.8376658214791753E-8,
    2.8265347449301076E-6, 3.9682541488440042E-5, -0.016666666666889381,
    -8.6841596356231729E-42, 3.1939131296905081E-39, -4.8490390875687847E-37,
    3.2729122440862841E-35, 5.3980586162289553E-34, -3.3686936226391223E-31,
    3.7197707807256541E-29, -2.5380412938111731E-27, 1.2494404817163045E-25,
    -4.6966036280739172E-24, 1.3852307187625331E-22, -3.2509821682467773E-21,
    6.1100085267801761E-20, -9.20594856358596E-19, 1.1081925404564449E-17,
    -1.0575868027372313E-16, 7.920139233623936E-16, -4.5514965597202215E-15,
    1.3296256931854534E-14, -3.345171633728989E-13, 1.7101904098836834E-11,
    2.4300392651460408E-9, 4.6155748216027864E-8, -1.5460729722609369E-5,
    -0.00238095238099261, 1.0000000000000047 };

  const real_T *c;
  for (Test_Traj_B.i_cg = 0; Test_Traj_B.i_cg < 20; Test_Traj_B.i_cg++) {
    Test_Traj_B.v_j[Test_Traj_B.i_cg] = x[Test_Traj_B.i_cg] + y[Test_Traj_B.i_cg];
  }

  c = &tmp[0];
  Test_Traj_B.n_h = 351;
  for (Test_Traj_B.b_subsb_idx_1_a = 0; Test_Traj_B.b_subsb_idx_1_a < 20;
       Test_Traj_B.b_subsb_idx_1_a++) {
    Test_Traj_B.x_c[Test_Traj_B.b_subsb_idx_1_a] = x[Test_Traj_B.b_subsb_idx_1_a]
      - y[Test_Traj_B.b_subsb_idx_1_a];
  }

  Test_Traj_power(Test_Traj_B.x_c, Test_Traj_B.dv9);
  Test_Traj_repmat(Test_Traj_B.dv9, Test_Traj_B.dv1);
  for (Test_Traj_B.b_subsb_idx_1_a = 0; Test_Traj_B.b_subsb_idx_1_a < 20;
       Test_Traj_B.b_subsb_idx_1_a++) {
    Test_Traj_B.x_i[Test_Traj_B.b_subsb_idx_1_a] = 1.0;
  }

  memcpy(&Test_Traj_B.x_i[20], &Test_Traj_B.dv1[0], 500U * sizeof(real_T));
  for (Test_Traj_B.i_cg = 0; Test_Traj_B.i_cg < 25; Test_Traj_B.i_cg++) {
    Test_Traj_B.b_subsb_idx_1_a = Test_Traj_B.i_cg + 1;
    for (Test_Traj_B.b_k_g = 0; Test_Traj_B.b_k_g < 20; Test_Traj_B.b_k_g++) {
      Test_Traj_B.x_tmp_f = 20 * Test_Traj_B.b_subsb_idx_1_a + Test_Traj_B.b_k_g;
      Test_Traj_B.x_i[Test_Traj_B.x_tmp_f] *= Test_Traj_B.x_i[20 *
        Test_Traj_B.i_cg + Test_Traj_B.b_k_g];
    }
  }

  Test_Traj_power(Test_Traj_B.v_j, Test_Traj_B.dv9);
  Test_Traj_repmat(Test_Traj_B.dv9, Test_Traj_B.dv1);
  for (Test_Traj_B.b_subsb_idx_1_a = 0; Test_Traj_B.b_subsb_idx_1_a < 20;
       Test_Traj_B.b_subsb_idx_1_a++) {
    Test_Traj_B.x_f[Test_Traj_B.b_subsb_idx_1_a] = 1.0;
  }

  memcpy(&Test_Traj_B.x_f[20], &Test_Traj_B.dv1[0], 500U * sizeof(real_T));
  for (Test_Traj_B.i_cg = 0; Test_Traj_B.i_cg < 25; Test_Traj_B.i_cg++) {
    Test_Traj_B.b_subsb_idx_1_a = Test_Traj_B.i_cg + 1;
    for (Test_Traj_B.b_k_g = 0; Test_Traj_B.b_k_g < 20; Test_Traj_B.b_k_g++) {
      Test_Traj_B.x_tmp_f = 20 * Test_Traj_B.b_subsb_idx_1_a + Test_Traj_B.b_k_g;
      Test_Traj_B.x_f[Test_Traj_B.x_tmp_f] *= Test_Traj_B.x_f[20 *
        Test_Traj_B.i_cg + Test_Traj_B.b_k_g];
    }
  }

  memset(&a[0], 0, 20U * sizeof(real_T));
  Test_Traj_B.i_n = 0.0;
  Test_Traj_B.j_p = 0.0;
  while (Test_Traj_B.n_h > 0) {
    Test_Traj_B.c_f = c[Test_Traj_B.n_h - 1];
    Test_Traj_B.i_cg = static_cast<int32_T>(Test_Traj_B.i_n + 1.0);
    Test_Traj_B.b_k_g = static_cast<int32_T>(Test_Traj_B.j_p + 1.0);
    for (Test_Traj_B.b_subsb_idx_1_a = 0; Test_Traj_B.b_subsb_idx_1_a < 20;
         Test_Traj_B.b_subsb_idx_1_a++) {
      a[Test_Traj_B.b_subsb_idx_1_a] += Test_Traj_B.x_i[(Test_Traj_B.i_cg - 1) *
        20 + Test_Traj_B.b_subsb_idx_1_a] * Test_Traj_B.c_f * Test_Traj_B.x_f
        [(Test_Traj_B.b_k_g - 1) * 20 + Test_Traj_B.b_subsb_idx_1_a];
    }

    Test_Traj_B.j_p++;
    if (Test_Traj_B.i_n + Test_Traj_B.j_p > 25.0) {
      Test_Traj_B.i_n++;
      Test_Traj_B.j_p = 0.0;
    }

    Test_Traj_B.n_h--;
  }

  for (Test_Traj_B.b_subsb_idx_1_a = 0; Test_Traj_B.b_subsb_idx_1_a < 20;
       Test_Traj_B.b_subsb_idx_1_a++) {
    a[Test_Traj_B.b_subsb_idx_1_a] *= 3.0 *
      Test_Traj_B.v_j[Test_Traj_B.b_subsb_idx_1_a];
  }
}

static void Test_Traj_fresnelg1_ph(const real_T a[20], const real_T d[20], const
  real_T c[20], creal_T z[20])
{
  boolean_T exitg1;
  for (Test_Traj_B.i_m = 0; Test_Traj_B.i_m < 20; Test_Traj_B.i_m++) {
    z[Test_Traj_B.i_m].re = 0.0;
    z[Test_Traj_B.i_m].im = 0.0;
    Test_Traj_B.d_m[Test_Traj_B.i_m] = d[Test_Traj_B.i_m] - a[Test_Traj_B.i_m];
  }

  Test_Traj_power(Test_Traj_B.d_m, Test_Traj_B.x_e);
  for (Test_Traj_B.i_m = 0; Test_Traj_B.i_m < 20; Test_Traj_B.i_m++) {
    Test_Traj_B.x_ey = Test_Traj_B.x_e[Test_Traj_B.i_m] / (4.0 *
      a[Test_Traj_B.i_m]);
    Test_Traj_B.criteria[Test_Traj_B.i_m] = (fabs(Test_Traj_B.x_ey) <
      628.31853071795865);
    Test_Traj_B.x_e[Test_Traj_B.i_m] = Test_Traj_B.x_ey;
  }

  Test_Traj_B.idx_g = 0;
  Test_Traj_B.b_ii = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii - 1 < 20)) {
    if (Test_Traj_B.criteria[Test_Traj_B.b_ii - 1]) {
      Test_Traj_B.idx_g++;
      Test_Traj_B.ii_data_m[Test_Traj_B.idx_g - 1] = Test_Traj_B.b_ii;
      if (Test_Traj_B.idx_g >= 20) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii++;
      }
    } else {
      Test_Traj_B.b_ii++;
    }
  }

  if (1 > Test_Traj_B.idx_g) {
    Test_Traj_B.idx_g = 0;
  }

  for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.idx_g;
       Test_Traj_B.b_ii++) {
    Test_Traj_B.ilarge_data_j[Test_Traj_B.b_ii] =
      Test_Traj_B.ii_data_m[Test_Traj_B.b_ii];
  }

  Test_Traj_B.i_m = 0;
  Test_Traj_B.b_ii = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii - 1 < 20)) {
    if (!Test_Traj_B.criteria[Test_Traj_B.b_ii - 1]) {
      Test_Traj_B.i_m++;
      Test_Traj_B.ii_data_m[Test_Traj_B.i_m - 1] = Test_Traj_B.b_ii;
      if (Test_Traj_B.i_m >= 20) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii++;
      }
    } else {
      Test_Traj_B.b_ii++;
    }
  }

  if (1 > Test_Traj_B.i_m) {
    Test_Traj_B.i_m = 0;
  }

  for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.i_m;
       Test_Traj_B.b_ii++) {
    Test_Traj_B.ismall_data_o[Test_Traj_B.b_ii] =
      Test_Traj_B.ii_data_m[Test_Traj_B.b_ii];
  }

  Test_Traj_B.idx_o = 0;
  Test_Traj_B.b_ii = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii - 1 < 20)) {
    Test_Traj_B.ii = Test_Traj_B.b_ii - 1;
    if ((d[Test_Traj_B.ii] == 0.0) && (a[Test_Traj_B.ii] == 0.0)) {
      Test_Traj_B.idx_o++;
      Test_Traj_B.ii_data_m[Test_Traj_B.idx_o - 1] = Test_Traj_B.ii + 1;
      if (Test_Traj_B.idx_o >= 20) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii++;
      }
    } else {
      Test_Traj_B.b_ii++;
    }
  }

  if (1 > Test_Traj_B.idx_o) {
    Test_Traj_B.idx_o = 0;
  }

  for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.idx_o;
       Test_Traj_B.b_ii++) {
    Test_Traj_B.izero_data_f[Test_Traj_B.b_ii] =
      Test_Traj_B.ii_data_m[Test_Traj_B.b_ii];
  }

  if (Test_Traj_B.idx_g != 0) {
    Test_Traj_B.a_size_ea = Test_Traj_B.idx_g;
    Test_Traj_B.d_size_i = Test_Traj_B.idx_g;
    Test_Traj_B.c_size_f = Test_Traj_B.idx_g;
    for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.idx_g;
         Test_Traj_B.b_ii++) {
      Test_Traj_B.d_m[Test_Traj_B.b_ii] =
        a[Test_Traj_B.ilarge_data_j[Test_Traj_B.b_ii] - 1];
      Test_Traj_B.x_e[Test_Traj_B.b_ii] =
        d[Test_Traj_B.ilarge_data_j[Test_Traj_B.b_ii] - 1];
      Test_Traj_B.c_data_of[Test_Traj_B.b_ii] =
        c[Test_Traj_B.ilarge_data_j[Test_Traj_B.b_ii] - 1];
    }

    Test_Traj_fresnelgLargea1(Test_Traj_B.d_m, &Test_Traj_B.a_size_ea,
      Test_Traj_B.x_e, &Test_Traj_B.d_size_i, Test_Traj_B.c_data_of,
      &Test_Traj_B.c_size_f, Test_Traj_B.p_data, &Test_Traj_B.p_size,
      Test_Traj_B.q_data, &Test_Traj_B.q_size_e);
    Test_Traj_B.idx_g = Test_Traj_B.p_size;
    for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.idx_g;
         Test_Traj_B.b_ii++) {
      z[Test_Traj_B.ilarge_data_j[Test_Traj_B.b_ii] - 1] =
        Test_Traj_B.p_data[Test_Traj_B.b_ii];
    }
  }

  if (Test_Traj_B.i_m != 0) {
    Test_Traj_B.a_size_h = Test_Traj_B.i_m;
    Test_Traj_B.d_size_in = Test_Traj_B.i_m;
    Test_Traj_B.c_size_pi = Test_Traj_B.i_m;
    for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.i_m;
         Test_Traj_B.b_ii++) {
      Test_Traj_B.d_m[Test_Traj_B.b_ii] =
        a[Test_Traj_B.ismall_data_o[Test_Traj_B.b_ii] - 1];
      Test_Traj_B.x_e[Test_Traj_B.b_ii] =
        d[Test_Traj_B.ismall_data_o[Test_Traj_B.b_ii] - 1];
      Test_Traj_B.c_data_of[Test_Traj_B.b_ii] =
        c[Test_Traj_B.ismall_data_o[Test_Traj_B.b_ii] - 1];
    }

    Test_Traj_fresnelgSmalla1(Test_Traj_B.d_m, &Test_Traj_B.a_size_h,
      Test_Traj_B.x_e, &Test_Traj_B.d_size_in, Test_Traj_B.c_data_of,
      &Test_Traj_B.c_size_pi, Test_Traj_B.p_data, &Test_Traj_B.p_size,
      Test_Traj_B.q_data, &Test_Traj_B.q_size_e);
    Test_Traj_B.idx_g = Test_Traj_B.p_size;
    for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.idx_g;
         Test_Traj_B.b_ii++) {
      z[Test_Traj_B.ismall_data_o[Test_Traj_B.b_ii] - 1] =
        Test_Traj_B.p_data[Test_Traj_B.b_ii];
    }
  }

  if (Test_Traj_B.idx_o != 0) {
    Test_Traj_B.p_size = Test_Traj_B.idx_o;
    for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.idx_o;
         Test_Traj_B.b_ii++) {
      Test_Traj_B.x_ey = c[Test_Traj_B.izero_data_f[Test_Traj_B.b_ii] - 1];
      Test_Traj_B.p_data[Test_Traj_B.b_ii].re = Test_Traj_B.x_ey * 0.0;
      Test_Traj_B.p_data[Test_Traj_B.b_ii].im = Test_Traj_B.x_ey;
    }

    Test_Traj_exp_p(Test_Traj_B.p_data, &Test_Traj_B.p_size);
    Test_Traj_B.idx_g = Test_Traj_B.p_size;
    for (Test_Traj_B.b_ii = 0; Test_Traj_B.b_ii < Test_Traj_B.idx_g;
         Test_Traj_B.b_ii++) {
      z[Test_Traj_B.izero_data_f[Test_Traj_B.b_ii] - 1] =
        Test_Traj_B.p_data[Test_Traj_B.b_ii];
    }
  }
}

static void Test_Traj_clothoidG1fit2wp_ph(const creal_T z0[20], const real_T
  theta0[20], const creal_T z1[20], const real_T theta1[20], real_T k0[20],
  real_T k1[20], real_T l[20])
{
  for (Test_Traj_B.b_k_ef = 0; Test_Traj_B.b_k_ef < 20; Test_Traj_B.b_k_ef++) {
    Test_Traj_B.z_g.re = z1[Test_Traj_B.b_k_ef].re - z0[Test_Traj_B.b_k_ef].re;
    Test_Traj_B.z_g.im = z1[Test_Traj_B.b_k_ef].im - z0[Test_Traj_B.b_k_ef].im;
    Test_Traj_B.phi_g = rt_atan2d_snf(Test_Traj_B.z_g.im, Test_Traj_B.z_g.re);
    Test_Traj_B.f_tmp = theta0[Test_Traj_B.b_k_ef] - Test_Traj_B.phi_g;
    Test_Traj_B.f_n.re = Test_Traj_B.f_tmp * 0.0;
    if (Test_Traj_B.f_tmp == 0.0) {
      Test_Traj_B.a_re_j = exp(Test_Traj_B.f_n.re);
      Test_Traj_B.f_tmp = 0.0;
    } else if (rtIsInf(Test_Traj_B.f_tmp) && rtIsInf(Test_Traj_B.f_n.re) &&
               (Test_Traj_B.f_n.re < 0.0)) {
      Test_Traj_B.a_re_j = 0.0;
      Test_Traj_B.f_tmp = 0.0;
    } else {
      Test_Traj_B.r_b = exp(Test_Traj_B.f_n.re / 2.0);
      Test_Traj_B.a_re_j = Test_Traj_B.r_b * cos(Test_Traj_B.f_tmp) *
        Test_Traj_B.r_b;
      Test_Traj_B.f_tmp = Test_Traj_B.r_b * sin(Test_Traj_B.f_tmp) *
        Test_Traj_B.r_b;
    }

    Test_Traj_B.phi0_f[Test_Traj_B.b_k_ef] = rt_atan2d_snf(Test_Traj_B.f_tmp,
      Test_Traj_B.a_re_j);
    Test_Traj_B.f_tmp = theta1[Test_Traj_B.b_k_ef] - Test_Traj_B.phi_g;
    Test_Traj_B.f_n.re = Test_Traj_B.f_tmp * 0.0;
    Test_Traj_B.f_n.im = Test_Traj_B.f_tmp;
    Test_Traj_B.z_h[Test_Traj_B.b_k_ef] = Test_Traj_B.z_g;
    Test_Traj_B.f[Test_Traj_B.b_k_ef] = Test_Traj_B.f_n;
  }

  for (Test_Traj_B.b_k_ef = 0; Test_Traj_B.b_k_ef < 20; Test_Traj_B.b_k_ef++) {
    if (Test_Traj_B.f[Test_Traj_B.b_k_ef].im == 0.0) {
      Test_Traj_B.a_re_j = exp(Test_Traj_B.f[Test_Traj_B.b_k_ef].re);
      Test_Traj_B.f_tmp = 0.0;
    } else if (rtIsInf(Test_Traj_B.f[Test_Traj_B.b_k_ef].im) && rtIsInf
               (Test_Traj_B.f[Test_Traj_B.b_k_ef].re) &&
               (Test_Traj_B.f[Test_Traj_B.b_k_ef].re < 0.0)) {
      Test_Traj_B.a_re_j = 0.0;
      Test_Traj_B.f_tmp = 0.0;
    } else {
      Test_Traj_B.r_b = exp(Test_Traj_B.f[Test_Traj_B.b_k_ef].re / 2.0);
      Test_Traj_B.a_re_j = Test_Traj_B.r_b * cos
        (Test_Traj_B.f[Test_Traj_B.b_k_ef].im) * Test_Traj_B.r_b;
      Test_Traj_B.f_tmp = Test_Traj_B.r_b * sin(Test_Traj_B.f[Test_Traj_B.b_k_ef]
        .im) * Test_Traj_B.r_b;
    }

    Test_Traj_B.f_c.re = Test_Traj_B.a_re_j;
    Test_Traj_B.f_c.im = Test_Traj_B.f_tmp;
    Test_Traj_B.phi_g = rt_atan2d_snf(Test_Traj_B.f_tmp, Test_Traj_B.a_re_j);
    k1[Test_Traj_B.b_k_ef] = Test_Traj_B.phi_g -
      Test_Traj_B.phi0_f[Test_Traj_B.b_k_ef];
    Test_Traj_B.f[Test_Traj_B.b_k_ef] = Test_Traj_B.f_c;
    Test_Traj_B.phi1_g[Test_Traj_B.b_k_ef] = Test_Traj_B.phi_g;
  }

  Test_Traj_fetchA(Test_Traj_B.phi0_f, Test_Traj_B.phi1_g, Test_Traj_B.phi_m);
  Test_Traj_fresnelg1_ph(Test_Traj_B.phi_m, k1, Test_Traj_B.phi0_f,
    Test_Traj_B.f);
  for (Test_Traj_B.b_k_ef = 0; Test_Traj_B.b_k_ef < 20; Test_Traj_B.b_k_ef++) {
    Test_Traj_B.phi_g = Test_Traj_rt_hypotd_snf
      (Test_Traj_B.z_h[Test_Traj_B.b_k_ef].re,
       Test_Traj_B.z_h[Test_Traj_B.b_k_ef].im) /
      Test_Traj_B.f[Test_Traj_B.b_k_ef].re;
    k0[Test_Traj_B.b_k_ef] = (k1[Test_Traj_B.b_k_ef] -
      Test_Traj_B.phi_m[Test_Traj_B.b_k_ef]) / Test_Traj_B.phi_g;
    Test_Traj_B.a_re_j = (k1[Test_Traj_B.b_k_ef] +
                          Test_Traj_B.phi_m[Test_Traj_B.b_k_ef]) /
      Test_Traj_B.phi_g;
    if (Test_Traj_B.phi_g == 0.0) {
      k0[Test_Traj_B.b_k_ef] = 0.0;
      Test_Traj_B.a_re_j = 0.0;
    }

    l[Test_Traj_B.b_k_ef] = Test_Traj_B.phi_g;
    k1[Test_Traj_B.b_k_ef] = Test_Traj_B.a_re_j;
  }
}

static void Test_Traj_pchip(const real_T x[21], const real_T y[21], real_T
  v_breaks[21], real_T v_coefs[80])
{
  int32_T k;
  real_T w1;
  int32_T b_k;
  for (b_k = 0; b_k < 20; b_k++) {
    w1 = x[b_k + 1] - x[b_k];
    Test_Traj_B.del[b_k] = (y[b_k + 1] - y[b_k]) / w1;
    Test_Traj_B.h_j[b_k] = w1;
  }

  for (b_k = 0; b_k < 19; b_k++) {
    k = b_k + 1;
    w1 = Test_Traj_B.h_j[k - 1];
    Test_Traj_B.hs = w1 + Test_Traj_B.h_j[k];
    Test_Traj_B.hs3 = 3.0 * Test_Traj_B.hs;
    w1 = (w1 + Test_Traj_B.hs) / Test_Traj_B.hs3;
    Test_Traj_B.hs = (Test_Traj_B.h_j[k] + Test_Traj_B.hs) / Test_Traj_B.hs3;
    Test_Traj_B.slopes[k] = 0.0;
    Test_Traj_B.hs3 = Test_Traj_B.del[k - 1];
    if (Test_Traj_B.hs3 < 0.0) {
      if (Test_Traj_B.del[k] <= Test_Traj_B.hs3) {
        Test_Traj_B.slopes[k] = Test_Traj_B.hs3 / (Test_Traj_B.hs3 /
          Test_Traj_B.del[k] * w1 + Test_Traj_B.hs);
      } else {
        if (Test_Traj_B.del[k] < 0.0) {
          Test_Traj_B.slopes[k] = Test_Traj_B.del[k] / (Test_Traj_B.del[k] /
            Test_Traj_B.hs3 * Test_Traj_B.hs + w1);
        }
      }
    } else {
      if (Test_Traj_B.hs3 > 0.0) {
        if (Test_Traj_B.del[k] >= Test_Traj_B.hs3) {
          Test_Traj_B.slopes[k] = Test_Traj_B.del[k - 1] / (Test_Traj_B.del[k -
            1] / Test_Traj_B.del[k] * w1 + Test_Traj_B.hs);
        } else {
          if (Test_Traj_B.del[k] > 0.0) {
            Test_Traj_B.slopes[k] = Test_Traj_B.del[k] / (Test_Traj_B.del[k] /
              Test_Traj_B.del[k - 1] * Test_Traj_B.hs + w1);
          }
        }
      }
    }
  }

  w1 = ((2.0 * Test_Traj_B.h_j[0] + Test_Traj_B.h_j[1]) * Test_Traj_B.del[0] -
        Test_Traj_B.h_j[0] * Test_Traj_B.del[1]) / (Test_Traj_B.h_j[0] +
    Test_Traj_B.h_j[1]);
  if (Test_Traj_B.del[0] < 0.0) {
    Test_Traj_B.hs = -1.0;
  } else if (Test_Traj_B.del[0] > 0.0) {
    Test_Traj_B.hs = 1.0;
  } else if (Test_Traj_B.del[0] == 0.0) {
    Test_Traj_B.hs = 0.0;
  } else {
    Test_Traj_B.hs = (rtNaN);
  }

  if (w1 < 0.0) {
    Test_Traj_B.hs3 = -1.0;
  } else if (w1 > 0.0) {
    Test_Traj_B.hs3 = 1.0;
  } else if (w1 == 0.0) {
    Test_Traj_B.hs3 = 0.0;
  } else {
    Test_Traj_B.hs3 = (rtNaN);
  }

  if (Test_Traj_B.hs3 != Test_Traj_B.hs) {
    w1 = 0.0;
  } else {
    if (Test_Traj_B.del[1] < 0.0) {
      Test_Traj_B.hs3 = -1.0;
    } else if (Test_Traj_B.del[1] > 0.0) {
      Test_Traj_B.hs3 = 1.0;
    } else if (Test_Traj_B.del[1] == 0.0) {
      Test_Traj_B.hs3 = 0.0;
    } else {
      Test_Traj_B.hs3 = (rtNaN);
    }

    if ((Test_Traj_B.hs != Test_Traj_B.hs3) && (fabs(w1) > fabs(3.0 *
          Test_Traj_B.del[0]))) {
      w1 = 3.0 * Test_Traj_B.del[0];
    }
  }

  Test_Traj_B.slopes[0] = w1;
  w1 = ((2.0 * Test_Traj_B.h_j[19] + Test_Traj_B.h_j[18]) * Test_Traj_B.del[19]
        - Test_Traj_B.h_j[19] * Test_Traj_B.del[18]) / (Test_Traj_B.h_j[19] +
    Test_Traj_B.h_j[18]);
  if (Test_Traj_B.del[19] < 0.0) {
    Test_Traj_B.hs = -1.0;
  } else if (Test_Traj_B.del[19] > 0.0) {
    Test_Traj_B.hs = 1.0;
  } else if (Test_Traj_B.del[19] == 0.0) {
    Test_Traj_B.hs = 0.0;
  } else {
    Test_Traj_B.hs = (rtNaN);
  }

  if (w1 < 0.0) {
    Test_Traj_B.hs3 = -1.0;
  } else if (w1 > 0.0) {
    Test_Traj_B.hs3 = 1.0;
  } else if (w1 == 0.0) {
    Test_Traj_B.hs3 = 0.0;
  } else {
    Test_Traj_B.hs3 = (rtNaN);
  }

  if (Test_Traj_B.hs3 != Test_Traj_B.hs) {
    w1 = 0.0;
  } else {
    if (Test_Traj_B.del[18] < 0.0) {
      Test_Traj_B.hs3 = -1.0;
    } else if (Test_Traj_B.del[18] > 0.0) {
      Test_Traj_B.hs3 = 1.0;
    } else if (Test_Traj_B.del[18] == 0.0) {
      Test_Traj_B.hs3 = 0.0;
    } else {
      Test_Traj_B.hs3 = (rtNaN);
    }

    if ((Test_Traj_B.hs != Test_Traj_B.hs3) && (fabs(w1) > fabs(3.0 *
          Test_Traj_B.del[19]))) {
      w1 = 3.0 * Test_Traj_B.del[19];
    }
  }

  Test_Traj_B.slopes[20] = w1;
  for (b_k = 0; b_k < 20; b_k++) {
    w1 = (Test_Traj_B.del[b_k] - Test_Traj_B.slopes[b_k]) / Test_Traj_B.h_j[b_k];
    Test_Traj_B.hs = (Test_Traj_B.slopes[b_k + 1] - Test_Traj_B.del[b_k]) /
      Test_Traj_B.h_j[b_k];
    v_coefs[b_k] = (Test_Traj_B.hs - w1) / Test_Traj_B.h_j[b_k];
    v_coefs[b_k + 20] = 2.0 * w1 - Test_Traj_B.hs;
    v_coefs[b_k + 40] = Test_Traj_B.slopes[b_k];
    v_coefs[b_k + 60] = y[b_k];
  }

  memcpy(&v_breaks[0], &x[0], 21U * sizeof(real_T));
}

static void Test_Traj_repmat_phm(real_T b[80])
{
  int32_T ibmat;
  int32_T b_jcol;
  int32_T b_itilerow;
  int8_T a[4];
  a[0] = 0;
  a[1] = 3;
  a[2] = 2;
  a[3] = 1;
  for (b_jcol = 0; b_jcol < 4; b_jcol++) {
    ibmat = b_jcol * 20;
    for (b_itilerow = 0; b_itilerow < 20; b_itilerow++) {
      b[ibmat + b_itilerow] = a[b_jcol];
    }
  }
}

static void Test_Traj_circshift(const real_T a[80], real_T b_a[80])
{
  real_T unusedU0;
  int32_T b_j;
  memcpy(&b_a[0], &a[0], 80U * sizeof(real_T));
  for (b_j = 0; b_j < 20; b_j++) {
    unusedU0 = b_a[b_j + 60];
    b_a[b_j + 60] = b_a[b_j + 40];
    b_a[b_j + 40] = b_a[b_j + 20];
    b_a[b_j + 20] = b_a[b_j];
    b_a[b_j] = unusedU0;
  }
}

static void Test_Traj_derivpp(const real_T pp_breaks[21], const real_T pp_coefs
  [80], real_T dpp_breaks[21], real_T dpp_coefs[80])
{
  memcpy(&dpp_breaks[0], &pp_breaks[0], 21U * sizeof(real_T));
  Test_Traj_repmat_phm(dpp_coefs);
  Test_Traj_circshift(pp_coefs, Test_Traj_B.dv4);
  for (Test_Traj_B.i19 = 0; Test_Traj_B.i19 < 80; Test_Traj_B.i19++) {
    dpp_coefs[Test_Traj_B.i19] *= Test_Traj_B.dv4[Test_Traj_B.i19];
  }
}

static void waypointTrajectory_setupPositio(waypointTrajectory_Test_Traj_T *obj)
{
  memcpy(&Test_Traj_B.t_p[0], &obj->TimeOfArrival[0], 21U * sizeof(real_T));
  Test_clothoidG2fitMissingCourse(obj->Waypoints, Test_Traj_B.course);
  for (Test_Traj_B.i_p = 0; Test_Traj_B.i_p < 21; Test_Traj_B.i_p++) {
    Test_Traj_B.hip[Test_Traj_B.i_p].re = obj->Waypoints[Test_Traj_B.i_p];
    Test_Traj_B.hip[Test_Traj_B.i_p].im = obj->Waypoints[Test_Traj_B.i_p + 21];
  }

  Test_Traj_clothoidG1fit2wp_ph(&Test_Traj_B.hip[0], &Test_Traj_B.course[0],
    &Test_Traj_B.hip[1], &Test_Traj_B.course[1], Test_Traj_B.k0, Test_Traj_B.k1,
    Test_Traj_B.hl);
  memcpy(&Test_Traj_B.x_n[0], &Test_Traj_B.hl[0], 20U * sizeof(real_T));
  for (Test_Traj_B.i_p = 0; Test_Traj_B.i_p < 19; Test_Traj_B.i_p++) {
    Test_Traj_B.x_n[Test_Traj_B.i_p + 1] += Test_Traj_B.x_n[Test_Traj_B.i_p];
  }

  Test_Traj_B.hcd[0] = 0.0;
  memcpy(&Test_Traj_B.hcd[1], &Test_Traj_B.x_n[0], 20U * sizeof(real_T));
  Test_Traj_pchip(obj->TimeOfArrival, Test_Traj_B.hcd, Test_Traj_B.hpp_breaks,
                  Test_Traj_B.hpp_coefs);
  Test_Traj_derivpp(Test_Traj_B.hpp_breaks, Test_Traj_B.hpp_coefs,
                    Test_Traj_B.hspp_breaks, Test_Traj_B.hspp_coefs);
  Test_Traj_derivpp(Test_Traj_B.hspp_breaks, Test_Traj_B.hspp_coefs,
                    Test_Traj_B.happ_breaks, Test_Traj_B.happ_coefs);
  Test_Traj_pchip(obj->TimeOfArrival, &obj->Waypoints[42],
                  Test_Traj_B.vpp_breaks, Test_Traj_B.vpp_coefs);
  Test_Traj_derivpp(Test_Traj_B.vpp_breaks, Test_Traj_B.vpp_coefs,
                    Test_Traj_B.vspp_breaks, Test_Traj_B.vspp_coefs);
  Test_Traj_derivpp(Test_Traj_B.vspp_breaks, Test_Traj_B.vspp_coefs,
                    Test_Traj_B.vapp_breaks, Test_Traj_B.vapp_coefs);
  memcpy(&obj->HorizontalCumulativeDistance[0], &Test_Traj_B.hcd[0], 21U *
         sizeof(real_T));
  memcpy(&obj->HorizontalDistancePiecewisePolynomial.breaks[0],
         &Test_Traj_B.hpp_breaks[0], 21U * sizeof(real_T));
  memcpy(&obj->HorizontalDistancePiecewisePolynomial.coefs[0],
         &Test_Traj_B.hpp_coefs[0], 80U * sizeof(real_T));
  memcpy(&obj->HorizontalSpeedPiecewisePolynomial.breaks[0],
         &Test_Traj_B.hspp_breaks[0], 21U * sizeof(real_T));
  memcpy(&obj->HorizontalSpeedPiecewisePolynomial.coefs[0],
         &Test_Traj_B.hspp_coefs[0], 80U * sizeof(real_T));
  memcpy(&obj->HorizontalAccelerationPiecewisePolynomial.breaks[0],
         &Test_Traj_B.happ_breaks[0], 21U * sizeof(real_T));
  memcpy(&obj->HorizontalAccelerationPiecewisePolynomial.coefs[0],
         &Test_Traj_B.happ_coefs[0], 80U * sizeof(real_T));
  Test_Traj_derivpp(Test_Traj_B.happ_breaks, Test_Traj_B.happ_coefs,
                    obj->HorizontalJerkPiecewisePolynomial.breaks,
                    obj->HorizontalJerkPiecewisePolynomial.coefs);
  memcpy(&obj->HorizontalCurvatureInitial[0], &Test_Traj_B.k0[0], 20U * sizeof
         (real_T));
  memcpy(&obj->HorizontalCurvatureFinal[0], &Test_Traj_B.k1[0], 20U * sizeof
         (real_T));
  memcpy(&obj->HorizontalInitialPosition[0], &Test_Traj_B.hip[0], 21U * sizeof
         (creal_T));
  memcpy(&obj->HorizontalPiecewiseLength[0], &Test_Traj_B.hl[0], 20U * sizeof
         (real_T));
  memcpy(&obj->VerticalDistancePiecewisePolynomial.breaks[0],
         &Test_Traj_B.vpp_breaks[0], 21U * sizeof(real_T));
  memcpy(&obj->VerticalDistancePiecewisePolynomial.coefs[0],
         &Test_Traj_B.vpp_coefs[0], 80U * sizeof(real_T));
  memcpy(&obj->VerticalSpeedPiecewisePolynomial.breaks[0],
         &Test_Traj_B.vspp_breaks[0], 21U * sizeof(real_T));
  memcpy(&obj->VerticalSpeedPiecewisePolynomial.coefs[0],
         &Test_Traj_B.vspp_coefs[0], 80U * sizeof(real_T));
  memcpy(&obj->VerticalAccelerationPiecewisePolynomial.breaks[0],
         &Test_Traj_B.vapp_breaks[0], 21U * sizeof(real_T));
  memcpy(&obj->VerticalAccelerationPiecewisePolynomial.coefs[0],
         &Test_Traj_B.vapp_coefs[0], 80U * sizeof(real_T));
  Test_Traj_derivpp(Test_Traj_B.vapp_breaks, Test_Traj_B.vapp_coefs,
                    obj->VerticalJerkPiecewisePolynomial.breaks,
                    obj->VerticalJerkPiecewisePolynomial.coefs);
  for (Test_Traj_B.i_p = 0; Test_Traj_B.i_p < 21; Test_Traj_B.i_p++) {
    obj->Course[Test_Traj_B.i_p] = 57.295779513082323 *
      Test_Traj_B.course[Test_Traj_B.i_p];
  }

  obj->PathDuration = Test_Traj_B.t_p[20];
}

static void Tes_quaternioncg_parenReference(const real_T obj_a[21], const real_T
  obj_b[21], const real_T obj_c[21], const real_T obj_d[21], const real_T
  varargin_1[20], real_T o_a[20], real_T o_b[20], real_T o_c[20], real_T o_d[20])
{
  int32_T i;
  int32_T o_a_tmp;
  for (i = 0; i < 20; i++) {
    o_a_tmp = static_cast<int32_T>(varargin_1[i]) - 1;
    o_a[i] = obj_a[o_a_tmp];
    o_b[i] = obj_b[o_a_tmp];
    o_c[i] = obj_c[o_a_tmp];
    o_d[i] = obj_d[o_a_tmp];
  }
}

static void Test_Traj_quaternioncg_times(const real_T x_a[20], const real_T x_b
  [20], const real_T x_c[20], const real_T x_d[20], const real_T y_a[20], const
  real_T y_b[20], const real_T y_c[20], const real_T y_d[20], real_T o_a[20],
  real_T o_b[20], real_T o_c[20], real_T o_d[20])
{
  int32_T i;
  for (i = 0; i < 20; i++) {
    o_a[i] = ((x_a[i] * y_a[i] - x_b[i] * y_b[i]) - x_c[i] * y_c[i]) - x_d[i] *
      y_d[i];
    o_b[i] = ((x_a[i] * y_b[i] + x_b[i] * y_a[i]) + x_c[i] * y_d[i]) - x_d[i] *
      y_c[i];
    o_c[i] = ((x_a[i] * y_c[i] - x_b[i] * y_d[i]) + x_c[i] * y_a[i]) + x_d[i] *
      y_b[i];
    o_d[i] = ((x_a[i] * y_d[i] + x_b[i] * y_c[i]) - x_c[i] * y_b[i]) + x_d[i] *
      y_a[i];
  }
}

static void T_quaternioncg_parenReference_p(const real_T obj_a[20], const real_T
  obj_b[20], const real_T obj_c[20], const real_T obj_d[20], const boolean_T
  varargin_1[20], real_T o_a_data[], int32_T *o_a_size, real_T o_b_data[],
  int32_T *o_b_size, real_T o_c_data[], int32_T *o_c_size, real_T o_d_data[],
  int32_T *o_d_size)
{
  int32_T trueCount;
  int32_T e_i;
  int32_T partialTrueCount;
  trueCount = 0;
  partialTrueCount = 0;
  for (e_i = 0; e_i < 20; e_i++) {
    if (varargin_1[e_i]) {
      trueCount++;
      Test_Traj_B.b_data_n[partialTrueCount] = static_cast<int8_T>(e_i + 1);
      partialTrueCount++;
    }
  }

  *o_a_size = trueCount;
  *o_b_size = trueCount;
  *o_c_size = trueCount;
  *o_d_size = trueCount;
  for (partialTrueCount = 0; partialTrueCount < trueCount; partialTrueCount++) {
    e_i = Test_Traj_B.b_data_n[partialTrueCount] - 1;
    o_a_data[partialTrueCount] = obj_a[e_i];
    o_b_data[partialTrueCount] = obj_b[e_i];
    o_c_data[partialTrueCount] = obj_c[e_i];
    o_d_data[partialTrueCount] = obj_d[e_i];
  }
}

static void Test_Traj_quaternionBase_rotvec(const real_T q_a[20], const real_T
  q_b[20], const real_T q_c[20], const real_T q_d[20], real_T rv[60])
{
  int32_T xoffset;
  int32_T c_j;
  int32_T b_k;
  for (b_k = 0; b_k < 20; b_k++) {
    Test_Traj_B.n_i = sqrt(((q_a[b_k] * q_a[b_k] + q_b[b_k] * q_b[b_k]) +
      q_c[b_k] * q_c[b_k]) + q_d[b_k] * q_d[b_k]);
    Test_Traj_B.m[b_k] = q_a[b_k] / Test_Traj_B.n_i;
    Test_Traj_B.m[b_k + 20] = q_b[b_k] / Test_Traj_B.n_i;
    Test_Traj_B.m[b_k + 40] = q_c[b_k] / Test_Traj_B.n_i;
    Test_Traj_B.m[b_k + 60] = q_d[b_k] / Test_Traj_B.n_i;
    Test_Traj_B.n[b_k] = 2.0 * acos(Test_Traj_B.m[b_k]);
  }

  for (b_k = 0; b_k < 60; b_k++) {
    Test_Traj_B.b_z1[b_k] = Test_Traj_rt_powd_snf(Test_Traj_B.m[(b_k / 20 + 1) *
      20 + b_k % 20], 2.0);
  }

  memcpy(&Test_Traj_B.mag[0], &Test_Traj_B.b_z1[0], 20U * sizeof(real_T));
  for (b_k = 0; b_k < 2; b_k++) {
    xoffset = (b_k + 1) * 20 - 1;
    for (c_j = 0; c_j < 20; c_j++) {
      Test_Traj_B.mag[c_j] += Test_Traj_B.b_z1[(xoffset + c_j) + 1];
    }
  }

  for (b_k = 0; b_k < 20; b_k++) {
    Test_Traj_B.mag[b_k] = sqrt(Test_Traj_B.mag[b_k]);
  }

  memset(&rv[0], 0, 60U * sizeof(real_T));
  for (b_k = 0; b_k < 20; b_k++) {
    if (Test_Traj_B.mag[b_k] > 2.2204460492503131E-15) {
      rv[b_k] = Test_Traj_B.m[b_k + 20] * Test_Traj_B.n[b_k] /
        Test_Traj_B.mag[b_k];
      rv[b_k + 20] = Test_Traj_B.m[b_k + 40] * Test_Traj_B.n[b_k] /
        Test_Traj_B.mag[b_k];
      rv[b_k + 40] = Test_Traj_B.m[b_k + 60] * Test_Traj_B.n[b_k] /
        Test_Traj_B.mag[b_k];
    }
  }
}

static void Test_Traj_getang(const real_T qi_a[20], const real_T qi_b[20], const
  real_T qi_c[20], const real_T qi_d[20], const real_T qf_a[20], const real_T
  qf_b[20], const real_T qf_c[20], const real_T qf_d[20], real_T dtheta[20],
  real_T e[60])
{
  boolean_T idx;
  boolean_T exitg1;
  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < 20; Test_Traj_B.b_j_i++) {
    Test_Traj_B.izero_data_d[Test_Traj_B.b_j_i] = -qi_b[Test_Traj_B.b_j_i];
    Test_Traj_B.qi_c[Test_Traj_B.b_j_i] = -qi_c[Test_Traj_B.b_j_i];
    Test_Traj_B.qi_d[Test_Traj_B.b_j_i] = -qi_d[Test_Traj_B.b_j_i];
  }

  Test_Traj_quaternioncg_times(qi_a, Test_Traj_B.izero_data_d, Test_Traj_B.qi_c,
    Test_Traj_B.qi_d, qf_a, qf_b, qf_c, qf_d, Test_Traj_B.deltaQuat_a,
    Test_Traj_B.deltaQuat_b, Test_Traj_B.deltaQuat_c, Test_Traj_B.deltaQuat_d);
  Test_Traj_B.b_j_i = 0;
  for (Test_Traj_B.b_k_p = 0; Test_Traj_B.b_k_p < 20; Test_Traj_B.b_k_p++) {
    Test_Traj_B.scale_n = sqrt(((Test_Traj_B.deltaQuat_a[Test_Traj_B.b_k_p] *
      Test_Traj_B.deltaQuat_a[Test_Traj_B.b_k_p] +
      Test_Traj_B.deltaQuat_b[Test_Traj_B.b_k_p] *
      Test_Traj_B.deltaQuat_b[Test_Traj_B.b_k_p]) +
      Test_Traj_B.deltaQuat_c[Test_Traj_B.b_k_p] *
      Test_Traj_B.deltaQuat_c[Test_Traj_B.b_k_p]) +
      Test_Traj_B.deltaQuat_d[Test_Traj_B.b_k_p] *
      Test_Traj_B.deltaQuat_d[Test_Traj_B.b_k_p]);
    Test_Traj_B.absxk_p = Test_Traj_B.deltaQuat_a[Test_Traj_B.b_k_p] /
      Test_Traj_B.scale_n;
    idx = (Test_Traj_B.absxk_p < 0.0);
    if (idx) {
      Test_Traj_B.ii_data_e[Test_Traj_B.b_j_i] = Test_Traj_B.b_k_p + 1;
      Test_Traj_B.b_j_i++;
    }

    Test_Traj_B.deltaQuat_a[Test_Traj_B.b_k_p] = Test_Traj_B.absxk_p;
    Test_Traj_B.deltaQuat_b[Test_Traj_B.b_k_p] /= Test_Traj_B.scale_n;
    Test_Traj_B.deltaQuat_c[Test_Traj_B.b_k_p] /= Test_Traj_B.scale_n;
    Test_Traj_B.deltaQuat_d[Test_Traj_B.b_k_p] /= Test_Traj_B.scale_n;
    Test_Traj_B.idx[Test_Traj_B.b_k_p] = idx;
  }

  T_quaternioncg_parenReference_p(Test_Traj_B.deltaQuat_a,
    Test_Traj_B.deltaQuat_b, Test_Traj_B.deltaQuat_c, Test_Traj_B.deltaQuat_d,
    Test_Traj_B.idx, Test_Traj_B.izero_data_d, &Test_Traj_B.izero_size,
    Test_Traj_B.qi_c, &Test_Traj_B.obj_b_size, Test_Traj_B.qi_d,
    &Test_Traj_B.obj_c_size, Test_Traj_B.obj_d_data, &Test_Traj_B.obj_d_size);
  Test_Traj_B.b_k_p = Test_Traj_B.izero_size;
  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < Test_Traj_B.b_k_p;
       Test_Traj_B.b_j_i++) {
    Test_Traj_B.deltaQuat_a[Test_Traj_B.ii_data_e[Test_Traj_B.b_j_i] - 1] =
      -Test_Traj_B.izero_data_d[Test_Traj_B.b_j_i];
  }

  Test_Traj_B.b_j_i = 0;
  for (Test_Traj_B.b_k_p = 0; Test_Traj_B.b_k_p < 20; Test_Traj_B.b_k_p++) {
    if (Test_Traj_B.idx[Test_Traj_B.b_k_p]) {
      Test_Traj_B.c_data_j[Test_Traj_B.b_j_i] = static_cast<int8_T>
        (Test_Traj_B.b_k_p + 1);
      Test_Traj_B.b_j_i++;
    }
  }

  Test_Traj_B.b_k_p = Test_Traj_B.obj_b_size;
  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < Test_Traj_B.b_k_p;
       Test_Traj_B.b_j_i++) {
    Test_Traj_B.deltaQuat_b[Test_Traj_B.c_data_j[Test_Traj_B.b_j_i] - 1] =
      -Test_Traj_B.qi_c[Test_Traj_B.b_j_i];
  }

  Test_Traj_B.b_j_i = 0;
  for (Test_Traj_B.b_k_p = 0; Test_Traj_B.b_k_p < 20; Test_Traj_B.b_k_p++) {
    if (Test_Traj_B.idx[Test_Traj_B.b_k_p]) {
      Test_Traj_B.d_data_k[Test_Traj_B.b_j_i] = static_cast<int8_T>
        (Test_Traj_B.b_k_p + 1);
      Test_Traj_B.b_j_i++;
    }
  }

  Test_Traj_B.b_k_p = Test_Traj_B.obj_c_size;
  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < Test_Traj_B.b_k_p;
       Test_Traj_B.b_j_i++) {
    Test_Traj_B.deltaQuat_c[Test_Traj_B.d_data_k[Test_Traj_B.b_j_i] - 1] =
      -Test_Traj_B.qi_d[Test_Traj_B.b_j_i];
  }

  Test_Traj_B.b_j_i = 0;
  for (Test_Traj_B.b_k_p = 0; Test_Traj_B.b_k_p < 20; Test_Traj_B.b_k_p++) {
    if (Test_Traj_B.idx[Test_Traj_B.b_k_p]) {
      Test_Traj_B.e_data_h[Test_Traj_B.b_j_i] = static_cast<int8_T>
        (Test_Traj_B.b_k_p + 1);
      Test_Traj_B.b_j_i++;
    }
  }

  Test_Traj_B.b_k_p = Test_Traj_B.obj_d_size;
  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < Test_Traj_B.b_k_p;
       Test_Traj_B.b_j_i++) {
    Test_Traj_B.deltaQuat_d[Test_Traj_B.e_data_h[Test_Traj_B.b_j_i] - 1] =
      -Test_Traj_B.obj_d_data[Test_Traj_B.b_j_i];
  }

  Test_Traj_quaternionBase_rotvec(Test_Traj_B.deltaQuat_a,
    Test_Traj_B.deltaQuat_b, Test_Traj_B.deltaQuat_c, Test_Traj_B.deltaQuat_d,
    Test_Traj_B.rv);
  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < 20; Test_Traj_B.b_j_i++) {
    dtheta[Test_Traj_B.b_j_i] = 0.0;
    Test_Traj_B.scale_n = 3.3121686421112381E-170;
    Test_Traj_B.absxk_p = fabs(Test_Traj_B.rv[Test_Traj_B.b_j_i]);
    if (Test_Traj_B.absxk_p > 3.3121686421112381E-170) {
      Test_Traj_B.yv = 1.0;
      Test_Traj_B.scale_n = Test_Traj_B.absxk_p;
    } else {
      Test_Traj_B.t_b = Test_Traj_B.absxk_p / 3.3121686421112381E-170;
      Test_Traj_B.yv = Test_Traj_B.t_b * Test_Traj_B.t_b;
    }

    Test_Traj_B.absxk_p = fabs(Test_Traj_B.rv[Test_Traj_B.b_j_i + 20]);
    if (Test_Traj_B.absxk_p > Test_Traj_B.scale_n) {
      Test_Traj_B.t_b = Test_Traj_B.scale_n / Test_Traj_B.absxk_p;
      Test_Traj_B.yv = Test_Traj_B.yv * Test_Traj_B.t_b * Test_Traj_B.t_b + 1.0;
      Test_Traj_B.scale_n = Test_Traj_B.absxk_p;
    } else {
      Test_Traj_B.t_b = Test_Traj_B.absxk_p / Test_Traj_B.scale_n;
      Test_Traj_B.yv += Test_Traj_B.t_b * Test_Traj_B.t_b;
    }

    Test_Traj_B.absxk_p = fabs(Test_Traj_B.rv[Test_Traj_B.b_j_i + 40]);
    if (Test_Traj_B.absxk_p > Test_Traj_B.scale_n) {
      Test_Traj_B.t_b = Test_Traj_B.scale_n / Test_Traj_B.absxk_p;
      Test_Traj_B.yv = Test_Traj_B.yv * Test_Traj_B.t_b * Test_Traj_B.t_b + 1.0;
      Test_Traj_B.scale_n = Test_Traj_B.absxk_p;
    } else {
      Test_Traj_B.t_b = Test_Traj_B.absxk_p / Test_Traj_B.scale_n;
      Test_Traj_B.yv += Test_Traj_B.t_b * Test_Traj_B.t_b;
    }

    dtheta[Test_Traj_B.b_j_i] = Test_Traj_B.scale_n * sqrt(Test_Traj_B.yv);
  }

  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < 3; Test_Traj_B.b_j_i++) {
    for (Test_Traj_B.b_k_p = 0; Test_Traj_B.b_k_p < 20; Test_Traj_B.b_k_p++) {
      Test_Traj_B.e_tmp_g = 20 * Test_Traj_B.b_j_i + Test_Traj_B.b_k_p;
      e[Test_Traj_B.e_tmp_g] = Test_Traj_B.rv[Test_Traj_B.e_tmp_g] /
        dtheta[Test_Traj_B.b_k_p];
    }
  }

  Test_Traj_B.b_k_p = 0;
  Test_Traj_B.b_j_i = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_j_i - 1 < 20)) {
    if (dtheta[Test_Traj_B.b_j_i - 1] <= 0.0) {
      Test_Traj_B.b_k_p++;
      Test_Traj_B.ii_data_e[Test_Traj_B.b_k_p - 1] = Test_Traj_B.b_j_i;
      if (Test_Traj_B.b_k_p >= 20) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_j_i++;
      }
    } else {
      Test_Traj_B.b_j_i++;
    }
  }

  if (1 > Test_Traj_B.b_k_p) {
    Test_Traj_B.b_k_p = 0;
  }

  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < Test_Traj_B.b_k_p;
       Test_Traj_B.b_j_i++) {
    Test_Traj_B.izero_data_d[Test_Traj_B.b_j_i] =
      Test_Traj_B.ii_data_e[Test_Traj_B.b_j_i];
  }

  for (Test_Traj_B.b_j_i = 0; Test_Traj_B.b_j_i < 3; Test_Traj_B.b_j_i++) {
    for (Test_Traj_B.e_tmp_g = 0; Test_Traj_B.e_tmp_g < Test_Traj_B.b_k_p;
         Test_Traj_B.e_tmp_g++) {
      e[(static_cast<int32_T>(Test_Traj_B.izero_data_d[Test_Traj_B.e_tmp_g]) +
         20 * Test_Traj_B.b_j_i) - 1] = 0.0;
    }
  }
}

static void Test_Traj_bd(const real_T e[3], real_T dtheta, const real_T xin[3],
  real_T xout[3])
{
  int32_T b_k;
  real_T temp2_idx_0;
  if (dtheta > 1.0E-6) {
    Test_Traj_B.b1_l = sin(dtheta) / dtheta;
    Test_Traj_B.b2_j = (cos(dtheta) - 1.0) / dtheta;
    Test_Traj_B.b0_m = 0.0;
    for (b_k = 0; b_k < 3; b_k++) {
      Test_Traj_B.b0_m += xin[b_k] * e[b_k];
    }

    temp2_idx_0 = e[1] * xin[2] - e[2] * xin[1];
    Test_Traj_B.temp2_idx_1_i = e[2] * xin[0] - e[0] * xin[2];
    Test_Traj_B.temp2_idx_2_j = e[0] * xin[1] - e[1] * xin[0];
    xout[0] = ((Test_Traj_B.temp2_idx_1_i * e[2] - Test_Traj_B.temp2_idx_2_j *
                e[1]) * Test_Traj_B.b1_l + Test_Traj_B.b0_m * e[0]) +
      Test_Traj_B.b2_j * temp2_idx_0;
    xout[1] = ((Test_Traj_B.temp2_idx_2_j * e[0] - temp2_idx_0 * e[2]) *
               Test_Traj_B.b1_l + Test_Traj_B.b0_m * e[1]) + Test_Traj_B.b2_j *
      Test_Traj_B.temp2_idx_1_i;
    xout[2] = ((temp2_idx_0 * e[1] - Test_Traj_B.temp2_idx_1_i * e[0]) *
               Test_Traj_B.b1_l + Test_Traj_B.b0_m * e[2]) + Test_Traj_B.b2_j *
      Test_Traj_B.temp2_idx_2_j;
  } else {
    xout[0] = xin[0];
    xout[1] = xin[1];
    xout[2] = xin[2];
  }
}

static void Test_Traj_bd_p(const real_T e[3], real_T dtheta, const real_T xin[3],
  real_T xout[3])
{
  int32_T b_k;
  real_T temp2_idx_0;
  if (dtheta > 1.0E-6) {
    Test_Traj_B.b1 = 0.5 * dtheta * sin(dtheta) / (1.0 - cos(dtheta));
    Test_Traj_B.b2 = 0.5 * dtheta;
    Test_Traj_B.b0 = 0.0;
    for (b_k = 0; b_k < 3; b_k++) {
      Test_Traj_B.b0 += xin[b_k] * e[b_k];
    }

    temp2_idx_0 = e[1] * xin[2] - e[2] * xin[1];
    Test_Traj_B.temp2_idx_1_m = e[2] * xin[0] - e[0] * xin[2];
    Test_Traj_B.temp2_idx_2_m = e[0] * xin[1] - e[1] * xin[0];
    xout[0] = ((Test_Traj_B.temp2_idx_1_m * e[2] - Test_Traj_B.temp2_idx_2_m *
                e[1]) * Test_Traj_B.b1 + Test_Traj_B.b0 * e[0]) + Test_Traj_B.b2
      * temp2_idx_0;
    xout[1] = ((Test_Traj_B.temp2_idx_2_m * e[0] - temp2_idx_0 * e[2]) *
               Test_Traj_B.b1 + Test_Traj_B.b0 * e[1]) + Test_Traj_B.b2 *
      Test_Traj_B.temp2_idx_1_m;
    xout[2] = ((temp2_idx_0 * e[1] - Test_Traj_B.temp2_idx_1_m * e[0]) *
               Test_Traj_B.b1 + Test_Traj_B.b0 * e[2]) + Test_Traj_B.b2 *
      Test_Traj_B.temp2_idx_2_m;
  } else {
    xout[0] = xin[0];
    xout[1] = xin[1];
    xout[2] = xin[2];
  }
}

static real_T Test_Traj_xnrm2_phmyu(int32_T n, const real_T x[57], int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      Test_Traj_B.scale_i = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (k = ix0; k < kend; k++) {
        Test_Traj_B.absxk_kq = fabs(x[k - 1]);
        if (Test_Traj_B.absxk_kq > Test_Traj_B.scale_i) {
          Test_Traj_B.t_a = Test_Traj_B.scale_i / Test_Traj_B.absxk_kq;
          y = y * Test_Traj_B.t_a * Test_Traj_B.t_a + 1.0;
          Test_Traj_B.scale_i = Test_Traj_B.absxk_kq;
        } else {
          Test_Traj_B.t_a = Test_Traj_B.absxk_kq / Test_Traj_B.scale_i;
          y += Test_Traj_B.t_a * Test_Traj_B.t_a;
        }
      }

      y = Test_Traj_B.scale_i * sqrt(y);
    }
  }

  return y;
}

static real_T Test_Traj_xdotc(int32_T n, const real_T x[57], int32_T ix0, const
  real_T y[57], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  if (n >= 1) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      d += x[ix] * y[iy];
      ix++;
      iy++;
    }
  }

  return d;
}

static void Test_Traj_xaxpy(int32_T n, real_T a, int32_T ix0, const real_T y[57],
  int32_T iy0, real_T b_y[57])
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  memcpy(&b_y[0], &y[0], 57U * sizeof(real_T));
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      b_y[iy] += b_y[ix - 1] * a;
      ix++;
      iy++;
    }
  }
}

static real_T Test_Traj_xnrm2_phmyul(int32_T n, const real_T x[3], int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      Test_Traj_B.scale_du = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (k = ix0; k < kend; k++) {
        Test_Traj_B.absxk_b = fabs(x[k - 1]);
        if (Test_Traj_B.absxk_b > Test_Traj_B.scale_du) {
          Test_Traj_B.t_d = Test_Traj_B.scale_du / Test_Traj_B.absxk_b;
          y = y * Test_Traj_B.t_d * Test_Traj_B.t_d + 1.0;
          Test_Traj_B.scale_du = Test_Traj_B.absxk_b;
        } else {
          Test_Traj_B.t_d = Test_Traj_B.absxk_b / Test_Traj_B.scale_du;
          y += Test_Traj_B.t_d * Test_Traj_B.t_d;
        }
      }

      y = Test_Traj_B.scale_du * sqrt(y);
    }
  }

  return y;
}

static void Test_Traj_xrotg(real_T a, real_T b, real_T *b_a, real_T *b_b, real_T
  *c, real_T *s)
{
  Test_Traj_B.roe = b;
  Test_Traj_B.absa = fabs(a);
  Test_Traj_B.absb = fabs(b);
  if (Test_Traj_B.absa > Test_Traj_B.absb) {
    Test_Traj_B.roe = a;
  }

  Test_Traj_B.scale_c = Test_Traj_B.absa + Test_Traj_B.absb;
  if (Test_Traj_B.scale_c == 0.0) {
    *s = 0.0;
    *c = 1.0;
    *b_a = 0.0;
    *b_b = 0.0;
  } else {
    Test_Traj_B.ads = Test_Traj_B.absa / Test_Traj_B.scale_c;
    Test_Traj_B.bds = Test_Traj_B.absb / Test_Traj_B.scale_c;
    *b_a = sqrt(Test_Traj_B.ads * Test_Traj_B.ads + Test_Traj_B.bds *
                Test_Traj_B.bds) * Test_Traj_B.scale_c;
    if (Test_Traj_B.roe < 0.0) {
      *b_a = -*b_a;
    }

    *c = a / *b_a;
    *s = b / *b_a;
    if (Test_Traj_B.absa > Test_Traj_B.absb) {
      *b_b = *s;
    } else if (*c != 0.0) {
      *b_b = 1.0 / *c;
    } else {
      *b_b = 1.0;
    }
  }
}

static void Test_Traj_svd(const real_T A[57], real_T U[3])
{
  boolean_T apply_transform;
  int32_T ix;
  boolean_T exitg1;
  memcpy(&Test_Traj_B.A_o[0], &A[0], 57U * sizeof(real_T));
  Test_Traj_B.s_g[0] = 0.0;
  Test_Traj_B.e_e[0] = 0.0;
  Test_Traj_B.s_g[1] = 0.0;
  Test_Traj_B.e_e[1] = 0.0;
  Test_Traj_B.s_g[2] = 0.0;
  Test_Traj_B.e_e[2] = 0.0;
  memset(&Test_Traj_B.work_h[0], 0, 19U * sizeof(real_T));
  for (Test_Traj_B.m_a = 0; Test_Traj_B.m_a < 3; Test_Traj_B.m_a++) {
    ix = Test_Traj_B.m_a + 1;
    Test_Traj_B.qp1 = ix + 1;
    Test_Traj_B.qq = (ix - 1) * 19 + ix;
    apply_transform = false;
    Test_Traj_B.nrm = Test_Traj_xnrm2_phmyu(20 - ix, Test_Traj_B.A_o,
      Test_Traj_B.qq);
    if (Test_Traj_B.nrm > 0.0) {
      apply_transform = true;
      if (Test_Traj_B.A_o[Test_Traj_B.qq - 1] < 0.0) {
        Test_Traj_B.s_g[ix - 1] = -Test_Traj_B.nrm;
      } else {
        Test_Traj_B.s_g[ix - 1] = Test_Traj_B.nrm;
      }

      Test_Traj_B.nrm = Test_Traj_B.s_g[ix - 1];
      if (fabs(Test_Traj_B.nrm) >= 1.0020841800044864E-292) {
        Test_Traj_B.rt = 1.0 / Test_Traj_B.nrm;
        Test_Traj_B.qjj = Test_Traj_B.qq - ix;
        for (Test_Traj_B.qs = Test_Traj_B.qq; Test_Traj_B.qs <= Test_Traj_B.qjj
             + 19; Test_Traj_B.qs++) {
          Test_Traj_B.A_o[Test_Traj_B.qs - 1] *= Test_Traj_B.rt;
        }
      } else {
        Test_Traj_B.qjj = Test_Traj_B.qq - ix;
        for (Test_Traj_B.qs = Test_Traj_B.qq; Test_Traj_B.qs <= Test_Traj_B.qjj
             + 19; Test_Traj_B.qs++) {
          Test_Traj_B.A_o[Test_Traj_B.qs - 1] /= Test_Traj_B.nrm;
        }
      }

      Test_Traj_B.A_o[Test_Traj_B.qq - 1]++;
      Test_Traj_B.s_g[ix - 1] = -Test_Traj_B.nrm;
    } else {
      Test_Traj_B.s_g[ix - 1] = 0.0;
    }

    for (Test_Traj_B.qs = Test_Traj_B.qp1; Test_Traj_B.qs < 4; Test_Traj_B.qs++)
    {
      Test_Traj_B.qjj = (Test_Traj_B.qs - 1) * 19 + ix;
      if (apply_transform) {
        memcpy(&Test_Traj_B.A_k[0], &Test_Traj_B.A_o[0], 57U * sizeof(real_T));
        Test_Traj_xaxpy(20 - ix, -(Test_Traj_xdotc(20 - ix, Test_Traj_B.A_o,
          Test_Traj_B.qq, Test_Traj_B.A_o, Test_Traj_B.qjj) / Test_Traj_B.A_o
          [((ix - 1) * 19 + ix) - 1]), Test_Traj_B.qq, Test_Traj_B.A_k,
                        Test_Traj_B.qjj, Test_Traj_B.A_o);
      }

      Test_Traj_B.e_e[Test_Traj_B.qs - 1] = Test_Traj_B.A_o[Test_Traj_B.qjj - 1];
    }

    if (ix <= 1) {
      Test_Traj_B.nrm = Test_Traj_xnrm2_phmyul(2, Test_Traj_B.e_e, 2);
      if (Test_Traj_B.nrm == 0.0) {
        Test_Traj_B.e_e[0] = 0.0;
      } else {
        if (Test_Traj_B.e_e[1] < 0.0) {
          Test_Traj_B.e_e[0] = -Test_Traj_B.nrm;
        } else {
          Test_Traj_B.e_e[0] = Test_Traj_B.nrm;
        }

        Test_Traj_B.rt = Test_Traj_B.e_e[0];
        if (fabs(Test_Traj_B.e_e[0]) >= 1.0020841800044864E-292) {
          Test_Traj_B.rt = 1.0 / Test_Traj_B.e_e[0];
          for (Test_Traj_B.qs = Test_Traj_B.qp1; Test_Traj_B.qs < 4;
               Test_Traj_B.qs++) {
            Test_Traj_B.e_e[Test_Traj_B.qs - 1] *= Test_Traj_B.rt;
          }
        } else {
          for (Test_Traj_B.qs = Test_Traj_B.qp1; Test_Traj_B.qs < 4;
               Test_Traj_B.qs++) {
            Test_Traj_B.e_e[Test_Traj_B.qs - 1] /= Test_Traj_B.rt;
          }
        }

        Test_Traj_B.e_e[1]++;
        Test_Traj_B.e_e[0] = -Test_Traj_B.e_e[0];
        for (ix = Test_Traj_B.qp1; ix < 20; ix++) {
          Test_Traj_B.work_h[ix - 1] = 0.0;
        }

        for (Test_Traj_B.qjj = Test_Traj_B.qp1; Test_Traj_B.qjj < 4;
             Test_Traj_B.qjj++) {
          Test_Traj_B.nrm = Test_Traj_B.e_e[Test_Traj_B.qjj - 1];
          if (!(Test_Traj_B.nrm == 0.0)) {
            ix = (Test_Traj_B.qjj - 1) * 19 + 1;
            Test_Traj_B.qq = 1;
            for (Test_Traj_B.qs = 0; Test_Traj_B.qs < 18; Test_Traj_B.qs++) {
              Test_Traj_B.work_h[Test_Traj_B.qq] += Test_Traj_B.nrm *
                Test_Traj_B.A_o[ix];
              ix++;
              Test_Traj_B.qq++;
            }
          }
        }

        for (Test_Traj_B.qjj = Test_Traj_B.qp1; Test_Traj_B.qjj < 4;
             Test_Traj_B.qjj++) {
          Test_Traj_B.nrm = -Test_Traj_B.e_e[Test_Traj_B.qjj - 1] /
            Test_Traj_B.e_e[1];
          if (!(Test_Traj_B.nrm == 0.0)) {
            ix = 1;
            Test_Traj_B.qq = (Test_Traj_B.qjj - 1) * 19 + 1;
            for (Test_Traj_B.qs = 0; Test_Traj_B.qs < 18; Test_Traj_B.qs++) {
              Test_Traj_B.A_o[Test_Traj_B.qq] += Test_Traj_B.nrm *
                Test_Traj_B.work_h[ix];
              ix++;
              Test_Traj_B.qq++;
            }
          }
        }
      }
    }
  }

  Test_Traj_B.m_a = 1;
  Test_Traj_B.e_e[1] = Test_Traj_B.A_o[39];
  Test_Traj_B.e_e[2] = 0.0;
  if (Test_Traj_B.s_g[0] != 0.0) {
    Test_Traj_B.rt = fabs(Test_Traj_B.s_g[0]);
    Test_Traj_B.nrm = Test_Traj_B.s_g[0] / Test_Traj_B.rt;
    Test_Traj_B.s_g[0] = Test_Traj_B.rt;
    Test_Traj_B.e_e[0] /= Test_Traj_B.nrm;
  }

  if (Test_Traj_B.e_e[0] != 0.0) {
    Test_Traj_B.rt = fabs(Test_Traj_B.e_e[0]);
    Test_Traj_B.nrm = Test_Traj_B.rt / Test_Traj_B.e_e[0];
    Test_Traj_B.e_e[0] = Test_Traj_B.rt;
    Test_Traj_B.s_g[1] *= Test_Traj_B.nrm;
  }

  if (Test_Traj_B.s_g[1] != 0.0) {
    Test_Traj_B.rt = fabs(Test_Traj_B.s_g[1]);
    Test_Traj_B.nrm = Test_Traj_B.s_g[1] / Test_Traj_B.rt;
    Test_Traj_B.s_g[1] = Test_Traj_B.rt;
    Test_Traj_B.e_e[1] = Test_Traj_B.A_o[39] / Test_Traj_B.nrm;
  }

  if (Test_Traj_B.e_e[1] != 0.0) {
    Test_Traj_B.rt = fabs(Test_Traj_B.e_e[1]);
    Test_Traj_B.nrm = Test_Traj_B.rt / Test_Traj_B.e_e[1];
    Test_Traj_B.e_e[1] = Test_Traj_B.rt;
    Test_Traj_B.s_g[2] *= Test_Traj_B.nrm;
  }

  if (Test_Traj_B.s_g[2] != 0.0) {
    Test_Traj_B.s_g[2] = fabs(Test_Traj_B.s_g[2]);
  }

  Test_Traj_B.qp1 = 0;
  if ((Test_Traj_B.s_g[0] > Test_Traj_B.e_e[0]) || rtIsNaN(Test_Traj_B.e_e[0]))
  {
    Test_Traj_B.nrm = Test_Traj_B.s_g[0];
  } else {
    Test_Traj_B.nrm = Test_Traj_B.e_e[0];
  }

  if ((Test_Traj_B.s_g[1] > Test_Traj_B.e_e[1]) || rtIsNaN(Test_Traj_B.e_e[1]))
  {
    Test_Traj_B.rt = Test_Traj_B.s_g[1];
  } else {
    Test_Traj_B.rt = Test_Traj_B.e_e[1];
  }

  if ((!(Test_Traj_B.nrm > Test_Traj_B.rt)) && (!rtIsNaN(Test_Traj_B.rt))) {
    Test_Traj_B.nrm = Test_Traj_B.rt;
  }

  if (Test_Traj_B.s_g[2] > 0.0) {
    Test_Traj_B.rt = Test_Traj_B.s_g[2];
  } else {
    Test_Traj_B.rt = 0.0;
  }

  if ((!(Test_Traj_B.nrm > Test_Traj_B.rt)) && (!rtIsNaN(Test_Traj_B.rt))) {
    Test_Traj_B.nrm = Test_Traj_B.rt;
  }

  while ((Test_Traj_B.m_a + 2 > 0) && (!(Test_Traj_B.qp1 >= 75))) {
    ix = Test_Traj_B.m_a + 1;
    Test_Traj_B.qs = Test_Traj_B.m_a;
    exitg1 = false;
    while ((!exitg1) && (Test_Traj_B.qs + 1 > -1)) {
      ix = Test_Traj_B.qs + 1;
      if (Test_Traj_B.qs + 1 == 0) {
        exitg1 = true;
      } else {
        Test_Traj_B.rt = fabs(Test_Traj_B.e_e[Test_Traj_B.qs]);
        if ((Test_Traj_B.rt <= (fabs(Test_Traj_B.s_g[Test_Traj_B.qs + 1]) + fabs
                                (Test_Traj_B.s_g[Test_Traj_B.qs])) *
             2.2204460492503131E-16) || (Test_Traj_B.rt <=
             1.0020841800044864E-292) || ((Test_Traj_B.qp1 > 20) &&
             (Test_Traj_B.rt <= 2.2204460492503131E-16 * Test_Traj_B.nrm))) {
          Test_Traj_B.e_e[Test_Traj_B.qs] = 0.0;
          exitg1 = true;
        } else {
          Test_Traj_B.qs--;
        }
      }
    }

    if (Test_Traj_B.m_a + 1 == ix) {
      Test_Traj_B.qq = 4;
    } else {
      Test_Traj_B.qs = Test_Traj_B.m_a + 2;
      Test_Traj_B.qq = Test_Traj_B.m_a + 2;
      exitg1 = false;
      while ((!exitg1) && (Test_Traj_B.qq >= ix)) {
        Test_Traj_B.qs = Test_Traj_B.qq;
        if (Test_Traj_B.qq == ix) {
          exitg1 = true;
        } else {
          Test_Traj_B.rt = 0.0;
          if (Test_Traj_B.qq < Test_Traj_B.m_a + 2) {
            Test_Traj_B.rt = fabs(Test_Traj_B.e_e[Test_Traj_B.qq - 1]);
          }

          if (Test_Traj_B.qq > ix + 1) {
            Test_Traj_B.rt += fabs(Test_Traj_B.e_e[Test_Traj_B.qq - 2]);
          }

          Test_Traj_B.ztest = fabs(Test_Traj_B.s_g[Test_Traj_B.qq - 1]);
          if ((Test_Traj_B.ztest <= 2.2204460492503131E-16 * Test_Traj_B.rt) ||
              (Test_Traj_B.ztest <= 1.0020841800044864E-292)) {
            Test_Traj_B.s_g[Test_Traj_B.qq - 1] = 0.0;
            exitg1 = true;
          } else {
            Test_Traj_B.qq--;
          }
        }
      }

      if (Test_Traj_B.qs == ix) {
        Test_Traj_B.qq = 3;
      } else if (Test_Traj_B.m_a + 2 == Test_Traj_B.qs) {
        Test_Traj_B.qq = 1;
      } else {
        Test_Traj_B.qq = 2;
        ix = Test_Traj_B.qs;
      }
    }

    switch (Test_Traj_B.qq) {
     case 1:
      Test_Traj_B.rt = Test_Traj_B.e_e[Test_Traj_B.m_a];
      Test_Traj_B.e_e[Test_Traj_B.m_a] = 0.0;
      for (Test_Traj_B.qs = Test_Traj_B.m_a + 1; Test_Traj_B.qs >= ix + 1;
           Test_Traj_B.qs--) {
        Test_Traj_xrotg(Test_Traj_B.s_g[Test_Traj_B.qs - 1], Test_Traj_B.rt,
                        &Test_Traj_B.s_g[Test_Traj_B.qs - 1], &Test_Traj_B.rt,
                        &Test_Traj_B.sqds, &Test_Traj_B.smm1);
        if (Test_Traj_B.qs > ix + 1) {
          Test_Traj_B.ztest = Test_Traj_B.e_e[Test_Traj_B.qs - 2];
          Test_Traj_B.rt = Test_Traj_B.ztest * -Test_Traj_B.smm1;
          Test_Traj_B.e_e[Test_Traj_B.qs - 2] = Test_Traj_B.ztest *
            Test_Traj_B.sqds;
        }
      }
      break;

     case 2:
      Test_Traj_B.rt = Test_Traj_B.e_e[ix - 1];
      Test_Traj_B.e_e[ix - 1] = 0.0;
      for (Test_Traj_B.qs = ix + 1; Test_Traj_B.qs <= Test_Traj_B.m_a + 2;
           Test_Traj_B.qs++) {
        Test_Traj_xrotg(Test_Traj_B.s_g[Test_Traj_B.qs - 1], Test_Traj_B.rt,
                        &Test_Traj_B.s_g[Test_Traj_B.qs - 1], &Test_Traj_B.ztest,
                        &Test_Traj_B.sqds, &Test_Traj_B.smm1);
        Test_Traj_B.ztest = Test_Traj_B.e_e[Test_Traj_B.qs - 1];
        Test_Traj_B.rt = Test_Traj_B.ztest * -Test_Traj_B.smm1;
        Test_Traj_B.e_e[Test_Traj_B.qs - 1] = Test_Traj_B.ztest *
          Test_Traj_B.sqds;
      }
      break;

     case 3:
      Test_Traj_B.rt = Test_Traj_B.s_g[Test_Traj_B.m_a + 1];
      Test_Traj_B.ztest = fabs(Test_Traj_B.rt);
      Test_Traj_B.sqds = fabs(Test_Traj_B.s_g[Test_Traj_B.m_a]);
      if ((Test_Traj_B.ztest > Test_Traj_B.sqds) || rtIsNaN(Test_Traj_B.sqds)) {
        Test_Traj_B.sqds = Test_Traj_B.ztest;
      }

      Test_Traj_B.ztest = fabs(Test_Traj_B.e_e[Test_Traj_B.m_a]);
      if ((Test_Traj_B.sqds > Test_Traj_B.ztest) || rtIsNaN(Test_Traj_B.ztest))
      {
        Test_Traj_B.ztest = Test_Traj_B.sqds;
      }

      Test_Traj_B.sqds = fabs(Test_Traj_B.s_g[ix]);
      if ((Test_Traj_B.ztest > Test_Traj_B.sqds) || rtIsNaN(Test_Traj_B.sqds)) {
        Test_Traj_B.sqds = Test_Traj_B.ztest;
      }

      Test_Traj_B.ztest = fabs(Test_Traj_B.e_e[ix]);
      if ((Test_Traj_B.sqds > Test_Traj_B.ztest) || rtIsNaN(Test_Traj_B.ztest))
      {
        Test_Traj_B.ztest = Test_Traj_B.sqds;
      }

      Test_Traj_B.rt /= Test_Traj_B.ztest;
      Test_Traj_B.smm1 = Test_Traj_B.s_g[Test_Traj_B.m_a] / Test_Traj_B.ztest;
      Test_Traj_B.emm1 = Test_Traj_B.e_e[Test_Traj_B.m_a] / Test_Traj_B.ztest;
      Test_Traj_B.sqds = Test_Traj_B.s_g[ix] / Test_Traj_B.ztest;
      Test_Traj_B.smm1 = ((Test_Traj_B.smm1 + Test_Traj_B.rt) *
                          (Test_Traj_B.smm1 - Test_Traj_B.rt) + Test_Traj_B.emm1
                          * Test_Traj_B.emm1) / 2.0;
      Test_Traj_B.emm1 *= Test_Traj_B.rt;
      Test_Traj_B.emm1 *= Test_Traj_B.emm1;
      if ((Test_Traj_B.smm1 != 0.0) || (Test_Traj_B.emm1 != 0.0)) {
        Test_Traj_B.shift = sqrt(Test_Traj_B.smm1 * Test_Traj_B.smm1 +
          Test_Traj_B.emm1);
        if (Test_Traj_B.smm1 < 0.0) {
          Test_Traj_B.shift = -Test_Traj_B.shift;
        }

        Test_Traj_B.shift = Test_Traj_B.emm1 / (Test_Traj_B.smm1 +
          Test_Traj_B.shift);
      } else {
        Test_Traj_B.shift = 0.0;
      }

      Test_Traj_B.rt = (Test_Traj_B.sqds + Test_Traj_B.rt) * (Test_Traj_B.sqds -
        Test_Traj_B.rt) + Test_Traj_B.shift;
      Test_Traj_B.sqds *= Test_Traj_B.e_e[ix] / Test_Traj_B.ztest;
      for (Test_Traj_B.qs = ix + 1; Test_Traj_B.qs <= Test_Traj_B.m_a + 1;
           Test_Traj_B.qs++) {
        Test_Traj_xrotg(Test_Traj_B.rt, Test_Traj_B.sqds, &Test_Traj_B.ztest,
                        &Test_Traj_B.shift, &Test_Traj_B.smm1, &Test_Traj_B.emm1);
        if (Test_Traj_B.qs > ix + 1) {
          Test_Traj_B.e_e[Test_Traj_B.qs - 2] = Test_Traj_B.ztest;
        }

        Test_Traj_B.ztest = Test_Traj_B.e_e[Test_Traj_B.qs - 1];
        Test_Traj_B.rt = Test_Traj_B.s_g[Test_Traj_B.qs - 1];
        Test_Traj_B.e_e[Test_Traj_B.qs - 1] = Test_Traj_B.ztest *
          Test_Traj_B.smm1 - Test_Traj_B.rt * Test_Traj_B.emm1;
        Test_Traj_B.sqds = Test_Traj_B.emm1 * Test_Traj_B.s_g[Test_Traj_B.qs];
        Test_Traj_B.s_g[Test_Traj_B.qs] *= Test_Traj_B.smm1;
        Test_Traj_xrotg(Test_Traj_B.rt * Test_Traj_B.smm1 + Test_Traj_B.ztest *
                        Test_Traj_B.emm1, Test_Traj_B.sqds,
                        &Test_Traj_B.s_g[Test_Traj_B.qs - 1],
                        &Test_Traj_B.unusedU2, &Test_Traj_B.shift,
                        &Test_Traj_B.d_sn);
        Test_Traj_B.rt = Test_Traj_B.e_e[Test_Traj_B.qs - 1] * Test_Traj_B.shift
          + Test_Traj_B.d_sn * Test_Traj_B.s_g[Test_Traj_B.qs];
        Test_Traj_B.s_g[Test_Traj_B.qs] = Test_Traj_B.e_e[Test_Traj_B.qs - 1] *
          -Test_Traj_B.d_sn + Test_Traj_B.shift * Test_Traj_B.s_g[Test_Traj_B.qs];
        Test_Traj_B.sqds = Test_Traj_B.d_sn * Test_Traj_B.e_e[Test_Traj_B.qs];
        Test_Traj_B.e_e[Test_Traj_B.qs] *= Test_Traj_B.shift;
      }

      Test_Traj_B.e_e[Test_Traj_B.m_a] = Test_Traj_B.rt;
      Test_Traj_B.qp1++;
      break;

     default:
      if (Test_Traj_B.s_g[ix] < 0.0) {
        Test_Traj_B.s_g[ix] = -Test_Traj_B.s_g[ix];
      }

      Test_Traj_B.qp1 = ix + 1;
      while ((ix + 1 < 3) && (Test_Traj_B.s_g[ix] <
                              Test_Traj_B.s_g[Test_Traj_B.qp1])) {
        Test_Traj_B.rt = Test_Traj_B.s_g[ix];
        Test_Traj_B.s_g[ix] = Test_Traj_B.s_g[Test_Traj_B.qp1];
        Test_Traj_B.s_g[Test_Traj_B.qp1] = Test_Traj_B.rt;
        ix = Test_Traj_B.qp1;
        Test_Traj_B.qp1++;
      }

      Test_Traj_B.qp1 = 0;
      Test_Traj_B.m_a--;
      break;
    }
  }

  U[0] = Test_Traj_B.s_g[0];
  U[1] = Test_Traj_B.s_g[1];
  U[2] = Test_Traj_B.s_g[2];
}

static void Test_Traj_quaternionC2fit(const real_T y_a[21], const real_T y_b[21],
  const real_T y_c[21], const real_T y_d[21], const real_T x[21], real_T h[20],
  real_T dtheta[20], real_T e[60], real_T w[63])
{
  boolean_T flag;
  Test_Traj_B.ixLead = 1;
  Test_Traj_B.iyLead = 0;
  Test_Traj_B.work_d = x[0];
  for (Test_Traj_B.m_d = 0; Test_Traj_B.m_d < 20; Test_Traj_B.m_d++) {
    Test_Traj_B.tmp2 = Test_Traj_B.work_d;
    Test_Traj_B.work_d = x[Test_Traj_B.ixLead];
    h[Test_Traj_B.iyLead] = x[Test_Traj_B.ixLead] - Test_Traj_B.tmp2;
    Test_Traj_B.ixLead++;
    Test_Traj_B.iyLead++;
    Test_Traj_B.dv8[Test_Traj_B.m_d] = static_cast<real_T>(Test_Traj_B.m_d) +
      1.0;
  }

  Tes_quaternioncg_parenReference(y_a, y_b, y_c, y_d, Test_Traj_B.dv8,
    Test_Traj_B.assign_temp_a_m, Test_Traj_B.assign_temp_b_n,
    Test_Traj_B.assign_temp_c_g, Test_Traj_B.assign_temp_d);
  Test_Traj_getang(Test_Traj_B.assign_temp_a_m, Test_Traj_B.assign_temp_b_n,
                   Test_Traj_B.assign_temp_c_g, Test_Traj_B.assign_temp_d, &y_a
                   [1], &y_b[1], &y_c[1], &y_d[1], dtheta, e);
  Test_Traj_B.wi[0] = 0.0;
  Test_Traj_B.wf[0] = 0.0;
  Test_Traj_B.wi[1] = 0.0;
  Test_Traj_B.wf[1] = 0.0;
  Test_Traj_B.wi[2] = 0.0;
  Test_Traj_B.wf[2] = 0.0;
  Test_Traj_B.work_d = 0.0;
  flag = true;
  memset(&Test_Traj_B.a[0], 0, 21U * sizeof(real_T));
  memset(&Test_Traj_B.b[0], 0, 21U * sizeof(real_T));
  memset(&Test_Traj_B.c_h[0], 0, 21U * sizeof(real_T));
  memset(&w[0], 0, 63U * sizeof(real_T));
  memset(&Test_Traj_B.wprev[0], 0, 63U * sizeof(real_T));
  Test_Traj_B.b_e[0] = e[0];
  Test_Traj_B.b_e[1] = e[20];
  Test_Traj_B.b_e[2] = e[40];
  Test_Traj_B.b_e_p[0] = e[19];
  Test_Traj_B.b_e_p[1] = e[39];
  Test_Traj_B.b_e_p[2] = e[59];
  while (flag) {
    for (Test_Traj_B.ixLead = 0; Test_Traj_B.ixLead < 3; Test_Traj_B.ixLead++) {
      memcpy(&Test_Traj_B.wprev[Test_Traj_B.ixLead * 21 + 1],
             &w[Test_Traj_B.ixLead * 21 + 1], 19U * sizeof(real_T));
    }

    for (Test_Traj_B.iyLead = 0; Test_Traj_B.iyLead < 19; Test_Traj_B.iyLead++)
    {
      Test_Traj_B.a[Test_Traj_B.iyLead + 1] = 2.0 / h[Test_Traj_B.iyLead];
      Test_Traj_B.tmp2 = h[Test_Traj_B.iyLead + 1];
      Test_Traj_B.b[Test_Traj_B.iyLead + 1] = 4.0 / Test_Traj_B.tmp2 + 4.0 /
        h[Test_Traj_B.iyLead];
      Test_Traj_B.c_h[Test_Traj_B.iyLead + 1] = 2.0 / Test_Traj_B.tmp2;
      if (dtheta[Test_Traj_B.iyLead] > 1.0E-6) {
        Test_Traj_B.ca = cos(dtheta[Test_Traj_B.iyLead]);
        Test_Traj_B.sa = sin(dtheta[Test_Traj_B.iyLead]);
        Test_Traj_B.absx = e[Test_Traj_B.iyLead + 40];
        Test_Traj_B.temp2_idx_1 = Test_Traj_B.wprev[Test_Traj_B.iyLead + 43];
        Test_Traj_B.temp2_idx_2 = Test_Traj_B.wprev[Test_Traj_B.iyLead + 22];
        Test_Traj_B.temp2_idx_0_tmp = e[Test_Traj_B.iyLead + 20];
        Test_Traj_B.temp2_idx_0 = Test_Traj_B.temp2_idx_0_tmp *
          Test_Traj_B.temp2_idx_1 - Test_Traj_B.absx * Test_Traj_B.temp2_idx_2;
        Test_Traj_B.windote = Test_Traj_B.wprev[Test_Traj_B.iyLead + 1];
        Test_Traj_B.temp2_idx_1 = Test_Traj_B.absx * Test_Traj_B.windote -
          e[Test_Traj_B.iyLead] * Test_Traj_B.temp2_idx_1;
        Test_Traj_B.temp2_idx_2 = e[Test_Traj_B.iyLead] *
          Test_Traj_B.temp2_idx_2 - Test_Traj_B.temp2_idx_0_tmp *
          Test_Traj_B.windote;
        Test_Traj_B.windote = 0.0;
        Test_Traj_B.magsq = 0.0;
        for (Test_Traj_B.ixLead = 0; Test_Traj_B.ixLead < 3; Test_Traj_B.ixLead
             ++) {
          Test_Traj_B.m_d = (21 * Test_Traj_B.ixLead + Test_Traj_B.iyLead) + 1;
          Test_Traj_B.windote += Test_Traj_B.wprev[Test_Traj_B.m_d] *
            e[Test_Traj_B.iyLead + 20 * Test_Traj_B.ixLead];
          Test_Traj_B.magsq += Test_Traj_B.wprev[Test_Traj_B.m_d] *
            Test_Traj_B.wprev[Test_Traj_B.m_d];
        }

        Test_Traj_B.magsq = (Test_Traj_B.magsq - Test_Traj_B.windote *
                             Test_Traj_B.windote) * 0.5 *
          (dtheta[Test_Traj_B.iyLead] - Test_Traj_B.sa) / (1.0 - Test_Traj_B.ca);
        Test_Traj_B.ca = (dtheta[Test_Traj_B.iyLead] * Test_Traj_B.sa - (1.0 -
          Test_Traj_B.ca) * 2.0) * Test_Traj_B.windote / ((1.0 - Test_Traj_B.ca)
          * dtheta[Test_Traj_B.iyLead]);
        Test_Traj_B.ixLead = Test_Traj_B.iyLead + 1;
        Test_Traj_B.temp1[0] = (Test_Traj_B.absx * Test_Traj_B.temp2_idx_1 -
          Test_Traj_B.temp2_idx_0_tmp * Test_Traj_B.temp2_idx_2) *
          Test_Traj_B.ca + e[Test_Traj_B.ixLead - 1] * Test_Traj_B.magsq;
        Test_Traj_B.temp1[1] = (e[Test_Traj_B.iyLead] * Test_Traj_B.temp2_idx_2
          - Test_Traj_B.absx * Test_Traj_B.temp2_idx_0) * Test_Traj_B.ca +
          e[Test_Traj_B.ixLead + 19] * Test_Traj_B.magsq;
        Test_Traj_B.temp1[2] = (Test_Traj_B.temp2_idx_0_tmp *
          Test_Traj_B.temp2_idx_0 - e[Test_Traj_B.iyLead] *
          Test_Traj_B.temp2_idx_1) * Test_Traj_B.ca + e[Test_Traj_B.ixLead + 39]
          * Test_Traj_B.magsq;
      } else {
        Test_Traj_B.temp1[0] = 0.0;
        Test_Traj_B.temp1[1] = 0.0;
        Test_Traj_B.temp1[2] = 0.0;
      }

      Test_Traj_B.ixLead = Test_Traj_B.iyLead + 1;
      Test_Traj_B.absx = h[Test_Traj_B.iyLead] * h[Test_Traj_B.iyLead];
      Test_Traj_B.temp2_idx_0_tmp = dtheta[Test_Traj_B.iyLead + 1];
      Test_Traj_B.tmp2 *= Test_Traj_B.tmp2;
      w[Test_Traj_B.iyLead + 1] = (e[Test_Traj_B.ixLead - 1] *
        dtheta[Test_Traj_B.iyLead] / Test_Traj_B.absx + e[Test_Traj_B.iyLead + 1]
        * Test_Traj_B.temp2_idx_0_tmp / Test_Traj_B.tmp2) * 6.0 -
        Test_Traj_B.temp1[0];
      w[Test_Traj_B.iyLead + 22] = (e[Test_Traj_B.ixLead + 19] *
        dtheta[Test_Traj_B.iyLead] / Test_Traj_B.absx + e[Test_Traj_B.iyLead +
        21] * Test_Traj_B.temp2_idx_0_tmp / Test_Traj_B.tmp2) * 6.0 -
        Test_Traj_B.temp1[1];
      w[Test_Traj_B.iyLead + 43] = (e[Test_Traj_B.ixLead + 39] *
        dtheta[Test_Traj_B.iyLead] / Test_Traj_B.absx + e[Test_Traj_B.iyLead +
        41] * Test_Traj_B.temp2_idx_0_tmp / Test_Traj_B.tmp2) * 6.0 -
        Test_Traj_B.temp1[2];
    }

    Test_Traj_bd(Test_Traj_B.b_e, dtheta[0], Test_Traj_B.wi, Test_Traj_B.temp1);
    w[1] -= Test_Traj_B.a[1] * Test_Traj_B.temp1[0];
    w[22] -= Test_Traj_B.a[1] * Test_Traj_B.temp1[1];
    w[43] -= Test_Traj_B.a[1] * Test_Traj_B.temp1[2];
    Test_Traj_bd_p(Test_Traj_B.b_e_p, dtheta[19], Test_Traj_B.wf,
                   Test_Traj_B.temp1);
    w[19] -= Test_Traj_B.c_h[19] * Test_Traj_B.temp1[0];
    w[40] -= Test_Traj_B.c_h[19] * Test_Traj_B.temp1[1];
    w[61] -= Test_Traj_B.c_h[19] * Test_Traj_B.temp1[2];
    for (Test_Traj_B.m_d = 0; Test_Traj_B.m_d < 19; Test_Traj_B.m_d++) {
      Test_Traj_B.tmp2 = Test_Traj_B.a[Test_Traj_B.m_d + 2];
      Test_Traj_B.b[Test_Traj_B.m_d + 2] -= Test_Traj_B.c_h[Test_Traj_B.m_d + 1]
        * Test_Traj_B.tmp2 / Test_Traj_B.b[Test_Traj_B.m_d + 1];
      Test_Traj_B.b_e_o[0] = e[Test_Traj_B.m_d + 1];
      Test_Traj_B.w_m[0] = w[Test_Traj_B.m_d + 1];
      Test_Traj_B.b_e_o[1] = e[Test_Traj_B.m_d + 21];
      Test_Traj_B.w_m[1] = w[Test_Traj_B.m_d + 22];
      Test_Traj_B.b_e_o[2] = e[Test_Traj_B.m_d + 41];
      Test_Traj_B.w_m[2] = w[Test_Traj_B.m_d + 43];
      Test_Traj_bd(Test_Traj_B.b_e_o, dtheta[Test_Traj_B.m_d + 1],
                   Test_Traj_B.w_m, Test_Traj_B.temp1);
      Test_Traj_B.ixLead = Test_Traj_B.m_d + 3;
      Test_Traj_B.absx = Test_Traj_B.b[Test_Traj_B.m_d + 1];
      Test_Traj_B.iyLead = Test_Traj_B.m_d + 3;
      Test_Traj_B.temp2_idx_0_tmp = w[Test_Traj_B.ixLead + 20] -
        Test_Traj_B.temp1[1] * Test_Traj_B.tmp2 / Test_Traj_B.absx;
      Test_Traj_B.temp2_idx_0 = w[Test_Traj_B.ixLead + 41] - Test_Traj_B.temp1[2]
        * Test_Traj_B.tmp2 / Test_Traj_B.absx;
      w[Test_Traj_B.iyLead - 1] = w[Test_Traj_B.ixLead - 1] - Test_Traj_B.temp1
        [0] * Test_Traj_B.tmp2 / Test_Traj_B.absx;
      w[Test_Traj_B.iyLead + 20] = Test_Traj_B.temp2_idx_0_tmp;
      w[Test_Traj_B.iyLead + 41] = Test_Traj_B.temp2_idx_0;
    }

    w[19] /= Test_Traj_B.b[19];
    w[40] /= Test_Traj_B.b[19];
    w[61] /= Test_Traj_B.b[19];
    for (Test_Traj_B.m_d = 0; Test_Traj_B.m_d < 18; Test_Traj_B.m_d++) {
      Test_Traj_B.ixLead = 19 - Test_Traj_B.m_d;
      Test_Traj_B.iyLead = 20 - Test_Traj_B.m_d;
      Test_Traj_B.b_e_o[0] = e[Test_Traj_B.ixLead - 1];
      Test_Traj_B.w_m[0] = w[Test_Traj_B.iyLead - 1];
      Test_Traj_B.b_e_o[1] = e[Test_Traj_B.ixLead + 19];
      Test_Traj_B.w_m[1] = w[Test_Traj_B.iyLead + 20];
      Test_Traj_B.b_e_o[2] = e[Test_Traj_B.ixLead + 39];
      Test_Traj_B.w_m[2] = w[Test_Traj_B.iyLead + 41];
      Test_Traj_bd_p(Test_Traj_B.b_e_o, dtheta[18 - Test_Traj_B.m_d],
                     Test_Traj_B.w_m, Test_Traj_B.temp1);
      Test_Traj_B.ixLead = 19 - Test_Traj_B.m_d;
      Test_Traj_B.tmp2 = Test_Traj_B.c_h[18 - Test_Traj_B.m_d];
      Test_Traj_B.absx = Test_Traj_B.b[18 - Test_Traj_B.m_d];
      Test_Traj_B.iyLead = 19 - Test_Traj_B.m_d;
      Test_Traj_B.temp2_idx_0_tmp = (w[Test_Traj_B.ixLead + 20] -
        Test_Traj_B.tmp2 * Test_Traj_B.temp1[1]) / Test_Traj_B.absx;
      Test_Traj_B.temp2_idx_0 = (w[Test_Traj_B.ixLead + 41] - Test_Traj_B.tmp2 *
        Test_Traj_B.temp1[2]) / Test_Traj_B.absx;
      w[Test_Traj_B.iyLead - 1] = (w[Test_Traj_B.ixLead - 1] - Test_Traj_B.tmp2 *
        Test_Traj_B.temp1[0]) / Test_Traj_B.absx;
      w[Test_Traj_B.iyLead + 20] = Test_Traj_B.temp2_idx_0_tmp;
      w[Test_Traj_B.iyLead + 41] = Test_Traj_B.temp2_idx_0;
    }

    for (Test_Traj_B.ixLead = 0; Test_Traj_B.ixLead < 3; Test_Traj_B.ixLead++) {
      for (Test_Traj_B.iyLead = 0; Test_Traj_B.iyLead < 19; Test_Traj_B.iyLead++)
      {
        Test_Traj_B.x_ie[Test_Traj_B.iyLead + 19 * Test_Traj_B.ixLead] = w[(21 *
          Test_Traj_B.ixLead + Test_Traj_B.iyLead) + 1] - Test_Traj_B.wprev
          [((Test_Traj_B.iyLead + 2) + 21 * Test_Traj_B.ixLead) - 1];
      }
    }

    Test_Traj_B.tmp2 = 0.0;
    for (Test_Traj_B.ixLead = 0; Test_Traj_B.ixLead < 3; Test_Traj_B.ixLead++) {
      for (Test_Traj_B.iyLead = 0; Test_Traj_B.iyLead < 19; Test_Traj_B.iyLead++)
      {
        Test_Traj_B.absx = fabs(Test_Traj_B.x_ie[19 * Test_Traj_B.ixLead +
          Test_Traj_B.iyLead]);
        if (rtIsNaN(Test_Traj_B.absx) || (Test_Traj_B.absx > Test_Traj_B.tmp2))
        {
          Test_Traj_B.tmp2 = Test_Traj_B.absx;
        }
      }
    }

    if ((!rtIsInf(Test_Traj_B.tmp2)) && (!rtIsNaN(Test_Traj_B.tmp2))) {
      Test_Traj_svd(Test_Traj_B.x_ie, Test_Traj_B.temp1);
      Test_Traj_B.tmp2 = Test_Traj_B.temp1[0];
    }

    Test_Traj_B.work_d++;
    if ((Test_Traj_B.work_d < 10.0) && (Test_Traj_B.tmp2 > 1.0E-9)) {
    } else {
      flag = false;
    }
  }

  w[0] = 0.0;
  w[20] = 0.0;
  w[21] = 0.0;
  w[41] = 0.0;
  w[42] = 0.0;
  w[62] = 0.0;
}

static int32_T Test_Traj_bsearch(const real_T x[21], real_T xi)
{
  int32_T n;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  n = 1;
  low_ip1 = 1;
  high_i = 21;
  while (high_i > low_ip1 + 1) {
    mid_i = (n + high_i) >> 1;
    if (xi >= x[mid_i - 1]) {
      n = mid_i;
      low_ip1 = mid_i;
    } else {
      high_i = mid_i;
    }
  }

  return n;
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (!(fabs(u1_0 - floor(u1_0 + 0.5)) > DBL_EPSILON * u1_0)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

static void waypointTrajectory_setupWaypoin(waypointTrajectory_Test_Traj_T *obj)
{
  int8_T n;
  char_T b[3];
  b[0] = 'N';
  b[1] = 'E';
  b[2] = 'D';
  Test_Traj_B.ret = memcmp(&obj->ReferenceFrame[0], &b[0], 3);
  for (Test_Traj_B.b_ix = 0; Test_Traj_B.b_ix < 21; Test_Traj_B.b_ix++) {
    if (rtIsNaN(obj->TimeOfArrival[Test_Traj_B.b_ix])) {
      Test_Traj_B.gndspeed[Test_Traj_B.b_ix] = obj->
        TimeOfArrival[Test_Traj_B.b_ix];
    } else {
      Test_Traj_B.ip_b = Test_Traj_bsearch
        (obj->HorizontalSpeedPiecewisePolynomial.breaks, obj->
         TimeOfArrival[Test_Traj_B.b_ix]) - 1;
      Test_Traj_B.xloc_p = obj->TimeOfArrival[Test_Traj_B.b_ix] -
        obj->HorizontalSpeedPiecewisePolynomial.breaks[Test_Traj_B.ip_b];
      Test_Traj_B.gndspeed[Test_Traj_B.b_ix] = ((Test_Traj_B.xloc_p *
        obj->HorizontalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b] +
        obj->HorizontalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b + 20]) *
        Test_Traj_B.xloc_p + obj->
        HorizontalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b + 40]) *
        Test_Traj_B.xloc_p + obj->
        HorizontalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b + 60];
    }

    if (rtIsNaN(obj->TimeOfArrival[Test_Traj_B.b_ix])) {
      Test_Traj_B.xloc_p = obj->TimeOfArrival[Test_Traj_B.b_ix];
    } else {
      Test_Traj_B.ip_b = Test_Traj_bsearch
        (obj->VerticalSpeedPiecewisePolynomial.breaks, obj->
         TimeOfArrival[Test_Traj_B.b_ix]) - 1;
      Test_Traj_B.xloc_p = obj->TimeOfArrival[Test_Traj_B.b_ix] -
        obj->VerticalSpeedPiecewisePolynomial.breaks[Test_Traj_B.ip_b];
      Test_Traj_B.xloc_p = ((Test_Traj_B.xloc_p *
        obj->VerticalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b] +
        obj->VerticalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b + 20]) *
                            Test_Traj_B.xloc_p +
                            obj->
                            VerticalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b
                            + 40]) * Test_Traj_B.xloc_p +
        obj->VerticalSpeedPiecewisePolynomial.coefs[Test_Traj_B.ip_b + 60];
    }

    if (Test_Traj_B.ret == 0) {
      Test_Traj_B.xloc_p = -Test_Traj_B.xloc_p;
    }

    if (rtIsInf(obj->Course[Test_Traj_B.b_ix]) || rtIsNaN(obj->
         Course[Test_Traj_B.b_ix])) {
      Test_Traj_B.b_x_b = (rtNaN);
    } else {
      Test_Traj_B.b_x_b = rt_remd_snf(obj->Course[Test_Traj_B.b_ix], 360.0);
      Test_Traj_B.absx_f = fabs(Test_Traj_B.b_x_b);
      if (Test_Traj_B.absx_f > 180.0) {
        if (Test_Traj_B.b_x_b > 0.0) {
          Test_Traj_B.b_x_b -= 360.0;
        } else {
          Test_Traj_B.b_x_b += 360.0;
        }

        Test_Traj_B.absx_f = fabs(Test_Traj_B.b_x_b);
      }

      if (Test_Traj_B.absx_f <= 45.0) {
        Test_Traj_B.b_x_b *= 0.017453292519943295;
        Test_Traj_B.b_x_b = cos(Test_Traj_B.b_x_b);
      } else {
        if (Test_Traj_B.absx_f <= 135.0) {
          if (Test_Traj_B.b_x_b > 0.0) {
            Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b - 90.0) *
              0.017453292519943295;
            n = 1;
          } else {
            Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b + 90.0) *
              0.017453292519943295;
            n = -1;
          }
        } else if (Test_Traj_B.b_x_b > 0.0) {
          Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b - 180.0) * 0.017453292519943295;
          n = 2;
        } else {
          Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b + 180.0) * 0.017453292519943295;
          n = -2;
        }

        if (n == 1) {
          Test_Traj_B.b_x_b = -sin(Test_Traj_B.b_x_b);
        } else if (n == -1) {
          Test_Traj_B.b_x_b = sin(Test_Traj_B.b_x_b);
        } else {
          Test_Traj_B.b_x_b = -cos(Test_Traj_B.b_x_b);
        }
      }
    }

    Test_Traj_B.b_x_k[Test_Traj_B.b_ix] = obj->Course[Test_Traj_B.b_ix];
    Test_Traj_B.rate[Test_Traj_B.b_ix] = Test_Traj_B.xloc_p;
    Test_Traj_B.b_x_h[Test_Traj_B.b_ix] = Test_Traj_B.b_x_b;
  }

  for (Test_Traj_B.b_ix = 0; Test_Traj_B.b_ix < 21; Test_Traj_B.b_ix++) {
    if (rtIsInf(Test_Traj_B.b_x_k[Test_Traj_B.b_ix]) || rtIsNaN
        (Test_Traj_B.b_x_k[Test_Traj_B.b_ix])) {
      Test_Traj_B.xloc_p = (rtNaN);
    } else {
      Test_Traj_B.b_x_b = rt_remd_snf(Test_Traj_B.b_x_k[Test_Traj_B.b_ix], 360.0);
      Test_Traj_B.absx_f = fabs(Test_Traj_B.b_x_b);
      if (Test_Traj_B.absx_f > 180.0) {
        if (Test_Traj_B.b_x_b > 0.0) {
          Test_Traj_B.b_x_b -= 360.0;
        } else {
          Test_Traj_B.b_x_b += 360.0;
        }

        Test_Traj_B.absx_f = fabs(Test_Traj_B.b_x_b);
      }

      if (Test_Traj_B.absx_f <= 45.0) {
        Test_Traj_B.b_x_b *= 0.017453292519943295;
        Test_Traj_B.xloc_p = sin(Test_Traj_B.b_x_b);
      } else {
        if (Test_Traj_B.absx_f <= 135.0) {
          if (Test_Traj_B.b_x_b > 0.0) {
            Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b - 90.0) *
              0.017453292519943295;
            n = 1;
          } else {
            Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b + 90.0) *
              0.017453292519943295;
            n = -1;
          }
        } else if (Test_Traj_B.b_x_b > 0.0) {
          Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b - 180.0) * 0.017453292519943295;
          n = 2;
        } else {
          Test_Traj_B.b_x_b = (Test_Traj_B.b_x_b + 180.0) * 0.017453292519943295;
          n = -2;
        }

        if (n == 1) {
          Test_Traj_B.xloc_p = cos(Test_Traj_B.b_x_b);
        } else if (n == -1) {
          Test_Traj_B.xloc_p = -cos(Test_Traj_B.b_x_b);
        } else {
          Test_Traj_B.xloc_p = -sin(Test_Traj_B.b_x_b);
        }
      }
    }

    obj->Velocities[Test_Traj_B.b_ix] = Test_Traj_B.b_x_h[Test_Traj_B.b_ix] *
      Test_Traj_B.gndspeed[Test_Traj_B.b_ix];
    obj->Velocities[Test_Traj_B.b_ix + 21] = Test_Traj_B.xloc_p *
      Test_Traj_B.gndspeed[Test_Traj_B.b_ix];
    obj->Velocities[Test_Traj_B.b_ix + 42] = Test_Traj_B.rate[Test_Traj_B.b_ix];
    Test_Traj_B.b_x_k[Test_Traj_B.b_ix] = Test_Traj_B.xloc_p;
  }
}

static real_T Test_Traj_mapElementsToBins(real_T x, const real_T edges[21],
  boolean_T right)
{
  real_T bins;
  int32_T b;
  bins = (rtNaN);
  if ((x >= edges[0]) && (x <= edges[20])) {
    bins = ceil((x - edges[0]) / (edges[1] - edges[0]));
    if (right) {
      if ((bins >= 1.0) && (bins < 21.0) && (x > edges[static_cast<int32_T>(bins)
           - 1]) && (x <= edges[static_cast<int32_T>(bins)])) {
      } else {
        b = Test_Traj_bsearch(edges, x);
        while ((b > 1) && (x <= edges[b - 1])) {
          b--;
        }

        bins = b;
      }
    } else if ((bins >= 1.0) && (bins < 21.0) && (x >= edges[static_cast<int32_T>
                (bins) - 1]) && (x < edges[static_cast<int32_T>(bins)])) {
    } else {
      bins = Test_Traj_bsearch(edges, x);
    }
  }

  return bins;
}

static void Test_Traj_sqrt_ph(const real_T x_data[], const int32_T x_size[2],
  real_T b_x_data[], int32_T b_x_size[2])
{
  int32_T b_k;
  int32_T loop_ub_tmp;
  b_x_size[0] = x_size[0];
  b_x_size[1] = x_size[1];
  loop_ub_tmp = x_size[0] * x_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&b_x_data[0], &x_data[0], (loop_ub_tmp + 1) * sizeof(real_T));
  }

  for (b_k = 0; b_k <= loop_ub_tmp; b_k++) {
    b_x_data[b_k] = sqrt(b_x_data[b_k]);
  }
}

static void Test_Traj_abs_phm(const real_T x_data[], const int32_T x_size[2],
  real_T y_data[], int32_T y_size[2])
{
  Test_Traj_B.nx_b = x_size[0] * x_size[1] - 1;
  y_size[0] = x_size[0];
  y_size[1] = x_size[1];
  for (Test_Traj_B.b_k_mt = 0; Test_Traj_B.b_k_mt <= Test_Traj_B.nx_b;
       Test_Traj_B.b_k_mt++) {
    y_data[Test_Traj_B.b_k_mt] = fabs(x_data[Test_Traj_B.b_k_mt]);
  }
}

static void Test_Traj_fresnel_p(const real_T x_data[], const int32_T x_size[2],
  creal_T z_data[], int32_T z_size[2])
{
  static const real_T tmp[10] = { 0.42154355504367752, 0.1434079197807589,
    0.011522095507358577, 0.000345017939782574, 4.6361374928786735E-6,
    3.0556898379025758E-8, 1.0230451416490724E-10, 1.7201074326816183E-13,
    1.3428327623306275E-16, 3.763297112699879E-20 };

  static const real_T tmp_0[11] = { 0.50444207364338323, 0.19710283352552341,
    0.018764858409257526, 0.00068407938091539307, 1.1513882611188428E-5,
    9.8285244368842225E-8, 4.4534441586175015E-10, 1.0826804113902088E-12,
    1.375554606332618E-15, 8.3635443563067741E-19, 1.8695871016278324E-22 };

  static const real_T tmp_1[11] = { 1.0, 0.75158639835337893,
    0.11688892585919138, 0.0064405152650885865, 0.00015593440916415301,
    1.8462756734893055E-6, 1.1269922476399903E-8, 3.6014002958937136E-11,
    5.8875453362157839E-14, 4.5200143407412973E-17, 1.2544323709001127E-20 };

  static const real_T tmp_2[12] = { 1.0, 1.4749575992512833, 0.33774898912002,
    0.025360374142033879, 0.00081467910718430615, 1.2754507566772912E-5,
    1.0431458965757199E-7, 4.6068072814652043E-10, 1.1027321506624028E-12,
    1.3879653125957886E-15, 8.3915881628311874E-19, 1.8695871016278324E-22 };

  static const real_T tmp_3[6] = { -2991.8191940101983, 708840.04525773856,
    -6.2974148620586254E+7, 2.5489088057337637E+9, -4.429795180596978E+10,
    3.1801629787656781E+11 };

  static const real_T tmp_4[7] = { 1.0, 281.37626888999432, 45584.781080653258,
    5.1734388877009638E+6, 4.1932024589811122E+8, 2.2441179564534092E+10,
    6.0736638949008459E+11 };

  static const real_T tmp_5[6] = { -4.9884311457357354E-8, 9.5042806282985963E-6,
    -0.00064519143568396507, 0.018884331939670384, -0.20552590095501388, 1.0 };

  static const real_T tmp_6[7] = { 3.99982968972496E-12, 9.1543921577465745E-10,
    1.2500186247959882E-7, 1.2226278902417902E-5, 0.00086802954294178428,
    0.041214209072219982, 1.0 };

  const real_T *fn;
  const real_T *gn;
  const real_T *fd;
  const real_T *gd;
  boolean_T exitg1;
  for (Test_Traj_B.i_px = 0; Test_Traj_B.i_px < 6; Test_Traj_B.i_px++) {
    Test_Traj_B.sn_i[Test_Traj_B.i_px] = tmp_3[Test_Traj_B.i_px];
  }

  fn = &tmp[0];
  gn = &tmp_0[0];
  for (Test_Traj_B.i_px = 0; Test_Traj_B.i_px < 7; Test_Traj_B.i_px++) {
    Test_Traj_B.sd_j[Test_Traj_B.i_px] = tmp_4[Test_Traj_B.i_px];
  }

  for (Test_Traj_B.i_px = 0; Test_Traj_B.i_px < 6; Test_Traj_B.i_px++) {
    Test_Traj_B.cn_h[Test_Traj_B.i_px] = tmp_5[Test_Traj_B.i_px];
  }

  for (Test_Traj_B.i_px = 0; Test_Traj_B.i_px < 7; Test_Traj_B.i_px++) {
    Test_Traj_B.cd_a[Test_Traj_B.i_px] = tmp_6[Test_Traj_B.i_px];
  }

  fd = &tmp_1[0];
  gd = &tmp_2[0];
  z_size[0] = x_size[0];
  z_size[1] = x_size[1];
  Test_Traj_B.i_px = x_size[0] * x_size[1] - 1;
  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.i_px;
       Test_Traj_B.b_ii_j++) {
    z_data[Test_Traj_B.b_ii_j].re = (rtNaN);
    z_data[Test_Traj_B.b_ii_j].im = 0.0;
  }

  Test_Traj_abs_phm(x_data, x_size, &Test_Traj_B.xabs_data_d,
                    Test_Traj_B.xabs_size);
  Test_Traj_B.nx_g = Test_Traj_B.xabs_size[0] * Test_Traj_B.xabs_size[1];
  Test_Traj_B.loop_ub_tmp_n = Test_Traj_B.nx_g - 1;
  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.loop_ub_tmp_n;
       Test_Traj_B.b_ii_j++) {
    Test_Traj_B.x_tmp_data = Test_Traj_B.xabs_data_d * Test_Traj_B.xabs_data_d;
  }

  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.loop_ub_tmp_n;
       Test_Traj_B.b_ii_j++) {
    Test_Traj_B.x_data_oi = (Test_Traj_B.x_tmp_data < 2.5625);
  }

  Test_Traj_B.idx_k = 0;
  Test_Traj_B.ii_size_idx_0_h = Test_Traj_B.nx_g;
  Test_Traj_B.b_ii_j = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii_j - 1 <= Test_Traj_B.nx_g - 1)) {
    if (Test_Traj_B.x_data_oi) {
      Test_Traj_B.idx_k++;
      Test_Traj_B.ii_data_os = Test_Traj_B.b_ii_j;
      if (Test_Traj_B.idx_k >= Test_Traj_B.nx_g) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii_j++;
      }
    } else {
      Test_Traj_B.b_ii_j++;
    }
  }

  if (Test_Traj_B.nx_g == 1) {
    if (Test_Traj_B.idx_k == 0) {
      Test_Traj_B.ii_size_idx_0_h = 0;
    }
  } else {
    if (1 > Test_Traj_B.idx_k) {
      Test_Traj_B.idx_k = 0;
    }

    Test_Traj_B.ii_size_idx_0_h = Test_Traj_B.idx_k;
  }

  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j < Test_Traj_B.ii_size_idx_0_h;
       Test_Traj_B.b_ii_j++) {
    Test_Traj_B.x4_data_h = Test_Traj_B.x_tmp_data;
    Test_Traj_B.x4_data_h *= Test_Traj_B.x4_data_h;
    Test_Traj_B.r_f = Test_Traj_B.xabs_data_d;
    z_data[Test_Traj_B.ii_data_os - 1].re = (((((Test_Traj_B.cn_h[0] *
      Test_Traj_B.x4_data_h + Test_Traj_B.cn_h[1]) * Test_Traj_B.x4_data_h +
      Test_Traj_B.cn_h[2]) * Test_Traj_B.x4_data_h + Test_Traj_B.cn_h[3]) *
      Test_Traj_B.x4_data_h + Test_Traj_B.cn_h[4]) * Test_Traj_B.x4_data_h +
      Test_Traj_B.cn_h[5]) / ((((((Test_Traj_B.cd_a[0] * Test_Traj_B.x4_data_h +
      Test_Traj_B.cd_a[1]) * Test_Traj_B.x4_data_h + Test_Traj_B.cd_a[2]) *
      Test_Traj_B.x4_data_h + Test_Traj_B.cd_a[3]) * Test_Traj_B.x4_data_h +
      Test_Traj_B.cd_a[4]) * Test_Traj_B.x4_data_h + Test_Traj_B.cd_a[5]) *
      Test_Traj_B.x4_data_h + Test_Traj_B.cd_a[6]) * Test_Traj_B.r_f;
    z_data[Test_Traj_B.ii_data_os - 1].im = (((((Test_Traj_B.sn_i[0] *
      Test_Traj_B.x4_data_h + Test_Traj_B.sn_i[1]) * Test_Traj_B.x4_data_h +
      Test_Traj_B.sn_i[2]) * Test_Traj_B.x4_data_h + Test_Traj_B.sn_i[3]) *
      Test_Traj_B.x4_data_h + Test_Traj_B.sn_i[4]) * Test_Traj_B.x4_data_h +
      Test_Traj_B.sn_i[5]) * (Test_Traj_B.r_f * Test_Traj_B.r_f) /
      ((((((Test_Traj_B.sd_j[0] * Test_Traj_B.x4_data_h + Test_Traj_B.sd_j[1]) *
           Test_Traj_B.x4_data_h + Test_Traj_B.sd_j[2]) * Test_Traj_B.x4_data_h
          + Test_Traj_B.sd_j[3]) * Test_Traj_B.x4_data_h + Test_Traj_B.sd_j[4]) *
        Test_Traj_B.x4_data_h + Test_Traj_B.sd_j[5]) * Test_Traj_B.x4_data_h +
       Test_Traj_B.sd_j[6]) * Test_Traj_B.r_f;
  }

  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.loop_ub_tmp_n;
       Test_Traj_B.b_ii_j++) {
    Test_Traj_B.x_data_oi = ((2.5625 <= Test_Traj_B.x_tmp_data) &&
      (Test_Traj_B.x_tmp_data <= 1.367076676E+9));
  }

  Test_Traj_B.idx_k = 0;
  Test_Traj_B.ii_size_idx_0_h = Test_Traj_B.nx_g;
  Test_Traj_B.b_ii_j = 1;
  exitg1 = false;
  while ((!exitg1) && (Test_Traj_B.b_ii_j - 1 <= Test_Traj_B.nx_g - 1)) {
    if (Test_Traj_B.x_data_oi) {
      Test_Traj_B.idx_k++;
      Test_Traj_B.ii_data_os = Test_Traj_B.b_ii_j;
      if (Test_Traj_B.idx_k >= Test_Traj_B.nx_g) {
        exitg1 = true;
      } else {
        Test_Traj_B.b_ii_j++;
      }
    } else {
      Test_Traj_B.b_ii_j++;
    }
  }

  if (Test_Traj_B.nx_g == 1) {
    if (Test_Traj_B.idx_k == 0) {
      Test_Traj_B.ii_size_idx_0_h = 0;
    }
  } else {
    if (1 > Test_Traj_B.idx_k) {
      Test_Traj_B.idx_k = 0;
    }

    Test_Traj_B.ii_size_idx_0_h = Test_Traj_B.idx_k;
  }

  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j < Test_Traj_B.ii_size_idx_0_h;
       Test_Traj_B.b_ii_j++) {
    Test_Traj_B.x4_data_h = Test_Traj_B.x_tmp_data;
    Test_Traj_B.r_f = 1.0 / (Test_Traj_B.x4_data_h * 3.1415926535897931);
    Test_Traj_B.x4_data_pq = Test_Traj_B.r_f * Test_Traj_B.r_f;
    Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].re = Test_Traj_B.x4_data_h * 0.0;
    Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].im = Test_Traj_B.x4_data_h *
      1.5707963267948966;
    Test_Traj_B.ismall_data_j = Test_Traj_B.ii_data_os;
    Test_Traj_B.z_data_j[Test_Traj_B.b_ii_j] = Test_Traj_B.r_f;
  }

  Test_Traj_B.nx_g = Test_Traj_B.ii_size_idx_0_h - 1;
  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.nx_g;
       Test_Traj_B.b_ii_j++) {
    if (Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].im == 0.0) {
      Test_Traj_B.x4_data_h = exp(Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].re);
      Test_Traj_B.r_f = 0.0;
    } else if (rtIsInf(Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].im) && rtIsInf
               (Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].re) &&
               (Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].re < 0.0)) {
      Test_Traj_B.x4_data_h = 0.0;
      Test_Traj_B.r_f = 0.0;
    } else {
      Test_Traj_B.r_f = exp(Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].re / 2.0);
      Test_Traj_B.x4_data_h = Test_Traj_B.r_f * cos
        (Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].im) * Test_Traj_B.r_f;
      Test_Traj_B.r_f *= Test_Traj_B.r_f * sin
        (Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].im);
    }

    Test_Traj_B.x_data_m.re = Test_Traj_B.x4_data_h;
    Test_Traj_B.x_data_m.im = Test_Traj_B.r_f;
    Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j] = Test_Traj_B.x_data_m;
  }

  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j < Test_Traj_B.ii_size_idx_0_h;
       Test_Traj_B.b_ii_j++) {
    Test_Traj_B.r_f = (((((((((fn[0] * Test_Traj_B.x4_data_pq + fn[1]) *
      Test_Traj_B.x4_data_pq + fn[2]) * Test_Traj_B.x4_data_pq + fn[3]) *
      Test_Traj_B.x4_data_pq + fn[4]) * Test_Traj_B.x4_data_pq + fn[5]) *
                          Test_Traj_B.x4_data_pq + fn[6]) *
                         Test_Traj_B.x4_data_pq + fn[7]) *
                        Test_Traj_B.x4_data_pq + fn[8]) * Test_Traj_B.x4_data_pq
                       + fn[9]) * Test_Traj_B.x4_data_pq / ((((((((((fd[0] *
      Test_Traj_B.x4_data_pq + fd[1]) * Test_Traj_B.x4_data_pq + fd[2]) *
      Test_Traj_B.x4_data_pq + fd[3]) * Test_Traj_B.x4_data_pq + fd[4]) *
      Test_Traj_B.x4_data_pq + fd[5]) * Test_Traj_B.x4_data_pq + fd[6]) *
      Test_Traj_B.x4_data_pq + fd[7]) * Test_Traj_B.x4_data_pq + fd[8]) *
      Test_Traj_B.x4_data_pq + fd[9]) * Test_Traj_B.x4_data_pq + fd[10]) - 1.0;
    Test_Traj_B.x4_data_im_d = ((((((((((gn[0] * Test_Traj_B.x4_data_pq + gn[1])
      * Test_Traj_B.x4_data_pq + gn[2]) * Test_Traj_B.x4_data_pq + gn[3]) *
      Test_Traj_B.x4_data_pq + gn[4]) * Test_Traj_B.x4_data_pq + gn[5]) *
      Test_Traj_B.x4_data_pq + gn[6]) * Test_Traj_B.x4_data_pq + gn[7]) *
      Test_Traj_B.x4_data_pq + gn[8]) * Test_Traj_B.x4_data_pq + gn[9]) *
      Test_Traj_B.x4_data_pq + gn[10]) * Test_Traj_B.z_data_j[Test_Traj_B.b_ii_j]
      / (((((((((((gd[0] * Test_Traj_B.x4_data_pq + gd[1]) *
                  Test_Traj_B.x4_data_pq + gd[2]) * Test_Traj_B.x4_data_pq + gd
                 [3]) * Test_Traj_B.x4_data_pq + gd[4]) * Test_Traj_B.x4_data_pq
               + gd[5]) * Test_Traj_B.x4_data_pq + gd[6]) *
             Test_Traj_B.x4_data_pq + gd[7]) * Test_Traj_B.x4_data_pq + gd[8]) *
           Test_Traj_B.x4_data_pq + gd[9]) * Test_Traj_B.x4_data_pq + gd[10]) *
         Test_Traj_B.x4_data_pq + gd[11]);
    Test_Traj_B.x4_data_h = 0.0 * Test_Traj_B.r_f - Test_Traj_B.x4_data_im_d;
    Test_Traj_B.r_f += 0.0 * Test_Traj_B.x4_data_im_d;
    Test_Traj_B.x4_data_im_d = Test_Traj_B.x4_data_h *
      Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].re - Test_Traj_B.r_f *
      Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].im;
    Test_Traj_B.r_f = Test_Traj_B.x4_data_h *
      Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].im + Test_Traj_B.r_f *
      Test_Traj_B.x_data_pb[Test_Traj_B.b_ii_j].re;
    Test_Traj_B.br_g = Test_Traj_B.xabs_data_d * 3.1415926535897931;
    if (Test_Traj_B.r_f == 0.0) {
      Test_Traj_B.x4_data_h = Test_Traj_B.x4_data_im_d / Test_Traj_B.br_g;
      Test_Traj_B.r_f = 0.0;
    } else if (Test_Traj_B.x4_data_im_d == 0.0) {
      Test_Traj_B.x4_data_h = 0.0;
      Test_Traj_B.r_f /= Test_Traj_B.br_g;
    } else {
      Test_Traj_B.x4_data_h = Test_Traj_B.x4_data_im_d / Test_Traj_B.br_g;
      Test_Traj_B.r_f /= Test_Traj_B.br_g;
    }

    z_data[Test_Traj_B.ismall_data_j - 1].re = 0.5 + Test_Traj_B.x4_data_h;
    z_data[Test_Traj_B.ismall_data_j - 1].im = 0.5 + Test_Traj_B.r_f;
  }

  Test_Traj_B.ii_size_idx_0_h = 0;
  Test_Traj_B.nx_g = 0;
  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.loop_ub_tmp_n;
       Test_Traj_B.b_ii_j++) {
    if (Test_Traj_B.xabs_data_d * Test_Traj_B.xabs_data_d > 1.367076676E+9) {
      Test_Traj_B.ii_size_idx_0_h++;
      Test_Traj_B.bd_data_k = Test_Traj_B.b_ii_j + 1;
      Test_Traj_B.nx_g++;
    }
  }

  Test_Traj_B.loop_ub_tmp_n = Test_Traj_B.ii_size_idx_0_h - 1;
  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.loop_ub_tmp_n;
       Test_Traj_B.b_ii_j++) {
    z_data[Test_Traj_B.bd_data_k - 1].re = 0.5;
    z_data[Test_Traj_B.bd_data_k - 1].im = 0.5;
  }

  Test_Traj_B.loop_ub_tmp_n = 0;
  Test_Traj_B.ii_size_idx_0_h = 0;
  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j <= Test_Traj_B.i_px;
       Test_Traj_B.b_ii_j++) {
    if (x_data[Test_Traj_B.b_ii_j] < 0.0) {
      Test_Traj_B.loop_ub_tmp_n++;
      Test_Traj_B.ed_data = Test_Traj_B.b_ii_j + 1;
      Test_Traj_B.ii_size_idx_0_h++;
    }
  }

  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j < Test_Traj_B.loop_ub_tmp_n;
       Test_Traj_B.b_ii_j++) {
    Test_Traj_B.z_data_jd.re = -z_data[Test_Traj_B.ed_data - 1].re;
    Test_Traj_B.z_data_jd.im = -z_data[Test_Traj_B.ed_data - 1].im;
  }

  for (Test_Traj_B.b_ii_j = 0; Test_Traj_B.b_ii_j < Test_Traj_B.loop_ub_tmp_n;
       Test_Traj_B.b_ii_j++) {
    z_data[Test_Traj_B.ed_data - 1] = Test_Traj_B.z_data_jd;
  }
}

static void Test_Traj_power_phmyu(const real_T a_data[], const int32_T a_size[2],
  real_T y_data[], int32_T y_size[2])
{
  real_T b_z1_data;
  int32_T b_k;
  int32_T loop_ub_tmp;
  loop_ub_tmp = a_size[0] * a_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&b_z1_data, &y_data[0], (loop_ub_tmp + 1) * sizeof(real_T));
  }

  for (b_k = 0; b_k <= loop_ub_tmp; b_k++) {
    b_z1_data = Test_Traj_rt_powd_snf(a_data[b_k], 2.0);
  }

  y_size[0] = a_size[0];
  y_size[1] = a_size[1];
  if (0 <= loop_ub_tmp) {
    memcpy(&y_data[0], &b_z1_data, (loop_ub_tmp + 1) * sizeof(real_T));
  }
}

static void Test_Traj_repmat_phmy(const creal_T a_data[], const int32_T a_size[2],
  creal_T b_data[], int32_T b_size[2])
{
  int32_T ibcol;
  int32_T b_jtilecol;
  int32_T b_jcol;
  int32_T iacol_tmp;
  b_size[0] = a_size[0];
  b_size[1] = a_size[1] * 5;
  Test_Traj_B.nrows_k = a_size[0];
  Test_Traj_B.ncols = a_size[1];
  for (b_jtilecol = 0; b_jtilecol < 5; b_jtilecol++) {
    Test_Traj_B.ibtile = Test_Traj_B.nrows_k * Test_Traj_B.ncols * b_jtilecol;
    for (b_jcol = 0; b_jcol < Test_Traj_B.ncols; b_jcol++) {
      iacol_tmp = b_jcol * Test_Traj_B.nrows_k;
      Test_Traj_B.iacol = iacol_tmp - 1;
      ibcol = (iacol_tmp + Test_Traj_B.ibtile) - 1;
      for (iacol_tmp = 0; iacol_tmp < Test_Traj_B.nrows_k; iacol_tmp++) {
        Test_Traj_B.k_oh = iacol_tmp + 1;
        b_data[ibcol + Test_Traj_B.k_oh] = a_data[Test_Traj_B.iacol +
          Test_Traj_B.k_oh];
      }
    }
  }
}

static void Test_Traj_bsxfun_p(const creal_T a_data[], const int32_T a_size[2],
  creal_T c_data[], int32_T c_size[2])
{
  int32_T csz_idx_0;
  int32_T br;
  int32_T ar_tmp;
  int32_T tmp;
  csz_idx_0 = a_size[0];
  c_size[0] = a_size[0];
  c_size[1] = 5;
  if (a_size[0] != 0) {
    Test_Traj_B.acoef_h = (a_size[1] != 1);
    Test_Traj_B.acoef_i = (a_size[0] != 1);
    for (Test_Traj_B.k_o = 0; Test_Traj_B.k_o < 5; Test_Traj_B.k_o++) {
      Test_Traj_B.ia_a = Test_Traj_B.acoef_h * Test_Traj_B.k_o;
      for (Test_Traj_B.k_e = 0; Test_Traj_B.k_e < csz_idx_0; Test_Traj_B.k_e++)
      {
        ar_tmp = Test_Traj_B.acoef_i * Test_Traj_B.k_e + a_size[0] *
          Test_Traj_B.ia_a;
        br = Test_Traj_B.k_o + 1;
        if (a_data[ar_tmp].im == 0.0) {
          tmp = Test_Traj_B.k_e + csz_idx_0 * Test_Traj_B.k_o;
          c_data[tmp].re = a_data[ar_tmp].re / static_cast<real_T>(br);
          c_data[tmp].im = 0.0;
        } else if (a_data[ar_tmp].re == 0.0) {
          tmp = Test_Traj_B.k_e + csz_idx_0 * Test_Traj_B.k_o;
          c_data[tmp].re = 0.0;
          c_data[tmp].im = a_data[ar_tmp].im / static_cast<real_T>(br);
        } else {
          tmp = Test_Traj_B.k_e + csz_idx_0 * Test_Traj_B.k_o;
          c_data[tmp].re = a_data[ar_tmp].re / static_cast<real_T>(br);
          c_data[tmp].im = a_data[ar_tmp].im / static_cast<real_T>(br);
        }
      }
    }
  }
}

static void Test_Traj_fresnelgzero(const real_T x_data[], const int32_T x_size[2],
  const real_T dk_data[], const int32_T dk_size[2], const real_T k_data[], const
  int32_T k_size[2], const real_T theta_data[], const int32_T theta_size[2],
  creal_T z_data[], int32_T *z_size)
{
  Test_Traj_power_phmyu(x_data, x_size, &Test_Traj_B.tmp_data_iu,
                        Test_Traj_B.tmp_size_gu);
  Test_Traj_B.a_size[0] = dk_size[0];
  Test_Traj_B.a_size[1] = dk_size[1];
  Test_Traj_B.loop_ub_pc = dk_size[0] * dk_size[1];
  for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
       Test_Traj_B.b_k_j4++) {
    Test_Traj_B.a_data_m5.re = dk_data[Test_Traj_B.b_k_j4] * 0.0 *
      Test_Traj_B.tmp_data_iu;
    Test_Traj_B.a_data_m5.im = dk_data[Test_Traj_B.b_k_j4] * 0.5 *
      Test_Traj_B.tmp_data_iu;
  }

  Test_Traj_repmat_phmy(&Test_Traj_B.a_data_m5, Test_Traj_B.a_size,
                        Test_Traj_B.tmp_data_jz, Test_Traj_B.tmp_size_gu);
  Test_Traj_bsxfun_p(Test_Traj_B.tmp_data_jz, Test_Traj_B.tmp_size_gu,
                     Test_Traj_B.b_A_data_j3, Test_Traj_B.a_size);
  Test_Traj_B.x_size_idx_0 = Test_Traj_B.a_size[0];
  Test_Traj_B.loop_ub_tmp_m = Test_Traj_B.a_size[0] * Test_Traj_B.a_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_tmp_m) {
    memcpy(&Test_Traj_B.x_data_g[0], &Test_Traj_B.b_A_data_j3[0],
           (Test_Traj_B.loop_ub_tmp_m + 1) * sizeof(creal_T));
  }

  if (Test_Traj_B.a_size[0] != 0) {
    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.b_subsb_idx_0 = Test_Traj_B.b_k_j4 + 1;
      Test_Traj_B.im_tmp_l = (Test_Traj_B.b_subsb_idx_0 +
        Test_Traj_B.x_size_idx_0) - 1;
      Test_Traj_B.im = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].re +
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].im;
      Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].re -
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].im;
      Test_Traj_B.x_data_g[(Test_Traj_B.b_subsb_idx_0 + Test_Traj_B.x_size_idx_0)
        - 1].im = Test_Traj_B.im;
    }

    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.b_subsb_idx_0 = Test_Traj_B.b_k_j4 + 1;
      Test_Traj_B.im_tmp_tmp = Test_Traj_B.x_size_idx_0 << 1;
      Test_Traj_B.im_tmp_l = (Test_Traj_B.im_tmp_tmp + Test_Traj_B.b_subsb_idx_0)
        - 1;
      Test_Traj_B.im_tmp_c = Test_Traj_B.b_k_j4 + Test_Traj_B.x_size_idx_0;
      Test_Traj_B.im = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].re +
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].re -
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.x_data_g[(Test_Traj_B.b_subsb_idx_0 + Test_Traj_B.im_tmp_tmp)
        - 1].im = Test_Traj_B.im;
    }

    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.b_subsb_idx_0 = Test_Traj_B.b_k_j4 + 1;
      Test_Traj_B.im_tmp_l = (Test_Traj_B.x_size_idx_0 * 3 +
        Test_Traj_B.b_subsb_idx_0) - 1;
      Test_Traj_B.im_tmp_c = (Test_Traj_B.x_size_idx_0 << 1) +
        Test_Traj_B.b_k_j4;
      Test_Traj_B.im = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].re +
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].re -
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.x_data_g[(Test_Traj_B.b_subsb_idx_0 + Test_Traj_B.x_size_idx_0
                            * 3) - 1].im = Test_Traj_B.im;
    }

    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.im_tmp_l = (Test_Traj_B.x_size_idx_0 << 2) +
        Test_Traj_B.b_k_j4;
      Test_Traj_B.im_tmp_c = Test_Traj_B.x_size_idx_0 * 3 + Test_Traj_B.b_k_j4;
      Test_Traj_B.im = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].re +
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].re -
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_l].im = Test_Traj_B.im;
    }
  }

  Test_Traj_B.a_size_f[0] = k_size[0];
  Test_Traj_B.a_size_f[1] = k_size[1];
  Test_Traj_B.loop_ub_pc = k_size[0] * k_size[1];
  for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
       Test_Traj_B.b_k_j4++) {
    Test_Traj_B.a_data_m5.re = k_data[Test_Traj_B.b_k_j4] * 0.0 *
      x_data[Test_Traj_B.b_k_j4];
    Test_Traj_B.a_data_m5.im = x_data[Test_Traj_B.b_k_j4] *
      k_data[Test_Traj_B.b_k_j4];
  }

  Test_Traj_repmat_phmy(&Test_Traj_B.a_data_m5, Test_Traj_B.a_size_f,
                        Test_Traj_B.tmp_data_jz, Test_Traj_B.tmp_size_gu);
  Test_Traj_bsxfun_p(Test_Traj_B.tmp_data_jz, Test_Traj_B.tmp_size_gu,
                     Test_Traj_B.b_A_data_j3, Test_Traj_B.a_size);
  Test_Traj_B.loop_ub_tmp_m = Test_Traj_B.a_size[0];
  Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] * Test_Traj_B.a_size[1] - 1;
  if (0 <= Test_Traj_B.loop_ub_pc) {
    memcpy(&Test_Traj_B.tmp_data_jz[0], &Test_Traj_B.b_A_data_j3[0],
           (Test_Traj_B.loop_ub_pc + 1) * sizeof(creal_T));
  }

  if (Test_Traj_B.a_size[0] != 0) {
    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.b_subsb_idx_0 = Test_Traj_B.b_k_j4 + 1;
      Test_Traj_B.im_tmp_l = (Test_Traj_B.b_subsb_idx_0 +
        Test_Traj_B.loop_ub_tmp_m) - 1;
      Test_Traj_B.im = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].re +
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].im;
      Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].re -
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].im;
      Test_Traj_B.tmp_data_jz[(Test_Traj_B.b_subsb_idx_0 +
        Test_Traj_B.loop_ub_tmp_m) - 1].im = Test_Traj_B.im;
    }

    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.b_subsb_idx_0 = Test_Traj_B.b_k_j4 + 1;
      Test_Traj_B.im_tmp_tmp = Test_Traj_B.loop_ub_tmp_m << 1;
      Test_Traj_B.im_tmp_l = (Test_Traj_B.im_tmp_tmp + Test_Traj_B.b_subsb_idx_0)
        - 1;
      Test_Traj_B.im_tmp_c = Test_Traj_B.b_k_j4 + Test_Traj_B.loop_ub_tmp_m;
      Test_Traj_B.im = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].re +
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].re -
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.tmp_data_jz[(Test_Traj_B.b_subsb_idx_0 +
        Test_Traj_B.im_tmp_tmp) - 1].im = Test_Traj_B.im;
    }

    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.b_subsb_idx_0 = Test_Traj_B.b_k_j4 + 1;
      Test_Traj_B.im_tmp_l = (Test_Traj_B.loop_ub_tmp_m * 3 +
        Test_Traj_B.b_subsb_idx_0) - 1;
      Test_Traj_B.im_tmp_c = (Test_Traj_B.loop_ub_tmp_m << 1) +
        Test_Traj_B.b_k_j4;
      Test_Traj_B.im = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].re +
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].re -
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.tmp_data_jz[(Test_Traj_B.b_subsb_idx_0 +
        Test_Traj_B.loop_ub_tmp_m * 3) - 1].im = Test_Traj_B.im;
    }

    Test_Traj_B.loop_ub_pc = Test_Traj_B.a_size[0] - 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.im_tmp_l = (Test_Traj_B.loop_ub_tmp_m << 2) +
        Test_Traj_B.b_k_j4;
      Test_Traj_B.im_tmp_c = Test_Traj_B.loop_ub_tmp_m * 3 + Test_Traj_B.b_k_j4;
      Test_Traj_B.im = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].re +
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re =
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].re -
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_c].im;
      Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_l].im = Test_Traj_B.im;
    }
  }

  if ((x_size[0] == 0) || (x_size[1] == 0)) {
    Test_Traj_B.loop_ub_pc = 0;
  } else if (x_size[0] > x_size[1]) {
    Test_Traj_B.loop_ub_pc = x_size[0];
  } else {
    Test_Traj_B.loop_ub_pc = x_size[1];
  }

  *z_size = Test_Traj_B.loop_ub_pc;
  for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
       Test_Traj_B.b_k_j4++) {
    z_data[Test_Traj_B.b_k_j4].re = 1.0;
    z_data[Test_Traj_B.b_k_j4].im = 0.0;
  }

  for (Test_Traj_B.b_subsb_idx_0 = 0; Test_Traj_B.b_subsb_idx_0 < 5;
       Test_Traj_B.b_subsb_idx_0++) {
    Test_Traj_B.loop_ub_pc = *z_size;
    Test_Traj_B.im_tmp_l = ((Test_Traj_B.b_subsb_idx_0 + 1) << 1) + 1;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.im_tmp_tmp = Test_Traj_B.x_size_idx_0 *
        Test_Traj_B.b_subsb_idx_0 + Test_Traj_B.b_k_j4;
      if (Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].im == 0.0) {
        Test_Traj_B.im = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].re /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
        Test_Traj_B.r_h = 0.0;
      } else if (Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].re == 0.0) {
        Test_Traj_B.im = 0.0;
        Test_Traj_B.r_h = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].im /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
      } else {
        Test_Traj_B.im = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].re /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
        Test_Traj_B.r_h = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].im /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
      }

      Test_Traj_B.z_data_d.re = z_data[Test_Traj_B.b_k_j4].re + Test_Traj_B.im;
      Test_Traj_B.z_data_d.im = z_data[Test_Traj_B.b_k_j4].im + Test_Traj_B.r_h;
      z_data[Test_Traj_B.b_k_j4] = Test_Traj_B.z_data_d;
    }
  }

  for (Test_Traj_B.b_subsb_idx_0 = 0; Test_Traj_B.b_subsb_idx_0 < 5;
       Test_Traj_B.b_subsb_idx_0++) {
    Test_Traj_B.loop_ub_pc = *z_size;
    Test_Traj_B.im_tmp_l = Test_Traj_B.b_subsb_idx_0 + 2;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.im_tmp_tmp = Test_Traj_B.loop_ub_tmp_m *
        Test_Traj_B.b_subsb_idx_0 + Test_Traj_B.b_k_j4;
      if (Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].im == 0.0) {
        Test_Traj_B.im = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].re /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
        Test_Traj_B.r_h = 0.0;
      } else if (Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].re == 0.0) {
        Test_Traj_B.im = 0.0;
        Test_Traj_B.r_h = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].im /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
      } else {
        Test_Traj_B.im = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].re /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
        Test_Traj_B.r_h = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].im /
          static_cast<real_T>(Test_Traj_B.im_tmp_l);
      }

      Test_Traj_B.z_data_j4.re = z_data[Test_Traj_B.b_k_j4].re + Test_Traj_B.im;
      Test_Traj_B.z_data_j4.im = z_data[Test_Traj_B.b_k_j4].im + Test_Traj_B.r_h;
      z_data[Test_Traj_B.b_k_j4] = Test_Traj_B.z_data_j4;
    }
  }

  for (Test_Traj_B.b_subsb_idx_0 = 0; Test_Traj_B.b_subsb_idx_0 < 3;
       Test_Traj_B.b_subsb_idx_0++) {
    Test_Traj_B.loop_ub_pc = *z_size;
    Test_Traj_B.im_tmp_l = Test_Traj_B.b_subsb_idx_0 + 4;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.im_tmp_tmp = Test_Traj_B.loop_ub_tmp_m *
        Test_Traj_B.b_subsb_idx_0 + Test_Traj_B.b_k_j4;
      Test_Traj_B.im = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].re *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].re -
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].im *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].im;
      Test_Traj_B.r_h = Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].im *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].re +
        Test_Traj_B.tmp_data_jz[Test_Traj_B.im_tmp_tmp].re *
        Test_Traj_B.x_data_g[Test_Traj_B.b_k_j4].im;
      if (Test_Traj_B.r_h == 0.0) {
        Test_Traj_B.im /= static_cast<real_T>(Test_Traj_B.im_tmp_l);
        Test_Traj_B.r_h = 0.0;
      } else if (Test_Traj_B.im == 0.0) {
        Test_Traj_B.im = 0.0;
        Test_Traj_B.r_h /= static_cast<real_T>(Test_Traj_B.im_tmp_l);
      } else {
        Test_Traj_B.im /= static_cast<real_T>(Test_Traj_B.im_tmp_l);
        Test_Traj_B.r_h /= static_cast<real_T>(Test_Traj_B.im_tmp_l);
      }

      Test_Traj_B.z_data_p.re = z_data[Test_Traj_B.b_k_j4].re + Test_Traj_B.im;
      Test_Traj_B.z_data_p.im = z_data[Test_Traj_B.b_k_j4].im + Test_Traj_B.r_h;
      z_data[Test_Traj_B.b_k_j4] = Test_Traj_B.z_data_p;
    }
  }

  for (Test_Traj_B.b_subsb_idx_0 = 0; Test_Traj_B.b_subsb_idx_0 < 1;
       Test_Traj_B.b_subsb_idx_0++) {
    Test_Traj_B.loop_ub_pc = *z_size;
    for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
         Test_Traj_B.b_k_j4++) {
      Test_Traj_B.im_tmp_tmp = Test_Traj_B.b_k_j4 + Test_Traj_B.x_size_idx_0;
      Test_Traj_B.im = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].re -
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].im;
      Test_Traj_B.r_h = Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].re *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].im +
        Test_Traj_B.x_data_g[Test_Traj_B.im_tmp_tmp].im *
        Test_Traj_B.tmp_data_jz[Test_Traj_B.b_k_j4].re;
      if (Test_Traj_B.r_h == 0.0) {
        Test_Traj_B.im /= 6.0;
        Test_Traj_B.r_h = 0.0;
      } else if (Test_Traj_B.im == 0.0) {
        Test_Traj_B.im = 0.0;
        Test_Traj_B.r_h /= 6.0;
      } else {
        Test_Traj_B.im /= 6.0;
        Test_Traj_B.r_h /= 6.0;
      }

      Test_Traj_B.z_data_b4.re = z_data[Test_Traj_B.b_k_j4].re + Test_Traj_B.im;
      Test_Traj_B.z_data_b4.im = z_data[Test_Traj_B.b_k_j4].im + Test_Traj_B.r_h;
      z_data[Test_Traj_B.b_k_j4] = Test_Traj_B.z_data_b4;
    }
  }

  Test_Traj_B.loop_ub_tmp_m = theta_size[0] * theta_size[1] - 1;
  for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_tmp_m;
       Test_Traj_B.b_k_j4++) {
    Test_Traj_B.a_data_m5.re = theta_data[Test_Traj_B.b_k_j4] * 0.0;
    Test_Traj_B.a_data_m5.im = theta_data[Test_Traj_B.b_k_j4];
  }

  if (0 <= Test_Traj_B.loop_ub_tmp_m) {
    memcpy(&Test_Traj_B.q_data_i, &Test_Traj_B.a_data_m5,
           (Test_Traj_B.loop_ub_tmp_m + 1) * sizeof(creal_T));
  }

  for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 <= Test_Traj_B.loop_ub_tmp_m;
       Test_Traj_B.b_k_j4++) {
    if (Test_Traj_B.q_data_i.im == 0.0) {
      Test_Traj_B.im = exp(Test_Traj_B.q_data_i.re);
      Test_Traj_B.r_h = 0.0;
    } else if (rtIsInf(Test_Traj_B.q_data_i.im) && rtIsInf
               (Test_Traj_B.q_data_i.re) && (Test_Traj_B.q_data_i.re < 0.0)) {
      Test_Traj_B.im = 0.0;
      Test_Traj_B.r_h = 0.0;
    } else {
      Test_Traj_B.r_h = exp(Test_Traj_B.q_data_i.re / 2.0);
      Test_Traj_B.im = Test_Traj_B.r_h * cos(Test_Traj_B.q_data_i.im) *
        Test_Traj_B.r_h;
      Test_Traj_B.r_h *= Test_Traj_B.r_h * sin(Test_Traj_B.q_data_i.im);
    }

    Test_Traj_B.q_data_p.re = Test_Traj_B.im;
    Test_Traj_B.q_data_p.im = Test_Traj_B.r_h;
    Test_Traj_B.q_data_i = Test_Traj_B.q_data_p;
  }

  Test_Traj_B.loop_ub_pc = *z_size;
  for (Test_Traj_B.b_k_j4 = 0; Test_Traj_B.b_k_j4 < Test_Traj_B.loop_ub_pc;
       Test_Traj_B.b_k_j4++) {
    Test_Traj_B.im = x_data[Test_Traj_B.b_k_j4] * z_data[Test_Traj_B.b_k_j4].re;
    Test_Traj_B.r_h = x_data[Test_Traj_B.b_k_j4] * z_data[Test_Traj_B.b_k_j4].im;
    Test_Traj_B.z_data_n.re = Test_Traj_B.im * Test_Traj_B.q_data_i.re -
      Test_Traj_B.r_h * Test_Traj_B.q_data_i.im;
    Test_Traj_B.z_data_n.im = Test_Traj_B.im * Test_Traj_B.q_data_i.im +
      Test_Traj_B.r_h * Test_Traj_B.q_data_i.re;
    z_data[Test_Traj_B.b_k_j4] = Test_Traj_B.z_data_n;
  }
}

static creal_T Test_Traj_fresnelg2(real_T x, real_T dk, real_T k, real_T theta)
{
  creal_T z;
  Test_Traj_B.thresh_tmp = k * k;
  Test_Traj_B.thresh = dk / Test_Traj_B.thresh_tmp;
  if (Test_Traj_B.thresh > 1.0E-6) {
    Test_Traj_B.igt_size_idx_0 = 1;
    Test_Traj_B.igt_size_idx_1 = 1;
  } else {
    Test_Traj_B.igt_size_idx_0 = 0;
    Test_Traj_B.igt_size_idx_1 = 0;
  }

  if (Test_Traj_B.thresh < -1.0E-6) {
    Test_Traj_B.ilt_size_idx_0 = 1;
    Test_Traj_B.ilt_size_idx_1 = 1;
  } else {
    Test_Traj_B.ilt_size_idx_0 = 0;
    Test_Traj_B.ilt_size_idx_1 = 0;
  }

  if ((-1.0E-6 <= Test_Traj_B.thresh) && (Test_Traj_B.thresh <= 1.0E-6)) {
    Test_Traj_B.ism_size_idx_0 = 1;
    Test_Traj_B.ism_size_idx_1 = 1;
  } else {
    Test_Traj_B.ism_size_idx_0 = 0;
    Test_Traj_B.ism_size_idx_1 = 0;
  }

  if ((x * x * fabs(dk) < 0.001) && (fabs(k * x) < 0.001)) {
    Test_Traj_B.ii_size_idx_0_n = 1;
    Test_Traj_B.ii_size_idx_1 = 1;
  } else {
    Test_Traj_B.ii_size_idx_0_n = 0;
    Test_Traj_B.ii_size_idx_1 = 0;
  }

  z.re = 0.0;
  z.im = 0.0;
  if ((Test_Traj_B.igt_size_idx_0 != 0) && (Test_Traj_B.igt_size_idx_1 != 0)) {
    Test_Traj_B.thresh_tmp = theta - Test_Traj_B.thresh_tmp / (2.0 * dk);
    Test_Traj_B.nhikx_data.re = Test_Traj_B.thresh_tmp * 0.0;
    Test_Traj_B.nhikx_data.im = Test_Traj_B.thresh_tmp;
    Test_Traj_B.hidkxx_data = Test_Traj_B.nhikx_data;
    Test_Traj_B.t_data_k = z;
    Test_Traj_B.tmp_size_om[0] = 1;
    Test_Traj_B.tmp_size_om[1] = 1;
    Test_Traj_B.dk_size_c[0] = 1;
    Test_Traj_B.dk_size_c[1] = 1;
    Test_Traj_B.tmp_size_ol[0] = 1;
    Test_Traj_B.tmp_size_ol[1] = 1;
    Test_Traj_B.tmp_data_df = 3.1415926535897931 / dk;
    Test_Traj_B.dk_data = dk / 3.1415926535897931;
    Test_Traj_B.tmp_data_pz = 3.1415926535897931 * dk;
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 < 1;
         Test_Traj_B.igt_size_idx_0++) {
      if (Test_Traj_B.hidkxx_data.im == 0.0) {
        Test_Traj_B.thresh_tmp = exp(Test_Traj_B.hidkxx_data.re);
        Test_Traj_B.thresh = 0.0;
      } else if (rtIsInf(Test_Traj_B.hidkxx_data.im) && rtIsInf
                 (Test_Traj_B.hidkxx_data.re) && (Test_Traj_B.hidkxx_data.re <
                  0.0)) {
        Test_Traj_B.thresh_tmp = 0.0;
        Test_Traj_B.thresh = 0.0;
      } else {
        Test_Traj_B.thresh = exp(Test_Traj_B.hidkxx_data.re / 2.0);
        Test_Traj_B.thresh_tmp = Test_Traj_B.thresh * cos
          (Test_Traj_B.hidkxx_data.im) * Test_Traj_B.thresh;
        Test_Traj_B.thresh *= Test_Traj_B.thresh * sin
          (Test_Traj_B.hidkxx_data.im);
      }

      Test_Traj_B.hidkxx_data.re = Test_Traj_B.thresh_tmp;
      Test_Traj_B.hidkxx_data.im = Test_Traj_B.thresh;
    }

    Test_Traj_sqrt_ph(&Test_Traj_B.tmp_data_df, Test_Traj_B.tmp_size_om,
                      &Test_Traj_B.tmp_data_aw, Test_Traj_B.tmp_size_o);
    Test_Traj_sqrt_ph(&Test_Traj_B.dk_data, Test_Traj_B.dk_size_c,
                      &Test_Traj_B.tmp_data_df, Test_Traj_B.tmp_size_om);
    Test_Traj_sqrt_ph(&Test_Traj_B.tmp_data_pz, Test_Traj_B.tmp_size_ol,
                      &Test_Traj_B.dk_data, Test_Traj_B.dk_size_c);
    Test_Traj_B.tmp_size_ih[0] = Test_Traj_B.tmp_size_om[0];
    Test_Traj_B.tmp_size_ih[1] = Test_Traj_B.tmp_size_om[1];
    Test_Traj_B.igt_size_idx_1 = Test_Traj_B.tmp_size_om[0] *
      Test_Traj_B.tmp_size_om[1];
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 <
         Test_Traj_B.igt_size_idx_1; Test_Traj_B.igt_size_idx_0++) {
      Test_Traj_B.tmp_data_pz = Test_Traj_B.tmp_data_df * x + k /
        Test_Traj_B.dk_data;
    }

    Test_Traj_fresnel_p(&Test_Traj_B.tmp_data_pz, Test_Traj_B.tmp_size_ih,
                        &Test_Traj_B.nhikx_data, Test_Traj_B.tmp_size_om);
    Test_Traj_B.tmp_size_ok[0] = 1;
    Test_Traj_B.tmp_size_ok[1] = 1;
    Test_Traj_B.tmp_data_pz = 3.1415926535897931 * dk;
    Test_Traj_sqrt_ph(&Test_Traj_B.tmp_data_pz, Test_Traj_B.tmp_size_ok,
                      &Test_Traj_B.tmp_data_df, Test_Traj_B.tmp_size_om);
    Test_Traj_B.k_size_o[0] = 1;
    Test_Traj_B.k_size_o[1] = 1;
    Test_Traj_B.tmp_data_df = k / Test_Traj_B.tmp_data_df;
    Test_Traj_fresnel_p(&Test_Traj_B.tmp_data_df, Test_Traj_B.k_size_o,
                        &Test_Traj_B.nikx_data, Test_Traj_B.tmp_size_ih);
    Test_Traj_B.igt_size_idx_1 = Test_Traj_B.tmp_size_o[0] *
      Test_Traj_B.tmp_size_o[1];
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 <
         Test_Traj_B.igt_size_idx_1; Test_Traj_B.igt_size_idx_0++) {
      Test_Traj_B.thresh_tmp = Test_Traj_B.tmp_data_aw *
        Test_Traj_B.hidkxx_data.re;
      Test_Traj_B.thresh = Test_Traj_B.tmp_data_aw * Test_Traj_B.hidkxx_data.im;
      Test_Traj_B.nhikx_data_re = Test_Traj_B.nhikx_data.re -
        Test_Traj_B.nikx_data.re;
      Test_Traj_B.nhikx_data_im = Test_Traj_B.nhikx_data.im -
        Test_Traj_B.nikx_data.im;
      Test_Traj_B.t_data_k.re = Test_Traj_B.thresh_tmp *
        Test_Traj_B.nhikx_data_re - Test_Traj_B.thresh *
        Test_Traj_B.nhikx_data_im;
      Test_Traj_B.t_data_k.im = Test_Traj_B.thresh_tmp *
        Test_Traj_B.nhikx_data_im + Test_Traj_B.thresh *
        Test_Traj_B.nhikx_data_re;
    }

    z = Test_Traj_B.t_data_k;
  }

  if ((Test_Traj_B.ilt_size_idx_0 != 0) && (Test_Traj_B.ilt_size_idx_1 != 0)) {
    Test_Traj_B.thresh_tmp = theta - k * k / (2.0 * dk);
    Test_Traj_B.nhikx_data.re = Test_Traj_B.thresh_tmp * -0.0;
    Test_Traj_B.nhikx_data.im = -Test_Traj_B.thresh_tmp;
    Test_Traj_B.hidkxx_data = Test_Traj_B.nhikx_data;
    Test_Traj_B.t_data_k = z;
    Test_Traj_B.tmp_size_oc[0] = 1;
    Test_Traj_B.tmp_size_oc[1] = 1;
    Test_Traj_B.dk_size_h[0] = 1;
    Test_Traj_B.dk_size_h[1] = 1;
    Test_Traj_B.tmp_size_c[0] = 1;
    Test_Traj_B.tmp_size_c[1] = 1;
    Test_Traj_B.tmp_data_df = -3.1415926535897931 / dk;
    Test_Traj_B.dk_data = -dk / 3.1415926535897931;
    Test_Traj_B.tmp_data_pz = -3.1415926535897931 * dk;
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 < 1;
         Test_Traj_B.igt_size_idx_0++) {
      if (Test_Traj_B.hidkxx_data.im == 0.0) {
        Test_Traj_B.thresh_tmp = exp(Test_Traj_B.hidkxx_data.re);
        Test_Traj_B.thresh = 0.0;
      } else if (rtIsInf(Test_Traj_B.hidkxx_data.im) && rtIsInf
                 (Test_Traj_B.hidkxx_data.re) && (Test_Traj_B.hidkxx_data.re <
                  0.0)) {
        Test_Traj_B.thresh_tmp = 0.0;
        Test_Traj_B.thresh = 0.0;
      } else {
        Test_Traj_B.thresh = exp(Test_Traj_B.hidkxx_data.re / 2.0);
        Test_Traj_B.thresh_tmp = Test_Traj_B.thresh * cos
          (Test_Traj_B.hidkxx_data.im) * Test_Traj_B.thresh;
        Test_Traj_B.thresh *= Test_Traj_B.thresh * sin
          (Test_Traj_B.hidkxx_data.im);
      }

      Test_Traj_B.hidkxx_data.re = Test_Traj_B.thresh_tmp;
      Test_Traj_B.hidkxx_data.im = Test_Traj_B.thresh;
    }

    Test_Traj_sqrt_ph(&Test_Traj_B.tmp_data_df, Test_Traj_B.tmp_size_oc,
                      &Test_Traj_B.tmp_data_aw, Test_Traj_B.tmp_size_o);
    Test_Traj_sqrt_ph(&Test_Traj_B.dk_data, Test_Traj_B.dk_size_h,
                      &Test_Traj_B.tmp_data_df, Test_Traj_B.tmp_size_om);
    Test_Traj_sqrt_ph(&Test_Traj_B.tmp_data_pz, Test_Traj_B.tmp_size_c,
                      &Test_Traj_B.dk_data, Test_Traj_B.dk_size_c);
    Test_Traj_B.tmp_size_g[0] = Test_Traj_B.tmp_size_om[0];
    Test_Traj_B.tmp_size_g[1] = Test_Traj_B.tmp_size_om[1];
    Test_Traj_B.igt_size_idx_1 = Test_Traj_B.tmp_size_om[0] *
      Test_Traj_B.tmp_size_om[1];
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 <
         Test_Traj_B.igt_size_idx_1; Test_Traj_B.igt_size_idx_0++) {
      Test_Traj_B.tmp_data_pz = Test_Traj_B.tmp_data_df * x - k /
        Test_Traj_B.dk_data;
    }

    Test_Traj_fresnel_p(&Test_Traj_B.tmp_data_pz, Test_Traj_B.tmp_size_g,
                        &Test_Traj_B.nhikx_data, Test_Traj_B.tmp_size_om);
    Test_Traj_B.tmp_size_gf[0] = 1;
    Test_Traj_B.tmp_size_gf[1] = 1;
    Test_Traj_B.tmp_data_pz = -3.1415926535897931 * dk;
    Test_Traj_sqrt_ph(&Test_Traj_B.tmp_data_pz, Test_Traj_B.tmp_size_gf,
                      &Test_Traj_B.tmp_data_df, Test_Traj_B.tmp_size_om);
    Test_Traj_B.k_size_a[0] = 1;
    Test_Traj_B.k_size_a[1] = 1;
    Test_Traj_B.tmp_data_df = -k / Test_Traj_B.tmp_data_df;
    Test_Traj_fresnel_p(&Test_Traj_B.tmp_data_df, Test_Traj_B.k_size_a,
                        &Test_Traj_B.nikx_data, Test_Traj_B.tmp_size_ih);
    Test_Traj_B.igt_size_idx_1 = Test_Traj_B.tmp_size_o[0] *
      Test_Traj_B.tmp_size_o[1];
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 <
         Test_Traj_B.igt_size_idx_1; Test_Traj_B.igt_size_idx_0++) {
      Test_Traj_B.thresh_tmp = Test_Traj_B.tmp_data_aw *
        Test_Traj_B.hidkxx_data.re;
      Test_Traj_B.thresh = Test_Traj_B.tmp_data_aw * Test_Traj_B.hidkxx_data.im;
      Test_Traj_B.nhikx_data_re = Test_Traj_B.nhikx_data.re -
        Test_Traj_B.nikx_data.re;
      Test_Traj_B.nhikx_data_im = Test_Traj_B.nhikx_data.im -
        Test_Traj_B.nikx_data.im;
      Test_Traj_B.t_data_k.re = Test_Traj_B.thresh_tmp *
        Test_Traj_B.nhikx_data_re - Test_Traj_B.thresh *
        Test_Traj_B.nhikx_data_im;
      Test_Traj_B.t_data_k.im = -(Test_Traj_B.thresh_tmp *
        Test_Traj_B.nhikx_data_im + Test_Traj_B.thresh *
        Test_Traj_B.nhikx_data_re);
    }

    z = Test_Traj_B.t_data_k;
  }

  if ((Test_Traj_B.ism_size_idx_0 != 0) && (Test_Traj_B.ism_size_idx_1 != 0)) {
    Test_Traj_B.nikx_data.re = k * -0.0 * x;
    Test_Traj_B.nikx_data.im = x * -k;
    Test_Traj_B.k_size_p[0] = 1;
    Test_Traj_B.k_size_p[1] = 1;
    if (Test_Traj_B.nikx_data.im == 0.0) {
      Test_Traj_B.nhikx_data.re = Test_Traj_B.nikx_data.re / 2.0;
      Test_Traj_B.nhikx_data.im = 0.0;
    } else if (Test_Traj_B.nikx_data.re == 0.0) {
      Test_Traj_B.nhikx_data.re = 0.0;
      Test_Traj_B.nhikx_data.im = Test_Traj_B.nikx_data.im / 2.0;
    } else {
      Test_Traj_B.nhikx_data.re = (rtNaN);
      Test_Traj_B.nhikx_data.im = Test_Traj_B.nikx_data.im / 2.0;
    }

    Test_Traj_B.tmp_data_df = k;
    Test_Traj_power_phmyu(&Test_Traj_B.tmp_data_df, Test_Traj_B.k_size_p,
                          &Test_Traj_B.tmp_data_aw, Test_Traj_B.tmp_size_o);
    Test_Traj_B.thresh = 0.5 * dk;
    if (Test_Traj_B.thresh == 0.0) {
      Test_Traj_B.thresh_tmp = 0.0 * dk / Test_Traj_B.tmp_data_aw;
      Test_Traj_B.thresh = 0.0;
    } else if (0.0 * dk == 0.0) {
      Test_Traj_B.thresh_tmp = 0.0;
      Test_Traj_B.thresh /= Test_Traj_B.tmp_data_aw;
    } else {
      Test_Traj_B.thresh_tmp = (rtNaN);
      Test_Traj_B.thresh /= Test_Traj_B.tmp_data_aw;
    }

    Test_Traj_B.y_data[0].re = -2.0 * Test_Traj_B.thresh_tmp;
    Test_Traj_B.y_data[0].im = -2.0 * Test_Traj_B.thresh;
    Test_Traj_B.x_size_g[0] = 1;
    Test_Traj_B.x_size_g[1] = 1;
    Test_Traj_B.tmp_data_pz = x;
    Test_Traj_power_phmyu(&Test_Traj_B.tmp_data_pz, Test_Traj_B.x_size_g,
                          &Test_Traj_B.tmp_data_aw, Test_Traj_B.tmp_size_o);
    Test_Traj_B.hidkxx_data.re = dk * 0.0 * Test_Traj_B.tmp_data_aw;
    Test_Traj_B.hidkxx_data.im = dk * 0.5 * Test_Traj_B.tmp_data_aw;
    Test_Traj_B.t_data_k.re = -Test_Traj_B.nikx_data.re;
    Test_Traj_B.t_data_k.im = -Test_Traj_B.nikx_data.im;
    Test_Traj_B.e_data_d4 = Test_Traj_B.t_data_k;
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 < 1;
         Test_Traj_B.igt_size_idx_0++) {
      if (Test_Traj_B.e_data_d4.im == 0.0) {
        Test_Traj_B.thresh_tmp = exp(Test_Traj_B.e_data_d4.re);
        Test_Traj_B.thresh = 0.0;
      } else if (rtIsInf(Test_Traj_B.e_data_d4.im) && rtIsInf
                 (Test_Traj_B.e_data_d4.re) && (Test_Traj_B.e_data_d4.re < 0.0))
      {
        Test_Traj_B.thresh_tmp = 0.0;
        Test_Traj_B.thresh = 0.0;
      } else {
        Test_Traj_B.thresh = exp(Test_Traj_B.e_data_d4.re / 2.0);
        Test_Traj_B.thresh_tmp = Test_Traj_B.thresh * cos
          (Test_Traj_B.e_data_d4.im) * Test_Traj_B.thresh;
        Test_Traj_B.thresh *= Test_Traj_B.thresh * sin(Test_Traj_B.e_data_d4.im);
      }

      Test_Traj_B.e_data_d4.re = Test_Traj_B.thresh_tmp;
      Test_Traj_B.e_data_d4.im = Test_Traj_B.thresh;
    }

    if (Test_Traj_B.nikx_data.im == 0.0) {
      if (0.0 - Test_Traj_B.e_data_d4.im == 0.0) {
        Test_Traj_B.t_data_k.re = (1.0 - Test_Traj_B.e_data_d4.re) /
          Test_Traj_B.nikx_data.re;
        Test_Traj_B.t_data_k.im = 0.0;
      } else if (1.0 - Test_Traj_B.e_data_d4.re == 0.0) {
        Test_Traj_B.t_data_k.re = 0.0;
        Test_Traj_B.t_data_k.im = (0.0 - Test_Traj_B.e_data_d4.im) /
          Test_Traj_B.nikx_data.re;
      } else {
        Test_Traj_B.t_data_k.re = (1.0 - Test_Traj_B.e_data_d4.re) /
          Test_Traj_B.nikx_data.re;
        Test_Traj_B.t_data_k.im = (0.0 - Test_Traj_B.e_data_d4.im) /
          Test_Traj_B.nikx_data.re;
      }
    } else if (Test_Traj_B.nikx_data.re == 0.0) {
      if (1.0 - Test_Traj_B.e_data_d4.re == 0.0) {
        Test_Traj_B.t_data_k.re = (0.0 - Test_Traj_B.e_data_d4.im) /
          Test_Traj_B.nikx_data.im;
        Test_Traj_B.t_data_k.im = 0.0;
      } else if (0.0 - Test_Traj_B.e_data_d4.im == 0.0) {
        Test_Traj_B.t_data_k.re = 0.0;
        Test_Traj_B.t_data_k.im = -((1.0 - Test_Traj_B.e_data_d4.re) /
          Test_Traj_B.nikx_data.im);
      } else {
        Test_Traj_B.t_data_k.re = (0.0 - Test_Traj_B.e_data_d4.im) /
          Test_Traj_B.nikx_data.im;
        Test_Traj_B.t_data_k.im = -((1.0 - Test_Traj_B.e_data_d4.re) /
          Test_Traj_B.nikx_data.im);
      }
    } else {
      Test_Traj_B.t_data_k.re = (rtNaN);
      Test_Traj_B.t_data_k.im = (rtNaN);
    }

    Test_Traj_B.nikx_data.re = -Test_Traj_B.e_data_d4.re;
    Test_Traj_B.nikx_data.im = -Test_Traj_B.e_data_d4.im;
    Test_Traj_B.e_data_d4 = Test_Traj_B.t_data_k;
    for (Test_Traj_B.ilt_size_idx_0 = 0; Test_Traj_B.ilt_size_idx_0 < 20;
         Test_Traj_B.ilt_size_idx_0++) {
      Test_Traj_B.igt_size_idx_0 = ((Test_Traj_B.ilt_size_idx_0 + 1) << 1) - 1;
      Test_Traj_B.thresh_tmp = static_cast<real_T>(Test_Traj_B.ilt_size_idx_0 +
        1) + Test_Traj_B.nhikx_data.re;
      for (Test_Traj_B.ilt_size_idx_1 = 0; Test_Traj_B.ilt_size_idx_1 < 1;
           Test_Traj_B.ilt_size_idx_1++) {
        Test_Traj_B.thresh = (Test_Traj_B.nikx_data.re * Test_Traj_B.thresh_tmp
                              - Test_Traj_B.nikx_data.im *
                              Test_Traj_B.nhikx_data.im) + static_cast<real_T>
          (Test_Traj_B.igt_size_idx_0) * Test_Traj_B.t_data_k.re;
        Test_Traj_B.nhikx_data_re = (Test_Traj_B.nikx_data.re *
          Test_Traj_B.nhikx_data.im + Test_Traj_B.nikx_data.im *
          Test_Traj_B.thresh_tmp) + static_cast<real_T>
          (Test_Traj_B.igt_size_idx_0) * Test_Traj_B.t_data_k.im;
        Test_Traj_B.t_data_k.re = Test_Traj_B.y_data[0].re * Test_Traj_B.thresh
          - Test_Traj_B.y_data[0].im * Test_Traj_B.nhikx_data_re;
        Test_Traj_B.t_data_k.im = Test_Traj_B.y_data[0].re *
          Test_Traj_B.nhikx_data_re + Test_Traj_B.y_data[0].im *
          Test_Traj_B.thresh;
      }

      Test_Traj_B.ilt_size_idx_1 = Test_Traj_B.ilt_size_idx_0 + 2;
      for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 < 1;
           Test_Traj_B.igt_size_idx_0++) {
        Test_Traj_B.e_data_c.re = Test_Traj_B.e_data_d4.re +
          Test_Traj_B.t_data_k.re;
        Test_Traj_B.e_data_c.im = Test_Traj_B.e_data_d4.im +
          Test_Traj_B.t_data_k.im;
        Test_Traj_B.thresh_tmp = Test_Traj_B.nikx_data.re *
          Test_Traj_B.hidkxx_data.re - Test_Traj_B.nikx_data.im *
          Test_Traj_B.hidkxx_data.im;
        Test_Traj_B.thresh = Test_Traj_B.nikx_data.re *
          Test_Traj_B.hidkxx_data.im + Test_Traj_B.nikx_data.im *
          Test_Traj_B.hidkxx_data.re;
        if (Test_Traj_B.thresh == 0.0) {
          Test_Traj_B.nikx_data.re = Test_Traj_B.thresh_tmp / static_cast<real_T>
            (Test_Traj_B.ilt_size_idx_1);
          Test_Traj_B.nikx_data.im = 0.0;
        } else if (Test_Traj_B.thresh_tmp == 0.0) {
          Test_Traj_B.nikx_data.re = 0.0;
          Test_Traj_B.nikx_data.im = Test_Traj_B.thresh / static_cast<real_T>
            (Test_Traj_B.ilt_size_idx_1);
        } else {
          Test_Traj_B.nikx_data.re = Test_Traj_B.thresh_tmp / static_cast<real_T>
            (Test_Traj_B.ilt_size_idx_1);
          Test_Traj_B.nikx_data.im = Test_Traj_B.thresh / static_cast<real_T>
            (Test_Traj_B.ilt_size_idx_1);
        }

        Test_Traj_B.e_data_d4 = Test_Traj_B.e_data_c;
      }
    }

    Test_Traj_B.nhikx_data.re = theta * 0.0;
    Test_Traj_B.nhikx_data.im = theta;
    Test_Traj_B.hidkxx_data = Test_Traj_B.nhikx_data;
    for (Test_Traj_B.igt_size_idx_0 = 0; Test_Traj_B.igt_size_idx_0 < 1;
         Test_Traj_B.igt_size_idx_0++) {
      if (Test_Traj_B.hidkxx_data.im == 0.0) {
        Test_Traj_B.thresh_tmp = exp(Test_Traj_B.hidkxx_data.re);
        Test_Traj_B.thresh = 0.0;
      } else if (rtIsInf(Test_Traj_B.hidkxx_data.im) && rtIsInf
                 (Test_Traj_B.hidkxx_data.re) && (Test_Traj_B.hidkxx_data.re <
                  0.0)) {
        Test_Traj_B.thresh_tmp = 0.0;
        Test_Traj_B.thresh = 0.0;
      } else {
        Test_Traj_B.thresh = exp(Test_Traj_B.hidkxx_data.re / 2.0);
        Test_Traj_B.thresh_tmp = Test_Traj_B.thresh * cos
          (Test_Traj_B.hidkxx_data.im) * Test_Traj_B.thresh;
        Test_Traj_B.thresh *= Test_Traj_B.thresh * sin
          (Test_Traj_B.hidkxx_data.im);
      }

      Test_Traj_B.hidkxx_data.re = Test_Traj_B.thresh_tmp;
      Test_Traj_B.hidkxx_data.im = Test_Traj_B.thresh;
    }

    Test_Traj_B.thresh_tmp = x * Test_Traj_B.e_data_d4.re;
    Test_Traj_B.thresh = x * Test_Traj_B.e_data_d4.im;
    Test_Traj_B.nc.re = Test_Traj_B.thresh_tmp * Test_Traj_B.hidkxx_data.re -
      Test_Traj_B.thresh * Test_Traj_B.hidkxx_data.im;
    Test_Traj_B.nc.im = Test_Traj_B.thresh_tmp * Test_Traj_B.hidkxx_data.im +
      Test_Traj_B.thresh * Test_Traj_B.hidkxx_data.re;
    z = Test_Traj_B.nc;
  }

  if ((Test_Traj_B.ii_size_idx_0_n != 0) && (Test_Traj_B.ii_size_idx_1 != 0)) {
    Test_Traj_B.x_size[0] = 1;
    Test_Traj_B.x_size[1] = 1;
    Test_Traj_B.dk_size[0] = 1;
    Test_Traj_B.dk_size[1] = 1;
    Test_Traj_B.k_size[0] = 1;
    Test_Traj_B.k_size[1] = 1;
    Test_Traj_B.theta_size[0] = 1;
    Test_Traj_B.theta_size[1] = 1;
    Test_Traj_B.tmp_data_pz = x;
    Test_Traj_B.dk_data = dk;
    Test_Traj_B.tmp_data_df = k;
    Test_Traj_B.tmp_data_aw = theta;
    Test_Traj_fresnelgzero(&Test_Traj_B.tmp_data_pz, Test_Traj_B.x_size,
      &Test_Traj_B.dk_data, Test_Traj_B.dk_size, &Test_Traj_B.tmp_data_df,
      Test_Traj_B.k_size, &Test_Traj_B.tmp_data_aw, Test_Traj_B.theta_size,
      &Test_Traj_B.nhikx_data, &Test_Traj_B.tmp_size_c3);
    z = Test_Traj_B.nhikx_data;
  }

  return z;
}

static void Test_Traj_getPositionalState(const real_T hcd[21], const creal_T
  hip[21], const real_T hl[20], const real_T k0[20], const real_T k1[20], const
  real_T course[21], const real_T hpp_breaks[21], const real_T hpp_coefs[80],
  const real_T hspp_breaks[21], const real_T hspp_coefs[80], const real_T
  happ_breaks[21], const real_T happ_coefs[80], const real_T hjpp_breaks[21],
  const real_T hjpp_coefs[80], creal_T *position, creal_T *velocity, creal_T
  *acceleration, creal_T *jerk)
{
  Test_Traj_B.ip = Test_Traj_bsearch(hpp_breaks, 0.0) - 1;
  Test_Traj_B.ip_d = Test_Traj_bsearch(hspp_breaks, 0.0) - 1;
  Test_Traj_B.ip_c = Test_Traj_bsearch(happ_breaks, 0.0) - 1;
  Test_Traj_B.ip_j = Test_Traj_bsearch(hjpp_breaks, 0.0) - 1;
  Test_Traj_B.l_0 = (((0.0 - hpp_breaks[Test_Traj_B.ip]) *
                      hpp_coefs[Test_Traj_B.ip] + hpp_coefs[Test_Traj_B.ip + 20])
                     * (0.0 - hpp_breaks[Test_Traj_B.ip]) +
                     hpp_coefs[Test_Traj_B.ip + 40]) * (0.0 -
    hpp_breaks[Test_Traj_B.ip]) + hpp_coefs[Test_Traj_B.ip + 60];
  Test_Traj_B.l_1 = (((0.0 - hspp_breaks[Test_Traj_B.ip_d]) *
                      hspp_coefs[Test_Traj_B.ip_d] + hspp_coefs[Test_Traj_B.ip_d
                      + 20]) * (0.0 - hspp_breaks[Test_Traj_B.ip_d]) +
                     hspp_coefs[Test_Traj_B.ip_d + 40]) * (0.0 -
    hspp_breaks[Test_Traj_B.ip_d]) + hspp_coefs[Test_Traj_B.ip_d + 60];
  Test_Traj_B.l_2 = (((0.0 - happ_breaks[Test_Traj_B.ip_c]) *
                      happ_coefs[Test_Traj_B.ip_c] + happ_coefs[Test_Traj_B.ip_c
                      + 20]) * (0.0 - happ_breaks[Test_Traj_B.ip_c]) +
                     happ_coefs[Test_Traj_B.ip_c + 40]) * (0.0 -
    happ_breaks[Test_Traj_B.ip_c]) + happ_coefs[Test_Traj_B.ip_c + 60];
  Test_Traj_B.l_3 = (((0.0 - hjpp_breaks[Test_Traj_B.ip_j]) *
                      hjpp_coefs[Test_Traj_B.ip_j] + hjpp_coefs[Test_Traj_B.ip_j
                      + 20]) * (0.0 - hjpp_breaks[Test_Traj_B.ip_j]) +
                     hjpp_coefs[Test_Traj_B.ip_j + 40]) * (0.0 -
    hjpp_breaks[Test_Traj_B.ip_j]) + hjpp_coefs[Test_Traj_B.ip_j + 60];
  Test_Traj_B.b_dl = Test_Traj_B.l_0;
  Test_Traj_B.ip = 0;
  if (Test_Traj_B.l_0 > hcd[20]) {
    for (Test_Traj_B.ip_d = 0; Test_Traj_B.ip_d < 1; Test_Traj_B.ip_d++) {
      Test_Traj_B.ip++;
    }
  }

  if (0 <= Test_Traj_B.ip - 1) {
    Test_Traj_B.b_dl = hcd[20];
  }

  Test_Traj_B.c_j = Test_Traj_B.b_dl;
  Test_Traj_B.ip = 0;
  if (Test_Traj_B.b_dl < hcd[0]) {
    for (Test_Traj_B.ip_d = 0; Test_Traj_B.ip_d < 1; Test_Traj_B.ip_d++) {
      Test_Traj_B.ip++;
    }
  }

  if (0 <= Test_Traj_B.ip - 1) {
    Test_Traj_B.c_j = hcd[0];
  }

  Test_Traj_B.ip = static_cast<int32_T>(Test_Traj_mapElementsToBins
    (Test_Traj_B.c_j, hcd, false)) - 1;
  Test_Traj_B.l_0 = (k1[Test_Traj_B.ip] - k0[Test_Traj_B.ip]) /
    hl[Test_Traj_B.ip];
  Test_Traj_B.d_nx = Test_Traj_B.l_0;
  Test_Traj_B.ip_d = 0;
  if (rtIsNaN(Test_Traj_B.l_0)) {
    for (Test_Traj_B.ip_c = 0; Test_Traj_B.ip_c < 1; Test_Traj_B.ip_c++) {
      Test_Traj_B.ip_d++;
    }
  }

  if (0 <= Test_Traj_B.ip_d - 1) {
    Test_Traj_B.d_nx = 0.0;
  }

  Test_Traj_B.l = Test_Traj_B.c_j - hcd[Test_Traj_B.ip];
  Test_Traj_B.f_1_im_tmp = (Test_Traj_B.d_nx / 2.0 * Test_Traj_B.l +
    k0[Test_Traj_B.ip]) * Test_Traj_B.l + course[Test_Traj_B.ip];
  if (Test_Traj_B.f_1_im_tmp == 0.0) {
    Test_Traj_B.l_0 = exp(((Test_Traj_B.d_nx / 2.0 * Test_Traj_B.l +
      k0[Test_Traj_B.ip]) * Test_Traj_B.l + course[Test_Traj_B.ip]) * 0.0);
    Test_Traj_B.f_1_im = 0.0;
    Test_Traj_B.y_re = exp(((Test_Traj_B.d_nx / 2.0 * Test_Traj_B.l +
      k0[Test_Traj_B.ip]) * Test_Traj_B.l + course[Test_Traj_B.ip]) * 0.0);
    Test_Traj_B.r_j = 0.0;
  } else {
    Test_Traj_B.r_j = exp(Test_Traj_B.f_1_im_tmp * 0.0 / 2.0);
    Test_Traj_B.l_0 = Test_Traj_B.r_j * cos(Test_Traj_B.f_1_im_tmp) *
      Test_Traj_B.r_j;
    Test_Traj_B.f_1_im = Test_Traj_B.r_j * sin(Test_Traj_B.f_1_im_tmp) *
      Test_Traj_B.r_j;
    Test_Traj_B.r_j = exp(((Test_Traj_B.d_nx / 2.0 * Test_Traj_B.l +
      k0[Test_Traj_B.ip]) * Test_Traj_B.l + course[Test_Traj_B.ip]) * 0.0 / 2.0);
    Test_Traj_B.y_re = Test_Traj_B.r_j * cos(Test_Traj_B.f_1_im_tmp) *
      Test_Traj_B.r_j;
    Test_Traj_B.r_j *= Test_Traj_B.r_j * sin(Test_Traj_B.f_1_im_tmp);
  }

  Test_Traj_B.re_p = Test_Traj_B.d_nx * 0.0 * Test_Traj_B.l + k0[Test_Traj_B.ip]
    * 0.0;
  Test_Traj_B.im_tmp = Test_Traj_B.d_nx * Test_Traj_B.l + k0[Test_Traj_B.ip];
  Test_Traj_B.f_2_re = Test_Traj_B.y_re * Test_Traj_B.re_p - Test_Traj_B.r_j *
    Test_Traj_B.im_tmp;
  Test_Traj_B.f_2_im = Test_Traj_B.y_re * Test_Traj_B.im_tmp + Test_Traj_B.r_j *
    Test_Traj_B.re_p;
  if (Test_Traj_B.f_1_im_tmp == 0.0) {
    Test_Traj_B.y_re = exp(((Test_Traj_B.d_nx / 2.0 * Test_Traj_B.l +
      k0[Test_Traj_B.ip]) * Test_Traj_B.l + course[Test_Traj_B.ip]) * 0.0);
    Test_Traj_B.r_j = 0.0;
  } else {
    Test_Traj_B.r_j = exp(((Test_Traj_B.d_nx / 2.0 * Test_Traj_B.l +
      k0[Test_Traj_B.ip]) * Test_Traj_B.l + course[Test_Traj_B.ip]) * 0.0 / 2.0);
    Test_Traj_B.y_re = Test_Traj_B.r_j * cos(Test_Traj_B.f_1_im_tmp) *
      Test_Traj_B.r_j;
    Test_Traj_B.r_j *= Test_Traj_B.r_j * sin(Test_Traj_B.f_1_im_tmp);
  }

  Test_Traj_B.dc = Test_Traj_fresnelg2(Test_Traj_B.l, Test_Traj_B.d_nx,
    k0[Test_Traj_B.ip], course[Test_Traj_B.ip]);
  position->re = hip[Test_Traj_B.ip].re + Test_Traj_B.dc.re;
  position->im = hip[Test_Traj_B.ip].im + Test_Traj_B.dc.im;
  velocity->re = Test_Traj_B.l_1 * Test_Traj_B.l_0;
  velocity->im = Test_Traj_B.l_1 * Test_Traj_B.f_1_im;
  Test_Traj_B.l = Test_Traj_B.l_1 * Test_Traj_B.l_1;
  acceleration->re = Test_Traj_B.l * Test_Traj_B.f_2_re + Test_Traj_B.l_0 *
    Test_Traj_B.l_2;
  acceleration->im = Test_Traj_B.l * Test_Traj_B.f_2_im + Test_Traj_B.f_1_im *
    Test_Traj_B.l_2;
  Test_Traj_B.re_p = 0.0 * Test_Traj_B.d_nx - Test_Traj_B.im_tmp *
    Test_Traj_B.im_tmp;
  Test_Traj_B.im_tmp = Test_Traj_rt_powd_snf(Test_Traj_B.l_1, 3.0);
  jerk->re = (3.0 * Test_Traj_B.f_2_re * Test_Traj_B.l_1 * Test_Traj_B.l_2 +
              Test_Traj_B.l_0 * Test_Traj_B.l_3) + (Test_Traj_B.y_re *
    Test_Traj_B.re_p - Test_Traj_B.r_j * Test_Traj_B.d_nx) * Test_Traj_B.im_tmp;
  jerk->im = (3.0 * Test_Traj_B.f_2_im * Test_Traj_B.l_1 * Test_Traj_B.l_2 +
              Test_Traj_B.f_1_im * Test_Traj_B.l_3) + (Test_Traj_B.y_re *
    Test_Traj_B.d_nx + Test_Traj_B.r_j * Test_Traj_B.re_p) * Test_Traj_B.im_tmp;
}

static real_T Test_Traj_ppval(const real_T pp_breaks[21], const real_T pp_coefs
  [80], real_T x)
{
  real_T v;
  int32_T ip;
  real_T xloc;
  if (rtIsNaN(x)) {
    v = x;
  } else {
    ip = Test_Traj_bsearch(pp_breaks, x) - 1;
    xloc = x - pp_breaks[ip];
    v = ((xloc * pp_coefs[ip] + pp_coefs[ip + 20]) * xloc + pp_coefs[ip + 40]) *
      xloc + pp_coefs[ip + 60];
  }

  return v;
}

static void waypointTrajectory_fetchPositio(const waypointTrajectory_Test_Traj_T
  *obj, real_T position[3], real_T velocity[3], real_T acceleration[3], real_T
  jerk[3])
{
  for (Test_Traj_B.i12 = 0; Test_Traj_B.i12 < 21; Test_Traj_B.i12++) {
    Test_Traj_B.dv6[Test_Traj_B.i12] = 0.017453292519943295 * obj->
      Course[Test_Traj_B.i12];
  }

  Test_Traj_getPositionalState(obj->HorizontalCumulativeDistance,
    obj->HorizontalInitialPosition, obj->HorizontalPiecewiseLength,
    obj->HorizontalCurvatureInitial, obj->HorizontalCurvatureFinal,
    Test_Traj_B.dv6, obj->HorizontalDistancePiecewisePolynomial.breaks,
    obj->HorizontalDistancePiecewisePolynomial.coefs,
    obj->HorizontalSpeedPiecewisePolynomial.breaks,
    obj->HorizontalSpeedPiecewisePolynomial.coefs,
    obj->HorizontalAccelerationPiecewisePolynomial.breaks,
    obj->HorizontalAccelerationPiecewisePolynomial.coefs,
    obj->HorizontalJerkPiecewisePolynomial.breaks,
    obj->HorizontalJerkPiecewisePolynomial.coefs, &Test_Traj_B.ph,
    &Test_Traj_B.vh, &Test_Traj_B.ah, &Test_Traj_B.jh);
  position[0] = Test_Traj_B.ph.re;
  position[1] = Test_Traj_B.ph.im;
  position[2] = Test_Traj_ppval(obj->VerticalDistancePiecewisePolynomial.breaks,
    obj->VerticalDistancePiecewisePolynomial.coefs, 0.0);
  velocity[0] = Test_Traj_B.vh.re;
  velocity[1] = Test_Traj_B.vh.im;
  velocity[2] = Test_Traj_ppval(obj->VerticalSpeedPiecewisePolynomial.breaks,
    obj->VerticalSpeedPiecewisePolynomial.coefs, 0.0);
  acceleration[0] = Test_Traj_B.ah.re;
  acceleration[1] = Test_Traj_B.ah.im;
  acceleration[2] = Test_Traj_ppval
    (obj->VerticalAccelerationPiecewisePolynomial.breaks,
     obj->VerticalAccelerationPiecewisePolynomial.coefs, 0.0);
  jerk[0] = Test_Traj_B.jh.re;
  jerk[1] = Test_Traj_B.jh.im;
  jerk[2] = Test_Traj_ppval(obj->VerticalJerkPiecewisePolynomial.breaks,
    obj->VerticalJerkPiecewisePolynomial.coefs, 0.0);
}

static void Test_waypointTrajectory_setPose(waypointTrajectory_Test_Traj_T *obj)
{
  if ((obj->TimeOfArrival[0] <= 0.0) && (0.0 <= obj->TimeOfArrival[20])) {
    waypointTrajectory_fetchPositio(obj, Test_Traj_B.position,
      Test_Traj_B.velocity, Test_Traj_B.acceleration, Test_Traj_B.jerk);
  } else {
    if (0.0 > obj->TimeOfArrival[20]) {
      obj->IsDoneStatus = true;
    }
  }
}

static waypointTrajectory_Test_Traj_T *waypointTrajectory_waypointTraj
  (waypointTrajectory_Test_Traj_T *obj, const real_T varargin_1[63], const
   real_T varargin_2[21], real_T varargin_4, const real_T varargin_8_a[21],
   const real_T varargin_8_b[21], const real_T varargin_8_c[21], const real_T
   varargin_8_d[21])
{
  waypointTrajectory_Test_Traj_T *b_obj;
  obj->ReferenceFrame[0] = 'N';
  obj->ReferenceFrame[1] = 'E';
  obj->ReferenceFrame[2] = 'D';
  obj->isInitialized = 0;
  b_obj = obj;
  waypointTrajectory_setPropertie(obj, varargin_1, varargin_2, varargin_4,
    varargin_8_a, varargin_8_b, varargin_8_c, varargin_8_d);
  waypointTrajectory_setupPositio(obj);
  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 21; Test_Traj_B.i_nz++) {
    Test_Traj_B.q_a[Test_Traj_B.i_nz] = obj->Quaternions.a[Test_Traj_B.i_nz];
  }

  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 21; Test_Traj_B.i_nz++) {
    Test_Traj_B.q_b[Test_Traj_B.i_nz] = obj->Quaternions.b[Test_Traj_B.i_nz];
  }

  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 21; Test_Traj_B.i_nz++) {
    Test_Traj_B.q_c[Test_Traj_B.i_nz] = obj->Quaternions.c[Test_Traj_B.i_nz];
  }

  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 21; Test_Traj_B.i_nz++) {
    Test_Traj_B.q_d[Test_Traj_B.i_nz] = obj->Quaternions.d[Test_Traj_B.i_nz];
  }

  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 21; Test_Traj_B.i_nz++) {
    Test_Traj_B.t[Test_Traj_B.i_nz] = obj->TimeOfArrival[Test_Traj_B.i_nz];
  }

  Test_Traj_quaternionC2fit(Test_Traj_B.q_a, Test_Traj_B.q_b, Test_Traj_B.q_c,
    Test_Traj_B.q_d, Test_Traj_B.t, Test_Traj_B.h, Test_Traj_B.dtheta,
    Test_Traj_B.e, Test_Traj_B.w);
  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 20; Test_Traj_B.i_nz++) {
    obj->SegmentTimes[Test_Traj_B.i_nz] = Test_Traj_B.h[Test_Traj_B.i_nz];
  }

  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 20; Test_Traj_B.i_nz++) {
    obj->RadianSlewAngles[Test_Traj_B.i_nz] =
      Test_Traj_B.dtheta[Test_Traj_B.i_nz];
  }

  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 60; Test_Traj_B.i_nz++) {
    obj->AxesOfRotation[Test_Traj_B.i_nz] = Test_Traj_B.e[Test_Traj_B.i_nz];
  }

  for (Test_Traj_B.i_nz = 0; Test_Traj_B.i_nz < 63; Test_Traj_B.i_nz++) {
    obj->RadianAngularVelocities[Test_Traj_B.i_nz] =
      Test_Traj_B.w[Test_Traj_B.i_nz];
  }

  waypointTrajectory_setupWaypoin(obj);
  obj->CurrentTime = 0.0;
  Test_waypointTrajectory_setPose(obj);
  obj->IsDoneStatus = false;
  return b_obj;
}

static void Test_Traj_getPositionalState_p(const real_T hcd[21], const creal_T
  hip[21], const real_T hl[20], const real_T k0[20], const real_T k1[20], const
  real_T course[21], const real_T hpp_breaks[21], const real_T hpp_coefs[80],
  const real_T hspp_breaks[21], const real_T hspp_coefs[80], const real_T
  happ_breaks[21], const real_T happ_coefs[80], const real_T hjpp_breaks[21],
  const real_T hjpp_coefs[80], real_T t, creal_T *position, creal_T *velocity,
  creal_T *acceleration, creal_T *jerk)
{
  if (rtIsNaN(t)) {
    Test_Traj_B.l_0_h = t;
    Test_Traj_B.l_1_l = t;
    Test_Traj_B.l_2_c = t;
    Test_Traj_B.xloc = t;
  } else {
    Test_Traj_B.ip_o = Test_Traj_bsearch(hpp_breaks, t) - 1;
    Test_Traj_B.xloc = t - hpp_breaks[Test_Traj_B.ip_o];
    Test_Traj_B.l_0_h = ((Test_Traj_B.xloc * hpp_coefs[Test_Traj_B.ip_o] +
                          hpp_coefs[Test_Traj_B.ip_o + 20]) * Test_Traj_B.xloc +
                         hpp_coefs[Test_Traj_B.ip_o + 40]) * Test_Traj_B.xloc +
      hpp_coefs[Test_Traj_B.ip_o + 60];
    Test_Traj_B.ip_o = Test_Traj_bsearch(hspp_breaks, t) - 1;
    Test_Traj_B.xloc = t - hspp_breaks[Test_Traj_B.ip_o];
    Test_Traj_B.l_1_l = ((Test_Traj_B.xloc * hspp_coefs[Test_Traj_B.ip_o] +
                          hspp_coefs[Test_Traj_B.ip_o + 20]) * Test_Traj_B.xloc
                         + hspp_coefs[Test_Traj_B.ip_o + 40]) * Test_Traj_B.xloc
      + hspp_coefs[Test_Traj_B.ip_o + 60];
    Test_Traj_B.ip_o = Test_Traj_bsearch(happ_breaks, t) - 1;
    Test_Traj_B.xloc = t - happ_breaks[Test_Traj_B.ip_o];
    Test_Traj_B.l_2_c = ((Test_Traj_B.xloc * happ_coefs[Test_Traj_B.ip_o] +
                          happ_coefs[Test_Traj_B.ip_o + 20]) * Test_Traj_B.xloc
                         + happ_coefs[Test_Traj_B.ip_o + 40]) * Test_Traj_B.xloc
      + happ_coefs[Test_Traj_B.ip_o + 60];
    Test_Traj_B.ip_o = Test_Traj_bsearch(hjpp_breaks, t) - 1;
    Test_Traj_B.xloc = t - hjpp_breaks[Test_Traj_B.ip_o];
    Test_Traj_B.xloc = ((Test_Traj_B.xloc * hjpp_coefs[Test_Traj_B.ip_o] +
                         hjpp_coefs[Test_Traj_B.ip_o + 20]) * Test_Traj_B.xloc +
                        hjpp_coefs[Test_Traj_B.ip_o + 40]) * Test_Traj_B.xloc +
      hjpp_coefs[Test_Traj_B.ip_o + 60];
  }

  Test_Traj_B.b_ag = Test_Traj_B.l_0_h;
  Test_Traj_B.ip_o = 0;
  if (Test_Traj_B.l_0_h > hcd[20]) {
    for (Test_Traj_B.i_dh = 0; Test_Traj_B.i_dh < 1; Test_Traj_B.i_dh++) {
      Test_Traj_B.ip_o++;
    }
  }

  if (0 <= Test_Traj_B.ip_o - 1) {
    Test_Traj_B.b_ag = hcd[20];
  }

  Test_Traj_B.c_i = Test_Traj_B.b_ag;
  Test_Traj_B.ip_o = 0;
  if (Test_Traj_B.b_ag < hcd[0]) {
    for (Test_Traj_B.i_dh = 0; Test_Traj_B.i_dh < 1; Test_Traj_B.i_dh++) {
      Test_Traj_B.ip_o++;
    }
  }

  if (0 <= Test_Traj_B.ip_o - 1) {
    Test_Traj_B.c_i = hcd[0];
  }

  Test_Traj_B.ip_o = static_cast<int32_T>(Test_Traj_mapElementsToBins
    (Test_Traj_B.c_i, hcd, false)) - 1;
  Test_Traj_B.l_0_h = (k1[Test_Traj_B.ip_o] - k0[Test_Traj_B.ip_o]) /
    hl[Test_Traj_B.ip_o];
  Test_Traj_B.d_lt = Test_Traj_B.l_0_h;
  Test_Traj_B.i_dh = 0;
  if (rtIsNaN(Test_Traj_B.l_0_h)) {
    for (Test_Traj_B.e_i_b = 0; Test_Traj_B.e_i_b < 1; Test_Traj_B.e_i_b++) {
      Test_Traj_B.i_dh++;
    }
  }

  if (0 <= Test_Traj_B.i_dh - 1) {
    Test_Traj_B.d_lt = 0.0;
  }

  Test_Traj_B.l_c = Test_Traj_B.c_i - hcd[Test_Traj_B.ip_o];
  Test_Traj_B.f_1_im_tmp_c = (Test_Traj_B.d_lt / 2.0 * Test_Traj_B.l_c +
    k0[Test_Traj_B.ip_o]) * Test_Traj_B.l_c + course[Test_Traj_B.ip_o];
  if (Test_Traj_B.f_1_im_tmp_c == 0.0) {
    Test_Traj_B.l_0_h = exp(((Test_Traj_B.d_lt / 2.0 * Test_Traj_B.l_c +
      k0[Test_Traj_B.ip_o]) * Test_Traj_B.l_c + course[Test_Traj_B.ip_o]) * 0.0);
    Test_Traj_B.f_1_im_c = 0.0;
    Test_Traj_B.y_re_m = exp(((Test_Traj_B.d_lt / 2.0 * Test_Traj_B.l_c +
      k0[Test_Traj_B.ip_o]) * Test_Traj_B.l_c + course[Test_Traj_B.ip_o]) * 0.0);
    Test_Traj_B.r_i = 0.0;
  } else {
    Test_Traj_B.r_i = exp(Test_Traj_B.f_1_im_tmp_c * 0.0 / 2.0);
    Test_Traj_B.l_0_h = Test_Traj_B.r_i * cos(Test_Traj_B.f_1_im_tmp_c) *
      Test_Traj_B.r_i;
    Test_Traj_B.f_1_im_c = Test_Traj_B.r_i * sin(Test_Traj_B.f_1_im_tmp_c) *
      Test_Traj_B.r_i;
    Test_Traj_B.r_i = exp(((Test_Traj_B.d_lt / 2.0 * Test_Traj_B.l_c +
      k0[Test_Traj_B.ip_o]) * Test_Traj_B.l_c + course[Test_Traj_B.ip_o]) * 0.0 /
                          2.0);
    Test_Traj_B.y_re_m = Test_Traj_B.r_i * cos(Test_Traj_B.f_1_im_tmp_c) *
      Test_Traj_B.r_i;
    Test_Traj_B.r_i *= Test_Traj_B.r_i * sin(Test_Traj_B.f_1_im_tmp_c);
  }

  Test_Traj_B.re_n = Test_Traj_B.d_lt * 0.0 * Test_Traj_B.l_c +
    k0[Test_Traj_B.ip_o] * 0.0;
  Test_Traj_B.im_tmp_n = Test_Traj_B.d_lt * Test_Traj_B.l_c +
    k0[Test_Traj_B.ip_o];
  Test_Traj_B.f_2_re_a = Test_Traj_B.y_re_m * Test_Traj_B.re_n - Test_Traj_B.r_i
    * Test_Traj_B.im_tmp_n;
  Test_Traj_B.f_2_im_i = Test_Traj_B.y_re_m * Test_Traj_B.im_tmp_n +
    Test_Traj_B.r_i * Test_Traj_B.re_n;
  if (Test_Traj_B.f_1_im_tmp_c == 0.0) {
    Test_Traj_B.y_re_m = exp(((Test_Traj_B.d_lt / 2.0 * Test_Traj_B.l_c +
      k0[Test_Traj_B.ip_o]) * Test_Traj_B.l_c + course[Test_Traj_B.ip_o]) * 0.0);
    Test_Traj_B.r_i = 0.0;
  } else {
    Test_Traj_B.r_i = exp(((Test_Traj_B.d_lt / 2.0 * Test_Traj_B.l_c +
      k0[Test_Traj_B.ip_o]) * Test_Traj_B.l_c + course[Test_Traj_B.ip_o]) * 0.0 /
                          2.0);
    Test_Traj_B.y_re_m = Test_Traj_B.r_i * cos(Test_Traj_B.f_1_im_tmp_c) *
      Test_Traj_B.r_i;
    Test_Traj_B.r_i *= Test_Traj_B.r_i * sin(Test_Traj_B.f_1_im_tmp_c);
  }

  Test_Traj_B.dc1 = Test_Traj_fresnelg2(Test_Traj_B.l_c, Test_Traj_B.d_lt,
    k0[Test_Traj_B.ip_o], course[Test_Traj_B.ip_o]);
  position->re = hip[Test_Traj_B.ip_o].re + Test_Traj_B.dc1.re;
  position->im = hip[Test_Traj_B.ip_o].im + Test_Traj_B.dc1.im;
  velocity->re = Test_Traj_B.l_1_l * Test_Traj_B.l_0_h;
  velocity->im = Test_Traj_B.l_1_l * Test_Traj_B.f_1_im_c;
  Test_Traj_B.l_c = Test_Traj_B.l_1_l * Test_Traj_B.l_1_l;
  acceleration->re = Test_Traj_B.l_c * Test_Traj_B.f_2_re_a + Test_Traj_B.l_0_h *
    Test_Traj_B.l_2_c;
  acceleration->im = Test_Traj_B.l_c * Test_Traj_B.f_2_im_i +
    Test_Traj_B.f_1_im_c * Test_Traj_B.l_2_c;
  Test_Traj_B.re_n = 0.0 * Test_Traj_B.d_lt - Test_Traj_B.im_tmp_n *
    Test_Traj_B.im_tmp_n;
  Test_Traj_B.im_tmp_n = Test_Traj_rt_powd_snf(Test_Traj_B.l_1_l, 3.0);
  jerk->re = (3.0 * Test_Traj_B.f_2_re_a * Test_Traj_B.l_1_l * Test_Traj_B.l_2_c
              + Test_Traj_B.l_0_h * Test_Traj_B.xloc) + (Test_Traj_B.y_re_m *
    Test_Traj_B.re_n - Test_Traj_B.r_i * Test_Traj_B.d_lt) *
    Test_Traj_B.im_tmp_n;
  jerk->im = (3.0 * Test_Traj_B.f_2_im_i * Test_Traj_B.l_1_l * Test_Traj_B.l_2_c
              + Test_Traj_B.f_1_im_c * Test_Traj_B.xloc) + (Test_Traj_B.y_re_m *
    Test_Traj_B.d_lt + Test_Traj_B.r_i * Test_Traj_B.re_n) *
    Test_Traj_B.im_tmp_n;
}

static void waypointTrajectory_fetchPosit_p(const waypointTrajectory_Test_Traj_T
  *obj, real_T simulationTime, real_T position[3], real_T velocity[3], real_T
  acceleration[3], real_T jerk[3])
{
  for (Test_Traj_B.i17 = 0; Test_Traj_B.i17 < 21; Test_Traj_B.i17++) {
    Test_Traj_B.dv7[Test_Traj_B.i17] = 0.017453292519943295 * obj->
      Course[Test_Traj_B.i17];
  }

  Test_Traj_getPositionalState_p(obj->HorizontalCumulativeDistance,
    obj->HorizontalInitialPosition, obj->HorizontalPiecewiseLength,
    obj->HorizontalCurvatureInitial, obj->HorizontalCurvatureFinal,
    Test_Traj_B.dv7, obj->HorizontalDistancePiecewisePolynomial.breaks,
    obj->HorizontalDistancePiecewisePolynomial.coefs,
    obj->HorizontalSpeedPiecewisePolynomial.breaks,
    obj->HorizontalSpeedPiecewisePolynomial.coefs,
    obj->HorizontalAccelerationPiecewisePolynomial.breaks,
    obj->HorizontalAccelerationPiecewisePolynomial.coefs,
    obj->HorizontalJerkPiecewisePolynomial.breaks,
    obj->HorizontalJerkPiecewisePolynomial.coefs, simulationTime,
    &Test_Traj_B.ph_g, &Test_Traj_B.vh_e, &Test_Traj_B.ah_i, &Test_Traj_B.jh_e);
  position[0] = Test_Traj_B.ph_g.re;
  position[1] = Test_Traj_B.ph_g.im;
  position[2] = Test_Traj_ppval(obj->VerticalDistancePiecewisePolynomial.breaks,
    obj->VerticalDistancePiecewisePolynomial.coefs, simulationTime);
  velocity[0] = Test_Traj_B.vh_e.re;
  velocity[1] = Test_Traj_B.vh_e.im;
  velocity[2] = Test_Traj_ppval(obj->VerticalSpeedPiecewisePolynomial.breaks,
    obj->VerticalSpeedPiecewisePolynomial.coefs, simulationTime);
  acceleration[0] = Test_Traj_B.ah_i.re;
  acceleration[1] = Test_Traj_B.ah_i.im;
  acceleration[2] = Test_Traj_ppval
    (obj->VerticalAccelerationPiecewisePolynomial.breaks,
     obj->VerticalAccelerationPiecewisePolynomial.coefs, simulationTime);
  jerk[0] = Test_Traj_B.jh_e.re;
  jerk[1] = Test_Traj_B.jh_e.im;
  jerk[2] = Test_Traj_ppval(obj->VerticalJerkPiecewisePolynomial.breaks,
    obj->VerticalJerkPiecewisePolynomial.coefs, simulationTime);
}

static void Test_Traj_cross(const real_T a_data[], const int32_T a_size[2],
  const real_T b_data[], real_T c_data[], int32_T c_size[2])
{
  int32_T i2;
  int32_T i3;
  int32_T iStart;
  int32_T i1;
  c_size[0] = a_size[0];
  c_size[1] = 3;
  if (a_size[0] != 0) {
    Test_Traj_B.stride = a_size[0];
    Test_Traj_B.iNext = a_size[0] * 3;
    for (iStart = 1; Test_Traj_B.iNext < 0 ? iStart >= 1 : iStart <= 1; iStart +=
         Test_Traj_B.iNext) {
      Test_Traj_B.iEnd = 1 + Test_Traj_B.stride;
      for (i1 = 1; i1 < Test_Traj_B.iEnd; i1++) {
        i2 = (i1 + Test_Traj_B.stride) - 1;
        i3 = i2 + Test_Traj_B.stride;
        c_data[i1 - 1] = a_data[i2] * b_data[i3] - a_data[i3] * b_data[i2];
        Test_Traj_B.c_data_tmp = a_data[i1 - 1];
        Test_Traj_B.c_data_tmp_l = b_data[i1 - 1];
        c_data[i2] = Test_Traj_B.c_data_tmp_l * a_data[i3] -
          Test_Traj_B.c_data_tmp * b_data[i3];
        c_data[i3] = Test_Traj_B.c_data_tmp * b_data[i2] -
          Test_Traj_B.c_data_tmp_l * a_data[i2];
      }
    }
  }
}

static void Test_Traj_dot(const real_T a_data[], const int32_T a_size[2], const
  real_T b_data[], real_T c_data[], int32_T *c_size)
{
  int32_T i1;
  int32_T j;
  int32_T ix;
  int32_T iy;
  *c_size = a_size[0];
  Test_Traj_B.vstride = a_size[0];
  Test_Traj_B.ic = -1;
  i1 = 0;
  for (j = 0; j < Test_Traj_B.vstride; j++) {
    Test_Traj_B.ic++;
    i1++;
    ix = i1 - 1;
    iy = i1 - 1;
    Test_Traj_B.c_fu = a_data[ix] * b_data[iy];
    ix += Test_Traj_B.vstride;
    iy += Test_Traj_B.vstride;
    Test_Traj_B.c_fu += a_data[ix] * b_data[iy];
    ix += Test_Traj_B.vstride;
    iy += Test_Traj_B.vstride;
    c_data[Test_Traj_B.ic] = a_data[ix] * b_data[iy] + Test_Traj_B.c_fu;
  }
}

static void Test_Traj_bsxmul(const real_T x_data[], const int32_T *x_size, const
  real_T y_data[], const int32_T y_size[2], real_T z_data[], int32_T z_size[2])
{
  int32_T k;
  int32_T acoef;
  int32_T bcoef;
  int32_T k_0;
  int32_T csz_idx_0;
  if (y_size[0] == 1) {
    csz_idx_0 = *x_size;
  } else if (*x_size == 1) {
    csz_idx_0 = y_size[0];
  } else if (*x_size == y_size[0]) {
    csz_idx_0 = *x_size;
  } else if (y_size[0] < *x_size) {
    csz_idx_0 = y_size[0];
  } else {
    csz_idx_0 = *x_size;
  }

  z_size[0] = csz_idx_0;
  z_size[1] = 3;
  if (csz_idx_0 != 0) {
    acoef = (*x_size != 1);
    bcoef = (y_size[0] != 1);
    for (k = 0; k < 3; k++) {
      for (k_0 = 0; k_0 < csz_idx_0; k_0++) {
        z_data[k_0 + csz_idx_0 * k] = y_data[bcoef * k_0 + y_size[0] * k] *
          x_data[acoef * k_0];
      }
    }
  }
}

static void Test_Traj_bsxmul_p(const real_T x_data[], const int32_T x_size[2],
  const real_T y_data[], const int32_T y_size[2], real_T z_data[], int32_T
  z_size[2])
{
  int32_T acoef;
  int32_T ia;
  int32_T k;
  int32_T acoef_0;
  int32_T bcoef;
  int32_T k_0;
  int32_T csz_idx_0;
  if (y_size[0] == 1) {
    csz_idx_0 = x_size[0];
  } else if (x_size[0] == 1) {
    csz_idx_0 = y_size[0];
  } else if (x_size[0] == y_size[0]) {
    csz_idx_0 = x_size[0];
  } else if (y_size[0] < x_size[0]) {
    csz_idx_0 = y_size[0];
  } else {
    csz_idx_0 = x_size[0];
  }

  z_size[0] = csz_idx_0;
  z_size[1] = 3;
  if (csz_idx_0 != 0) {
    acoef = (x_size[1] != 1);
    acoef_0 = (x_size[0] != 1);
    bcoef = (y_size[0] != 1);
    for (k = 0; k < 3; k++) {
      ia = acoef * k;
      for (k_0 = 0; k_0 < csz_idx_0; k_0++) {
        z_data[k_0 + csz_idx_0 * k] = x_data[acoef_0 * k_0 + x_size[0] * ia] *
          y_data[bcoef * k_0 + y_size[0] * k];
      }
    }
  }
}

static void Test_Traj_slew3_init(real_T dt, real_T dtheta, const real_T e[3],
  const real_T wi[3], const real_T wf[3], real_T aa[9], real_T bb[9], real_T cc
  [6], real_T dd[3])
{
  if (dtheta > 1.0E-6) {
    Test_Traj_B.ii_size_idx_0_i = 1;
    Test_Traj_B.ii_size_idx_1_d = 1;
  } else {
    Test_Traj_B.ii_size_idx_0_i = 0;
    Test_Traj_B.ii_size_idx_1_d = 0;
  }

  Test_Traj_B.bvec[0] = wf[0];
  Test_Traj_B.bvec[1] = wf[1];
  Test_Traj_B.bvec[2] = wf[2];
  if ((Test_Traj_B.ii_size_idx_0_i != 0) && (Test_Traj_B.ii_size_idx_1_d != 0))
  {
    Test_Traj_B.e_size_m[0] = 1;
    Test_Traj_B.e_size_m[1] = 3;
    Test_Traj_B.e_size_c[0] = 1;
    Test_Traj_B.e_size_c[1] = 3;
    Test_Traj_B.e_size_g[0] = 1;
    Test_Traj_B.e_size_g[1] = 3;
    for (Test_Traj_B.ii_size_idx_0_i = 0; Test_Traj_B.ii_size_idx_0_i < 3;
         Test_Traj_B.ii_size_idx_0_i++) {
      Test_Traj_B.e_data_d[Test_Traj_B.ii_size_idx_0_i] =
        e[Test_Traj_B.ii_size_idx_0_i];
      Test_Traj_B.wf_data[Test_Traj_B.ii_size_idx_0_i] =
        wf[Test_Traj_B.ii_size_idx_0_i];
      Test_Traj_B.e_data_k[Test_Traj_B.ii_size_idx_0_i] =
        e[Test_Traj_B.ii_size_idx_0_i];
      Test_Traj_B.wf_data_p[Test_Traj_B.ii_size_idx_0_i] =
        wf[Test_Traj_B.ii_size_idx_0_i];
      Test_Traj_B.e_data_p[Test_Traj_B.ii_size_idx_0_i] =
        e[Test_Traj_B.ii_size_idx_0_i];
      Test_Traj_B.e_data_m4[Test_Traj_B.ii_size_idx_0_i] =
        e[Test_Traj_B.ii_size_idx_0_i];
    }

    Test_Traj_cross(Test_Traj_B.e_data_d, Test_Traj_B.e_size_m,
                    Test_Traj_B.wf_data, Test_Traj_B.bvec2_data,
                    Test_Traj_B.bvec2_size);
    Test_Traj_dot(Test_Traj_B.e_data_k, Test_Traj_B.e_size_c,
                  Test_Traj_B.wf_data_p, &Test_Traj_B.tmp_data_du,
                  &Test_Traj_B.tmp_size_bz);
    Test_Traj_bsxmul(&Test_Traj_B.tmp_data_du, &Test_Traj_B.tmp_size_bz,
                     Test_Traj_B.e_data_p, Test_Traj_B.e_size_g,
                     Test_Traj_B.e_data_d, Test_Traj_B.e_size_m);
    Test_Traj_cross(Test_Traj_B.bvec2_data, Test_Traj_B.bvec2_size,
                    Test_Traj_B.e_data_m4, Test_Traj_B.e_data_p,
                    Test_Traj_B.e_size_g);
    Test_Traj_B.tmp_size_bn[0] = 1;
    Test_Traj_B.tmp_size_bn[1] = 1;
    Test_Traj_B.tmp_size_po[0] = 1;
    Test_Traj_B.tmp_size_po[1] = 1;
    Test_Traj_B.tmp_data_du = 0.5 * sin(dtheta) * dtheta / (1.0 - cos(dtheta));
    Test_Traj_B.tmp_data_l = 0.5 * dtheta;
    Test_Traj_bsxmul_p(&Test_Traj_B.tmp_data_du, Test_Traj_B.tmp_size_bn,
                       Test_Traj_B.e_data_p, Test_Traj_B.e_size_g,
                       Test_Traj_B.e_data_m4, Test_Traj_B.e_size_c);
    Test_Traj_bsxmul_p(&Test_Traj_B.tmp_data_l, Test_Traj_B.tmp_size_po,
                       Test_Traj_B.bvec2_data, Test_Traj_B.bvec2_size,
                       Test_Traj_B.e_data_p, Test_Traj_B.e_size_g);
    Test_Traj_B.loop_ub_nc = Test_Traj_B.e_size_m[0];
    for (Test_Traj_B.ii_size_idx_0_i = 0; Test_Traj_B.ii_size_idx_0_i < 3;
         Test_Traj_B.ii_size_idx_0_i++) {
      for (Test_Traj_B.ii_size_idx_1_d = 0; Test_Traj_B.ii_size_idx_1_d <
           Test_Traj_B.loop_ub_nc; Test_Traj_B.ii_size_idx_1_d++) {
        Test_Traj_B.bvec[Test_Traj_B.ii_size_idx_0_i] =
          (Test_Traj_B.e_data_d[Test_Traj_B.e_size_m[0] *
           Test_Traj_B.ii_size_idx_0_i + Test_Traj_B.ii_size_idx_1_d] +
           Test_Traj_B.e_data_m4[Test_Traj_B.e_size_c[0] *
           Test_Traj_B.ii_size_idx_0_i + Test_Traj_B.ii_size_idx_1_d]) +
          Test_Traj_B.e_data_p[Test_Traj_B.e_size_g[0] *
          Test_Traj_B.ii_size_idx_0_i + Test_Traj_B.ii_size_idx_1_d];
      }
    }
  }

  bb[0] = wi[0];
  aa[6] = e[0] * dtheta;
  bb[6] = Test_Traj_B.bvec[0];
  aa[0] = wi[0] * dt;
  Test_Traj_B.aa_tmp = Test_Traj_B.bvec[0] * dt;
  aa[3] = Test_Traj_B.aa_tmp - 3.0 * aa[6];
  bb[3] = ((Test_Traj_B.aa_tmp - 3.0 * aa[6]) * 2.0 + 2.0 * aa[0]) / dt;
  cc[0] = ((2.0 * aa[0] + 2.0 * aa[3]) / dt + 2.0 * wi[0]) / dt;
  cc[3] = (2.0 * Test_Traj_B.bvec[0] + bb[3]) / dt;
  dd[0] = (cc[0] + cc[3]) / dt;
  bb[1] = wi[1];
  aa[7] = e[1] * dtheta;
  bb[7] = Test_Traj_B.bvec[1];
  aa[1] = wi[1] * dt;
  Test_Traj_B.aa_tmp = Test_Traj_B.bvec[1] * dt;
  aa[4] = Test_Traj_B.aa_tmp - 3.0 * aa[7];
  bb[4] = ((Test_Traj_B.aa_tmp - 3.0 * aa[7]) * 2.0 + 2.0 * aa[1]) / dt;
  cc[1] = ((2.0 * aa[1] + 2.0 * aa[4]) / dt + 2.0 * wi[1]) / dt;
  cc[4] = (2.0 * Test_Traj_B.bvec[1] + bb[4]) / dt;
  dd[1] = (cc[1] + cc[4]) / dt;
  bb[2] = wi[2];
  aa[8] = e[2] * dtheta;
  bb[8] = Test_Traj_B.bvec[2];
  aa[2] = wi[2] * dt;
  Test_Traj_B.aa_tmp = Test_Traj_B.bvec[2] * dt;
  aa[5] = Test_Traj_B.aa_tmp - 3.0 * aa[8];
  bb[5] = ((Test_Traj_B.aa_tmp - 3.0 * aa[8]) * 2.0 + 2.0 * aa[2]) / dt;
  cc[2] = ((2.0 * aa[2] + 2.0 * aa[5]) / dt + 2.0 * wi[2]) / dt;
  cc[5] = (2.0 * Test_Traj_B.bvec[2] + bb[5]) / dt;
  dd[2] = (cc[2] + cc[5]) / dt;
  if (dt <= 0.0) {
    Test_Traj_B.ii_size_idx_0_i = 1;
    Test_Traj_B.ii_size_idx_1_d = 1;
  } else {
    Test_Traj_B.ii_size_idx_0_i = 0;
    Test_Traj_B.ii_size_idx_1_d = 0;
  }

  Test_Traj_B.loop_ub_nc = Test_Traj_B.ii_size_idx_0_i *
    Test_Traj_B.ii_size_idx_1_d;
  for (Test_Traj_B.ii_size_idx_0_i = 0; Test_Traj_B.ii_size_idx_0_i < 3;
       Test_Traj_B.ii_size_idx_0_i++) {
    for (Test_Traj_B.ii_size_idx_1_d = 0; Test_Traj_B.ii_size_idx_1_d < 3;
         Test_Traj_B.ii_size_idx_1_d++) {
      if (0 <= Test_Traj_B.loop_ub_nc - 1) {
        Test_Traj_B.aa_tmp_d = Test_Traj_B.ii_size_idx_1_d + 3 *
          Test_Traj_B.ii_size_idx_0_i;
        aa[Test_Traj_B.aa_tmp_d] = 0.0;
        bb[Test_Traj_B.aa_tmp_d] = 0.0;
      }
    }

    if (0 <= Test_Traj_B.loop_ub_nc - 1) {
      dd[Test_Traj_B.ii_size_idx_0_i] = 0.0;
    }

    for (Test_Traj_B.ii_size_idx_1_d = 0; Test_Traj_B.ii_size_idx_1_d <
         Test_Traj_B.loop_ub_nc; Test_Traj_B.ii_size_idx_1_d++) {
      cc[Test_Traj_B.ii_size_idx_0_i] = 0.0;
      cc[Test_Traj_B.ii_size_idx_0_i + 3] = 0.0;
    }
  }
}

static void Test_Traj_bsxmul_ph(const real_T x[3], real_T y, real_T z[3])
{
  z[0] = x[0] * y;
  z[1] = x[1] * y;
  z[2] = x[2] * y;
}

static void Test_Traj_bsxmul_phm(real_T x, const real_T y[3], real_T z[3])
{
  z[0] = x * y[0];
  z[1] = x * y[1];
  z[2] = x * y[2];
}

static void Test_Traj_bsxdiv(const real_T x_data[], const int32_T x_size[2],
  const real_T y_data[], const int32_T y_size[2], real_T z_data[], int32_T
  z_size[2])
{
  int32_T bcoef;
  int32_T ib;
  int32_T k;
  int32_T acoef;
  int32_T bcoef_0;
  int32_T k_0;
  int32_T csz_idx_0;
  if (y_size[0] == 1) {
    csz_idx_0 = x_size[0];
  } else if (x_size[0] == 1) {
    csz_idx_0 = y_size[0];
  } else if (x_size[0] == y_size[0]) {
    csz_idx_0 = x_size[0];
  } else if (y_size[0] < x_size[0]) {
    csz_idx_0 = y_size[0];
  } else {
    csz_idx_0 = x_size[0];
  }

  z_size[0] = csz_idx_0;
  z_size[1] = 3;
  if (csz_idx_0 != 0) {
    bcoef = (y_size[1] != 1);
    acoef = (x_size[0] != 1);
    bcoef_0 = (y_size[0] != 1);
    for (k = 0; k < 3; k++) {
      ib = bcoef * k;
      for (k_0 = 0; k_0 < csz_idx_0; k_0++) {
        z_data[k_0 + csz_idx_0 * k] = x_data[acoef * k_0 + x_size[0] * k] /
          y_data[bcoef_0 * k_0 + y_size[0] * ib];
      }
    }
  }
}

static void Test_Traj_sum(const real_T x_data[], const int32_T x_size[2], real_T
  y_data[], int32_T *y_size)
{
  int32_T vstride;
  int32_T xoffset;
  int32_T b_j;
  if (x_size[0] == 0) {
    *y_size = 0;
  } else {
    vstride = x_size[0] - 1;
    *y_size = x_size[0];
    xoffset = ((vstride + 1) << 1) - 1;
    for (b_j = 0; b_j <= vstride; b_j++) {
      y_data[b_j] = x_data[(xoffset + b_j) + 1] + (x_data[(vstride + b_j) + 1] +
        x_data[b_j]);
    }
  }
}

static void Test_Traj_slew3(real_T t, real_T dt, real_T qi_a, real_T qi_b,
  real_T qi_c, real_T qi_d, const real_T a[9], const real_T b[9], const real_T
  c[6], const real_T d[3], real_T *q_a, real_T *q_b, real_T *q_c, real_T *q_d,
  real_T angVel[3], real_T angAcc[3], real_T angJerk[3])
{
  *q_a = 0.0;
  *q_b = 0.0;
  *q_c = 0.0;
  *q_d = 0.0;
  angVel[0] = 0.0;
  angAcc[0] = 0.0;
  angJerk[0] = 0.0;
  angVel[1] = 0.0;
  angAcc[1] = 0.0;
  angJerk[1] = 0.0;
  angVel[2] = 0.0;
  angAcc[2] = 0.0;
  angJerk[2] = 0.0;
  if (!(dt <= 0.0)) {
    Test_Traj_B.x_ef = t / dt;
    Test_Traj_B.x2 = (Test_Traj_B.x_ef - 1.0) * (Test_Traj_B.x_ef - 1.0);
    Test_Traj_bsxmul_ph(&a[6], Test_Traj_B.x_ef, Test_Traj_B.th1_data);
    Test_Traj_bsxmul_phm(Test_Traj_B.x_ef - 1.0, &a[3], Test_Traj_B.qimag);
    Test_Traj_B.th3_data[0] = Test_Traj_B.th1_data[0] + Test_Traj_B.qimag[0];
    Test_Traj_B.th3_data[1] = Test_Traj_B.th1_data[1] + Test_Traj_B.qimag[1];
    Test_Traj_B.th3_data[2] = Test_Traj_B.th1_data[2] + Test_Traj_B.qimag[2];
    Test_Traj_bsxmul_ph(Test_Traj_B.th3_data, Test_Traj_B.x_ef,
                        Test_Traj_B.th1_data);
    Test_Traj_bsxmul_phm(Test_Traj_B.x2, &a[0], Test_Traj_B.qimag);
    Test_Traj_B.th3_data[0] = Test_Traj_B.th1_data[0] + Test_Traj_B.qimag[0];
    Test_Traj_B.th3_data[1] = Test_Traj_B.th1_data[1] + Test_Traj_B.qimag[1];
    Test_Traj_B.th3_data[2] = Test_Traj_B.th1_data[2] + Test_Traj_B.qimag[2];
    Test_Traj_bsxmul_ph(Test_Traj_B.th3_data, Test_Traj_B.x_ef, Test_Traj_B.th0);
    Test_Traj_bsxmul_ph(&b[6], Test_Traj_B.x_ef, Test_Traj_B.th1_data);
    Test_Traj_bsxmul_phm(Test_Traj_B.x_ef - 1.0, &b[3], Test_Traj_B.qimag);
    Test_Traj_B.th3_data[0] = Test_Traj_B.th1_data[0] + Test_Traj_B.qimag[0];
    Test_Traj_B.th3_data[1] = Test_Traj_B.th1_data[1] + Test_Traj_B.qimag[1];
    Test_Traj_B.th3_data[2] = Test_Traj_B.th1_data[2] + Test_Traj_B.qimag[2];
    Test_Traj_bsxmul_ph(Test_Traj_B.th3_data, Test_Traj_B.x_ef, Test_Traj_B.th1);
    Test_Traj_bsxmul_phm(Test_Traj_B.x2, &b[0], Test_Traj_B.th1_data);
    Test_Traj_B.th1[0] += Test_Traj_B.th1_data[0];
    Test_Traj_B.th1[1] += Test_Traj_B.th1_data[1];
    Test_Traj_B.x2 = Test_Traj_B.th1[2] + Test_Traj_B.th1_data[2];
    Test_Traj_B.th1[2] = Test_Traj_B.x2;
    Test_Traj_bsxmul_ph(&c[3], Test_Traj_B.x_ef, Test_Traj_B.th2);
    Test_Traj_bsxmul_phm(Test_Traj_B.x_ef - 1.0, &c[0], Test_Traj_B.th1_data);
    Test_Traj_B.scale_p = 1.0;
    Test_Traj_B.absxk_k = 0.0;
    Test_Traj_B.t_i = 0.0;
    Test_Traj_B.b_qd = 0.0;
    Test_Traj_B.th2[0] += Test_Traj_B.th1_data[0];
    Test_Traj_B.th2[1] += Test_Traj_B.th1_data[1];
    Test_Traj_B.x_ef = Test_Traj_B.th2[2] + Test_Traj_B.th1_data[2];
    Test_Traj_B.th2[2] = Test_Traj_B.x_ef;
    Test_Traj_B.theta = sqrt((Test_Traj_rt_powd_snf(Test_Traj_B.th0[0], 2.0) +
      Test_Traj_rt_powd_snf(Test_Traj_B.th0[1], 2.0)) + Test_Traj_rt_powd_snf
      (Test_Traj_B.th0[2], 2.0));
    Test_Traj_B.st = sin(Test_Traj_B.theta / 2.0);
    if (Test_Traj_B.theta != 0.0) {
      Test_Traj_B.scale_p = cos(Test_Traj_B.theta / 2.0);
      Test_Traj_B.absxk_k = Test_Traj_B.th0[0] / Test_Traj_B.theta *
        Test_Traj_B.st;
      Test_Traj_B.t_i = Test_Traj_B.th0[1] / Test_Traj_B.theta * Test_Traj_B.st;
      Test_Traj_B.b_qd = Test_Traj_B.th0[2] / Test_Traj_B.theta * Test_Traj_B.st;
    }

    *q_a = ((qi_a * Test_Traj_B.scale_p - qi_b * Test_Traj_B.absxk_k) - qi_c *
            Test_Traj_B.t_i) - qi_d * Test_Traj_B.b_qd;
    *q_b = ((qi_a * Test_Traj_B.absxk_k + qi_b * Test_Traj_B.scale_p) + qi_c *
            Test_Traj_B.b_qd) - qi_d * Test_Traj_B.t_i;
    *q_c = ((qi_a * Test_Traj_B.t_i - qi_b * Test_Traj_B.b_qd) + qi_c *
            Test_Traj_B.scale_p) + qi_d * Test_Traj_B.absxk_k;
    *q_d = ((qi_a * Test_Traj_B.b_qd + qi_b * Test_Traj_B.t_i) - qi_c *
            Test_Traj_B.absxk_k) + qi_d * Test_Traj_B.scale_p;
    Test_Traj_B.scale_p = 3.3121686421112381E-170;
    Test_Traj_B.absxk_k = fabs(Test_Traj_B.th0[0]);
    if (Test_Traj_B.absxk_k > 3.3121686421112381E-170) {
      Test_Traj_B.b_qd = 1.0;
      Test_Traj_B.scale_p = Test_Traj_B.absxk_k;
    } else {
      Test_Traj_B.t_i = Test_Traj_B.absxk_k / 3.3121686421112381E-170;
      Test_Traj_B.b_qd = Test_Traj_B.t_i * Test_Traj_B.t_i;
    }

    Test_Traj_B.absxk_k = fabs(Test_Traj_B.th0[1]);
    if (Test_Traj_B.absxk_k > Test_Traj_B.scale_p) {
      Test_Traj_B.t_i = Test_Traj_B.scale_p / Test_Traj_B.absxk_k;
      Test_Traj_B.b_qd = Test_Traj_B.b_qd * Test_Traj_B.t_i * Test_Traj_B.t_i +
        1.0;
      Test_Traj_B.scale_p = Test_Traj_B.absxk_k;
    } else {
      Test_Traj_B.t_i = Test_Traj_B.absxk_k / Test_Traj_B.scale_p;
      Test_Traj_B.b_qd += Test_Traj_B.t_i * Test_Traj_B.t_i;
    }

    Test_Traj_B.absxk_k = fabs(Test_Traj_B.th0[2]);
    if (Test_Traj_B.absxk_k > Test_Traj_B.scale_p) {
      Test_Traj_B.t_i = Test_Traj_B.scale_p / Test_Traj_B.absxk_k;
      Test_Traj_B.b_qd = Test_Traj_B.b_qd * Test_Traj_B.t_i * Test_Traj_B.t_i +
        1.0;
      Test_Traj_B.scale_p = Test_Traj_B.absxk_k;
    } else {
      Test_Traj_B.t_i = Test_Traj_B.absxk_k / Test_Traj_B.scale_p;
      Test_Traj_B.b_qd += Test_Traj_B.t_i * Test_Traj_B.t_i;
    }

    Test_Traj_B.b_qd = Test_Traj_B.scale_p * sqrt(Test_Traj_B.b_qd);
    Test_Traj_B.qimag[0] = Test_Traj_B.th0[0] / Test_Traj_B.b_qd;
    Test_Traj_B.qimag[1] = Test_Traj_B.th0[1] / Test_Traj_B.b_qd;
    Test_Traj_B.qimag[2] = Test_Traj_B.th0[2] / Test_Traj_B.b_qd;
    if (Test_Traj_B.b_qd <= 0.0) {
      Test_Traj_B.ii_size_idx_0_c = 1;
      Test_Traj_B.ii_size_idx_1_i = 1;
    } else {
      Test_Traj_B.ii_size_idx_0_c = 0;
      Test_Traj_B.ii_size_idx_1_i = 0;
    }

    if ((Test_Traj_B.ii_size_idx_0_c == 0) || (Test_Traj_B.ii_size_idx_1_i == 0))
    {
      Test_Traj_B.ii_size_idx_1_i = 0;
    } else {
      Test_Traj_B.ii_size_idx_1_i = 1;
    }

    for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c < 3;
         Test_Traj_B.ii_size_idx_0_c++) {
      if (0 <= Test_Traj_B.ii_size_idx_1_i - 1) {
        Test_Traj_B.qimag[Test_Traj_B.ii_size_idx_0_c] = 0.0;
      }

      angVel[Test_Traj_B.ii_size_idx_0_c] =
        Test_Traj_B.th1[Test_Traj_B.ii_size_idx_0_c];
      angAcc[Test_Traj_B.ii_size_idx_0_c] =
        Test_Traj_B.th2[Test_Traj_B.ii_size_idx_0_c];
    }

    angJerk[0] = d[0] - (Test_Traj_B.th1[1] * Test_Traj_B.x_ef - Test_Traj_B.x2 *
                         Test_Traj_B.th2[1]) * 0.5;
    angJerk[1] = d[1] - (Test_Traj_B.x2 * Test_Traj_B.th2[0] - Test_Traj_B.th1[0]
                         * Test_Traj_B.x_ef) * 0.5;
    angJerk[2] = d[2] - (Test_Traj_B.th1[0] * Test_Traj_B.th2[1] -
                         Test_Traj_B.th1[1] * Test_Traj_B.th2[0]) * 0.5;
    if (Test_Traj_B.b_qd > 1.0E-6) {
      Test_Traj_B.ii_size_idx_0_c = 1;
      Test_Traj_B.ii_size_idx_1_i = 1;
    } else {
      Test_Traj_B.ii_size_idx_0_c = 0;
      Test_Traj_B.ii_size_idx_1_i = 0;
    }

    if ((Test_Traj_B.ii_size_idx_0_c != 0) && (Test_Traj_B.ii_size_idx_1_i != 0))
    {
      Test_Traj_B.ang_size[0] = 1;
      Test_Traj_B.ang_size[1] = 1;
      Test_Traj_B.ang_data = Test_Traj_B.b_qd;
      Test_Traj_B.th1_size[0] = 1;
      Test_Traj_B.th1_size[1] = 3;
      Test_Traj_B.u_size[0] = 1;
      Test_Traj_B.u_size[1] = 3;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c < 3;
           Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.th1_data[Test_Traj_B.ii_size_idx_0_c] =
          Test_Traj_B.th1[Test_Traj_B.ii_size_idx_0_c];
        Test_Traj_B.th0[Test_Traj_B.ii_size_idx_0_c] =
          Test_Traj_B.th2[Test_Traj_B.ii_size_idx_0_c];
        Test_Traj_B.th3_data[Test_Traj_B.ii_size_idx_0_c] =
          d[Test_Traj_B.ii_size_idx_0_c];
        Test_Traj_B.u_data_g[Test_Traj_B.ii_size_idx_0_c] =
          Test_Traj_B.qimag[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_B.ca_data = Test_Traj_B.b_qd;
      Test_Traj_B.sa_size[0] = 1;
      Test_Traj_B.sa_size[1] = 1;
      Test_Traj_B.sa_data = Test_Traj_B.b_qd;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c < 1;
           Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.ca_data = cos(Test_Traj_B.ca_data);
      }

      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c < 1;
           Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.sa_data = sin(Test_Traj_B.sa_data);
      }

      Test_Traj_cross(Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                      Test_Traj_B.th1_data, Test_Traj_B.tmp_data_ge,
                      Test_Traj_B.tmp_size_cg);
      Test_Traj_bsxdiv(Test_Traj_B.tmp_data_ge, Test_Traj_B.tmp_size_cg,
                       &Test_Traj_B.ang_data, Test_Traj_B.ang_size,
                       Test_Traj_B.w_data, Test_Traj_B.w_size);
      Test_Traj_cross(Test_Traj_B.w_data, Test_Traj_B.w_size,
                      Test_Traj_B.u_data_g, Test_Traj_B.udot_data,
                      Test_Traj_B.udot_size);
      Test_Traj_dot(Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                    Test_Traj_B.th1_data, &Test_Traj_B.thd1_tmp_data,
                    &Test_Traj_B.thd1_tmp_size);
      Test_Traj_bsxmul(&Test_Traj_B.thd1_tmp_data, &Test_Traj_B.thd1_tmp_size,
                       Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                       Test_Traj_B.qimag, Test_Traj_B.e_tmp_size);
      Test_Traj_bsxmul_p(&Test_Traj_B.sa_data, Test_Traj_B.sa_size,
                         Test_Traj_B.udot_data, Test_Traj_B.udot_size,
                         Test_Traj_B.th1, Test_Traj_B.e_size);
      Test_Traj_B.tmp_size_p[0] = 1;
      Test_Traj_B.tmp_size_p[1] = 1;
      Test_Traj_B.tmp_data_nl = 1.0 - Test_Traj_B.ca_data;
      Test_Traj_bsxmul_p(&Test_Traj_B.tmp_data_nl, Test_Traj_B.tmp_size_p,
                         Test_Traj_B.w_data, Test_Traj_B.w_size,
                         Test_Traj_B.tmp_data_ge, Test_Traj_B.tmp_size_cg);
      Test_Traj_B.e_size[0] = Test_Traj_B.e_tmp_size[0];
      Test_Traj_B.e_size[1] = 3;
      Test_Traj_B.loop_ub_tmp_d4 = Test_Traj_B.e_tmp_size[0] *
        Test_Traj_B.e_tmp_size[1] - 1;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <=
           Test_Traj_B.loop_ub_tmp_d4; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.th1[Test_Traj_B.ii_size_idx_0_c] =
          (Test_Traj_B.qimag[Test_Traj_B.ii_size_idx_0_c] +
           Test_Traj_B.th1[Test_Traj_B.ii_size_idx_0_c]) -
          Test_Traj_B.tmp_data_ge[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_dot(Test_Traj_B.u_data_g, Test_Traj_B.u_size, Test_Traj_B.th0,
                    &Test_Traj_B.thd2_tmp_data, &Test_Traj_B.thd2_tmp_size);
      Test_Traj_dot(Test_Traj_B.udot_data, Test_Traj_B.udot_size,
                    Test_Traj_B.th1_data, &Test_Traj_B.thd2_data,
                    &Test_Traj_B.thd2_size);
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.thd2_size;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.thd2_data += Test_Traj_B.thd2_tmp_data;
      }

      Test_Traj_cross(Test_Traj_B.u_data_g, Test_Traj_B.u_size, Test_Traj_B.th0,
                      Test_Traj_B.tmp_data_ge, Test_Traj_B.tmp_size_cg);
      Test_Traj_B.tmp_size_az = Test_Traj_B.thd1_tmp_size;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.thd1_tmp_size;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_nl = 2.0 * Test_Traj_B.thd1_tmp_data;
      }

      Test_Traj_bsxmul(&Test_Traj_B.tmp_data_nl, &Test_Traj_B.tmp_size_az,
                       Test_Traj_B.w_data, Test_Traj_B.w_size,
                       Test_Traj_B.tmp_data_gb, Test_Traj_B.tmp_size_p);
      Test_Traj_B.tmp_size_a[0] = Test_Traj_B.tmp_size_cg[0];
      Test_Traj_B.tmp_size_a[1] = 3;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.tmp_size_cg[0] *
        Test_Traj_B.tmp_size_cg[1];
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_ca[Test_Traj_B.ii_size_idx_0_c] =
          Test_Traj_B.tmp_data_ge[Test_Traj_B.ii_size_idx_0_c] -
          Test_Traj_B.tmp_data_gb[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_bsxdiv(Test_Traj_B.tmp_data_ca, Test_Traj_B.tmp_size_a,
                       &Test_Traj_B.ang_data, Test_Traj_B.ang_size,
                       Test_Traj_B.th2, Test_Traj_B.wd1_size);
      Test_Traj_cross(Test_Traj_B.th2, Test_Traj_B.wd1_size,
                      Test_Traj_B.u_data_g, Test_Traj_B.wd1xu_data,
                      Test_Traj_B.wd1xu_size);
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <=
           Test_Traj_B.loop_ub_tmp_d4; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.temp0_data[Test_Traj_B.ii_size_idx_0_c] =
          Test_Traj_B.qimag[Test_Traj_B.ii_size_idx_0_c] -
          Test_Traj_B.w_data[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_bsxmul(&Test_Traj_B.thd2_data, &Test_Traj_B.thd2_size,
                       Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                       Test_Traj_B.qimag, Test_Traj_B.e_tmp_size);
      Test_Traj_bsxmul(&Test_Traj_B.thd1_tmp_data, &Test_Traj_B.thd1_tmp_size,
                       Test_Traj_B.udot_data, Test_Traj_B.udot_size,
                       Test_Traj_B.f_tmp_data, Test_Traj_B.tmp_size_cg);
      Test_Traj_bsxmul_p(&Test_Traj_B.sa_data, Test_Traj_B.sa_size,
                         Test_Traj_B.wd1xu_data, Test_Traj_B.wd1xu_size,
                         Test_Traj_B.f_data_i, Test_Traj_B.f_size);
      Test_Traj_B.tmp_size_n[0] = 1;
      Test_Traj_B.tmp_size_n[1] = 1;
      Test_Traj_B.tmp_data_nl = 1.0 - Test_Traj_B.ca_data;
      Test_Traj_bsxmul_p(&Test_Traj_B.tmp_data_nl, Test_Traj_B.tmp_size_n,
                         Test_Traj_B.th2, Test_Traj_B.wd1_size,
                         Test_Traj_B.tmp_data_ge, Test_Traj_B.tmp_size_cg);
      Test_Traj_cross(Test_Traj_B.th1, Test_Traj_B.e_size,
                      Test_Traj_B.temp0_data, Test_Traj_B.tmp_data_gb,
                      Test_Traj_B.tmp_size_p);
      Test_Traj_B.f_size[0] = Test_Traj_B.e_tmp_size[0];
      Test_Traj_B.f_size[1] = 3;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.e_tmp_size[0] *
        Test_Traj_B.e_tmp_size[1] - 1;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <=
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.f_data_i[Test_Traj_B.ii_size_idx_0_c] =
          (((Test_Traj_B.qimag[Test_Traj_B.ii_size_idx_0_c] +
             Test_Traj_B.f_data_i[Test_Traj_B.ii_size_idx_0_c]) -
            Test_Traj_B.tmp_data_ge[Test_Traj_B.ii_size_idx_0_c]) +
           Test_Traj_B.f_tmp_data[Test_Traj_B.ii_size_idx_0_c]) +
          Test_Traj_B.tmp_data_gb[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_B.w_size_h[0] = Test_Traj_B.w_size[0];
      Test_Traj_B.w_size_h[1] = 3;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.w_size[0] * Test_Traj_B.w_size[1];
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_ge[Test_Traj_B.ii_size_idx_0_c] =
          Test_Traj_B.w_data[Test_Traj_B.ii_size_idx_0_c] *
          Test_Traj_B.w_data[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_sum(Test_Traj_B.tmp_data_ge, Test_Traj_B.w_size_h,
                    &Test_Traj_B.w2_data, &Test_Traj_B.w2_size);
      Test_Traj_cross(Test_Traj_B.th1_data, Test_Traj_B.th1_size,
                      Test_Traj_B.th0, Test_Traj_B.tmp_data_ge,
                      Test_Traj_B.tmp_size_cg);
      Test_Traj_bsxdiv(Test_Traj_B.tmp_data_ge, Test_Traj_B.tmp_size_cg,
                       &Test_Traj_B.ang_data, Test_Traj_B.ang_size,
                       Test_Traj_B.tmp_data_gb, Test_Traj_B.tmp_size_p);
      Test_Traj_cross(Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                      Test_Traj_B.th3_data, Test_Traj_B.tmp_data_ge,
                      Test_Traj_B.tmp_size_cg);
      Test_Traj_B.th1_size_m[0] = 1;
      Test_Traj_B.th1_size_m[1] = 3;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c < 3;
           Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_ca[Test_Traj_B.ii_size_idx_0_c] =
          Test_Traj_B.th1_data[Test_Traj_B.ii_size_idx_0_c] *
          Test_Traj_B.th1_data[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_sum(Test_Traj_B.tmp_data_ca, Test_Traj_B.th1_size_m,
                    &Test_Traj_B.tmp_data_nl, &Test_Traj_B.tmp_size_az);
      Test_Traj_B.tmp_size_eu = Test_Traj_B.tmp_size_az;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.tmp_size_az;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_o = (Test_Traj_B.tmp_data_nl / Test_Traj_B.b_qd +
          Test_Traj_B.thd2_tmp_data) * 2.0;
      }

      Test_Traj_bsxmul(&Test_Traj_B.tmp_data_o, &Test_Traj_B.tmp_size_eu,
                       Test_Traj_B.w_data, Test_Traj_B.w_size,
                       Test_Traj_B.tmp_data_ca, Test_Traj_B.tmp_size_a);
      Test_Traj_B.tmp_size_d = Test_Traj_B.thd1_tmp_size;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.thd1_tmp_size;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_nl = 4.0 * Test_Traj_B.thd1_tmp_data;
      }

      Test_Traj_bsxmul(&Test_Traj_B.tmp_data_nl, &Test_Traj_B.tmp_size_d,
                       Test_Traj_B.th2, Test_Traj_B.wd1_size,
                       Test_Traj_B.tmp_data_gr, Test_Traj_B.tmp_size_n);
      Test_Traj_B.tmp_size_f[0] = Test_Traj_B.tmp_size_p[0];
      Test_Traj_B.tmp_size_f[1] = 3;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.tmp_size_p[0] *
        Test_Traj_B.tmp_size_p[1];
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_kt[Test_Traj_B.ii_size_idx_0_c] =
          ((Test_Traj_B.tmp_data_gb[Test_Traj_B.ii_size_idx_0_c] +
            Test_Traj_B.tmp_data_ge[Test_Traj_B.ii_size_idx_0_c]) -
           Test_Traj_B.tmp_data_ca[Test_Traj_B.ii_size_idx_0_c]) -
          Test_Traj_B.tmp_data_gr[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_bsxdiv(Test_Traj_B.tmp_data_kt, Test_Traj_B.tmp_size_f,
                       &Test_Traj_B.ang_data, Test_Traj_B.ang_size,
                       Test_Traj_B.wd2_data, Test_Traj_B.w_size_h);
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.e_size[0];
      Test_Traj_B.loop_ub_tmp_d4 = Test_Traj_B.e_tmp_size[0];
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c < 3;
           Test_Traj_B.ii_size_idx_0_c++) {
        for (Test_Traj_B.i18 = 0; Test_Traj_B.i18 < Test_Traj_B.ii_size_idx_1_i;
             Test_Traj_B.i18++) {
          angVel[Test_Traj_B.ii_size_idx_0_c] =
            Test_Traj_B.th1[Test_Traj_B.e_size[0] * Test_Traj_B.ii_size_idx_0_c
            + Test_Traj_B.i18];
        }

        for (Test_Traj_B.i18 = 0; Test_Traj_B.i18 < Test_Traj_B.loop_ub_tmp_d4;
             Test_Traj_B.i18++) {
          angAcc[Test_Traj_B.ii_size_idx_0_c] =
            Test_Traj_B.f_data_i[Test_Traj_B.f_size[0] *
            Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18];
        }
      }

      Test_Traj_dot(Test_Traj_B.wd1xu_data, Test_Traj_B.wd1xu_size,
                    Test_Traj_B.th1_data, &Test_Traj_B.tmp_data_nl,
                    &Test_Traj_B.tmp_size_az);
      Test_Traj_dot(Test_Traj_B.udot_data, Test_Traj_B.udot_size,
                    Test_Traj_B.th0, &Test_Traj_B.thd2_tmp_data,
                    &Test_Traj_B.thd2_tmp_size);
      Test_Traj_dot(Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                    Test_Traj_B.th3_data, &Test_Traj_B.tmp_data_o,
                    &Test_Traj_B.tmp_size_eu);
      Test_Traj_B.tmp_size_l = Test_Traj_B.tmp_size_az;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.tmp_size_az;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.ang_data = ((Test_Traj_B.tmp_data_nl - Test_Traj_B.w2_data *
          Test_Traj_B.thd1_tmp_data) + 2.0 * Test_Traj_B.thd2_tmp_data) +
          Test_Traj_B.tmp_data_o;
      }

      Test_Traj_bsxmul(&Test_Traj_B.ang_data, &Test_Traj_B.tmp_size_l,
                       Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                       Test_Traj_B.tmp_data_ge, Test_Traj_B.tmp_size_cg);
      Test_Traj_cross(Test_Traj_B.wd2_data, Test_Traj_B.w_size_h,
                      Test_Traj_B.u_data_g, Test_Traj_B.tmp_data_gb,
                      Test_Traj_B.tmp_size_p);
      Test_Traj_bsxmul_p(&Test_Traj_B.sa_data, Test_Traj_B.sa_size,
                         Test_Traj_B.tmp_data_gb, Test_Traj_B.tmp_size_p,
                         Test_Traj_B.tmp_data_ca, Test_Traj_B.tmp_size_a);
      Test_Traj_B.tmp_size_b[0] = 1;
      Test_Traj_B.tmp_size_b[1] = 1;
      Test_Traj_B.tmp_data_nl = 1.0 - Test_Traj_B.ca_data;
      Test_Traj_bsxmul_p(&Test_Traj_B.tmp_data_nl, Test_Traj_B.tmp_size_b,
                         Test_Traj_B.wd2_data, Test_Traj_B.w_size_h,
                         Test_Traj_B.tmp_data_gb, Test_Traj_B.tmp_size_p);
      Test_Traj_B.tmp_size_if = Test_Traj_B.thd2_size;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.thd2_size;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_nl = 2.0 * Test_Traj_B.thd2_data;
      }

      Test_Traj_bsxmul(&Test_Traj_B.tmp_data_nl, &Test_Traj_B.tmp_size_if,
                       Test_Traj_B.udot_data, Test_Traj_B.udot_size,
                       Test_Traj_B.tmp_data_gr, Test_Traj_B.tmp_size_n);
      Test_Traj_B.tmp_size_e[0] = 1;
      Test_Traj_B.tmp_size_e[1] = 1;
      Test_Traj_B.tmp_data_nl = Test_Traj_B.ca_data + 1.0;
      Test_Traj_bsxmul_p(&Test_Traj_B.tmp_data_nl, Test_Traj_B.tmp_size_e,
                         Test_Traj_B.wd1xu_data, Test_Traj_B.wd1xu_size,
                         Test_Traj_B.th3_data, Test_Traj_B.ang_size);
      Test_Traj_bsxmul(&Test_Traj_B.w2_data, &Test_Traj_B.w2_size,
                       Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                       Test_Traj_B.th1_data, Test_Traj_B.th1_size);
      Test_Traj_bsxmul_p(&Test_Traj_B.sa_data, Test_Traj_B.sa_size,
                         Test_Traj_B.th2, Test_Traj_B.wd1_size, Test_Traj_B.th0,
                         Test_Traj_B.wd1xu_size);
      Test_Traj_B.th3_size[0] = Test_Traj_B.ang_size[0];
      Test_Traj_B.th3_size[1] = 3;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.ang_size[0] *
        Test_Traj_B.ang_size[1];
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.udot_data[Test_Traj_B.ii_size_idx_0_c] =
          (Test_Traj_B.th3_data[Test_Traj_B.ii_size_idx_0_c] -
           Test_Traj_B.th1_data[Test_Traj_B.ii_size_idx_0_c]) -
          Test_Traj_B.th0[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_bsxmul(&Test_Traj_B.thd1_tmp_data, &Test_Traj_B.thd1_tmp_size,
                       Test_Traj_B.udot_data, Test_Traj_B.th3_size,
                       Test_Traj_B.th3_data, Test_Traj_B.ang_size);
      Test_Traj_dot(Test_Traj_B.w_data, Test_Traj_B.w_size, Test_Traj_B.th2,
                    &Test_Traj_B.tmp_data_nl, &Test_Traj_B.tmp_size_az);
      Test_Traj_B.tmp_size_nk = Test_Traj_B.tmp_size_az;
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.tmp_size_az;
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.tmp_data_o = Test_Traj_B.tmp_data_nl * Test_Traj_B.sa_data;
      }

      Test_Traj_bsxmul(&Test_Traj_B.tmp_data_o, &Test_Traj_B.tmp_size_nk,
                       Test_Traj_B.u_data_g, Test_Traj_B.u_size,
                       Test_Traj_B.th1_data, Test_Traj_B.th1_size);
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.e_tmp_size[0] *
        Test_Traj_B.e_tmp_size[1];
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c <
           Test_Traj_B.ii_size_idx_1_i; Test_Traj_B.ii_size_idx_0_c++) {
        Test_Traj_B.u_data_g[Test_Traj_B.ii_size_idx_0_c] =
          (Test_Traj_B.qimag[Test_Traj_B.ii_size_idx_0_c] +
           Test_Traj_B.f_tmp_data[Test_Traj_B.ii_size_idx_0_c]) -
          Test_Traj_B.th2[Test_Traj_B.ii_size_idx_0_c];
      }

      Test_Traj_cross(Test_Traj_B.th1, Test_Traj_B.e_size, Test_Traj_B.u_data_g,
                      Test_Traj_B.th0, Test_Traj_B.wd1xu_size);
      Test_Traj_cross(Test_Traj_B.f_data_i, Test_Traj_B.f_size,
                      Test_Traj_B.temp0_data, Test_Traj_B.wd2_data,
                      Test_Traj_B.w_size_h);
      Test_Traj_B.ii_size_idx_1_i = Test_Traj_B.tmp_size_cg[0];
      for (Test_Traj_B.ii_size_idx_0_c = 0; Test_Traj_B.ii_size_idx_0_c < 3;
           Test_Traj_B.ii_size_idx_0_c++) {
        for (Test_Traj_B.i18 = 0; Test_Traj_B.i18 < Test_Traj_B.ii_size_idx_1_i;
             Test_Traj_B.i18++) {
          angJerk[Test_Traj_B.ii_size_idx_0_c] =
            ((((((Test_Traj_B.tmp_data_ge[Test_Traj_B.tmp_size_cg[0] *
                  Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18] +
                  Test_Traj_B.tmp_data_ca[Test_Traj_B.tmp_size_a[0] *
                  Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18]) -
                 Test_Traj_B.tmp_data_gb[Test_Traj_B.tmp_size_p[0] *
                 Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18]) +
                Test_Traj_B.tmp_data_gr[Test_Traj_B.tmp_size_n[0] *
                Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18]) +
               Test_Traj_B.th3_data[Test_Traj_B.ang_size[0] *
               Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18]) -
              Test_Traj_B.th1_data[Test_Traj_B.th1_size[0] *
              Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18]) +
             Test_Traj_B.th0[Test_Traj_B.wd1xu_size[0] *
             Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18]) +
            Test_Traj_B.wd2_data[Test_Traj_B.w_size_h[0] *
            Test_Traj_B.ii_size_idx_0_c + Test_Traj_B.i18];
        }
      }
    }
  }
}

static void Test_Traj_quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9])
{
  real_T aasq;
  real_T n;
  n = sqrt(((q_a * q_a + q_b * q_b) + q_c * q_c) + q_d * q_d);
  q_a /= n;
  q_b /= n;
  q_c /= n;
  q_d /= n;
  n = q_a * q_b * 2.0;
  Test_Traj_B.ac2 = q_a * q_c * 2.0;
  Test_Traj_B.ad2 = q_a * q_d * 2.0;
  Test_Traj_B.bc2 = q_b * q_c * 2.0;
  Test_Traj_B.bd2 = q_b * q_d * 2.0;
  Test_Traj_B.cd2 = q_c * q_d * 2.0;
  aasq = q_a * q_a * 2.0 - 1.0;
  r[0] = q_b * q_b * 2.0 + aasq;
  r[3] = Test_Traj_B.bc2 + Test_Traj_B.ad2;
  r[6] = Test_Traj_B.bd2 - Test_Traj_B.ac2;
  r[1] = Test_Traj_B.bc2 - Test_Traj_B.ad2;
  r[4] = q_c * q_c * 2.0 + aasq;
  r[7] = Test_Traj_B.cd2 + n;
  r[2] = Test_Traj_B.bd2 + Test_Traj_B.ac2;
  r[5] = Test_Traj_B.cd2 - n;
  r[8] = q_d * q_d * 2.0 + aasq;
}

static void Te_TrajectoryGenerator_stepImpl(TrajectoryGenerator_Test_Traj_T
  *b_this, const real_T wpts[160], real_T wpt_count, real_T pose[13000], real_T
  b_new[2])
{
  real_T *h;
  real_T *dtheta;
  real_T *e;
  real_T *w;

  //  Implement algorithm. Calculate y as a function of input u and
  //  discrete states.
  //  Initialiser les tableau
  for (Test_Traj_B.c_i_k = 0; Test_Traj_B.c_i_k < 8; Test_Traj_B.c_i_k++) {
    Test_Traj_B.List[21 * Test_Traj_B.c_i_k] = wpts[20 * Test_Traj_B.c_i_k];
    memcpy(&Test_Traj_B.List[Test_Traj_B.c_i_k * 21 + 1],
           &wpts[Test_Traj_B.c_i_k * 20], 20U * sizeof(real_T));
  }

  //  Remplire les tablau avec le dernier waypoint
  Test_Traj_B.b_b = static_cast<int32_T>((1.0 - wpt_count) + 21.0) - 1;
  for (Test_Traj_B.b_i = 0; Test_Traj_B.b_i <= Test_Traj_B.b_b; Test_Traj_B.b_i
       ++) {
    Test_Traj_B.wpt_count = static_cast<int32_T>(wpt_count);
    Test_Traj_B.wpt_count_l = static_cast<int32_T>(wpt_count +
      static_cast<real_T>(Test_Traj_B.b_i));
    for (Test_Traj_B.c_i_k = 0; Test_Traj_B.c_i_k < 8; Test_Traj_B.c_i_k++) {
      Test_Traj_B.List_d[Test_Traj_B.c_i_k] = Test_Traj_B.List[(21 *
        Test_Traj_B.c_i_k + Test_Traj_B.wpt_count) - 1];
    }

    for (Test_Traj_B.c_i_k = 0; Test_Traj_B.c_i_k < 8; Test_Traj_B.c_i_k++) {
      Test_Traj_B.List[(Test_Traj_B.wpt_count_l + 21 * Test_Traj_B.c_i_k) - 1] =
        Test_Traj_B.List_d[Test_Traj_B.c_i_k];
    }
  }

  //  wpts(1:wpt_count-1,1:3);
  //  Gestion des vitesses et des accélérations.
  //  Génération d'un vecteur de temps
  memset(&Test_Traj_B.tpts[0], 0, 21U * sizeof(real_T));
  Test_Traj_B.b_i = static_cast<int32_T>(wpt_count + -1.0) - 1;
  for (Test_Traj_B.c_i_k = 0; Test_Traj_B.c_i_k <= Test_Traj_B.b_i;
       Test_Traj_B.c_i_k++) {
    Test_Traj_B.maxTime = b_this->Ts;
    for (Test_Traj_B.b_b = 0; Test_Traj_B.b_b < 7; Test_Traj_B.b_b++) {
      Test_Traj_B.dist = fabs(Test_Traj_B.List[(21 * Test_Traj_B.b_b +
        Test_Traj_B.c_i_k) + 1] - Test_Traj_B.List[(static_cast<int32_T>((
        static_cast<real_T>(Test_Traj_B.c_i_k) + 2.0) - 1.0) + 21 *
        Test_Traj_B.b_b) - 1]);
      if (Test_Traj_B.dist > 0.0) {
        Test_Traj_B.dist = b_this->avanceRapide[Test_Traj_B.b_b] /
          b_this->accRapide[Test_Traj_B.b_b] * 2.0 + Test_Traj_B.dist /
          b_this->avanceRapide[Test_Traj_B.b_b];
      } else {
        Test_Traj_B.dist = 0.0;
      }

      if (Test_Traj_B.dist > Test_Traj_B.maxTime) {
        Test_Traj_B.maxTime = Test_Traj_B.dist;
      }
    }

    Test_Traj_B.tpts[Test_Traj_B.c_i_k + 1] = Test_Traj_B.tpts
      [static_cast<int32_T>((static_cast<real_T>(Test_Traj_B.c_i_k) + 2.0) - 1.0)
      - 1] + Test_Traj_B.maxTime;
  }

  Test_Traj_B.b_b = static_cast<int32_T>((1.0 - (wpt_count + 1.0)) + 21.0) - 1;
  for (Test_Traj_B.c_i_k = 0; Test_Traj_B.c_i_k <= Test_Traj_B.b_b;
       Test_Traj_B.c_i_k++) {
    Test_Traj_B.maxTime = (wpt_count + 1.0) + static_cast<real_T>
      (Test_Traj_B.c_i_k);
    Test_Traj_B.tpts[static_cast<int32_T>(Test_Traj_B.maxTime) - 1] =
      Test_Traj_B.tpts[static_cast<int32_T>(Test_Traj_B.maxTime - 1.0) - 1] +
      b_this->Ts;
  }

  Test__quaternioncg_quaternioncg(&Test_Traj_B.List[63],
    Test_Traj_B.assign_temp_a, Test_Traj_B.assign_temp_b,
    Test_Traj_B.assign_temp_c, Test_Traj_B.x_iy);
  waypointTrajectory_waypointTraj(&Test_Traj_B.trajectory, &Test_Traj_B.List[0],
    Test_Traj_B.tpts, 1.0 / b_this->Ts, Test_Traj_B.assign_temp_a,
    Test_Traj_B.assign_temp_b, Test_Traj_B.assign_temp_c, Test_Traj_B.x_iy);
  for (Test_Traj_B.c_i_k = 0; Test_Traj_B.c_i_k < 13000; Test_Traj_B.c_i_k++) {
    pose[Test_Traj_B.c_i_k] = 999.0;
  }

  //  while ~isDone(trajectory)
  Test_Traj_B.nbpts = 1U;
  Test_Traj_B.wpt_count = static_cast<int32_T>(floor(Test_Traj_B.tpts[
    static_cast<int32_T>(wpt_count) - 1] / b_this->Ts)) - 1;
  for (Test_Traj_B.b_i = 0; Test_Traj_B.b_i <= Test_Traj_B.wpt_count;
       Test_Traj_B.b_i++) {
    if (Test_Traj_B.trajectory.isInitialized != 1) {
      Test_Traj_B.trajectory.isInitialized = 1;
      Test_Traj_B.trajectory.CurrentTime = 0.0;
      Test_waypointTrajectory_setPose(&Test_Traj_B.trajectory);
      Test_Traj_B.trajectory.IsDoneStatus = false;
      Test_Traj_B.trajectory.CurrentTime = 0.0;
      Test_waypointTrajectory_setPose(&Test_Traj_B.trajectory);
      Test_Traj_B.trajectory.IsDoneStatus = false;
    }

    Test_Traj_B.maxTime = Test_Traj_B.trajectory.CurrentTime;
    Test_Traj_B.dist = 1.0 / Test_Traj_B.trajectory.SampleRate;
    Test_Traj_B.b_varargout_1[0] = 0.0;
    Test_Traj_B.b_varargout_3[0] = 0.0;
    Test_Traj_B.b_varargout_1[1] = 0.0;
    Test_Traj_B.b_varargout_3[1] = 0.0;
    Test_Traj_B.b_varargout_1[2] = 0.0;
    Test_Traj_B.b_varargout_3[2] = 0.0;
    Test_Traj_B.flag = (Test_Traj_B.trajectory.isInitialized == 1);
    if (!Test_Traj_B.flag) {
      Test_Traj_B.trajectory.isInitialized = 1;
      Test_Traj_B.trajectory.CurrentTime = 0.0;
      Test_waypointTrajectory_setPose(&Test_Traj_B.trajectory);
      Test_Traj_B.trajectory.IsDoneStatus = false;
      Test_Traj_B.trajectory.CurrentTime = 0.0;
      Test_waypointTrajectory_setPose(&Test_Traj_B.trajectory);
      Test_Traj_B.trajectory.IsDoneStatus = false;
    }

    Test_Traj_B.flag = Test_Traj_B.trajectory.IsDoneStatus;
    if (!Test_Traj_B.flag) {
      Test_Traj_B.maxTime += Test_Traj_B.dist;
      if ((Test_Traj_B.trajectory.TimeOfArrival[0] <= Test_Traj_B.maxTime) &&
          (Test_Traj_B.maxTime <= Test_Traj_B.trajectory.TimeOfArrival[20])) {
        waypointTrajectory_fetchPosit_p(&Test_Traj_B.trajectory,
          Test_Traj_B.maxTime, &Test_Traj_B.b_varargout_1[0],
          &Test_Traj_B.b_varargout_3[0], Test_Traj_B.b_acceleration,
          Test_Traj_B.b_varargout_5);
        memcpy(&Test_Traj_B.tpts[0], &Test_Traj_B.trajectory.Quaternions.a[0],
               21U * sizeof(real_T));
        memcpy(&Test_Traj_B.assign_temp_a[0],
               &Test_Traj_B.trajectory.Quaternions.b[0], 21U * sizeof(real_T));
        memcpy(&Test_Traj_B.assign_temp_b[0],
               &Test_Traj_B.trajectory.Quaternions.c[0], 21U * sizeof(real_T));
        memcpy(&Test_Traj_B.assign_temp_c[0],
               &Test_Traj_B.trajectory.Quaternions.d[0], 21U * sizeof(real_T));
        h = &Test_Traj_B.trajectory.SegmentTimes[0];
        dtheta = &Test_Traj_B.trajectory.RadianSlewAngles[0];
        e = &Test_Traj_B.trajectory.AxesOfRotation[0];
        w = &Test_Traj_B.trajectory.RadianAngularVelocities[0];
        memcpy(&Test_Traj_B.x_iy[0], &Test_Traj_B.trajectory.TimeOfArrival[0],
               21U * sizeof(real_T));
        Test_Traj_B.b_d = Test_Traj_mapElementsToBins(Test_Traj_B.maxTime,
          Test_Traj_B.x_iy, false);
        Test_Traj_B.c_i_k = static_cast<int32_T>(Test_Traj_B.b_d);
        Test_Traj_B.b_b = static_cast<int32_T>(Test_Traj_B.b_d + 1.0);
        Test_Traj_B.b_acceleration[0] = e[Test_Traj_B.c_i_k - 1];
        Test_Traj_B.b_acceleration[1] = e[Test_Traj_B.c_i_k + 19];
        Test_Traj_B.b_acceleration[2] = e[Test_Traj_B.c_i_k + 39];
        Test_Traj_B.w_n[0] = w[Test_Traj_B.c_i_k - 1];
        Test_Traj_B.w_n[1] = w[Test_Traj_B.c_i_k + 20];
        Test_Traj_B.w_n[2] = w[Test_Traj_B.c_i_k + 41];
        Test_Traj_B.w_i[0] = w[Test_Traj_B.b_b - 1];
        Test_Traj_B.w_i[1] = w[Test_Traj_B.b_b + 20];
        Test_Traj_B.w_i[2] = w[Test_Traj_B.b_b + 41];
        Test_Traj_slew3_init(h[static_cast<int32_T>(Test_Traj_B.b_d) - 1],
                             dtheta[static_cast<int32_T>(Test_Traj_B.b_d) - 1],
                             Test_Traj_B.b_acceleration, Test_Traj_B.w_n,
                             Test_Traj_B.w_i, Test_Traj_B.A_kb, Test_Traj_B.B,
                             Test_Traj_B.C, Test_Traj_B.b_varargout_5);
        Test_Traj_slew3(Test_Traj_B.maxTime - Test_Traj_B.x_iy
                        [static_cast<int32_T>(Test_Traj_B.b_d) - 1], h[
                        static_cast<int32_T>(Test_Traj_B.b_d) - 1],
                        Test_Traj_B.tpts[static_cast<int32_T>(Test_Traj_B.b_d) -
                        1], Test_Traj_B.assign_temp_a[static_cast<int32_T>
                        (Test_Traj_B.b_d) - 1], Test_Traj_B.assign_temp_b[
                        static_cast<int32_T>(Test_Traj_B.b_d) - 1],
                        Test_Traj_B.assign_temp_c[static_cast<int32_T>
                        (Test_Traj_B.b_d) - 1], Test_Traj_B.A_kb, Test_Traj_B.B,
                        Test_Traj_B.C, Test_Traj_B.b_varargout_5,
                        &Test_Traj_B.b_q_a, &Test_Traj_B.b_q_b,
                        &Test_Traj_B.b_q_c, &Test_Traj_B.b_q_d,
                        Test_Traj_B.b_acceleration, Test_Traj_B.w_n,
                        Test_Traj_B.w_i);
        Test_Traj_quaternionBase_rotmat(Test_Traj_B.b_q_a, Test_Traj_B.b_q_b,
          Test_Traj_B.b_q_c, Test_Traj_B.b_q_d, Test_Traj_B.A_kb);
        pose[Test_Traj_B.b_i + 3000] = Test_Traj_B.b_q_a;
        for (Test_Traj_B.c_i_k = 0; Test_Traj_B.c_i_k < 3; Test_Traj_B.c_i_k++)
        {
          Test_Traj_B.b_varargout_5[Test_Traj_B.c_i_k] = Test_Traj_B.A_kb[3 *
            Test_Traj_B.c_i_k + 2] * Test_Traj_B.b_acceleration[2] +
            (Test_Traj_B.A_kb[3 * Test_Traj_B.c_i_k + 1] *
             Test_Traj_B.b_acceleration[1] + Test_Traj_B.A_kb[3 *
             Test_Traj_B.c_i_k] * Test_Traj_B.b_acceleration[0]);
        }
      } else {
        pose[Test_Traj_B.b_i + 3000] = (rtNaN);
        Test_Traj_B.b_q_b = (rtNaN);
        Test_Traj_B.b_q_c = (rtNaN);
        Test_Traj_B.b_q_d = (rtNaN);
        Test_Traj_B.b_varargout_1[0] = (rtNaN);
        Test_Traj_B.b_varargout_3[0] = (rtNaN);
        Test_Traj_B.b_varargout_5[0] = (rtNaN);
        Test_Traj_B.b_varargout_1[1] = (rtNaN);
        Test_Traj_B.b_varargout_3[1] = (rtNaN);
        Test_Traj_B.b_varargout_5[1] = (rtNaN);
        Test_Traj_B.b_varargout_1[2] = (rtNaN);
        Test_Traj_B.b_varargout_3[2] = (rtNaN);
        Test_Traj_B.b_varargout_5[2] = (rtNaN);
        if (Test_Traj_B.maxTime > Test_Traj_B.trajectory.TimeOfArrival[20]) {
          Test_Traj_B.trajectory.IsDoneStatus = true;
        }
      }

      Test_Traj_B.flag = (Test_Traj_B.trajectory.isInitialized == 1);
      if (!Test_Traj_B.flag) {
        Test_Traj_B.trajectory.isInitialized = 1;
        Test_Traj_B.trajectory.CurrentTime = 0.0;
        Test_waypointTrajectory_setPose(&Test_Traj_B.trajectory);
        Test_Traj_B.trajectory.IsDoneStatus = false;
        Test_Traj_B.trajectory.CurrentTime = 0.0;
        Test_waypointTrajectory_setPose(&Test_Traj_B.trajectory);
        Test_Traj_B.trajectory.IsDoneStatus = false;
      }

      Test_Traj_B.flag = Test_Traj_B.trajectory.IsDoneStatus;
      if (!Test_Traj_B.flag) {
        Test_Traj_B.trajectory.CurrentTime = Test_Traj_B.maxTime;
        if (Test_Traj_B.maxTime + Test_Traj_B.dist >
            Test_Traj_B.trajectory.PathDuration) {
          Test_Traj_B.trajectory.IsDoneStatus = true;
        }
      }
    } else {
      pose[Test_Traj_B.b_i + 3000] = (rtNaN);
      Test_Traj_B.b_q_b = (rtNaN);
      Test_Traj_B.b_q_c = (rtNaN);
      Test_Traj_B.b_q_d = (rtNaN);
      Test_Traj_B.b_varargout_1[0] = (rtNaN);
      Test_Traj_B.b_varargout_3[0] = (rtNaN);
      Test_Traj_B.b_varargout_5[0] = (rtNaN);
      Test_Traj_B.b_varargout_1[1] = (rtNaN);
      Test_Traj_B.b_varargout_3[1] = (rtNaN);
      Test_Traj_B.b_varargout_5[1] = (rtNaN);
      Test_Traj_B.b_varargout_1[2] = (rtNaN);
      Test_Traj_B.b_varargout_3[2] = (rtNaN);
      Test_Traj_B.b_varargout_5[2] = (rtNaN);
    }

    // , bufferVelocity, bufferAcc, bufferAngRate
    pose[Test_Traj_B.b_i + 4000] = Test_Traj_B.b_q_b;
    pose[Test_Traj_B.b_i + 5000] = Test_Traj_B.b_q_c;
    pose[Test_Traj_B.b_i + 6000] = Test_Traj_B.b_q_d;
    pose[Test_Traj_B.b_i] = Test_Traj_B.b_varargout_1[0];
    pose[Test_Traj_B.b_i + 7000] = Test_Traj_B.b_varargout_3[0];
    pose[Test_Traj_B.b_i + 10000] = Test_Traj_B.b_varargout_5[0];
    pose[Test_Traj_B.b_i + 1000] = Test_Traj_B.b_varargout_1[1];
    pose[Test_Traj_B.b_i + 8000] = Test_Traj_B.b_varargout_3[1];
    pose[Test_Traj_B.b_i + 11000] = Test_Traj_B.b_varargout_5[1];
    pose[Test_Traj_B.b_i + 2000] = Test_Traj_B.b_varargout_1[2];
    pose[Test_Traj_B.b_i + 9000] = Test_Traj_B.b_varargout_3[2];
    pose[Test_Traj_B.b_i + 12000] = Test_Traj_B.b_varargout_5[2];
    Test_Traj_B.nbpts = Test_Traj_B.b_i + 1U;
  }

  b_this->computeCount++;
  b_new[0] = b_this->computeCount;
  b_new[1] = Test_Traj_B.nbpts;
}

static void Test_Traj_SystemCore_step(TrajectoryGenerator_Test_Traj_T *obj,
  const real_T varargin_1[160], real_T varargin_2, real_T varargout_1[13000],
  real_T varargout_2[2])
{
  Te_TrajectoryGenerator_stepImpl(obj, varargin_1, varargin_2, varargout_1,
    varargout_2);
}

static void Test_Traj_string_disp(void)
{
  printf("%s\n", "Problem");
  fflush(stdout);
}

static void TrajectoryManager_processNewPos(TrajectoryManager_Test_Traj_T
  *b_this, const real_T pose[13000], real_T count, real_T b_new)
{
  int32_T c;
  int32_T g;
  int32_T i;
  int32_T i_0;
  real_T tmp;

  //  Fonction qui traites les nouveau poses.
  //  Insertion des nouveaux points.
  if (b_new > b_this->generationNumber) {
    tmp = count + b_this->bufferCount;
    if (tmp < 6001.0) {
      if (1.0 > count + 1.0) {
        c = -1;
      } else {
        c = static_cast<int32_T>(count + 1.0) - 1;
      }

      if (b_this->bufferCount > tmp) {
        g = 0;
      } else {
        g = static_cast<int32_T>(b_this->bufferCount) - 1;
      }

      for (i_0 = 0; i_0 < 13; i_0++) {
        for (i = 0; i <= c; i++) {
          b_this->poseBuffer[(g + i) + 6001 * i_0] = pose[1000 * i_0 + i];
        }
      }

      b_this->bufferCount += count;
      b_this->generationNumber++;
    } else {
      Test_Traj_string_disp();
    }
  }
}

static boolean_T Test_Traj_ifWhileCond(const boolean_T x[13])
{
  boolean_T y;
  int32_T b_k;
  boolean_T exitg1;
  y = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 13)) {
    if (!x[b_k]) {
      y = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  return y;
}

static void TrajectoryManager_SendCurrentPo(TrajectoryManager_Test_Traj_T
  *b_this, real_T currPose[52])
{
  int32_T b_index;
  boolean_T isempty;
  int32_T b_i;
  int32_T c;
  boolean_T b_this_0[13];
  int32_T b_index_0;
  int32_T b_index_1;
  int32_T i;
  boolean_T exitg1;

  //  Fonction qui retourne la pose actuelle
  //  Vérification des prédictions.
  b_index = 2;
  isempty = false;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i < 3)) {
    b_index = b_i + 2;
    for (i = 0; i < 13; i++) {
      b_this_0[i] = (b_this->poseBuffer[(6001 * i + b_i) + 1] ==
                     b_this->emptyArray[i]);
    }

    if (Test_Traj_ifWhileCond(b_this_0)) {
      isempty = true;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  memset(&currPose[0], 0, 52U * sizeof(real_T));
  for (i = 0; i < 13; i++) {
    if (0 <= b_index - 1) {
      memcpy(&currPose[i << 2], &b_this->poseBuffer[i * 6001], b_index * sizeof
             (real_T));
    }
  }

  if (isempty) {
    c = 4 - b_index;
    for (b_i = 0; b_i <= c; b_i++) {
      b_index_0 = b_index - 1;
      b_index_1 = b_index + b_i;
      for (i = 0; i < 13; i++) {
        Test_Traj_B.currPose[i] = currPose[((i << 2) + b_index_0) - 1];
      }

      for (i = 0; i < 13; i++) {
        currPose[(b_index_1 + (i << 2)) - 1] = Test_Traj_B.currPose[i];
      }
    }
  }

  //  Ne pas supprimer le point si c'est le dernier.
  for (i = 0; i < 13; i++) {
    b_this_0[i] = !(b_this->poseBuffer[6001 * i + 1] == b_this->emptyArray[i]);
  }

  if (Test_Traj_ifWhileCond(b_this_0)) {
    for (i = 0; i < 13; i++) {
      for (b_index = 0; b_index < 6000; b_index++) {
        Test_Traj_B.b_this[b_index + 6001 * i] = b_this->poseBuffer[((b_index +
          2) + 6001 * i) - 1];
      }

      Test_Traj_B.b_this[6001 * i + 6000] = b_this->emptyArray[i];
    }

    memcpy(&b_this->poseBuffer[0], &Test_Traj_B.b_this[0], 78013U * sizeof
           (real_T));
    b_this->bufferCount--;
    b_this->done = false;
  } else {
    b_this->done = true;
  }
}

static real_T Test_Traj_norm(const real_T x[3])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void Tes_TrajectoryManager_setupImpl(TrajectoryManager_Test_Traj_T
  *b_this)
{
  int32_T i;

  //  untitled Add summary here
  //
  //  This template includes the minimum set of functions required
  //  to define a System object with discrete state.
  //  Public, tunable properties
  //  Offset Time
  //  prediction controlleur
  //  Taille statique
  //  Metre
  //  Radian
  //  seconde
  //  Pre-computed constants
  //  Perform one-time calculations, such as computing constants
  b_this->generationNumber = 0.0;
  b_this->dummy = 999.0;

  //  Chiffre NULL
  for (i = 0; i < 13; i++) {
    b_this->emptyArray[i] = b_this->dummy;
  }

  //  Vecteur pose NULL
  b_this->targetReachedCount = 0.0;

  //  Buffer trajectoire
  for (i = 0; i < 78013; i++) {
    b_this->poseBuffer[i] = b_this->dummy;
  }

  b_this->bufferCount = 1.0;
  b_this->done = false;

  //  Conditions Initiales
  b_this->poseBuffer[0] = 0.0;
  b_this->poseBuffer[6001] = 0.0;
  b_this->poseBuffer[12002] = 0.0;
  b_this->poseBuffer[18003] = 1.0;
  b_this->poseBuffer[24004] = 0.0;
  b_this->poseBuffer[30005] = 0.0;
  b_this->poseBuffer[36006] = 0.0;
  b_this->poseBuffer[42007] = 0.0;
  b_this->poseBuffer[48008] = 0.0;
  b_this->poseBuffer[54009] = 0.0;
  b_this->poseBuffer[60010] = 0.0;
  b_this->poseBuffer[66011] = 0.0;
  b_this->poseBuffer[72012] = 0.0;

  // InitCond;
}

// Model step function
void Test_Traj_step(void)
{
  TrajectoryManager_Test_Traj_T *obj;
  const real_T *rtb_ManualSwitch_0;
  if (Test_Traj_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
    // MATLABSystem: '<S3>/SourceBlock'
    Test_Traj_B.b_varargout_1_l = Sub_Test_Traj_110.getLatestMessage
      (&Test_Traj_B.b_varargout_2_a);

    // End of Outputs for SubSystem: '<Root>/Subscribe2'

    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // MATLABSystem: '<S1>/SourceBlock' incorporates:
    //   Inport: '<S6>/In1'

    Test_Traj_B.b_varargout_1_m = Sub_Test_Traj_124.getLatestMessage
      (&Test_Traj_B.b_varargout_2_n);

    // Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S6>/Enable'

    if (Test_Traj_B.b_varargout_1_m) {
      Test_Traj_B.In1 = Test_Traj_B.b_varargout_2_n;
    }

    // End of Outputs for SubSystem: '<S1>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // MATLABSystem: '<Root>/MATLAB System1' incorporates:
    //   DataTypeConversion: '<S5>/Data Type Conversion1'
    //   Delay: '<Root>/Delay'
    //   MATLABSystem: '<S1>/SourceBlock'
    //   MATLABSystem: '<S3>/SourceBlock'
    //   SignalConversion generated from: '<Root>/MATLAB System1'

    //  Main appeller à chaque exécution
    //  Suppression du buffer.
    //  Fonction qui interprete les message ROS
    if (Test_Traj_DW.Delay_DSTATE) {
      Test_Traj_B.i_ce = static_cast<int32_T>(Test_Traj_DW.obj_p.i - 1.0);
      for (Test_Traj_B.i1 = 0; Test_Traj_B.i1 < 8; Test_Traj_B.i1++) {
        Test_Traj_DW.obj_p.poseList[20 * Test_Traj_B.i1] =
          Test_Traj_DW.obj_p.poseList[(20 * Test_Traj_B.i1 + Test_Traj_B.i_ce) -
          1];
        for (Test_Traj_B.i2 = 0; Test_Traj_B.i2 < 19; Test_Traj_B.i2++) {
          Test_Traj_DW.obj_p.poseList[((Test_Traj_B.i2 + 2) + 20 *
            Test_Traj_B.i1) - 1] = 999.0;
        }
      }

      Test_Traj_DW.obj_p.i = 2.0;
    }

    // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
    if (Test_Traj_B.b_varargout_1_l) {
      for (Test_Traj_B.i_ce = 0; Test_Traj_B.i_ce < 8; Test_Traj_B.i_ce++) {
        for (Test_Traj_B.i1 = 0; Test_Traj_B.i1 < 19; Test_Traj_B.i1++) {
          Test_Traj_DW.obj_p.poseList[((Test_Traj_B.i1 + 2) + 20 *
            Test_Traj_B.i_ce) - 1] = 999.0;
        }
      }

      Test_Traj_DW.obj_p.i = 1.0;
    }

    // End of Outputs for SubSystem: '<Root>/Subscribe2'

    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    //  Ajout d'un waypoint provenant de ROS.
    if (Test_Traj_B.b_varargout_1_m && (Test_Traj_DW.obj_p.i < 20.0)) {
      //  Fonction qui interprete les waypoints reçu par ROS
      //  Determiner le quaternion en fonction des angles d'euler.
      //  Orde de rotation : ZYX.
      //  Reel
      Test_Traj_B.s_idx_2 = 0.017453292519943295 * Test_Traj_B.In1.Orientation.Z;
      Test_Traj_B.c_idx_0 = Test_Traj_B.s_idx_2 / 2.0;
      Test_Traj_B.s_idx_0 = Test_Traj_B.s_idx_2;
      Test_Traj_B.s_idx_2 = 0.017453292519943295 * Test_Traj_B.In1.Orientation.Y;
      Test_Traj_B.c_idx_1 = Test_Traj_B.s_idx_2 / 2.0;
      Test_Traj_B.s_idx_1 = Test_Traj_B.s_idx_2;
      Test_Traj_B.s_idx_2 = 0.017453292519943295 * Test_Traj_B.In1.Orientation.X;
      Test_Traj_B.c_idx_0 = cos(Test_Traj_B.c_idx_0);
      Test_Traj_B.s_idx_0 /= 2.0;
      Test_Traj_B.c_idx_1 = cos(Test_Traj_B.c_idx_1);
      Test_Traj_B.s_idx_1 /= 2.0;
      Test_Traj_B.c_idx_2 = cos(Test_Traj_B.s_idx_2 / 2.0);

      //              wpt(4:6) = deg2rad(wpt(4:6));
      //               q(1) = cos(wpt(6)/2) * cos(wpt(5)/2) * cos(wpt(4)/2)...
      //                    + sin(wpt(6)/2) * sin(wpt(5)/2) * sin(wpt(4)/2);
      //
      //              % imaginaire i
      //               q(2) = sin(wpt(6)/2) * cos(wpt(5)/2) * cos(wpt(4)/2)...
      //                    - cos(wpt(6)/2) * sin(wpt(5)/2) * sin(wpt(4)/2);
      //
      //              % imaginaire j
      //               q(3) = cos(wpt(6)/2) * sin(wpt(5)/2) * cos(wpt(4)/2)...
      //                    + sin(wpt(6)/2) * cos(wpt(5)/2) * sin(wpt(4)/2);
      //
      //              % imaginaire k
      //               q(4) = cos(wpt(6)/2) * cos(wpt(5)/2) * sin(wpt(4)/2)...
      //                    - sin(wpt(6)/2) * sin(wpt(5)/2) * cos(wpt(4)/2);
      //
      Test_Traj_B.i_ce = static_cast<int32_T>(Test_Traj_DW.obj_p.i) - 1;
      Test_Traj_B.s_idx_0 = sin(Test_Traj_B.s_idx_0);
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce] = Test_Traj_B.In1.Position.X;
      Test_Traj_B.s_idx_1 = sin(Test_Traj_B.s_idx_1);
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce + 20] =
        Test_Traj_B.In1.Position.Y;
      Test_Traj_B.s_idx_2 = sin(Test_Traj_B.s_idx_2 / 2.0);
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce + 40] =
        Test_Traj_B.In1.Position.Z;
      Test_Traj_B.d_g = Test_Traj_B.c_idx_0 * Test_Traj_B.c_idx_1;
      Test_Traj_B.d1 = Test_Traj_B.s_idx_0 * Test_Traj_B.s_idx_1;
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce + 60] = Test_Traj_B.d_g *
        Test_Traj_B.c_idx_2 + Test_Traj_B.d1 * Test_Traj_B.s_idx_2;
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce + 80] = Test_Traj_B.d_g *
        Test_Traj_B.s_idx_2 - Test_Traj_B.d1 * Test_Traj_B.c_idx_2;
      Test_Traj_B.d_g = Test_Traj_B.s_idx_0 * Test_Traj_B.c_idx_1;
      Test_Traj_B.d1 = Test_Traj_B.c_idx_0 * Test_Traj_B.s_idx_1;
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce + 100] = Test_Traj_B.d1 *
        Test_Traj_B.c_idx_2 + Test_Traj_B.d_g * Test_Traj_B.s_idx_2;
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce + 120] = Test_Traj_B.d_g *
        Test_Traj_B.c_idx_2 - Test_Traj_B.d1 * Test_Traj_B.s_idx_2;
      Test_Traj_DW.obj_p.poseList[Test_Traj_B.i_ce + 140] =
        Test_Traj_B.In1.Speed;
      Test_Traj_DW.obj_p.i++;
    }

    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
    // MATLABSystem: '<S2>/SourceBlock'
    Test_Traj_DW.Delay_DSTATE = Sub_Test_Traj_109.getLatestMessage
      (&Test_Traj_B.b_varargout_2_a);

    // Outputs for Triggered SubSystem: '<Root>/Subsystem' incorporates:
    //   TriggerPort: '<S4>/Trigger'

    if (Test_Traj_DW.Delay_DSTATE && (Test_Traj_PrevZCX.Subsystem_Trig_ZCE !=
         POS_ZCSIG)) {
      // MATLABSystem: '<S4>/MATLAB System2' incorporates:
      //   MATLABSystem: '<Root>/MATLAB System1'

      if (!Test_Traj_isequal(Test_Traj_DW.obj_n.avanceRapide,
                             Test_Traj_P.MATLABSystem2_avanceRapide)) {
        for (Test_Traj_B.i_ce = 0; Test_Traj_B.i_ce < 7; Test_Traj_B.i_ce++) {
          Test_Traj_DW.obj_n.avanceRapide[Test_Traj_B.i_ce] =
            Test_Traj_P.MATLABSystem2_avanceRapide[Test_Traj_B.i_ce];
        }
      }

      if (!Test_Traj_isequal(Test_Traj_DW.obj_n.avancePrecision,
                             Test_Traj_P.MATLABSystem2_avancePrecision)) {
        for (Test_Traj_B.i_ce = 0; Test_Traj_B.i_ce < 7; Test_Traj_B.i_ce++) {
          Test_Traj_DW.obj_n.avancePrecision[Test_Traj_B.i_ce] =
            Test_Traj_P.MATLABSystem2_avancePrecision[Test_Traj_B.i_ce];
        }
      }

      if (!Test_Traj_isequal(Test_Traj_DW.obj_n.accRapide,
                             Test_Traj_P.MATLABSystem2_accRapide)) {
        for (Test_Traj_B.i_ce = 0; Test_Traj_B.i_ce < 7; Test_Traj_B.i_ce++) {
          Test_Traj_DW.obj_n.accRapide[Test_Traj_B.i_ce] =
            Test_Traj_P.MATLABSystem2_accRapide[Test_Traj_B.i_ce];
        }
      }

      if (Test_Traj_DW.obj_n.accPrecision !=
          Test_Traj_P.MATLABSystem2_accPrecision) {
        Test_Traj_DW.obj_n.accPrecision = Test_Traj_P.MATLABSystem2_accPrecision;
      }

      if (Test_Traj_DW.obj_n.Ts != Test_Traj_P.MATLABSystem2_Ts) {
        Test_Traj_DW.obj_n.Ts = Test_Traj_P.MATLABSystem2_Ts;
      }

      Test_Traj_SystemCore_step(&Test_Traj_DW.obj_n, Test_Traj_DW.obj_p.poseList,
        Test_Traj_DW.obj_p.i, Test_Traj_B.MATLABSystem2_o1,
        Test_Traj_B.MATLABSystem2_o2);

      // End of MATLABSystem: '<S4>/MATLAB System2'
    }

    Test_Traj_PrevZCX.Subsystem_Trig_ZCE = Test_Traj_DW.Delay_DSTATE;

    // End of MATLABSystem: '<S2>/SourceBlock'
    // End of Outputs for SubSystem: '<Root>/Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe1'

    // ManualSwitch: '<Root>/Manual Switch' incorporates:
    //   Constant: '<Root>/Constant2'
    //   Constant: '<Root>/Constant3'

    if (Test_Traj_P.ManualSwitch_CurrentSetting == 1) {
      rtb_ManualSwitch_0 = &Test_Traj_P.Constant3_Value[0];
    } else {
      rtb_ManualSwitch_0 = &Test_Traj_P.Constant2_Value[0];
    }

    // End of ManualSwitch: '<Root>/Manual Switch'

    // MATLABSystem: '<Root>/MATLAB System'
    if (Test_Traj_DW.obj.linearConvergence !=
        Test_Traj_P.MATLABSystem_linearConvergence) {
      Test_Traj_DW.obj.linearConvergence =
        Test_Traj_P.MATLABSystem_linearConvergence;
    }

    if (Test_Traj_DW.obj.quaternionConvergence !=
        Test_Traj_P.MATLABSystem_quaternionConverge) {
      Test_Traj_DW.obj.quaternionConvergence =
        Test_Traj_P.MATLABSystem_quaternionConverge;
    }

    if (Test_Traj_DW.obj.TargetThreshold !=
        Test_Traj_P.MATLABSystem_TargetThreshold) {
      Test_Traj_DW.obj.TargetThreshold =
        Test_Traj_P.MATLABSystem_TargetThreshold;
    }

    obj = &Test_Traj_DW.obj;

    //  Main execute a chaque iteration.
    //  Implement algorithm. Calculate y as a function of input u and
    TrajectoryManager_processNewPos(&Test_Traj_DW.obj,
      Test_Traj_B.MATLABSystem2_o1, Test_Traj_B.MATLABSystem2_o2[1],
      Test_Traj_B.MATLABSystem2_o2[0]);
    TrajectoryManager_SendCurrentPo(obj, Test_Traj_Y.Reference);

    //  Fonction qui verifi le target reached
    //  vérifier le traget reached si la trajectoire est terminé
    if (obj->done) {
      //  calcule de l'erreur de langle en 3D avec le quaternion
      Test_Traj_B.c_idx_0 = obj->poseBuffer[18003];
      Test_Traj_B.s_idx_0 = obj->poseBuffer[24004];
      Test_Traj_B.c_idx_1 = obj->poseBuffer[30005];
      Test_Traj_B.s_idx_1 = obj->poseBuffer[36006];
      Test_Traj_B.s_idx_0 = -Test_Traj_B.s_idx_0;
      Test_Traj_B.c_idx_1 = -Test_Traj_B.c_idx_1;
      Test_Traj_B.s_idx_1 = -Test_Traj_B.s_idx_1;
      Test_Traj_B.qRel[0] = ((Test_Traj_B.c_idx_0 * rtb_ManualSwitch_0[3] -
        Test_Traj_B.s_idx_0 * rtb_ManualSwitch_0[4]) - Test_Traj_B.c_idx_1 *
        rtb_ManualSwitch_0[5]) - Test_Traj_B.s_idx_1 * rtb_ManualSwitch_0[6];
      Test_Traj_B.qRel[1] = (Test_Traj_B.c_idx_0 * rtb_ManualSwitch_0[4] +
        rtb_ManualSwitch_0[3] * Test_Traj_B.s_idx_0) + (Test_Traj_B.c_idx_1 *
        rtb_ManualSwitch_0[6] - Test_Traj_B.s_idx_1 * rtb_ManualSwitch_0[5]);
      Test_Traj_B.qRel[2] = (Test_Traj_B.c_idx_0 * rtb_ManualSwitch_0[5] +
        rtb_ManualSwitch_0[3] * Test_Traj_B.c_idx_1) + (Test_Traj_B.s_idx_1 *
        rtb_ManualSwitch_0[4] - Test_Traj_B.s_idx_0 * rtb_ManualSwitch_0[6]);
      Test_Traj_B.qRel[3] = (Test_Traj_B.c_idx_0 * rtb_ManualSwitch_0[6] +
        rtb_ManualSwitch_0[3] * Test_Traj_B.s_idx_1) + (Test_Traj_B.s_idx_0 *
        rtb_ManualSwitch_0[5] - Test_Traj_B.c_idx_1 * rtb_ManualSwitch_0[4]);

      //  vérifier si le sub est dans la zone de convergence (sphérique / conique) 
      Test_Traj_B.obj[0] = obj->poseBuffer[0] - rtb_ManualSwitch_0[0];
      Test_Traj_B.obj[1] = obj->poseBuffer[6001] - rtb_ManualSwitch_0[1];
      Test_Traj_B.obj[2] = obj->poseBuffer[12002] - rtb_ManualSwitch_0[2];
      if ((Test_Traj_norm(Test_Traj_B.obj) < obj->linearConvergence) && (2.0 *
           rt_atan2d_snf(Test_Traj_norm(&Test_Traj_B.qRel[1]), Test_Traj_B.qRel
                         [0]) < obj->quaternionConvergence)) {
        Test_Traj_B.c_idx_0 = obj->targetReachedCount + 1.0;
        obj->targetReachedCount = Test_Traj_B.c_idx_0;
      }
    } else {
      obj->targetReachedCount = 0.0;
    }

    // End of MATLABSystem: '<Root>/MATLAB System'
  }

  rate_scheduler();
}

// Model initialize function
void Test_Traj_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize sample time offsets
  Test_Traj_M->Timing.TaskCounters.TID[1] = 1;// Sample time: [0.25s, 0.2s]

  {
    int32_T i;
    char_T tmp[29];
    static const char_T tmp_0[36] = { '/', 'p', 'r', 'o', 'c', '_', 'c', 'o',
      'n', 't', 'r', 'o', 'l', '_', 'm', 'a', 't', 'l', 'a', 'b', '/', 'c', 'l',
      'e', 'a', 'r', '_', 'w', 'a', 'y', 'p', 'o', 'i', 'n', 't', 's' };

    static const char_T tmp_1[28] = { 'p', 'r', 'o', 'c', '_', 'c', 'o', 'n',
      't', 'r', 'o', 'l', '_', 'm', 'a', 't', 'l', 'a', 'b', '/', 'a', 'd', 'd',
      '_', 'p', 'o', 's', 'e' };

    static const char_T tmp_2[39] = { '/', 'p', 'r', 'o', 'c', '_', 'c', 'o',
      'n', 't', 'r', 'o', 'l', '_', 'm', 'a', 't', 'l', 'a', 'b', '/', 'c', 'o',
      'm', 'p', 'u', 't', 'e', '_', 't', 'r', 'a', 'j', 'e', 'c', 't', 'o', 'r',
      'y' };

    Test_Traj_PrevZCX.Subsystem_Trig_ZCE = POS_ZCSIG;

    // InitializeConditions for Delay: '<Root>/Delay'
    Test_Traj_DW.Delay_DSTATE = Test_Traj_P.Delay_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // Start for MATLABSystem: '<S3>/SourceBlock'
    Test_Traj_DW.obj_j.matlabCodegenIsDeleted = false;
    Test_Traj_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 36; i++) {
      Test_Traj_B.cv1[i] = tmp_0[i];
    }

    Test_Traj_B.cv1[36] = '\x00';
    Sub_Test_Traj_110.createSubscriber(Test_Traj_B.cv1, 1);
    Test_Traj_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S6>/Out1'
    Test_Traj_B.In1 = Test_Traj_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem'

    // Start for MATLABSystem: '<S1>/SourceBlock'
    Test_Traj_DW.obj_d.matlabCodegenIsDeleted = false;
    Test_Traj_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[28] = '\x00';
    Sub_Test_Traj_124.createSubscriber(tmp, 1);
    Test_Traj_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S2>/SourceBlock'
    Test_Traj_DW.obj_o.matlabCodegenIsDeleted = false;
    Test_Traj_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 39; i++) {
      Test_Traj_B.cv[i] = tmp_2[i];
    }

    Test_Traj_B.cv[39] = '\x00';
    Sub_Test_Traj_109.createSubscriber(Test_Traj_B.cv, 1);
    Test_Traj_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Triggered SubSystem: '<Root>/Subsystem'
    // Start for MATLABSystem: '<S4>/MATLAB System2'
    for (i = 0; i < 7; i++) {
      Test_Traj_DW.obj_n.avanceRapide[i] =
        Test_Traj_P.MATLABSystem2_avanceRapide[i];
      Test_Traj_DW.obj_n.avancePrecision[i] =
        Test_Traj_P.MATLABSystem2_avancePrecision[i];
      Test_Traj_DW.obj_n.accRapide[i] = Test_Traj_P.MATLABSystem2_accRapide[i];
    }

    Test_Traj_DW.obj_n.accPrecision = Test_Traj_P.MATLABSystem2_accPrecision;
    Test_Traj_DW.obj_n.Ts = Test_Traj_P.MATLABSystem2_Ts;
    Test_Traj_DW.obj_n.isInitialized = 1;

    //  untitled Add summary here
    //
    //  This template includes the minimum set of functions required
    //  to define a System object with discrete state.
    //  Public, tunable properties
    //  Vitesse Rapide
    //  Vtesse Precision
    //  acceleration Rapide
    //  acceleration Precision
    //  Public, tunable properties
    //  Taille statique
    //  Pre-computed constants
    //  Perform one-time calculations, such as computing constants
    Test_Traj_DW.obj_n.computeCount = 0.0;

    // End of Start for MATLABSystem: '<S4>/MATLAB System2'

    // SystemInitialize for Outport: '<S4>/Out1'
    //  Initialize / reset discrete-state properties
    for (i = 0; i < 13000; i++) {
      Test_Traj_B.MATLABSystem2_o1[i] = Test_Traj_P.Out1_Y0_g;
    }

    // End of SystemInitialize for Outport: '<S4>/Out1'

    // SystemInitialize for Outport: '<S4>/Out2'
    Test_Traj_B.MATLABSystem2_o2[0] = Test_Traj_P.Out2_Y0;
    Test_Traj_B.MATLABSystem2_o2[1] = Test_Traj_P.Out2_Y0;

    // End of SystemInitialize for SubSystem: '<Root>/Subsystem'

    // Start for MATLABSystem: '<Root>/MATLAB System1'
    //  untitled Add summary here
    //
    //  This template includes the minimum set of functions required
    //  to define a System object with discrete state.
    //  Public, tunable properties
    //  Pre-computed constants
    //  Fonction appeler a l'initialisation
    //  Perform one-time calculations, such as computing constants
    for (i = 0; i < 160; i++) {
      Test_Traj_DW.obj_p.poseList[i] = 999.0;
    }

    Test_Traj_DW.obj_p.poseList[0] = 0.0;
    Test_Traj_DW.obj_p.poseList[20] = 0.0;
    Test_Traj_DW.obj_p.poseList[40] = 0.0;
    Test_Traj_DW.obj_p.poseList[60] = 1.0;
    Test_Traj_DW.obj_p.poseList[80] = 0.0;
    Test_Traj_DW.obj_p.poseList[100] = 0.0;
    Test_Traj_DW.obj_p.poseList[120] = 0.0;
    Test_Traj_DW.obj_p.poseList[140] = 0.0;

    // initCond(1,1:7);
    Test_Traj_DW.obj_p.i = 2.0;

    // End of Start for MATLABSystem: '<Root>/MATLAB System1'

    // Start for MATLABSystem: '<Root>/MATLAB System'
    //         %%
    //  Initialize / reset discrete-state properties
    Test_Traj_DW.obj.linearConvergence =
      Test_Traj_P.MATLABSystem_linearConvergence;
    Test_Traj_DW.obj.quaternionConvergence =
      Test_Traj_P.MATLABSystem_quaternionConverge;
    Test_Traj_DW.obj.TargetThreshold = Test_Traj_P.MATLABSystem_TargetThreshold;
    Test_Traj_DW.obj.isInitialized = 1;
    Tes_TrajectoryManager_setupImpl(&Test_Traj_DW.obj);

    //  Fonction reset
    //  Initialize / reset discrete-state properties
  }
}

// Model terminate function
void Test_Traj_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  matlabCodegenHandle_matlabCodeg(&Test_Traj_DW.obj_j);

  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S1>/SourceBlock'
  matlabCodegenHandle_matlabCodeg(&Test_Traj_DW.obj_d);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  matlabCodegenHandle_matlabCodeg(&Test_Traj_DW.obj_o);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'
}

//
// File trailer for generated code.
//
// [EOF]
//

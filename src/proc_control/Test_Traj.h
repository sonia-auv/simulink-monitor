//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Test_Traj.h
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
#ifndef RTW_HEADER_Test_Traj_h_
#define RTW_HEADER_Test_Traj_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slros_initialize.h"
#include "Test_Traj_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  real_T b_this[78013];
  real_T MATLABSystem2_o1[13000];      // '<S4>/MATLAB System2'
  creal_T z_data[5251];
  creal_T z_data_m[5251];
  creal_T tmp_data[5250];
  creal_T b_y1_data[5250];
  creal_T tmp_data_c[5250];
  creal_T dz_data[5250];
  creal_T d1_data[5250];
  creal_T Zout_data[5249];
  creal_T tmp_data_k[5249];
  creal_T Zout_data_c[5249];
  creal_T zorig_data[5249];
  creal_T z_data_b[5249];
  creal_T d2_data[5249];
  creal_T tmp_data_p[5248];
  creal_T tmp_data_cv[5248];
  creal_T znew_data[5248];
  creal_T tmp_data_f[5248];
  creal_T d1_data_g[5248];
  creal_T d2_data_g[5247];
  real_T tmp_data_m[5250];
  real_T tmp_data_n[5250];
  real_T l_data[5250];
  real_T l_data_p[5250];
  real_T l1_data[5250];
  real_T l1_data_l[5250];
  real_T tmp_data_j[5249];
  real_T a_data[5249];
  real_T tmp_data_d[5249];
  real_T r_data[5249];
  real_T s_data[5249];
  real_T alpha_data[5249];
  real_T l_data_g[5249];
  real_T alpha_data_l[5249];
  real_T tmp_data_dh[5249];
  real_T u_data[5249];
  real_T v_data[5249];
  real_T b_data[5248];
  real_T Lbd_data[5248];
  real_T l_data_d[5248];
  real_T alpha_data_lx[5248];
  real_T beta_data[5248];
  real_T l1_data_o[5248];
  real_T alpha_data_b[5247];
  real_T l1_data_n[5247];
  creal_T z_data_bs[2563];
  creal_T z_data_l[2563];
  creal_T dz_data_h[2562];
  creal_T d1_data_b[2562];
  creal_T Zout[2561];
  creal_T tmp_data_da[2561];
  creal_T Zout_data_e[2561];
  creal_T b_Zout[2561];
  creal_T zorig_data_b[2561];
  creal_T d2_data_j[2561];
  creal_T znew_data_f[2560];
  creal_T d2_data_a[2559];
  creal_T zcurrent_data[2559];
  creal_T At_data[1600];
  creal_T b_At_data[1600];
  creal_T c_A_data[1600];
  creal_T b_A_data[1600];
  creal_T y_data[1600];
  real_T l_data_j[2562];
  real_T l_data_jz[2562];
  real_T l1_data_o4[2562];
  real_T l1_data_ny[2562];
  real_T u[2561];
  real_T v[2561];
  real_T r[2561];
  real_T s[2561];
  real_T alpha_data_i[2561];
  real_T l_data_o[2561];
  real_T alpha_data_n[2561];
  real_T l_data_m[2560];
  real_T alpha_data_c[2560];
  real_T l1_data_m[2560];
  real_T alpha_data_m[2559];
  real_T beta_data_j[2559];
  real_T l1_data_h[2559];
  real_T tmp_data_c0[1681];
  real_T tmp_data_ct[1600];
  real_T b_A_data_p[1600];
  real_T tmp_data_p5[1600];
  real_T tmp_data_a[1600];
  real_T A_data[1600];
  real_T A_data_e[1600];
  real_T c_a_data[1600];
  real_T c_a_data_a[1600];
  real_T c_h_data[1600];
  real_T b_h_data[1600];
  real_T c_x_data[1600];
  real_T c_x_data_a[1600];
  real_T e_A_data[1600];
  real_T d_C_data[1600];
  real_T b_C_data[1600];
  real_T b_C_data_i[1600];
  waypointTrajectory_Test_Traj_T trajectory;
  real_T result_data[1092];
  real_T result_data_l[1092];
  real_T x_data[1066];
  real_T x_data_o[1066];
  real_T varargin_2_data[1025];
  int32_T counts_data[1600];
  creal_T At[400];
  creal_T b_At[400];
  creal_T b_A[400];
  int32_T ac_data[1281];
  real_T x[520];
  real_T x_o[520];
  real_T x_i[520];
  real_T x_f[520];
  real_T dv[500];
  real_T dv1[500];
  real_T dv2[400];
  real_T T[400];
  real_T A[400];
  real_T A_i[400];
  real_T b_a[400];
  real_T b_h[400];
  real_T y_data_f[236];
  real_T zy_data[210];
  real_T z_data_g[210];
  real_T c_data[210];
  boolean_T filled_data[1600];
  real_T List[168];
  real_T u_data_c[168];
  real_T v_data_o[168];
  h_cell_wrap_Test_Traj_T reshapes[3];
  h_cell_wrap_Test_Traj_T reshapes_l[3];
  h_cell_wrap_Test_Traj_T reshapes_m[3];
  f_cell_wrap_Test_Traj_T tunableEnvironment;
  real_T waypoints_data[126];
  real_T Jtri_data[126];
  real_T b_varargout_2_data[126];
  real_T a_data_m[126];
  real_T Jtri_data_c[123];
  real_T b_varargout_2_data_f[123];
  real_T Jtri_data_p[123];
  real_T b_varargout_2_data_e[123];
  real_T Jtri_data_o[120];
  real_T b_varargout_2_data_h[120];
  real_T beta_data_l[118];
  real_T zy[100];
  real_T dv3[100];
  real_T z[100];
  real_T c[100];
  creal_T hip_data[42];
  creal_T hip_data_h[42];
  creal_T hip_data_m[42];
  creal_T hip_data_mc[42];
  creal_T hip_data_h3[42];
  creal_T hip_data_c[42];
  creal_T hip_data_k[42];
  creal_T hip_data_p[42];
  creal_T x_data_p[42];
  creal_T hip_data_p4[41];
  creal_T z_data_a[41];
  creal_T f_data[41];
  creal_T df_da_data[41];
  creal_T tmp_data_jd[41];
  creal_T b_data_e[41];
  creal_T e_data[41];
  creal_T a1_data[41];
  creal_T a2_data[41];
  creal_T fa_data[41];
  creal_T s_data_o[41];
  creal_T r_data_b[41];
  creal_T da2_data[41];
  creal_T x_data_a[41];
  creal_T tmp_data_g[41];
  creal_T a1_data_e[41];
  creal_T tmp_data_fi[41];
  creal_T tmp_data_h[41];
  creal_T hip_data_e[41];
  creal_T hip_data_ch[41];
  creal_T nik_data[41];
  creal_T e_data_a[41];
  creal_T A_data_d[41];
  creal_T m2C_data[41];
  creal_T dm2C_data[41];
  creal_T t_data[41];
  creal_T dt_data[41];
  creal_T dp_data[41];
  creal_T hip_data_a[41];
  creal_T p_data[41];
  creal_T q_data[41];
  creal_T x_data_pb[41];
  creal_T q_data_m[41];
  creal_T r_data_o[41];
  creal_T tmp_data_nh[40];
  creal_T beta1_data[40];
  real_T hpp_coefs[80];
  real_T hspp_coefs[80];
  real_T happ_coefs[80];
  real_T vpp_coefs[80];
  real_T vspp_coefs[80];
  real_T vapp_coefs[80];
  real_T v_l[80];
  real_T x_tmp[80];
  real_T m[80];
  real_T dv4[80];
  real_T dv5[80];
  real_T waypoints_data_p[66];
  real_T waypoints_data_pt[66];
  real_T w[63];
  real_T wprev[63];
  d_cell_wrap_Test_Traj_T tunableEnvironment_f;
  real_T e[60];
  real_T Jtri[60];
  real_T b_varargout_2[60];
  real_T rv[60];
  real_T b_z1[60];
  real_T beta[58];
  real_T x_ie[57];
  real_T A_o[57];
  real_T A_k[57];
  boolean_T filled[400];
  real_T course_data[45];
  real_T course_data_i[44];
  real_T c_data_o[43];
  real_T courselsq_data[43];
  real_T tmp_data_m4[43];
  real_T range_data[42];
  real_T waypoints_data_c[42];
  real_T waypoints_data_f[42];
  real_T dx_data[42];
  real_T tmp_data_hc[42];
  real_T course_data_m[42];
  real_T course_data_a[42];
  real_T tmp_data_kb[42];
  real_T tmp_data_pc[42];
  real_T tmp_data_b[42];
  real_T tmp_data_ch[42];
  real_T v_data_n[42];
  real_T dx_data_i[42];
  real_T xnew_data[42];
  real_T b_r_data[42];
  real_T epsx_data[42];
  real_T epsr_data[42];
  real_T xnew_data_m[42];
  real_T a_data_j[42];
  real_T b_data_ev[42];
  real_T c_data_m[42];
  real_T d_data[42];
  real_T e_data_m[42];
  real_T f_data_j[42];
  real_T c_data_f[42];
  real_T c_data_a[42];
  real_T alpha_data_g[42];
  real_T dx_data_d[42];
  real_T tmp_data_na[42];
  real_T course_data_c[42];
  real_T course_data_f[42];
  real_T y_data_p[42];
  real_T tmp_data_p2[42];
  real_T c_z1_data[42];
  real_T dx_data_n[42];
  real_T xnew_data_k[42];
  real_T epsx_data_n[42];
  real_T epsr_data_o[42];
  real_T tmp_data_gg[42];
  real_T oldq_data[42];
  real_T b_data_c[42];
  real_T q_data_c[42];
  real_T lower_data[42];
  real_T center_data[42];
  real_T upper_data[42];
  real_T tmp_data_m1[42];
  real_T center_data_j[42];
  real_T u_data_k[42];
  real_T z_data_mx[42];
  real_T b_data_p[42];
  real_T course_data_d[42];
  real_T course_data_g[42];
  real_T tmp_data_c3[42];
  real_T lower_data_c[42];
  real_T center_data_i[42];
  real_T upper_data_d[42];
  real_T z_data_g4[42];
  real_T alpha_data_lg[42];
  real_T z_data_f[42];
  real_T c_data_d[42];
  creal_T hip[21];
  creal_T hip_n[21];
  creal_T x_j[21];
  real_T y_data_i[41];
  real_T tmp_data_h2[41];
  real_T xnew_data_n[41];
  real_T epsx_data_o[41];
  real_T epsr_data_c[41];
  real_T unusedU3_data[41];
  real_T k0_data[41];
  real_T k1_data[41];
  real_T dk0_dc0_data[41];
  real_T dk0_dc1_data[41];
  real_T dk1_dc0_data[41];
  real_T dk1_dc1_data[41];
  real_T course_data_b[41];
  real_T phi_data[41];
  real_T phi0_data[41];
  real_T phi1_data[41];
  real_T da_dphi0_data[41];
  real_T da_dphi1_data[41];
  real_T d_data_e[41];
  real_T a_data_d[41];
  real_T c_data_i[41];
  real_T ratio_data[41];
  real_T tmp_data_gs[41];
  real_T x_data_n[41];
  real_T xabs_data[41];
  real_T ismall_data[41];
  real_T x4_data[41];
  real_T ibig_data[41];
  real_T unusedU4_data[41];
  real_T k0_data_l[41];
  real_T k1_data_c[41];
  real_T dk0_dc0_data_n[41];
  real_T dk0_dc1_data_p[41];
  real_T dk1_dc0_data_d[41];
  real_T dk1_dc1_data_o[41];
  real_T x_data_j[41];
  real_T y_data_c[41];
  real_T y_data_h[41];
  real_T y_data_d[41];
  real_T y_data_c5[41];
  real_T y_data_pw[41];
  real_T y_data_pi[41];
  real_T b_gamma_data[41];
  real_T v_data_a[41];
  real_T xnew_data_o[41];
  real_T b_r_data_j[41];
  real_T epsx_data_p[41];
  real_T epsr_data_ob[41];
  real_T b_varargout_1_data[41];
  real_T unusedU2_data[41];
  real_T k0_data_lm[41];
  real_T k1_data_k[41];
  real_T dk0_dc0_data_j[41];
  real_T dk0_dc1_data_f[41];
  real_T dk1_dc0_data_c[41];
  real_T dk1_dc1_data_f[41];
  real_T course_data_n[41];
  real_T k_data[41];
  real_T tmp_data_i[41];
  real_T v_data_l[41];
  real_T b_r_data_i[41];
  real_T b_varargout_1_data_k[41];
  real_T y_data_fc[41];
  real_T y_data_a[41];
  real_T y_data_d4[41];
  real_T y_data_e[41];
  real_T y_data_eh[41];
  real_T y_data_b[41];
  real_T unusedU1_data[41];
  real_T k0_data_a[41];
  real_T k1_data_i[41];
  real_T dk0_dc0_data_f[41];
  real_T dk0_dc1_data_j[41];
  real_T dk1_dc0_data_o[41];
  real_T dk1_dc1_data_fr[41];
  real_T course_data_o[41];
  real_T u_data_l[41];
  real_T v_data_lu[41];
  real_T dadr_data[41];
  real_T y_data_g[41];
  real_T y_data_d42[41];
  real_T y_data_dv[41];
  real_T z_data_j[41];
  real_T b_gamma_data_f[41];
  real_T y_data_j[41];
  real_T y_data_ho[41];
  real_T y_data_cf[41];
  real_T v_data_nu[40];
  real_T b_r_data_k[40];
  real_T b_varargout_1_data_a[40];
  real_T delta_data[40];
  real_T alpha_data_j[40];
  real_T beta_data_k[40];
  real_T delta_data_e[40];
  real_T tmp_data_hn[40];
  real_T b_y_data[40];
  real_T work_data[40];
  creal_T x_fn[20];
  creal_T beta1[20];
  creal_T z_b[20];
  creal_T df_da[20];
  creal_T b_x[20];
  creal_T z_h[20];
  creal_T f[20];
  real_T y_data_k[24];
  real_T e_data_j[23];
  real_T e_data_o[23];
  real_T range_data_c[22];
  real_T range_data_h[22];
  int32_T b_data_f[42];
  int32_T v_data_nh[42];
  int32_T g_data[42];
  int32_T y_data_hp[42];
  int32_T x_data_f[42];
  int32_T x_data_i[42];
  int32_T y_data_f4[42];
  int32_T x_data_c[42];
  int32_T x_data_nn[42];
  real_T tpts[21];
  real_T x_iy[21];
  real_T assign_temp_a[21];
  real_T assign_temp_b[21];
  real_T assign_temp_c[21];
  real_T q_a[21];
  real_T q_b[21];
  real_T q_c[21];
  real_T q_d[21];
  real_T t[21];
  real_T t_p[21];
  real_T course[21];
  real_T hcd[21];
  real_T hpp_breaks[21];
  real_T hspp_breaks[21];
  real_T happ_breaks[21];
  real_T vpp_breaks[21];
  real_T vspp_breaks[21];
  real_T vapp_breaks[21];
  real_T y_data_ew[21];
  real_T a[21];
  real_T b[21];
  real_T c_h[21];
  real_T dv6[21];
  real_T dv7[21];
  real_T gndspeed[21];
  real_T rate[21];
  real_T b_x_h[21];
  real_T b_x_k[21];
  real_T slopes[21];
  int32_T g_data_h[41];
  int32_T ilarge_data[41];
  int32_T ismall_data_b[41];
  int32_T izero_data[41];
  int32_T ii_data[41];
  int32_T bd_data[41];
  int32_T dd_data[41];
  int32_T ii_data_o[41];
  int32_T h_data[41];
  int32_T rscale_data[40];
  real_T h[20];
  real_T dtheta[20];
  real_T k0[20];
  real_T k1[20];
  real_T hl[20];
  real_T x_n[20];
  real_T ibegin_data[20];
  real_T iend_data[20];
  real_T courselsq[20];
  real_T v_m[20];
  real_T dx[20];
  real_T xnew[20];
  real_T b_r[20];
  real_T unusedU0[20];
  real_T k0_k[20];
  real_T k1_j[20];
  real_T dk0_dc0[20];
  real_T dk0_dc1[20];
  real_T dk1_dc0[20];
  real_T dk1_dc1[20];
  real_T xnew_h[20];
  real_T lower[20];
  real_T upper[20];
  real_T z_f[20];
  real_T oldq[20];
  real_T q[20];
  real_T alpha[20];
  real_T beta_d[20];
  real_T v_li[20];
  real_T work[20];
  real_T phi[20];
  real_T phi0[20];
  real_T phi1[20];
  real_T da_dphi0[20];
  real_T da_dphi1[20];
  real_T u_k[20];
  real_T v_i[20];
  real_T dadr[20];
  real_T d[20];
  real_T e_h[20];
  real_T f_m[20];
  real_T alpha_g[20];
  real_T alpha_l[20];
  real_T assign_temp_a_m[20];
  real_T assign_temp_b_n[20];
  real_T assign_temp_c_g[20];
  real_T assign_temp_d[20];
  real_T dv8[20];
  real_T deltaQuat_a[20];
  real_T deltaQuat_b[20];
  real_T deltaQuat_c[20];
  real_T deltaQuat_d[20];
  real_T obj_d_data[20];
  real_T izero_data_d[20];
  real_T qi_c[20];
  real_T qi_d[20];
  real_T mag[20];
  real_T n[20];
  real_T phi_m[20];
  real_T phi0_f[20];
  real_T phi1_g[20];
  real_T v_j[20];
  real_T x_c[20];
  real_T dv9[20];
  real_T x_e[20];
  real_T d_m[20];
  real_T c_data_of[20];
  real_T x_a[20];
  real_T d_j[20];
  real_T c_data_g[20];
  real_T h_j[20];
  real_T del[20];
  real_T Jtri_e[20];
  real_T z_j[20];
  real_T b_j[20];
  real_T b_g[20];
  real_T b_gamma[19];
  real_T b_gamma_o[19];
  real_T work_h[19];
  real_T delta[18];
  real_T delta_c[18];
  real_T J_data[16];
  real_T A_data_a[16];
  real_T y[16];
  real_T dv10[16];
  real_T dv11[16];
  real_T b_I[16];
  real_T c_A_data_l[16];
  real_T b_A_data_j[16];
  real_T b_C_data_ib[16];
  real_T c_A_data_m[16];
  real_T c_x_data_f[16];
  real_T c_A[16];
  real_T c_x_data_o[16];
  real_T currPose[13];
  int32_T d_data_i[22];
  creal_T b_A_data_j3[5];
  creal_T x_data_g[5];
  creal_T tmp_data_jz[5];
  int32_T ii_data_e[20];
  int32_T ilarge_data_j[20];
  int32_T ismall_data_o[20];
  int32_T izero_data_f[20];
  int32_T ii_data_m[20];
  int32_T ilarge_data_a[20];
  int32_T ismall_data_h[20];
  int32_T izero_data_o[20];
  int32_T ii_data_h[20];
  int32_T rscale[20];
  int32_T ii_data_l[20];
  real_T A_kb[9];
  real_T B[9];
  real_T List_d[8];
  SL_Bus_Test_Traj_sonia_common_AddPose In1;// '<S6>/In1'
  SL_Bus_Test_Traj_sonia_common_AddPose b_varargout_2_n;
  real_T sd[7];
  real_T cd[7];
  real_T sd_j[7];
  real_T cd_a[7];
  real_T C[6];
  real_T cn[6];
  real_T sn[6];
  real_T cn_h[6];
  real_T sn_i[6];
  boolean_T tmp_data_dn[42];
  boolean_T xnew_data_b[42];
  boolean_T tmp_data_hj[42];
  boolean_T xnew_data_p[42];
  boolean_T criteria_data[41];
  boolean_T x_data_nk[41];
  real_T b_data_j[5];
  real_T b_o[5];
  char_T cv[40];
  char_T cv1[37];
  creal_T varargin_1[2];
  real_T qRel[4];
  real_T tmp_data_bj[4];
  real_T y_j[4];
  real_T dv12[4];
  real_T b_tau_data[4];
  real_T B_data[4];
  real_T work_data_e[4];
  real_T vn1_data[4];
  real_T vn2_data[4];
  real_T work_data_i[4];
  real_T obj[3];
  real_T b_varargout_5[3];
  real_T b_varargout_3[3];
  real_T b_varargout_1[3];
  real_T b_acceleration[3];
  real_T w_n[3];
  real_T w_i[3];
  real_T wi[3];
  real_T wf[3];
  real_T temp1[3];
  real_T b_e[3];
  real_T b_e_p[3];
  real_T b_e_o[3];
  real_T w_m[3];
  real_T v_o[3];
  real_T b_v[3];
  real_T position[3];
  real_T velocity[3];
  real_T acceleration[3];
  real_T jerk[3];
  real_T s_g[3];
  real_T e_e[3];
  real_T th0[3];
  real_T th1[3];
  real_T th2[3];
  real_T f_data_i[3];
  real_T th1_data[3];
  real_T th3_data[3];
  real_T u_data_g[3];
  real_T w_data[3];
  real_T udot_data[3];
  real_T wd1xu_data[3];
  real_T temp0_data[3];
  real_T wd2_data[3];
  real_T qimag[3];
  real_T f_tmp_data[3];
  real_T tmp_data_ge[3];
  real_T tmp_data_gb[3];
  real_T tmp_data_gr[3];
  real_T tmp_data_ca[3];
  real_T tmp_data_kt[3];
  real_T bvec[3];
  real_T bvec2_data[3];
  real_T e_data_d[3];
  real_T wf_data[3];
  real_T e_data_k[3];
  real_T wf_data_p[3];
  real_T e_data_p[3];
  real_T e_data_m4[3];
  real_T v_k[3];
  real_T b_v_a[3];
  int8_T d_data_f[22];
  int8_T iv[20];
  int8_T iv1[20];
  int8_T iv2[20];
  int8_T z_tmp[20];
  int8_T iv3[20];
  int8_T iv4[20];
  int8_T e_tmp[20];
  int8_T c_data_j[20];
  int8_T d_data_k[20];
  int8_T e_data_h[20];
  int8_T iv5[20];
  int8_T iv6[20];
  int8_T iv7[20];
  int8_T b_data_n[20];
  boolean_T k0_c[20];
  boolean_T idx[20];
  boolean_T criteria[20];
  boolean_T criteria_d[20];
  boolean_T x_j1[20];
  int8_T z_tmp_j[19];
  int8_T z_tmp_l[19];
  int8_T e_tmp_p[19];
  int8_T b_I_m[16];
  int32_T b_jpvt_data[4];
  int32_T b_jpvt_data_b[4];
  int32_T b_ipiv_data[4];
  real_T MATLABSystem2_o2[2];          // '<S4>/MATLAB System2'
  real_T waypoints[2];
  real_T waypoints_a[2];
  real_T dx_f[2];
  real_T dy[2];
  real_T dv13[2];
  real_T v_ko[2];
  real_T n_c[2];
  creal_T a2_data_p;
  creal_T fa_data_l;
  creal_T da2_data_l;
  creal_T x_data_h;
  creal_T tmp_data_cg;
  creal_T tmp_data_g0;
  creal_T drsfa_data;
  creal_T z_data_e;
  creal_T V;
  creal_T dt_data_n;
  creal_T nik_data_f;
  creal_T e_data_n;
  creal_T dp_data_e;
  creal_T z_data_by;
  creal_T t_data_a;
  creal_T dt_data_i;
  creal_T t_data_n;
  creal_T dz_data_f;
  creal_T z_data_i;
  creal_T dz_data_k;
  creal_T dp_data_b;
  creal_T e_data_da;
  creal_T z_hs;
  creal_T b_x_n;
  creal_T b_x_f;
  creal_T z_a;
  creal_T z_g;
  creal_T f_n;
  creal_T f_c;
  creal_T ph;
  creal_T vh;
  creal_T ah;
  creal_T jh;
  creal_T dc;
  creal_T nc;
  creal_T nikx_data;
  creal_T nhikx_data;
  creal_T hidkxx_data;
  creal_T e_data_d4;
  creal_T t_data_k;
  creal_T e_data_c;
  creal_T z_data_jd;
  creal_T x_data_m;
  creal_T V_data;
  creal_T ctemp;
  creal_T ad11;
  creal_T t1;
  creal_T ascale;
  creal_T t1_i;
  creal_T zright;
  creal_T work_data_o;
  creal_T ph_g;
  creal_T vh_e;
  creal_T ah_i;
  creal_T jh_e;
  creal_T dc1;
  creal_T q_data_i;
  creal_T a_data_m5;
  creal_T z_data_d;
  creal_T z_data_j4;
  creal_T z_data_p;
  creal_T z_data_b4;
  creal_T q_data_p;
  creal_T z_data_n;
  creal_T zright_c;
  creal_T ctemp_n;
  creal_T ad11_d;
  creal_T t1_ih;
  creal_T ascale_n;
  creal_T t1_b;
  creal_T zright_b;
  creal_T zright_j;
  creal_T s_n;
  creal_T s_f;
  creal_T b_A_data_e;
  creal_T b_A_i;
  real_T c_idx_0;
  real_T c_idx_1;
  real_T c_idx_2;
  real_T s_idx_0;
  real_T s_idx_1;
  real_T s_idx_2;
  real_T d_g;
  real_T d1;
  real_T maxTime;
  real_T dist;
  real_T b_q_a;
  real_T b_q_b;
  real_T b_q_c;
  real_T b_q_d;
  real_T b_d;
  real_T ndbl;
  real_T apnd;
  real_T cdiff;
  real_T u0;
  real_T u1;
  real_T freetail_tmp;
  real_T maxiter;
  real_T lambda;
  real_T lambdac;
  real_T iter;
  real_T S;
  real_T b_varargout_1_c;
  real_T brm;
  real_T bim;
  real_T d2;
  real_T ar;
  real_T brm_m;
  real_T bim_d;
  real_T sgnbi;
  real_T d_n;
  real_T x_data_im;
  real_T re;
  real_T br;
  real_T x4_data_im;
  real_T ibig_data_b;
  real_T x4_data_p;
  real_T r_k;
  real_T b_x_re;
  real_T maxiter_c;
  real_T lambda_n;
  real_T lambdac_n;
  real_T iter_c;
  real_T S_d;
  real_T b_varargout_1_n;
  real_T bkj;
  real_T bkj_g;
  real_T v_data_tmp;
  real_T v_data_tmp_l;
  real_T alpha_data_tmp;
  real_T b_gamma_data_tmp;
  real_T b_gamma_data_tmp_g;
  real_T lambda_p;
  real_T lambdac_k;
  real_T S_l;
  real_T unusedU0_b;
  real_T R;
  real_T bet;
  real_T q_cx;
  real_T brm_f;
  real_T bim_o;
  real_T sgnbi_d;
  real_T d_l;
  real_T b_alpha1;
  real_T tau;
  real_T xnorm;
  real_T scale;
  real_T absxk;
  real_T t_l;
  real_T maxiter_d;
  real_T lambda_k;
  real_T lambdac_f;
  real_T iter_p;
  real_T S_k;
  real_T b_varargout_1_k;
  real_T ai;
  real_T a_re;
  real_T re_i;
  real_T d3;
  real_T d4;
  real_T maxiter_e;
  real_T lambda_f;
  real_T lambdac_kx;
  real_T iter_n;
  real_T S_i;
  real_T b_varargout_1_i;
  real_T R_o;
  real_T d5;
  real_T bet_d;
  real_T q_i;
  real_T b_gamma_g;
  real_T d6;
  real_T d7;
  real_T mu;
  real_T i;
  real_T j;
  real_T i_c;
  real_T c_tmp;
  real_T r_e;
  real_T a_re_a;
  real_T phi_h;
  real_T dk0_dtheta0;
  real_T k1_e;
  real_T dk1_dtheta0;
  real_T dk0_dtheta1;
  real_T b_x_tmp;
  real_T i_d;
  real_T j_g;
  real_T i_e;
  real_T c_tmp_e;
  real_T alpha_tmp;
  real_T b_gamma_tmp;
  real_T d8;
  real_T alpha_tmp_g;
  real_T b_gamma_tmp_g;
  real_T work_d;
  real_T tmp2;
  real_T ca;
  real_T sa;
  real_T windote;
  real_T magsq;
  real_T absx;
  real_T temp2_idx_0;
  real_T temp2_idx_1;
  real_T temp2_idx_2;
  real_T temp2_idx_0_tmp;
  real_T yv;
  real_T scale_n;
  real_T absxk_p;
  real_T t_b;
  real_T n_i;
  real_T r_b;
  real_T a_re_j;
  real_T phi_g;
  real_T f_tmp;
  real_T i_n;
  real_T j_p;
  real_T c_f;
  real_T tst;
  real_T ab;
  real_T ba;
  real_T aa;
  real_T bb;
  real_T h12;
  real_T h21s;
  real_T d_f;
  real_T e_a;
  real_T p;
  real_T bcmax;
  real_T bcmis;
  real_T scale_g;
  real_T z_m;
  real_T tau_d;
  real_T a_e;
  real_T x_ey;
  real_T l_0;
  real_T l_1;
  real_T l_2;
  real_T l_3;
  real_T l;
  real_T b_dl;
  real_T c_j;
  real_T d_nx;
  real_T r_j;
  real_T f_1_im;
  real_T y_re;
  real_T f_2_re;
  real_T f_2_im;
  real_T re_p;
  real_T f_1_im_tmp;
  real_T im_tmp;
  real_T thresh;
  real_T tmp_data_aw;
  real_T tmp_data_df;
  real_T dk_data;
  real_T tmp_data_pz;
  real_T nhikx_data_re;
  real_T nhikx_data_im;
  real_T thresh_tmp;
  real_T xabs_data_d;
  real_T x4_data_pq;
  real_T r_f;
  real_T x_tmp_data;
  real_T br_g;
  real_T x4_data_im_d;
  real_T x4_data_h;
  real_T x_iei;
  real_T r_m;
  real_T b_x_im;
  real_T alpha_data_tmp_c;
  real_T b_gamma_data_tmp_l;
  real_T b_gamma_data_tmp_p;
  real_T s_idx_1_i;
  real_T brm_b;
  real_T bim_g;
  real_T sgnbi_o;
  real_T d_b;
  real_T anrm;
  real_T anrmto;
  real_T anorm;
  real_T b_atol;
  real_T bscale;
  real_T temp;
  real_T temp2;
  real_T tempr;
  real_T ai_e;
  real_T stemp_re;
  real_T stemp_im;
  real_T eshift_re;
  real_T eshift_im;
  real_T t1_tmp;
  real_T scale_e;
  real_T g2;
  real_T f2s;
  real_T di;
  real_T b_x_l;
  real_T fs_re;
  real_T fs_im;
  real_T gs_re;
  real_T gs_im;
  real_T nrm;
  real_T rt;
  real_T ztest;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  real_T unusedU2;
  real_T d_sn;
  real_T roe;
  real_T absa;
  real_T absb;
  real_T scale_c;
  real_T ads;
  real_T bds;
  real_T tol;
  real_T temp1_e;
  real_T temp2_d;
  real_T b_atmp;
  real_T c_o;
  real_T nmax;
  real_T m_l;
  real_T mnew;
  real_T wb;
  real_T xzero_re;
  real_T xzero_im;
  real_T tmp2_re;
  real_T tmp2_im;
  real_T l_0_h;
  real_T l_1_l;
  real_T l_2_c;
  real_T l_c;
  real_T b_ag;
  real_T c_i;
  real_T d_lt;
  real_T xloc;
  real_T r_i;
  real_T f_2_re_a;
  real_T f_2_im_i;
  real_T f_1_im_c;
  real_T y_re_m;
  real_T re_n;
  real_T f_1_im_tmp_c;
  real_T im_tmp_n;
  real_T r_h;
  real_T tmp_data_iu;
  real_T im;
  real_T x_ef;
  real_T x2;
  real_T ang_data;
  real_T ca_data;
  real_T sa_data;
  real_T thd2_data;
  real_T w2_data;
  real_T b_qd;
  real_T theta;
  real_T st;
  real_T scale_p;
  real_T absxk_k;
  real_T t_i;
  real_T thd2_tmp_data;
  real_T thd1_tmp_data;
  real_T tmp_data_nl;
  real_T tmp_data_o;
  real_T c_data_tmp;
  real_T c_data_tmp_l;
  real_T xloc_p;
  real_T b_x_b;
  real_T absx_f;
  real_T m_i;
  real_T mnew_c;
  real_T yb;
  real_T re_g;
  real_T im_i;
  real_T re_b;
  real_T hs;
  real_T hs3;
  real_T mu_n;
  real_T b_gamma_p;
  real_T b_alpha1_o;
  real_T tau_data;
  real_T temp_b;
  real_T anrm_o;
  real_T anrmto_c;
  real_T anorm_j;
  real_T b_atol_e;
  real_T temp_p;
  real_T temp2_n;
  real_T tempr_o;
  real_T ai_d;
  real_T stemp_re_g;
  real_T stemp_im_i;
  real_T eshift_re_i;
  real_T eshift_im_c;
  real_T t1_tmp_b;
  real_T scale_gh;
  real_T g2_d;
  real_T f2s_f;
  real_T di_j;
  real_T b_x_e;
  real_T fs_re_p;
  real_T fs_im_d;
  real_T gs_re_f;
  real_T gs_im_n;
  real_T smax;
  real_T s_o;
  real_T tmp_data_du;
  real_T tmp_data_l;
  real_T aa_tmp;
  real_T c_fu;
  real_T itmax;
  real_T SMLNUM;
  real_T tst_j;
  real_T ab_g;
  real_T ba_l;
  real_T aa_k;
  real_T bb_p;
  real_T h12_b;
  real_T h21s_i;
  real_T cs;
  real_T sn_p;
  real_T xnorm_l;
  real_T scale_ea;
  real_T absxk_e;
  real_T t_pn;
  real_T smax_j;
  real_T s_gy;
  real_T ub_tmp;
  real_T temp_l;
  real_T ub_tmp_j;
  real_T c_p;
  real_T d9;
  real_T stemp_re_d;
  real_T stemp_im_k;
  real_T c_m;
  real_T d10;
  real_T stemp_re_f;
  real_T stemp_im_m;
  real_T cfromc;
  real_T ctoc;
  real_T cfrom1;
  real_T cto1;
  real_T mul;
  real_T scale_nf;
  real_T sumsq;
  real_T temp1_m;
  real_T temp2_b;
  real_T cfromc_c;
  real_T ctoc_g;
  real_T cfrom1_c;
  real_T cto1_i;
  real_T ac2;
  real_T ad2;
  real_T bc2;
  real_T bd2;
  real_T cd2;
  real_T scale_k;
  real_T sumsq_g;
  real_T temp1_p;
  real_T temp2_f;
  real_T b1;
  real_T b2;
  real_T b0;
  real_T temp2_idx_2_m;
  real_T temp2_idx_1_m;
  real_T b1_l;
  real_T b2_j;
  real_T b0_m;
  real_T temp2_idx_2_j;
  real_T temp2_idx_1_i;
  real_T temp_a;
  real_T xnorm_h;
  real_T scale_d;
  real_T absxk_i;
  real_T t_h;
  real_T cfromc_d;
  real_T ctoc_l;
  real_T cfrom1_f;
  real_T cto1_l;
  real_T mul_l;
  real_T cfromc_f;
  real_T ctoc_gy;
  real_T cfrom1_g;
  real_T cto1_a;
  real_T scale_du;
  real_T absxk_b;
  real_T t_d;
  real_T atmp_re;
  real_T atmp_im;
  real_T atmp_re_f;
  real_T atmp_im_a;
  real_T c_mq;
  real_T temp_i;
  real_T scale_i;
  real_T absxk_kq;
  real_T t_a;
  real_T temp_m;
  int32_T waypoints_size[2];
  int32_T waypoints_size_j[2];
  int32_T Jtri_size[2];
  int32_T b_varargout_2_size[2];
  int32_T waypoints_size_l[2];
  int32_T Jtri_size_a[2];
  int32_T b_varargout_2_size_i[2];
  int32_T A_size[2];
  int32_T tmp_size[2];
  int32_T y_size[2];
  int32_T A_size_o[2];
  int32_T zy_size[2];
  int32_T result_size[2];
  int32_T z_size[2];
  int32_T c_size[2];
  int32_T Jtri_size_b[2];
  int32_T b_varargout_2_size_a[2];
  int32_T Jtri_size_aq[2];
  int32_T b_varargout_2_size_i0[2];
  int32_T tmp_size_i[2];
  int32_T y_size_l[2];
  int32_T varargin_2_size[2];
  int32_T tmp_size_o[2];
  int32_T x_size[2];
  int32_T dk_size[2];
  int32_T k_size[2];
  int32_T theta_size[2];
  int32_T k_size_p[2];
  int32_T tmp_size_om[2];
  int32_T dk_size_c[2];
  int32_T tmp_size_oc[2];
  int32_T tmp_size_ol[2];
  int32_T dk_size_h[2];
  int32_T tmp_size_ih[2];
  int32_T x_size_g[2];
  int32_T tmp_size_c[2];
  int32_T tmp_size_ok[2];
  int32_T tmp_size_g[2];
  int32_T k_size_o[2];
  int32_T tmp_size_gf[2];
  int32_T k_size_a[2];
  int32_T xabs_size[2];
  int32_T SZ[2];
  int32_T tmp_size_gy[2];
  int32_T A_size_b[2];
  int32_T At_size[2];
  int32_T b_At_size[2];
  int32_T c_A_size[2];
  int32_T b_jpvt_size[2];
  int32_T b_jpvt_size_k[2];
  int32_T e_A_size[2];
  int32_T b_A_size[2];
  int32_T d_C_size[2];
  int32_T b_C_size[2];
  int32_T r_size[2];
  int32_T s_size[2];
  int32_T iv8[2];
  int32_T iv9[2];
  int32_T iv10[2];
  int32_T tmp_size_ca[2];
  int32_T Zout_size[2];
  int32_T Zout_size_j[2];
  int32_T Zout_size_a[2];
  int32_T z_size_d[2];
  int32_T l_size[2];
  int32_T alpha_size[2];
  int32_T zorig_size[2];
  int32_T dz_size[2];
  int32_T z_size_c[2];
  int32_T l_size_d[2];
  int32_T l_size_a[2];
  int32_T l_size_b[2];
  int32_T tmp_size_gu[2];
  int32_T a_size[2];
  int32_T a_size_f[2];
  int32_T e_size[2];
  int32_T f_size[2];
  int32_T ang_size[2];
  int32_T th1_size[2];
  int32_T u_size[2];
  int32_T sa_size[2];
  int32_T w_size[2];
  int32_T udot_size[2];
  int32_T wd1_size[2];
  int32_T wd1xu_size[2];
  int32_T e_tmp_size[2];
  int32_T tmp_size_cg[2];
  int32_T tmp_size_p[2];
  int32_T tmp_size_a[2];
  int32_T tmp_size_n[2];
  int32_T w_size_h[2];
  int32_T th1_size_m[2];
  int32_T tmp_size_f[2];
  int32_T tmp_size_b[2];
  int32_T tmp_size_e[2];
  int32_T th3_size[2];
  int32_T tmp_size_nz[2];
  int32_T Zout_size_p[2];
  int32_T Zout_size_i[2];
  int32_T Zout_size_js[2];
  int32_T z_size_l[2];
  int32_T dz_size_c[2];
  int32_T zorig_size_g[2];
  int32_T zorig_size_c[2];
  int32_T dz_size_l[2];
  int32_T z_size_e[2];
  int32_T l_size_dt[2];
  int32_T l_size_m[2];
  int32_T l_size_f[2];
  int32_T b_size[2];
  int32_T Lbd_size[2];
  int32_T A_size_n[2];
  int32_T c_a_size[2];
  int32_T d_a_size[2];
  int32_T c_a_size_o[2];
  int32_T b_C_size_e[2];
  int32_T bvec2_size[2];
  int32_T e_size_m[2];
  int32_T e_size_c[2];
  int32_T e_size_g[2];
  int32_T tmp_size_bn[2];
  int32_T tmp_size_po[2];
  int32_T c_h_size[2];
  int32_T b_h_size[2];
  int32_T b_h_size_p[2];
  int32_T z_size_a[2];
  int32_T d1_size[2];
  int32_T tmp_size_fm[2];
  int32_T tmp_size_gr[2];
  int32_T d2_size[2];
  int32_T d1_size_b[2];
  int32_T zcurrent_size[2];
  int32_T l1_size[2];
  int32_T l1_size_k[2];
  int32_T l1_size_k1[2];
  int32_T z_size_b[2];
  int32_T d1_size_i[2];
  int32_T l1_size_n[2];
  int32_T d2_size_h[2];
  int32_T d1_size_n[2];
  int32_T zcurrent_size_m[2];
  int32_T l1_size_g[2];
  int32_T l1_size_j[2];
  int32_T l1_size_f[2];
  int32_T b_C_size_n[2];
  int8_T b_ipiv[4];
  int32_T i_ce;
  int32_T i1;
  int32_T i2;
  int32_T b_b;
  int32_T b_i;
  int32_T c_i_k;
  int32_T wpt_count;
  int32_T wpt_count_l;
  int32_T i_nz;
  int32_T i_p;
  int32_T b_i_f;
  int32_T nm1d2;
  int32_T k;
  int32_T n_k;
  int32_T b_k;
  int32_T c_e;
  int32_T i_na;
  int32_T ibegin_size;
  int32_T iend_size;
  int32_T c_size_o;
  int32_T y_size_idx_1;
  int32_T ndbl_a;
  int32_T c_b;
  int32_T l_b;
  int32_T loop_ub;
  int32_T u_size_m;
  int32_T v_size;
  int32_T tmp_size_m;
  int32_T waypoints_size_k;
  int32_T i3;
  int32_T loop_ub_m;
  int32_T v_size_h;
  int32_T dx_size;
  int32_T b_r_size;
  int32_T b_varargout_1_size;
  int32_T tmp_size_i1;
  int32_T tmp_size_ct;
  int32_T tmp_size_ni;
  int32_T loop_ub_tmp;
  int32_T e_i;
  int32_T f_o;
  int32_T l_h;
  int32_T o;
  int32_T q_p;
  int32_T ib;
  int32_T mb;
  int32_T loop_ub_g;
  int32_T unusedU3_size;
  int32_T k0_size;
  int32_T k1_size;
  int32_T dk0_dc0_size;
  int32_T dk0_dc1_size;
  int32_T dk1_dc0_size;
  int32_T dk1_dc1_size;
  int32_T course_size;
  int32_T hip_size;
  int32_T course_size_c;
  int32_T g_size_idx_1_tmp;
  int32_T b_i_g;
  int32_T loop_ub_b;
  int32_T z_size_j;
  int32_T phi_size;
  int32_T phi0_size;
  int32_T phi1_size;
  int32_T da_dphi1_size;
  int32_T tmp_size_h;
  int32_T idx_d;
  int32_T b_size_o;
  int32_T tmp_size_k;
  int32_T d_size;
  int32_T tmp_size_j;
  int32_T a_size_d;
  int32_T d_size_f;
  int32_T c_size_a;
  int32_T a_size_e;
  int32_T d_size_n;
  int32_T c_size_ob;
  int32_T criteria_size_idx_0;
  int32_T ii_size_idx_0;
  int32_T ilarge_size_idx_0;
  int32_T ismall_size_idx_0;
  int32_T h_idx_0;
  int32_T i4;
  int32_T loop_ub_d;
  int32_T a1_size;
  int32_T a2_size;
  int32_T fa_size;
  int32_T s_size_c;
  int32_T r_size_m;
  int32_T ratio_size;
  int32_T tmp_size_ocx;
  int32_T a1_size_b;
  int32_T a1_size_m;
  int32_T i5;
  int32_T loop_ub_i;
  int32_T x_size_i;
  int32_T x_size_g5;
  int32_T idx_m;
  int32_T i_no;
  int32_T tmp_size_cag;
  int32_T tmp_size_jv;
  int32_T xabs_size_idx_0;
  int32_T b_idx_0;
  int32_T nx;
  int32_T b_k_e;
  int32_T i_ep;
  int32_T i6;
  int32_T loop_ub_k;
  int32_T tmp_size_k4;
  int32_T e_id;
  int32_T h_e;
  int32_T j_l;
  int32_T k_l;
  int32_T l_l;
  int32_T loop_ub_o;
  int32_T dx_size_i;
  int32_T b_r_size_e;
  int32_T b_varargout_1_size_l;
  int32_T unusedU4_size;
  int32_T k0_size_n;
  int32_T k1_size_e;
  int32_T dk0_dc0_size_c;
  int32_T dk0_dc1_size_a;
  int32_T dk1_dc0_size_m;
  int32_T dk1_dc1_size_c;
  int32_T x_size_f;
  int32_T hip_size_m;
  int32_T x_size_k;
  int32_T xnew_size;
  int32_T xnew_size_b;
  int32_T xnew_size_h;
  int32_T hip_size_h;
  int32_T xnew_size_h2;
  int32_T m_b;
  int32_T inner;
  int32_T n_b;
  int32_T coffset;
  int32_T boffset;
  int32_T loop_ub_dp;
  int32_T loop_ub_j;
  int32_T loop_ub_dl;
  int32_T loop_ub_l;
  int32_T a_size_j;
  int32_T b_size_b;
  int32_T d_size_f2;
  int32_T c_size_p;
  int32_T a_size_l;
  int32_T lambda_size;
  int32_T y_size_idx_1_l;
  int32_T J_size_idx_0;
  int32_T result;
  int32_T inner_i;
  int32_T inner_o;
  int32_T m_bv;
  int32_T coffset_i;
  int32_T boffset_g;
  int32_T loop_ub_tmp_p;
  int32_T b_k_h;
  int32_T k_d;
  int32_T loop_ub_f;
  int32_T alpha_size_f;
  int32_T alpha_data_tmp_c1;
  int32_T alpha_data_tmp_d;
  int32_T loop_ub_tmp_c;
  int32_T delta_tmp;
  int32_T b_data_tmp;
  int32_T c_data_tmp_b;
  int32_T acoef;
  int32_T ia;
  int32_T d_p;
  int32_T k_h;
  int32_T acoef_e;
  int32_T b_i_l;
  int32_T course_tmp;
  int32_T course_tmp_h;
  int32_T iter_nt;
  int32_T i_k;
  int32_T z_tmp_b;
  int32_T z_tmp_o;
  int32_T b_idx;
  int32_T i_ni;
  int32_T b_i_fi;
  int32_T i_g;
  int32_T istart;
  int32_T b_j_d;
  int32_T im1n;
  int32_T in;
  int32_T b_i_d;
  int32_T u0_e;
  int32_T knt;
  int32_T k_c;
  int32_T loop_ub_a;
  int32_T v_size_hp;
  int32_T dx_size_e;
  int32_T b_r_size_n;
  int32_T b_varargout_1_size_h;
  int32_T tmp_size_oc2;
  int32_T tmp_size_fo;
  int32_T tmp_size_k1;
  int32_T loop_ub_tmp_e;
  int32_T e_iw;
  int32_T l_o;
  int32_T p_j;
  int32_T q_k;
  int32_T r_ja;
  int32_T ib_d;
  int32_T loop_ub_gn;
  int32_T unusedU2_size;
  int32_T k0_size_c;
  int32_T k1_size_k;
  int32_T dk0_dc0_size_j;
  int32_T dk0_dc1_size_h;
  int32_T dk1_dc0_size_c;
  int32_T dk1_dc1_size_d;
  int32_T course_size_a;
  int32_T hip_size_p;
  int32_T course_size_f;
  int32_T i7;
  int32_T loop_ub_h;
  int32_T k_size_j;
  int32_T e_size_n;
  int32_T dt_size;
  int32_T dp_size;
  int32_T tmp_size_o1;
  int32_T y_size_idx_0;
  int32_T nik_size_idx_0;
  int32_T t_size_idx_0;
  int32_T re_o;
  int32_T e_size_d;
  int32_T z_size_ac;
  int32_T loop_ub_kw;
  int32_T v_size_c;
  int32_T dx_size_j;
  int32_T xnew_size_bh;
  int32_T b_r_size_nc;
  int32_T epsr_size;
  int32_T xnew_size_d;
  int32_T xnew_size_hf;
  int32_T loop_ub_tmp_b;
  int32_T i8;
  int32_T loop_ub_p;
  int32_T tmp_size_bp;
  int32_T c_px;
  int32_T b_i_n;
  int32_T b_idx_j;
  int32_T b_size_bn;
  int32_T q_size;
  int32_T beta_size;
  int32_T alpha_size_idx_0;
  int32_T y_size_idx_1_n;
  int32_T y_size_idx_1_b;
  int32_T y_size_idx_1_j;
  int32_T y_size_idx_1_k;
  int32_T y_size_idx_1_d;
  int32_T y_size_idx_1_dj;
  int32_T c_tmp_o;
  int32_T loop_ub_c;
  int32_T i9;
  int32_T center_size;
  int32_T tmp_size_oz;
  int32_T center_size_a;
  int32_T f_d;
  int32_T loop_ub_e;
  int32_T u_size_i;
  int32_T z_size_bw;
  int32_T e_an;
  int32_T f_k;
  int32_T l_m;
  int32_T o_j;
  int32_T q_j;
  int32_T ib_k;
  int32_T mb_k;
  int32_T loop_ub_ar;
  int32_T unusedU1_size;
  int32_T k0_size_k;
  int32_T k1_size_f;
  int32_T dk0_dc0_size_cz;
  int32_T dk0_dc1_size_o;
  int32_T dk1_dc0_size_k;
  int32_T dk1_dc1_size_p;
  int32_T course_size_f4;
  int32_T hip_size_d;
  int32_T course_size_e;
  int32_T g_size_idx_1_tmp_l;
  int32_T n_e;
  int32_T result_h;
  int32_T result_g;
  int32_T result_p;
  int32_T loop_ub_n;
  int32_T loop_ub_o2;
  int32_T u_size_l;
  int32_T v_size_f;
  int32_T tmp_size_h5;
  int32_T result_size_idx_1;
  int32_T b_idx_0_d;
  int32_T x_data_tmp;
  int32_T nrows;
  int32_T ibcol;
  int32_T b_jtilecol;
  int32_T b_k_m;
  int32_T n_iy;
  int32_T b_k_j;
  int32_T i_pa;
  int32_T b_subsb_idx_1;
  int32_T x_tmp_d;
  int32_T b_k_jb;
  int32_T e_tmp_k;
  int32_T i10;
  int32_T x_tmp_tmp;
  int32_T b_I_tmp;
  int32_T b_k_mc;
  int32_T c_k;
  int32_T ixLead;
  int32_T iyLead;
  int32_T m_d;
  int32_T b_k_p;
  int32_T b_j_i;
  int32_T obj_b_size;
  int32_T obj_c_size;
  int32_T obj_d_size;
  int32_T izero_size;
  int32_T e_tmp_g;
  int32_T b_k_ef;
  int32_T n_h;
  int32_T b_k_g;
  int32_T i_cg;
  int32_T b_subsb_idx_1_a;
  int32_T x_tmp_f;
  int32_T istart_i;
  int32_T b_j_c;
  int32_T i_nr;
  int32_T L;
  int32_T k_c2;
  int32_T m_c;
  int32_T nr;
  int32_T hoffset;
  int32_T c_j_i;
  int32_T d_j_h;
  int32_T e_j;
  int32_T ix;
  int32_T loop_ub_ml;
  int32_T i11;
  int32_T idx_g;
  int32_T b_ii;
  int32_T idx_o;
  int32_T ii;
  int32_T i_m;
  int32_T p_size;
  int32_T q_size_e;
  int32_T a_size_ea;
  int32_T d_size_i;
  int32_T c_size_f;
  int32_T a_size_h;
  int32_T d_size_in;
  int32_T c_size_pi;
  int32_T nx_a;
  int32_T b_k_f;
  int32_T i12;
  int32_T ip;
  int32_T ip_d;
  int32_T ip_c;
  int32_T ip_j;
  int32_T tmp_size_c3;
  int32_T ii_size_idx_0_n;
  int32_T ii_size_idx_1;
  int32_T igt_size_idx_0;
  int32_T igt_size_idx_1;
  int32_T ilt_size_idx_0;
  int32_T ilt_size_idx_1;
  int32_T ism_size_idx_0;
  int32_T ism_size_idx_1;
  int32_T ismall_data_j;
  int32_T bd_data_k;
  int32_T ed_data;
  int32_T ii_data_os;
  int32_T nx_g;
  int32_T idx_k;
  int32_T b_ii_j;
  int32_T i_px;
  int32_T ii_size_idx_0_h;
  int32_T loop_ub_tmp_n;
  int32_T nx_b;
  int32_T b_k_mt;
  int32_T idx_kv;
  int32_T b_ii_b;
  int32_T idx_l;
  int32_T ii_g;
  int32_T i_g2;
  int32_T q_size_n;
  int32_T r_size_c;
  int32_T a_size_eo;
  int32_T d_size_fb;
  int32_T c_size_k;
  int32_T a_size_c;
  int32_T d_size_d;
  int32_T c_size_m;
  int32_T nsubs;
  int32_T loop_ub_tmp_j;
  int32_T i13;
  int32_T A_data_tmp;
  int32_T i14;
  int32_T b_info;
  int32_T loop_ub_cf;
  int32_T beta1_size;
  int32_T ilo;
  int32_T rscale_size;
  int32_T loop_ub_tmp_d;
  int32_T n_p;
  int32_T j_a;
  int32_T ifirst;
  int32_T istart_m;
  int32_T ilastm1;
  int32_T ilastm;
  int32_T iiter;
  int32_T jp1;
  int32_T jiter;
  int32_T b_x_nk;
  int32_T b_A_size_idx_0;
  int32_T ctemp_tmp;
  int32_T ctemp_tmp_tmp;
  int32_T i15;
  int32_T qp1;
  int32_T qq;
  int32_T qjj;
  int32_T na;
  int32_T maxmn;
  int32_T c_k5;
  int32_T minmana;
  int32_T mn;
  int32_T i_pd;
  int32_T ma;
  int32_T minmn;
  int32_T ii_k;
  int32_T nmi;
  int32_T mmi;
  int32_T pvt;
  int32_T itemp;
  int32_T work_size;
  int32_T m_g;
  int32_T lastv;
  int32_T i_h;
  int32_T lastc;
  int32_T work_size_l;
  int32_T ix_o;
  int32_T iy;
  int32_T b_a2;
  int32_T i16;
  int32_T loop_ub_n3;
  int32_T x_size_o;
  int32_T loop_ub_da;
  int32_T unnamed_idx_1;
  int32_T Zout_size_tmp;
  int32_T b_hk;
  int32_T t_h4;
  int32_T u_a;
  int32_T w_k;
  int32_T ab_j;
  int32_T db;
  int32_T eb;
  int32_T gb;
  int32_T jb;
  int32_T loop_ub_dg;
  int32_T dz_size_tmp;
  int32_T dz_data_re_tmp;
  int32_T z_size_tmp;
  int32_T dimSize;
  int32_T ixLead_p;
  int32_T i17;
  int32_T i_dh;
  int32_T e_i_b;
  int32_T ip_o;
  int32_T b_k_j4;
  int32_T loop_ub_pc;
  int32_T x_size_idx_0;
  int32_T b_subsb_idx_0;
  int32_T im_tmp_l;
  int32_T im_tmp_c;
  int32_T im_tmp_tmp;
  int32_T loop_ub_tmp_m;
  int32_T acoef_h;
  int32_T ia_a;
  int32_T k_o;
  int32_T acoef_i;
  int32_T k_e;
  int32_T i18;
  int32_T thd2_size;
  int32_T w2_size;
  int32_T thd2_tmp_size;
  int32_T thd1_tmp_size;
  int32_T tmp_size_az;
  int32_T tmp_size_eu;
  int32_T tmp_size_d;
  int32_T tmp_size_l;
  int32_T tmp_size_if;
  int32_T tmp_size_nk;
  int32_T ii_size_idx_0_c;
  int32_T ii_size_idx_1_i;
  int32_T loop_ub_tmp_d4;
  int32_T stride;
  int32_T iNext;
  int32_T iEnd;
  int32_T b_ix;
  int32_T ip_b;
  int32_T ret;
  int32_T i19;
  int32_T i20;
  int32_T i_a;
  int32_T loop_ub_b5;
  int32_T e_tmp_n;
  int32_T d_bi;
  int32_T v_p;
  int32_T w_ih;
  int32_T y_k;
  int32_T cb;
  int32_T fb;
  int32_T gb_c;
  int32_T ib_n;
  int32_T lb;
  int32_T b_tmp;
  int32_T dz_size_tmp_b;
  int32_T dz_data_re_tmp_m;
  int32_T z_size_tmp_m;
  int32_T info;
  int32_T loop_ub_n2;
  int32_T n_m;
  int32_T im1n_l;
  int32_T in_o;
  int32_T e_ix;
  int32_T loop_ub_p4;
  int32_T d_idx_0;
  int32_T lastv_n;
  int32_T i_c0;
  int32_T lastc_e;
  int32_T jA;
  int32_T jy;
  int32_T ihi;
  int32_T i_j;
  int32_T j_l2;
  int32_T ifirst_j;
  int32_T istart_c;
  int32_T ilast;
  int32_T ilastm1_b;
  int32_T ilastm_i;
  int32_T iiter_k;
  int32_T jp1_l;
  int32_T jiter_j;
  int32_T b_x_m;
  int32_T n_j;
  int32_T LDA;
  int32_T ldap1;
  int32_T c_eu;
  int32_T ix_d;
  int32_T kAcol;
  int32_T iy_j;
  int32_T ixinc;
  int32_T iyinc;
  int32_T n_k1;
  int32_T yk;
  int32_T jyinc;
  int32_T c_oc;
  int32_T loop_ub_nc;
  int32_T tmp_size_bz;
  int32_T ii_size_idx_0_i;
  int32_T ii_size_idx_1_d;
  int32_T aa_tmp_d;
  int32_T vstride;
  int32_T ic;
  int32_T m_p;
  int32_T istart_e;
  int32_T jend;
  int32_T i_ne;
  int32_T c_h_size_d;
  int32_T n_md;
  int32_T ldh;
  int32_T i_gm;
  int32_T L_i;
  int32_T k_k;
  int32_T m_im;
  int32_T nr_m;
  int32_T hoffset_j;
  int32_T e_j_a;
  int32_T o_i;
  int32_T loop_ub_ec;
  int32_T b_h_data_tmp;
  int32_T tst_tmp;
  int32_T jj;
  int32_T b_j_ik;
  int32_T c_hv;
  int32_T idxmax;
  int32_T ix_m;
  int32_T k_a;
  int32_T d_o;
  int32_T hb;
  int32_T kb;
  int32_T loop_ub_os;
  int32_T d2_size_idx_1_tmp;
  int32_T d2_size_tmp;
  int32_T d2_data_re_tmp;
  int32_T d1_size_tmp;
  int32_T d1_data_re_tmp;
  int32_T c_n;
  int32_T d_k;
  int32_T hb_h;
  int32_T kb_d;
  int32_T loop_ub_ae;
  int32_T d2_size_idx_1_tmp_h;
  int32_T d2_data_re_tmp_c;
  int32_T d1_size_tmp_b;
  int32_T d1_data_re_tmp_c;
  int32_T n_g;
  int32_T jrow;
  int32_T jcol;
  int32_T j_pj;
  int32_T stemp_re_tmp;
  int32_T jrow_i;
  int32_T jcol_j;
  int32_T j_c;
  int32_T stemp_re_tmp_c;
  int32_T i_f;
  int32_T ctemp_tmp_d;
  int32_T j_n;
  int32_T b_br;
  int32_T j_f;
  int32_T b_j1;
  int32_T lastv_h;
  int32_T i_hg;
  int32_T lastc_c;
  int32_T jA_g;
  int32_T jy_e;
  int32_T knt_e;
  int32_T m_a;
  int32_T qs;
  int32_T i_hz;
  int32_T j_gc;
  int32_T ii_a;
  int32_T nzcount;
  int32_T j_gu;
  int32_T ii_o;
  int32_T nzcount_a;
  int32_T lastv_e;
  int32_T lastc_h;
  int32_T coltop;
  int32_T ia_j;
  int32_T iac;
  int32_T lastv_b;
  int32_T lastc_k;
  int32_T rowleft;
  int32_T ia_h;
  int32_T iac_d;
  int32_T k_oh;
  int32_T nrows_k;
  int32_T ncols;
  int32_T ibtile;
  int32_T iacol;
  int32_T jA_k;
  int32_T jy_o;
  int32_T ix_do;
  uint32_T nbpts;
  boolean_T b_varargout_1_l;
  boolean_T b_varargout_1_m;
  boolean_T flag;
  boolean_T freelead;
  boolean_T freetail;
  boolean_T x_data_oi;
  SL_Bus_Test_Traj_std_msgs_Bool b_varargout_2_a;
} B_Test_Traj_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  TrajectoryManager_Test_Traj_T obj;   // '<Root>/MATLAB System'
  AddPose_Test_Traj_T obj_p;           // '<Root>/MATLAB System1'
  TrajectoryGenerator_Test_Traj_T obj_n;// '<S4>/MATLAB System2'
  ros_slros_internal_block_Subs_T obj_j;// '<S3>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_o;// '<S2>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_d;// '<S1>/SourceBlock'
  real_T pMax[0];                      // '<Root>/MATLAB System'
  boolean_T Delay_DSTATE;              // '<Root>/Delay'
} DW_Test_Traj_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState Subsystem_Trig_ZCE;       // '<Root>/Subsystem'
} PrevZCX_Test_Traj_T;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real_T Reference[52];                // '<Root>/Reference'
} ExtY_Test_Traj_T;

// Parameters (default storage)
struct P_Test_Traj_T_ {
  SL_Bus_Test_Traj_sonia_common_AddPose Out1_Y0;// Computed Parameter: Out1_Y0
                                                   //  Referenced by: '<S6>/Out1'

  SL_Bus_Test_Traj_sonia_common_AddPose Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S1>/Constant'

  SL_Bus_Test_Traj_std_msgs_Bool Out1_Y0_i;// Computed Parameter: Out1_Y0_i
                                              //  Referenced by: '<S7>/Out1'

  SL_Bus_Test_Traj_std_msgs_Bool Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                     //  Referenced by: '<S2>/Constant'

  SL_Bus_Test_Traj_std_msgs_Bool Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                              //  Referenced by: '<S8>/Out1'

  SL_Bus_Test_Traj_std_msgs_Bool Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                     //  Referenced by: '<S3>/Constant'

  real_T Constant2_Value[13];         // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
                                         //  Referenced by: '<Root>/Constant2'

  real_T Constant3_Value[13];        // Expression: [75,0,0,1,0,0,0,0,0,0,0,0,0]
                                        //  Referenced by: '<Root>/Constant3'

  real_T MATLABSystem_linearConvergence;// Expression: .2
                                           //  Referenced by: '<Root>/MATLAB System'

  real_T MATLABSystem_quaternionConverge;// Expression: .1
                                            //  Referenced by: '<Root>/MATLAB System'

  real_T MATLABSystem_TargetThreshold; // Expression: 1
                                          //  Referenced by: '<Root>/MATLAB System'

  real_T MATLABSystem2_avanceRapide[7];// Expression: [1 1 .3 .1 .1 .1 .1]
                                          //  Referenced by: '<S4>/MATLAB System2'

  real_T MATLABSystem2_avancePrecision[7];// Expression: [.3 .3 .1 .05 .05 .05 .05]
                                             //  Referenced by: '<S4>/MATLAB System2'

  real_T MATLABSystem2_accRapide[7];
                                   // Expression: [0.2 0.2 0.1 .02 .02 .02 .02];
                                      //  Referenced by: '<S4>/MATLAB System2'

  real_T MATLABSystem2_accPrecision;   // Expression: 0.1
                                          //  Referenced by: '<S4>/MATLAB System2'

  real_T MATLABSystem2_Ts;             // Expression: 0.25
                                          //  Referenced by: '<S4>/MATLAB System2'

  real_T Out1_Y0_g;                    // Computed Parameter: Out1_Y0_g
                                          //  Referenced by: '<S4>/Out1'

  real_T Out2_Y0;                      // Computed Parameter: Out2_Y0
                                          //  Referenced by: '<S4>/Out2'

  real_T Constant_Value_n[13];        // Expression: [0 0 0 1 0 0 0 0 0 0 0 0 0]
                                         //  Referenced by: '<Root>/Constant'

  real_T Constant1_Value[13];         // Expression: [0,0,0,1,0,0,0,0,0,0,0,0,0]
                                         //  Referenced by: '<Root>/Constant1'

  boolean_T Delay_InitialCondition;// Computed Parameter: Delay_InitialCondition
                                      //  Referenced by: '<Root>/Delay'

  uint8_T ManualSwitch_CurrentSetting;
                              // Computed Parameter: ManualSwitch_CurrentSetting
                                 //  Referenced by: '<Root>/Manual Switch'

};

// Real-time Model Data Structure
struct tag_RTM_Test_Traj_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_Test_Traj_T Test_Traj_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_Test_Traj_T Test_Traj_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_Test_Traj_T Test_Traj_DW;

// Zero-crossing (trigger) state
extern PrevZCX_Test_Traj_T Test_Traj_PrevZCX;

#ifdef __cplusplus

extern "C" {

#endif

  // External outputs (root outports fed by signals with default storage)
  extern ExtY_Test_Traj_T Test_Traj_Y;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void Test_Traj_initialize(void);
  extern void Test_Traj_step(void);
  extern void Test_Traj_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Test_Traj_T *const Test_Traj_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S5>/Data Type Conversion2' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Test_Traj'
//  '<S1>'   : 'Test_Traj/Subscribe'
//  '<S2>'   : 'Test_Traj/Subscribe1'
//  '<S3>'   : 'Test_Traj/Subscribe2'
//  '<S4>'   : 'Test_Traj/Subsystem'
//  '<S5>'   : 'Test_Traj/Subsystem1'
//  '<S6>'   : 'Test_Traj/Subscribe/Enabled Subsystem'
//  '<S7>'   : 'Test_Traj/Subscribe1/Enabled Subsystem'
//  '<S8>'   : 'Test_Traj/Subscribe2/Enabled Subsystem'

#endif                                 // RTW_HEADER_Test_Traj_h_

//
// File trailer for generated code.
//
// [EOF]
//

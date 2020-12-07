/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_x_2d.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t4, t6, t7, t9;

#ifndef XC_DONT_COMPILE_LXC
  double t19;
#endif

#endif



  t1 = M_SQRT2;
  t2 = sqrt(M_PI);
  t4 = t1 / t2;
  t6 = my_piecewise3(0.1e1 <= p->zeta_threshold, 0, 1);
  t7 = sqrt(rho[0]);
  t9 = t4 * t6 * t7;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -0.4e1 / 0.3e1 * t9;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.2e1 * t9;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t4 * t6 / t7;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t4 * t6 / t7 / rho[0] / 0.2e1;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t19 = rho[0] * rho[0];
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.3e1 / 0.4e1 * t4 * t6 / t7 / t19;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t12, t13, t14, t15, t16;
  double t17, t18, t20, t21, t23;

#ifndef XC_DONT_COMPILE_VXC
  double t25, t26, t27, t28, t29, t30, t31, t34;
  double t35, t38, t40, t44, t47, t48, t51, t54;

#ifndef XC_DONT_COMPILE_FXC
  double t58, t60, t62, t63, t64, t68, t69, t71;
  double t75, t76, t77, t80, t84, t86, t91, t92;
  double t94, t97, t101, t102, t105, t109, t112, t116;
  double t120, t124, t125, t128, t132, t135;

#ifndef XC_DONT_COMPILE_KXC
  double t139, t142, t144, t147, t148, t149, t152, t155;
  double t156, t157, t159, t163, t164, t165, t168, t171;
  double t175, t177, t183, t184, t186, t187, t190, t201;
  double t202, t205, t216, t219, t223, t225, t230, t235;
  double t239, t240, t245, t248, t252, t255, t260, t266;
  double t270, t271, t276, t280, t283;

#ifndef XC_DONT_COMPILE_LXC
  double t287, t290, t293, t299, t300, t302, t303, t309;
  double t315, t316, t318, t322, t323, t325, t326, t332;
  double t341, t351, t353, t354, t355, t381, t383, t408;
  double t410, t418, t419, t430, t433, t449, t475, t485;
  double t505, t509, t530, t539, t544, t550, t554, t555;
  double t560, t569;
#endif

#endif

#endif

#endif

#endif



  t1 = M_SQRT2;
  t2 = sqrt(M_PI);
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = rho[0] - rho[1];
  t6 = rho[0] + rho[1];
  t7 = 0.1e1 / t6;
  t8 = t5 * t7;
  t9 = 0.1e1 + t8;
  t10 = t9 <= p->zeta_threshold;
  t11 = sqrt(t9);
  t12 = t11 * t9;
  t13 = my_piecewise3(t10, 0, t12);
  t14 = 0.1e1 - t8;
  t15 = t14 <= p->zeta_threshold;
  t16 = sqrt(t14);
  t17 = t16 * t14;
  t18 = my_piecewise3(t15, 0, t17);
  t20 = t13 / 0.2e1 + t18 / 0.2e1;
  t21 = sqrt(t6);
  t23 = t4 * t20 * t21;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -0.4e1 / 0.3e1 * t23;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t25 = 0.2e1 * t23;
  t26 = t21 * t6;
  t27 = t26 * t1;
  t28 = t6 * t6;
  t29 = 0.1e1 / t28;
  t30 = t5 * t29;
  t31 = t7 - t30;
  t34 = my_piecewise3(t10, 0, 0.3e1 / 0.2e1 * t11 * t31);
  t35 = -t31;
  t38 = my_piecewise3(t15, 0, 0.3e1 / 0.2e1 * t16 * t35);
  t40 = t34 / 0.2e1 + t38 / 0.2e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t25 - 0.4e1 / 0.3e1 * t27 * t3 * t40;

  t44 = -t7 - t30;
  t47 = my_piecewise3(t10, 0, 0.3e1 / 0.2e1 * t11 * t44);
  t48 = -t44;
  t51 = my_piecewise3(t15, 0, 0.3e1 / 0.2e1 * t16 * t48);
  t54 = t3 * (t47 / 0.2e1 + t51 / 0.2e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t25 - 0.4e1 / 0.3e1 * t27 * t54;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t58 = t4 * t40 * t21;
  t60 = 0.1e1 / t21;
  t62 = t4 * t20 * t60;
  t63 = 0.1e1 / t11;
  t64 = t31 * t31;
  t68 = 0.1e1 / t28 / t6;
  t69 = t5 * t68;
  t71 = -0.2e1 * t29 + 0.2e1 * t69;
  t75 = my_piecewise3(t10, 0, 0.3e1 / 0.4e1 * t63 * t64 + 0.3e1 / 0.2e1 * t11 * t71);
  t76 = 0.1e1 / t16;
  t77 = t35 * t35;
  t80 = -t71;
  t84 = my_piecewise3(t15, 0, 0.3e1 / 0.4e1 * t76 * t77 + 0.3e1 / 0.2e1 * t16 * t80);
  t86 = t75 / 0.2e1 + t84 / 0.2e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.4e1 * t58 - t62 - 0.4e1 / 0.3e1 * t27 * t3 * t86;

  t91 = t21 * t1;
  t92 = t91 * t54;
  t94 = t63 * t44;
  t97 = t11 * t5;
  t101 = my_piecewise3(t10, 0, 0.3e1 / 0.4e1 * t94 * t31 + 0.3e1 * t97 * t68);
  t102 = t76 * t48;
  t105 = t16 * t5;
  t109 = my_piecewise3(t15, 0, 0.3e1 / 0.4e1 * t102 * t35 - 0.3e1 * t105 * t68);
  t112 = t3 * (t101 / 0.2e1 + t109 / 0.2e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -0.2e1 * t58 - t62 - 0.2e1 * t92 - 0.4e1 / 0.3e1 * t27 * t112;

  t116 = t44 * t44;
  t120 = 0.2e1 * t29 + 0.2e1 * t69;
  t124 = my_piecewise3(t10, 0, 0.3e1 / 0.4e1 * t63 * t116 + 0.3e1 / 0.2e1 * t11 * t120);
  t125 = t48 * t48;
  t128 = -t120;
  t132 = my_piecewise3(t15, 0, 0.3e1 / 0.4e1 * t76 * t125 + 0.3e1 / 0.2e1 * t16 * t128);
  t135 = t3 * (t124 / 0.2e1 + t132 / 0.2e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -0.4e1 * t92 - t62 - 0.4e1 / 0.3e1 * t27 * t135;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t139 = t4 * t86 * t21;
  t142 = t4 * t40 * t60;
  t144 = 0.1e1 / t26;
  t147 = t4 * t20 * t144 / 0.2e1;
  t148 = 0.1e1 / t12;
  t149 = t64 * t31;
  t152 = t63 * t31;
  t155 = t28 * t28;
  t156 = 0.1e1 / t155;
  t157 = t5 * t156;
  t159 = 0.6e1 * t68 - 0.6e1 * t157;
  t163 = my_piecewise3(t10, 0, -0.3e1 / 0.8e1 * t148 * t149 + 0.9e1 / 0.4e1 * t152 * t71 + 0.3e1 / 0.2e1 * t11 * t159);
  t164 = 0.1e1 / t17;
  t165 = t77 * t35;
  t168 = t76 * t35;
  t171 = -t159;
  t175 = my_piecewise3(t15, 0, -0.3e1 / 0.8e1 * t164 * t165 + 0.9e1 / 0.4e1 * t168 * t80 + 0.3e1 / 0.2e1 * t16 * t171);
  t177 = t163 / 0.2e1 + t175 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.6e1 * t139 - 0.3e1 * t142 + t147 - 0.4e1 / 0.3e1 * t27 * t3 * t177;

  t183 = t60 * t1;
  t184 = t183 * t54;
  t186 = 0.4e1 * t91 * t112;
  t187 = t148 * t44;
  t190 = t63 * t5;
  t201 = my_piecewise3(t10, 0, -0.3e1 / 0.8e1 * t187 * t64 + 0.3e1 * t190 * t68 * t31 + 0.3e1 / 0.4e1 * t94 * t71 + 0.3e1 * t11 * t68 - 0.9e1 * t97 * t156);
  t202 = t164 * t48;
  t205 = t76 * t5;
  t216 = my_piecewise3(t15, 0, -0.3e1 / 0.8e1 * t202 * t77 - 0.3e1 * t205 * t68 * t35 + 0.3e1 / 0.4e1 * t102 * t80 - 0.3e1 * t16 * t68 + 0.9e1 * t105 * t156);
  t219 = t3 * (t201 / 0.2e1 + t216 / 0.2e1);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -0.2e1 * t139 - 0.2e1 * t142 + t147 - t184 - t186 - 0.4e1 / 0.3e1 * t27 * t219;

  t223 = t91 * t135;
  t225 = t148 * t116;
  t230 = t63 * t120;
  t235 = -0.2e1 * t68 - 0.6e1 * t157;
  t239 = my_piecewise3(t10, 0, -0.3e1 / 0.8e1 * t225 * t31 + 0.3e1 * t94 * t69 + 0.3e1 / 0.4e1 * t230 * t31 + 0.3e1 / 0.2e1 * t11 * t235);
  t240 = t164 * t125;
  t245 = t76 * t128;
  t248 = -t235;
  t252 = my_piecewise3(t15, 0, -0.3e1 / 0.8e1 * t240 * t35 - 0.3e1 * t102 * t69 + 0.3e1 / 0.4e1 * t245 * t35 + 0.3e1 / 0.2e1 * t16 * t248);
  t255 = t3 * (t239 / 0.2e1 + t252 / 0.2e1);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -0.2e1 * t184 - t186 - t142 + t147 - 0.2e1 * t223 - 0.4e1 / 0.3e1 * t27 * t255;

  t260 = t116 * t44;
  t266 = -0.6e1 * t68 - 0.6e1 * t157;
  t270 = my_piecewise3(t10, 0, -0.3e1 / 0.8e1 * t148 * t260 + 0.9e1 / 0.4e1 * t94 * t120 + 0.3e1 / 0.2e1 * t11 * t266);
  t271 = t125 * t48;
  t276 = -t266;
  t280 = my_piecewise3(t15, 0, -0.3e1 / 0.8e1 * t164 * t271 + 0.9e1 / 0.4e1 * t102 * t128 + 0.3e1 / 0.2e1 * t16 * t276);
  t283 = t3 * (t270 / 0.2e1 + t280 / 0.2e1);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -0.3e1 * t184 - 0.6e1 * t223 + t147 - 0.4e1 / 0.3e1 * t27 * t283;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t287 = t4 * t177 * t21;
  t290 = t4 * t86 * t60;
  t293 = t4 * t40 * t144;
  t299 = 0.3e1 / 0.4e1 * t4 * t20 / t21 / t28;
  t300 = t9 * t9;
  t302 = 0.1e1 / t11 / t300;
  t303 = t64 * t64;
  t309 = t71 * t71;
  t315 = 0.1e1 / t155 / t6;
  t316 = t5 * t315;
  t318 = -0.24e2 * t156 + 0.24e2 * t316;
  t322 = my_piecewise3(t10, 0, 0.9e1 / 0.16e2 * t302 * t303 - 0.9e1 / 0.4e1 * t148 * t64 * t71 + 0.9e1 / 0.4e1 * t63 * t309 + 0.3e1 * t152 * t159 + 0.3e1 / 0.2e1 * t11 * t318);
  t323 = t14 * t14;
  t325 = 0.1e1 / t16 / t323;
  t326 = t77 * t77;
  t332 = t80 * t80;
  t341 = my_piecewise3(t15, 0, 0.9e1 / 0.16e2 * t325 * t326 - 0.9e1 / 0.4e1 * t164 * t77 * t80 + 0.9e1 / 0.4e1 * t76 * t332 + 0.3e1 * t168 * t171 - 0.3e1 / 0.2e1 * t16 * t318);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.8e1 * t287 - 0.6e1 * t290 + 0.2e1 * t293 - t299 - 0.4e1 / 0.3e1 * t27 * t3 * (t322 / 0.2e1 + t341 / 0.2e1);

  t351 = t144 * t1 * t54;
  t353 = t183 * t112;
  t354 = 0.3e1 * t353;
  t355 = t91 * t219;
  t381 = 0.36e2 * t97 * t315;
  t383 = my_piecewise3(t10, 0, 0.9e1 / 0.16e2 * t302 * t44 * t149 - 0.9e1 / 0.4e1 * t148 * t5 * t68 * t64 - 0.9e1 / 0.8e1 * t187 * t31 * t71 + 0.9e1 / 0.2e1 * t63 * t68 * t31 - 0.27e2 / 0.2e1 * t190 * t156 * t31 + 0.9e1 / 0.2e1 * t190 * t68 * t71 + 0.3e1 / 0.4e1 * t94 * t159 - 0.18e2 * t11 * t156 + t381);
  t408 = 0.36e2 * t105 * t315;
  t410 = my_piecewise3(t15, 0, 0.9e1 / 0.16e2 * t325 * t48 * t165 + 0.9e1 / 0.4e1 * t164 * t5 * t68 * t77 - 0.9e1 / 0.8e1 * t202 * t35 * t80 - 0.9e1 / 0.2e1 * t76 * t68 * t35 + 0.27e2 / 0.2e1 * t205 * t156 * t35 - 0.9e1 / 0.2e1 * t205 * t68 * t80 + 0.3e1 / 0.4e1 * t102 * t171 + 0.18e2 * t16 * t156 - t408);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = -0.2e1 * t287 - 0.3e1 * t290 + 0.3e1 / 0.2e1 * t293 - t299 + t351 / 0.2e1 - t354 - 0.6e1 * t355 - 0.4e1 / 0.3e1 * t27 * t3 * (t383 / 0.2e1 + t410 / 0.2e1);

  t418 = t183 * t135;
  t419 = t91 * t255;
  t430 = t5 * t5;
  t433 = 0.1e1 / t155 / t28;
  t449 = my_piecewise3(t10, 0, 0.9e1 / 0.16e2 * t302 * t116 * t64 - 0.3e1 * t187 * t31 * t5 * t68 - 0.3e1 / 0.8e1 * t225 * t71 + 0.6e1 * t63 * t430 * t433 + 0.3e1 * t94 * t68 - 0.9e1 * t94 * t157 - 0.3e1 / 0.8e1 * t148 * t120 * t64 + 0.3e1 / 0.2e1 * t63 * t235 * t31 + 0.3e1 / 0.4e1 * t230 * t71 + t381);
  t475 = my_piecewise3(t15, 0, 0.9e1 / 0.16e2 * t325 * t125 * t77 + 0.3e1 * t202 * t35 * t5 * t68 - 0.3e1 / 0.8e1 * t240 * t80 + 0.6e1 * t76 * t430 * t433 - 0.3e1 * t102 * t68 + 0.9e1 * t102 * t157 - 0.3e1 / 0.8e1 * t164 * t128 * t77 + 0.3e1 / 0.2e1 * t76 * t248 * t35 + 0.3e1 / 0.4e1 * t245 * t80 - t408);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t351 - 0.4e1 * t353 - 0.4e1 * t355 - t290 + t293 - t299 - t418 - 0.4e1 * t419 - 0.4e1 / 0.3e1 * t27 * t3 * (t449 / 0.2e1 + t475 / 0.2e1);

  t485 = t91 * t283;
  t505 = 0.12e2 * t156 + 0.24e2 * t316;
  t509 = my_piecewise3(t10, 0, 0.9e1 / 0.16e2 * t302 * t260 * t31 - 0.9e1 / 0.4e1 * t225 * t69 - 0.9e1 / 0.8e1 * t187 * t120 * t31 + 0.9e1 / 0.2e1 * t190 * t68 * t120 + 0.9e1 / 0.4e1 * t94 * t235 + 0.3e1 / 0.4e1 * t63 * t266 * t31 + 0.3e1 / 0.2e1 * t11 * t505);
  t530 = my_piecewise3(t15, 0, 0.9e1 / 0.16e2 * t325 * t271 * t35 + 0.9e1 / 0.4e1 * t240 * t69 - 0.9e1 / 0.8e1 * t202 * t128 * t35 - 0.9e1 / 0.2e1 * t205 * t68 * t128 + 0.9e1 / 0.4e1 * t102 * t248 + 0.3e1 / 0.4e1 * t76 * t276 * t35 - 0.3e1 / 0.2e1 * t16 * t505);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = 0.3e1 / 0.2e1 * t351 - t354 - 0.3e1 * t418 - 0.6e1 * t419 + t293 / 0.2e1 - t299 - 0.2e1 * t485 - 0.4e1 / 0.3e1 * t27 * t3 * (t509 / 0.2e1 + t530 / 0.2e1);

  t539 = t116 * t116;
  t544 = t120 * t120;
  t550 = 0.24e2 * t156 + 0.24e2 * t316;
  t554 = my_piecewise3(t10, 0, 0.9e1 / 0.16e2 * t302 * t539 - 0.9e1 / 0.4e1 * t225 * t120 + 0.9e1 / 0.4e1 * t63 * t544 + 0.3e1 * t94 * t266 + 0.3e1 / 0.2e1 * t11 * t550);
  t555 = t125 * t125;
  t560 = t128 * t128;
  t569 = my_piecewise3(t15, 0, 0.9e1 / 0.16e2 * t325 * t555 - 0.9e1 / 0.4e1 * t240 * t128 + 0.9e1 / 0.4e1 * t76 * t560 + 0.3e1 * t102 * t276 - 0.3e1 / 0.2e1 * t16 * t550);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = 0.2e1 * t351 - 0.6e1 * t418 - 0.8e1 * t485 - t299 - 0.4e1 / 0.3e1 * t27 * t3 * (t554 / 0.2e1 + t569 / 0.2e1);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : .//maple/gga_x_g96.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t5, t6, t7, t8, t9, t10;
  double t12, t15, t18, t19, t20, t21, t25, t27;
  double t34, t37, t43, t48, t50, t51, t53, t56;
  double t62, t65, t66, t79, t88, t113;


  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = t1 * t3 * t6;
  t8 = M_CBRT2;
  t9 = t8 * t8;
  t10 = POW_1_3(rho[0]);
  t12 = t1 * t1;
  t15 = sqrt(sigma[0]);
  t18 = 0.1e1 / t10 / rho[0];
  t19 = t15 * t8 * t18;
  t20 = sqrt(t19);
  t21 = t20 * t19;
  t25 = 0.1e1 + 0.2e1 / 0.1233e4 * t12 / t3 * t5 * t21;
  t27 = t7 * t9 * t10 * t25;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.16e2 * t27;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t27 / 0.4e1 + 0.2e1 / 0.137e3 / rho[0] * t20 * t15;

  t34 = 0.1e1 / t15;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.3e1 / 0.548e3 * t20 * t34;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t37 = t10 * t10;
  t43 = rho[0] * rho[0];
  t48 = t43 * rho[0];
  t50 = 0.1e1 / t10 / t48;
  t51 = 0.1e1 / t20;
  t53 = sigma[0] * t8;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t7 * t9 / t37 * t25 / 0.12e2 + 0.2e1 / 0.411e3 / t43 * t20 * t15 - 0.4e1 / 0.411e3 * t50 * t51 * t53;

  t56 = t51 * t8;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t56 / t10 / t43 / 0.274e3;

  t62 = t8 * t18;
  t65 = t15 * sigma[0];
  t66 = 0.1e1 / t65;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = -0.3e1 / 0.2192e4 * t51 / sigma[0] * t62 + 0.3e1 / 0.1096e4 * t20 * t66;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t79 = t43 * t43;
  t88 = 0.1e1 / t21;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t7 * t9 / t37 / rho[0] * t25 / 0.18e2 - 0.4e1 / 0.1233e4 / t48 * t20 * t15 + 0.4e1 / 0.137e3 / t10 / t79 * t51 * t53 - 0.8e1 / 0.1233e4 / t37 / t79 / rho[0] * t88 * t65 * t9;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = t88 * t9 / t37 / t79 * t15 / 0.411e3 - 0.7e1 / 0.822e3 * t56 * t50;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t88 * t34 * t9 / t37 / t48 / 0.1096e4;

  t113 = sigma[0] * sigma[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.3e1 / 0.8768e4 * t88 * t66 * t9 / t37 / t43 + 0.9e1 / 0.4384e4 * t51 / t113 * t62 - 0.9e1 / 0.2192e4 * t20 / t15 / t113;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t4, t5, t6, t7, t9, t12;
  double t14, t15, t16, t17, t21, t23, t30, t33;
  double t39, t44, t47, t48, t58, t59, t72, t81;
  double t101;


  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t9 = t1 * t1;
  t12 = sqrt(sigma[0]);
  t14 = 0.1e1 / t7 / rho[0];
  t15 = t12 * t14;
  t16 = sqrt(t15);
  t17 = t16 * t15;
  t21 = 0.1e1 + 0.2e1 / 0.1233e4 * t9 / t3 * t5 * t17;
  t23 = t4 * t6 * t7 * t21;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t23;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t23 / 0.2e1 + 0.2e1 / 0.137e3 / rho[0] * t16 * t12;

  t30 = 0.1e1 / t12;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.3e1 / 0.548e3 * t16 * t30;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t33 = t7 * t7;
  t39 = rho[0] * rho[0];
  t44 = t39 * rho[0];
  t47 = 0.1e1 / t16;
  t48 = 0.1e1 / t7 / t44 * t47;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t4 * t6 / t33 * t21 / 0.6e1 + 0.2e1 / 0.411e3 / t39 * t16 * t12 - 0.4e1 / 0.411e3 * t48 * sigma[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t47 / t7 / t39 / 0.274e3;

  t58 = t12 * sigma[0];
  t59 = 0.1e1 / t58;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = -0.3e1 / 0.2192e4 * t47 / sigma[0] * t14 + 0.3e1 / 0.1096e4 * t16 * t59;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t72 = t39 * t39;
  t81 = 0.1e1 / t17;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t4 * t6 / t33 / rho[0] * t21 / 0.9e1 - 0.4e1 / 0.1233e4 / t44 * t16 * t12 + 0.4e1 / 0.137e3 / t7 / t72 * t47 * sigma[0] - 0.8e1 / 0.1233e4 / t33 / t72 / rho[0] * t81 * t58;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = t81 / t33 / t72 * t12 / 0.411e3 - 0.7e1 / 0.822e3 * t48;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t81 * t30 / t33 / t44 / 0.1096e4;

  t101 = sigma[0] * sigma[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.3e1 / 0.8768e4 * t81 * t59 / t33 / t39 + 0.9e1 / 0.4384e4 * t47 / t101 * t14 - 0.9e1 / 0.2192e4 * t16 / t12 / t101;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t13, t14, t15, t16, t17, t18;
  double t20, t21, t22, t24, t25, t26, t27, t31;
  double t33, t35, t36, t37, t38, t39, t40, t42;
  double t43, t44, t45, t49, t51, t53, t54, t55;
  double t56, t57, t58, t60, t61, t63, t64, t65;
  double t66, t67, t69, t70, t71, t72, t74, t75;
  double t76, t77, t78, t79, t80, t82, t83, t84;
  double t86, t87, t91, t92, t94, t95, t96, t97;
  double t99, t100, t101, t102, t104, t105, t106, t107;
  double t110, t111, t112, t113, t114, t117, t118, t119;
  double t120, t123, t125, t126, t127, t128, t129, t130;
  double t132, t133, t134, t136, t137, t138, t139, t140;
  double t141, t142, t143, t144, t145, t146, t147, t149;
  double t150, t152, t153, t155, t156, t157, t158, t159;
  double t160, t161, t162, t164, t165, t166, t167, t168;
  double t170, t171, t172, t173, t174, t175, t176, t177;
  double t178, t180, t181, t182, t184, t185, t186, t187;
  double t189, t190, t191, t193, t194, t195, t198, t199;
  double t200, t202, t205, t207, t208, t211, t212, t213;
  double t215, t220, t221, t222, t224, t227, t229, t230;
  double t232, t235, t236, t237, t238, t240, t242, t245;
  double t246, t248, t249, t250, t251, t252, t254, t255;
  double t256, t257, t259, t260, t261, t262, t263, t264;
  double t265, t266, t268, t269, t270, t271, t272, t273;
  double t274, t276, t277, t278, t279, t280, t282, t283;
  double t284, t285, t286, t288, t290, t291, t292, t293;
  double t297, t298, t301, t304, t305, t306, t307, t308;
  double t311, t315, t319, t320, t323, t326, t327, t329;
  double t330, t333, t334, t335, t336, t339, t340, t342;
  double t343, t346, t347, t348, t349, t352, t354, t361;
  double t363, t374, t377, t378, t384, t386, t388, t390;
  double t393, t394, t400, t402, t404, t406, t408, t418;
  double t420, t422, t424, t430, t437, t444, t448, t449;
  double t453, t454, t459, t460, t464, t472, t474, t479;
  double t480, t482, t483, t484, t485, t495, t503, t504;
  double t510, t518, t527, t535, t537, t540, t543, t547;
  double t550, t568, t572, t574, t576, t583, t586, t589;
  double t591, t593, t604, t618, t621, t623, t625, t628;
  double t630, t642, t643, t647, t675, t678, t687, t700;
  double t714, t716, t757, t760, t763, t764, t766, t769;
  double t776, t795, t798, t800, t810, t826, t835, t840;
  double t842, t881, t882, t883, t896, t897, t905, t906;
  double t907, t912, t913, t945, t962;


  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = t4 * t6;
  t8 = rho[0] - rho[1];
  t9 = rho[0] + rho[1];
  t10 = 0.1e1 / t9;
  t11 = t8 * t10;
  t13 = 0.1e1 / 0.2e1 + t11 / 0.2e1;
  t14 = POW_1_3(t13);
  t15 = t14 * t13;
  t16 = POW_1_3(t9);
  t17 = t15 * t16;
  t18 = t1 * t1;
  t20 = t18 / t3;
  t21 = sqrt(sigma[0]);
  t22 = POW_1_3(rho[0]);
  t24 = 0.1e1 / t22 / rho[0];
  t25 = t21 * t24;
  t26 = sqrt(t25);
  t27 = t26 * t25;
  t31 = 0.1e1 + 0.2e1 / 0.1233e4 * t20 * t5 * t27;
  t33 = t7 * t17 * t31;
  t35 = 0.1e1 / 0.2e1 - t11 / 0.2e1;
  t36 = POW_1_3(t35);
  t37 = t36 * t35;
  t38 = t37 * t16;
  t39 = sqrt(sigma[2]);
  t40 = POW_1_3(rho[1]);
  t42 = 0.1e1 / t40 / rho[1];
  t43 = t39 * t42;
  t44 = sqrt(t43);
  t45 = t44 * t43;
  t49 = 0.1e1 + 0.2e1 / 0.1233e4 * t20 * t5 * t45;
  t51 = t7 * t38 * t49;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t33 - 0.3e1 / 0.8e1 * t51;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t53 = 0.3e1 / 0.8e1 * t33;
  t54 = 0.3e1 / 0.8e1 * t51;
  t55 = t14 * t16;
  t56 = t9 * t9;
  t57 = 0.1e1 / t56;
  t58 = t8 * t57;
  t60 = t10 / 0.2e1 - t58 / 0.2e1;
  t61 = t31 * t60;
  t63 = t7 * t55 * t61;
  t64 = t63 / 0.2e1;
  t65 = t16 * t16;
  t66 = 0.1e1 / t65;
  t67 = t15 * t66;
  t69 = t7 * t67 * t31;
  t70 = t69 / 0.8e1;
  t71 = t26 * t21;
  t72 = rho[0] * rho[0];
  t74 = 0.1e1 / t22 / t72;
  t75 = t71 * t74;
  t76 = t17 * t75;
  t77 = 0.2e1 / 0.137e3 * t76;
  t78 = t36 * t16;
  t79 = -t60;
  t80 = t49 * t79;
  t82 = t7 * t78 * t80;
  t83 = t82 / 0.2e1;
  t84 = t37 * t66;
  t86 = t7 * t84 * t49;
  t87 = t86 / 0.8e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t53 - t54 + t9 * (-t64 - t70 + t77 - t83 - t87);

  t91 = -t10 / 0.2e1 - t58 / 0.2e1;
  t92 = t31 * t91;
  t94 = t7 * t55 * t92;
  t95 = t94 / 0.2e1;
  t96 = -t91;
  t97 = t49 * t96;
  t99 = t7 * t78 * t97;
  t100 = t99 / 0.2e1;
  t101 = t44 * t39;
  t102 = rho[1] * rho[1];
  t104 = 0.1e1 / t40 / t102;
  t105 = t101 * t104;
  t106 = t38 * t105;
  t107 = 0.2e1 / 0.137e3 * t106;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t53 - t54 + t9 * (-t95 - t70 - t100 - t87 + t107);

  t110 = t16 * t9;
  t111 = t110 * t15;
  t112 = 0.1e1 / t21;
  t113 = t26 * t112;
  t114 = t113 * t24;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.3e1 / 0.548e3 * t111 * t114;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t117 = t110 * t37;
  t118 = 0.1e1 / t39;
  t119 = t44 * t118;
  t120 = t119 * t42;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = -0.3e1 / 0.548e3 * t117 * t120;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t123 = t69 / 0.4e1;
  t125 = t86 / 0.4e1;
  t126 = t14 * t14;
  t127 = 0.1e1 / t126;
  t128 = t127 * t16;
  t129 = t60 * t60;
  t130 = t31 * t129;
  t132 = t7 * t128 * t130;
  t133 = t132 / 0.6e1;
  t134 = t14 * t66;
  t136 = t7 * t134 * t61;
  t137 = t136 / 0.3e1;
  t138 = t55 * t26;
  t139 = t21 * t74;
  t140 = t139 * t60;
  t141 = t138 * t140;
  t142 = 0.16e2 / 0.411e3 * t141;
  t143 = t56 * t9;
  t144 = 0.1e1 / t143;
  t145 = t8 * t144;
  t146 = -t57 + t145;
  t147 = t31 * t146;
  t149 = t7 * t55 * t147;
  t150 = t149 / 0.2e1;
  t152 = 0.1e1 / t65 / t9;
  t153 = t15 * t152;
  t155 = t7 * t153 * t31;
  t156 = t155 / 0.12e2;
  t157 = t67 * t75;
  t158 = 0.4e1 / 0.411e3 * t157;
  t159 = 0.1e1 / t26;
  t160 = t159 * sigma[0];
  t161 = t72 * t72;
  t162 = t22 * t22;
  t164 = 0.1e1 / t162 / t161;
  t165 = t160 * t164;
  t166 = t17 * t165;
  t167 = 0.4e1 / 0.411e3 * t166;
  t168 = t72 * rho[0];
  t170 = 0.1e1 / t22 / t168;
  t171 = t71 * t170;
  t172 = t17 * t171;
  t173 = 0.14e2 / 0.411e3 * t172;
  t174 = t36 * t36;
  t175 = 0.1e1 / t174;
  t176 = t175 * t16;
  t177 = t79 * t79;
  t178 = t49 * t177;
  t180 = t7 * t176 * t178;
  t181 = t180 / 0.6e1;
  t182 = t36 * t66;
  t184 = t7 * t182 * t80;
  t185 = t184 / 0.3e1;
  t186 = -t146;
  t187 = t49 * t186;
  t189 = t7 * t78 * t187;
  t190 = t189 / 0.2e1;
  t191 = t37 * t152;
  t193 = t7 * t191 * t49;
  t194 = t193 / 0.12e2;
  t195 = -t133 - t137 + t142 - t150 + t156 + t158 - t167 - t173 - t181 - t185 - t190 + t194;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t63 - t123 + 0.4e1 / 0.137e3 * t76 - t82 - t125 + t9 * t195;

  t198 = t4 * t6 * t127;
  t199 = t16 * t31;
  t200 = t91 * t60;
  t202 = t198 * t199 * t200;
  t205 = t7 * t134 * t92;
  t207 = t139 * t91;
  t208 = t138 * t207;
  t211 = 0.1e1 / t65 / t56;
  t212 = t14 * t211;
  t213 = t31 * t8;
  t215 = t7 * t212 * t213;
  t220 = t4 * t6 * t175;
  t221 = t16 * t49;
  t222 = t96 * t79;
  t224 = t220 * t221 * t222;
  t227 = t7 * t182 * t97;
  t229 = t36 * t211;
  t230 = t49 * t8;
  t232 = t7 * t229 * t230;
  t235 = t78 * t44;
  t236 = t39 * t104;
  t237 = t236 * t79;
  t238 = t235 * t237;
  t240 = t84 * t105;
  t242 = -t202 / 0.6e1 - t205 / 0.6e1 + 0.8e1 / 0.411e3 * t208 - t215 / 0.2e1 - t136 / 0.6e1 + t156 + 0.2e1 / 0.411e3 * t157 - t224 / 0.6e1 - t227 / 0.6e1 + t232 / 0.2e1 - t184 / 0.6e1 + t194 + 0.8e1 / 0.411e3 * t238 + 0.2e1 / 0.411e3 * t240;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t9 * t242 - t100 + t107 - t123 - t125 - t64 + t77 - t83 - t95;

  t245 = t91 * t91;
  t246 = t31 * t245;
  t248 = t7 * t128 * t246;
  t249 = t248 / 0.6e1;
  t250 = t205 / 0.3e1;
  t251 = t57 + t145;
  t252 = t31 * t251;
  t254 = t7 * t55 * t252;
  t255 = t254 / 0.2e1;
  t256 = t96 * t96;
  t257 = t49 * t256;
  t259 = t7 * t176 * t257;
  t260 = t259 / 0.6e1;
  t261 = t227 / 0.3e1;
  t262 = t236 * t96;
  t263 = t235 * t262;
  t264 = 0.16e2 / 0.411e3 * t263;
  t265 = -t251;
  t266 = t49 * t265;
  t268 = t7 * t78 * t266;
  t269 = t268 / 0.2e1;
  t270 = 0.4e1 / 0.411e3 * t240;
  t271 = 0.1e1 / t44;
  t272 = t271 * sigma[2];
  t273 = t102 * t102;
  t274 = t40 * t40;
  t276 = 0.1e1 / t274 / t273;
  t277 = t272 * t276;
  t278 = t38 * t277;
  t279 = 0.4e1 / 0.411e3 * t278;
  t280 = t102 * rho[1];
  t282 = 0.1e1 / t40 / t280;
  t283 = t101 * t282;
  t284 = t38 * t283;
  t285 = 0.14e2 / 0.411e3 * t284;
  t286 = -t249 - t250 - t255 + t156 - t260 - t261 + t264 - t269 + t194 + t270 - t279 - t285;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t94 - t123 - t99 - t125 + 0.4e1 / 0.137e3 * t106 + t9 * t286;

  t288 = t17 * t114;
  t290 = t110 * t14;
  t291 = t290 * t26;
  t292 = t112 * t24;
  t293 = t292 * t60;
  t297 = 0.1e1 / t162 / t168;
  t298 = t159 * t297;
  t301 = t113 * t74;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t288 / 0.137e3 - t291 * t293 / 0.137e3 + t111 * t298 / 0.274e3 + t111 * t301 / 0.137e3;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t304 = t38 * t120;
  t305 = t110 * t36;
  t306 = t305 * t44;
  t307 = t118 * t42;
  t308 = t307 * t79;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = -t306 * t308 / 0.137e3 - t304 / 0.137e3;

  t311 = t292 * t91;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = -t291 * t311 / 0.137e3 - t288 / 0.137e3;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t315 = t307 * t96;
  t319 = 0.1e1 / t274 / t280;
  t320 = t271 * t319;
  t323 = t119 * t104;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = -t304 / 0.137e3 - t306 * t315 / 0.137e3 + t117 * t320 / 0.274e3 + t117 * t323 / 0.137e3;

  t326 = 0.1e1 / sigma[0];
  t327 = t159 * t326;
  t329 = 0.1e1 / t162 / t72;
  t330 = t327 * t329;
  t333 = t21 * sigma[0];
  t334 = 0.1e1 / t333;
  t335 = t26 * t334;
  t336 = t335 * t24;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = -0.3e1 / 0.2192e4 * t111 * t330 + 0.3e1 / 0.1096e4 * t111 * t336;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t339 = 0.1e1 / sigma[2];
  t340 = t271 * t339;
  t342 = 0.1e1 / t274 / t102;
  t343 = t340 * t342;
  t346 = t39 * sigma[2];
  t347 = 0.1e1 / t346;
  t348 = t44 * t347;
  t349 = t348 * t42;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = -0.3e1 / 0.2192e4 * t117 * t343 + 0.3e1 / 0.1096e4 * t117 * t349;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t352 = t67 * t165;
  t354 = 0.1e1 / t27;
  t361 = t67 * t171;
  t363 = t161 * rho[0];
  t374 = t153 * t75;
  t377 = 0.1e1 / t126 / t13;
  t378 = t377 * t16;
  t384 = t127 * t66;
  t386 = t7 * t384 * t130;
  t388 = t14 * t152;
  t390 = t7 * t388 * t61;
  t393 = 0.1e1 / t174 / t35;
  t394 = t393 * t16;
  t400 = t175 * t66;
  t402 = t7 * t400 * t178;
  t404 = t36 * t152;
  t406 = t7 * t404 * t80;
  t408 = -0.4e1 / 0.411e3 * t352 - 0.8e1 / 0.1233e4 * t17 * t354 * t333 / t161 / t168 - 0.14e2 / 0.411e3 * t361 + 0.28e2 / 0.411e3 * t17 * t160 / t162 / t363 + 0.140e3 / 0.1233e4 * t17 * t71 / t22 / t161 - 0.4e1 / 0.411e3 * t374 + t7 * t378 * t31 * t129 * t60 / 0.9e1 - t386 / 0.6e1 + t390 / 0.3e1 + t7 * t394 * t49 * t177 * t79 / 0.9e1 - t402 / 0.6e1 + t406 / 0.3e1;
  t418 = t7 * t134 * t147;
  t420 = t56 * t56;
  t422 = t8 / t420;
  t424 = 0.3e1 * t144 - 0.3e1 * t422;
  t430 = t7 * t182 * t187;
  t437 = t21 * t170;
  t444 = 0.5e1 / 0.36e2 * t7 * t15 * t211 * t31;
  t448 = 0.5e1 / 0.36e2 * t7 * t37 * t211 * t49;
  t449 = t128 * t26;
  t453 = t134 * t26;
  t454 = t453 * t140;
  t459 = t55 * t159;
  t460 = sigma[0] * t164;
  t464 = -t198 * t199 * t60 * t146 / 0.2e1 - t220 * t221 * t79 * t186 / 0.2e1 - t418 / 0.2e1 - t7 * t55 * t31 * t424 / 0.2e1 - t430 / 0.2e1 + t7 * t78 * t49 * t424 / 0.2e1 - 0.56e2 / 0.411e3 * t138 * t437 * t60 - t444 - t448 + 0.8e1 / 0.411e3 * t449 * t139 * t129 + 0.16e2 / 0.411e3 * t454 + 0.8e1 / 0.137e3 * t138 * t139 * t146 - 0.16e2 / 0.411e3 * t459 * t460 * t60;
  t472 = t155 / 0.4e1;
  t474 = t193 / 0.4e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t9 * (t408 + t464) - t132 / 0.2e1 - t136 - t180 / 0.2e1 - t184 + 0.4e1 / 0.137e3 * t157 - 0.4e1 / 0.137e3 * t166 - 0.3e1 / 0.2e1 * t149 + t472 - 0.3e1 / 0.2e1 * t189 + t474 + 0.16e2 / 0.137e3 * t141 - 0.14e2 / 0.137e3 * t172;

  t479 = t202 / 0.3e1;
  t480 = t224 / 0.3e1;
  t482 = -t133 - 0.2e1 / 0.3e1 * t136 - t181 - 0.2e1 / 0.3e1 * t184 - t479 - t250 - t215 - t480 - t261 + 0.8e1 / 0.411e3 * t157 - t167;
  t483 = 0.16e2 / 0.411e3 * t208;
  t484 = 0.16e2 / 0.411e3 * t238;
  t485 = t191 * t105;
  t495 = t4 * t6 * t377;
  t503 = t198 * t66 * t31 * t200 / 0.9e1;
  t504 = t211 * t31;
  t510 = t4 * t6 * t393;
  t518 = t220 * t66 * t49 * t222 / 0.9e1;
  t527 = t211 * t49;
  t535 = -0.4e1 / 0.1233e4 * t485 - 0.4e1 / 0.1233e4 * t352 - 0.14e2 / 0.1233e4 * t361 - 0.8e1 / 0.1233e4 * t374 - t386 / 0.18e2 + 0.2e1 / 0.9e1 * t390 - t402 / 0.18e2 + 0.2e1 / 0.9e1 * t406 + t495 * t199 * t91 * t129 / 0.9e1 - t503 - t198 * t504 * t8 * t60 / 0.3e1 + t510 * t221 * t96 * t177 / 0.9e1 - t518 - t198 * t199 * t91 * t146 / 0.6e1 - t220 * t221 * t96 * t186 / 0.6e1 + t220 * t527 * t8 * t79 / 0.3e1 + 0.16e2 / 0.1233e4 * t449 * t139 * t200;
  t537 = 0.1e1 / t65 / t143;
  t540 = t7 * t36 * t537 * t230;
  t543 = t7 * t388 * t92;
  t547 = t7 * t14 * t537 * t213;
  t550 = t7 * t404 * t97;
  t568 = t176 * t44;
  t572 = t182 * t44;
  t574 = 0.16e2 / 0.1233e4 * t572 * t237;
  t576 = 0.16e2 / 0.1233e4 * t453 * t207;
  t583 = -0.7e1 / 0.6e1 * t540 + t543 / 0.9e1 + 0.7e1 / 0.6e1 * t547 + t550 / 0.9e1 - t418 / 0.6e1 - t430 / 0.6e1 - t444 - t448 + 0.16e2 / 0.1233e4 * t454 - 0.56e2 / 0.1233e4 * t138 * t437 * t91 + 0.16e2 / 0.411e3 * t212 * t26 * t139 * t8 - t7 * t212 * t31 / 0.2e1 + t7 * t229 * t49 / 0.2e1 + 0.8e1 / 0.1233e4 * t568 * t236 * t177 + t574 + t576 - 0.16e2 / 0.1233e4 * t459 * t460 * t91 + 0.8e1 / 0.411e3 * t235 * t236 * t186;
  t586 = -t150 + t472 - t190 + t474 + t232 + t142 - t173 + t483 + t484 + t270 + t9 * (t535 + t583);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t482 + t586;

  t589 = -t137 - t185 - t479 - 0.2e1 / 0.3e1 * t205 - t215 - t480 - 0.2e1 / 0.3e1 * t227 - t249 - t260 + t158 - t279;
  t591 = t84 * t277;
  t593 = t84 * t283;
  t604 = -t144 - 0.3e1 * t422;
  t618 = t7 * t384 * t246;
  t621 = t7 * t134 * t252;
  t623 = -0.4e1 / 0.1233e4 * t591 - 0.14e2 / 0.1233e4 * t593 - 0.8e1 / 0.1233e4 * t485 - 0.4e1 / 0.1233e4 * t374 + t390 / 0.9e1 + t406 / 0.9e1 - t503 - t518 + t540 / 0.3e1 + 0.2e1 / 0.9e1 * t543 - t547 / 0.3e1 + 0.2e1 / 0.9e1 * t550 - t7 * t55 * t31 * t604 / 0.2e1 + 0.16e2 / 0.1233e4 * t568 * t236 * t222 + t7 * t78 * t49 * t604 / 0.2e1 - t618 / 0.18e2 - t621 / 0.6e1;
  t625 = t7 * t400 * t257;
  t628 = t7 * t182 * t266;
  t630 = t572 * t262;
  t642 = t78 * t271;
  t643 = sigma[2] * t276;
  t647 = t39 * t282;
  t675 = -t625 / 0.18e2 - t628 / 0.6e1 - t444 - t448 + t574 + t576 + 0.16e2 / 0.1233e4 * t630 + 0.8e1 / 0.1233e4 * t449 * t139 * t245 + 0.8e1 / 0.411e3 * t138 * t139 * t251 - 0.16e2 / 0.411e3 * t229 * t44 * t236 * t8 - 0.16e2 / 0.1233e4 * t642 * t643 * t79 - 0.56e2 / 0.1233e4 * t235 * t647 * t79 - t198 * t504 * t91 * t8 / 0.3e1 + t495 * t199 * t245 * t60 / 0.9e1 - t198 * t199 * t251 * t60 / 0.6e1 + t510 * t221 * t256 * t79 / 0.9e1 + t220 * t527 * t96 * t8 / 0.3e1 - t220 * t221 * t265 * t79 / 0.6e1;
  t678 = t472 + t474 + t232 - t255 - t269 + t483 + t484 + 0.8e1 / 0.411e3 * t240 + t264 - t285 + t9 * (t623 + t675);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t589 + t678;

  t687 = t273 * rho[1];
  t700 = 0.1e1 / t45;
  t714 = 0.28e2 / 0.411e3 * t38 * t272 / t274 / t687 + 0.140e3 / 0.1233e4 * t38 * t101 / t40 / t273 - 0.4e1 / 0.411e3 * t591 - 0.14e2 / 0.411e3 * t593 - 0.8e1 / 0.1233e4 * t38 * t700 * t346 / t273 / t280 - 0.4e1 / 0.411e3 * t485 + t543 / 0.3e1 + t550 / 0.3e1 - t618 / 0.6e1 - t621 / 0.2e1 - t625 / 0.6e1 - t628 / 0.2e1;
  t716 = -0.3e1 * t144 - 0.3e1 * t422;
  t757 = -t7 * t55 * t31 * t716 / 0.2e1 + t7 * t78 * t49 * t716 / 0.2e1 + t7 * t378 * t31 * t245 * t91 / 0.9e1 + t7 * t394 * t49 * t256 * t96 / 0.9e1 - t444 - t448 + 0.16e2 / 0.411e3 * t630 - 0.56e2 / 0.411e3 * t235 * t647 * t96 + 0.8e1 / 0.411e3 * t568 * t236 * t256 + 0.8e1 / 0.137e3 * t235 * t236 * t265 - 0.16e2 / 0.411e3 * t642 * t643 * t96 - t198 * t199 * t91 * t251 / 0.2e1 - t220 * t221 * t96 * t265 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t205 - t227 - t248 / 0.2e1 - t259 / 0.2e1 - 0.4e1 / 0.137e3 * t278 + t472 + t474 - 0.3e1 / 0.2e1 * t254 - 0.3e1 / 0.2e1 * t268 + 0.4e1 / 0.137e3 * t240 + 0.16e2 / 0.137e3 * t263 - 0.14e2 / 0.137e3 * t284 + t9 * (t714 + t757);

  t760 = t138 * t293;
  t763 = t67 * t114 / 0.411e3;
  t764 = t17 * t298;
  t766 = t17 * t301;
  t769 = t110 * t127 * t26;
  t776 = t112 * t74;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -0.8e1 / 0.411e3 * t760 - t763 + 0.4e1 / 0.411e3 * t764 + 0.8e1 / 0.411e3 * t766 - t769 * t292 * t129 / 0.411e3 + 0.4e1 / 0.411e3 * t290 * t298 * t60 + 0.8e1 / 0.411e3 * t291 * t776 * t60 - t291 * t292 * t146 / 0.137e3 + t111 * t354 / t161 / t72 * t21 / 0.411e3 - 0.5e1 / 0.274e3 * t111 * t159 * t164 - 0.7e1 / 0.411e3 * t111 * t113 * t170;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = 0.0e0;

  t795 = t235 * t308;
  t798 = t84 * t120 / 0.411e3;
  t800 = t110 * t175 * t44;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = -0.8e1 / 0.411e3 * t795 - t798 - t800 * t307 * t177 / 0.411e3 - t306 * t307 * t186 / 0.137e3;

  t810 = t138 * t311;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = -0.4e1 / 0.411e3 * t760 - t763 + 0.2e1 / 0.411e3 * t764 + 0.4e1 / 0.411e3 * t766 - 0.4e1 / 0.411e3 * t810 - t769 * t292 * t200 / 0.411e3 + 0.2e1 / 0.411e3 * t290 * t298 * t91 + 0.4e1 / 0.411e3 * t291 * t776 * t91 - t388 * t26 * t292 * t8 / 0.137e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = 0.0e0;

  t826 = t235 * t315;
  t835 = t38 * t320;
  t840 = t38 * t323;
  t842 = t118 * t104;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = -0.4e1 / 0.411e3 * t795 - t798 - 0.4e1 / 0.411e3 * t826 - t800 * t307 * t222 / 0.411e3 + t404 * t44 * t307 * t8 / 0.137e3 + 0.2e1 / 0.411e3 * t835 + 0.2e1 / 0.411e3 * t305 * t320 * t79 + 0.4e1 / 0.411e3 * t840 + 0.4e1 / 0.411e3 * t306 * t842 * t79;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = -0.8e1 / 0.411e3 * t810 - t763 - t769 * t292 * t245 / 0.411e3 - t291 * t292 * t251 / 0.137e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = -0.8e1 / 0.411e3 * t826 - t798 + 0.4e1 / 0.411e3 * t835 + 0.8e1 / 0.411e3 * t840 - t800 * t307 * t256 / 0.411e3 + 0.4e1 / 0.411e3 * t305 * t320 * t96 + 0.8e1 / 0.411e3 * t306 * t842 * t96 - t306 * t307 * t265 / 0.137e3 + t117 * t700 / t273 / t102 * t39 / 0.411e3 - 0.5e1 / 0.274e3 * t117 * t271 * t276 - 0.7e1 / 0.411e3 * t117 * t119 * t282;

  t881 = t17 * t330 / 0.548e3;
  t882 = t290 * t159;
  t883 = t326 * t329;
  t896 = t17 * t336 / 0.274e3;
  t897 = t334 * t24;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t881 - t882 * t883 * t60 / 0.548e3 - t111 * t354 * t112 / t363 / 0.1096e4 + t111 * t327 * t297 / 0.548e3 + t896 + t291 * t897 * t60 / 0.274e3 - t111 * t335 * t74 / 0.274e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = 0.0e0;

  t905 = t38 * t343 / 0.548e3;
  t906 = t305 * t271;
  t907 = t339 * t342;
  t912 = t38 * t349 / 0.274e3;
  t913 = t347 * t42;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = -t905 - t906 * t907 * t79 / 0.548e3 + t912 + t306 * t913 * t79 / 0.274e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = -t881 - t882 * t883 * t91 / 0.548e3 + t896 + t291 * t897 * t91 / 0.274e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = -t905 - t906 * t907 * t96 / 0.548e3 - t117 * t700 * t118 / t687 / 0.1096e4 + t117 * t340 * t319 / 0.548e3 + t912 + t306 * t913 * t96 / 0.274e3 - t117 * t348 * t104 / 0.274e3;

  t945 = sigma[0] * sigma[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.3e1 / 0.8768e4 * t111 * t354 * t334 / t161 + 0.9e1 / 0.4384e4 * t111 * t159 / t945 * t329 - 0.9e1 / 0.2192e4 * t111 * t26 / t21 / t945 * t24;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[4] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[5] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[6] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[8] = 0.0e0;

  t962 = sigma[2] * sigma[2];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[9] = 0.3e1 / 0.8768e4 * t117 * t700 * t347 / t273 + 0.9e1 / 0.4384e4 * t117 * t271 / t962 * t342 - 0.9e1 / 0.2192e4 * t117 * t44 / t39 / t962 * t42;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


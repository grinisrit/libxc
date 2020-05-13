/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_rc04.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t4, t5, t6, t7, t12, t13;
  double t16, t17, t19, t21;

#ifndef XC_DONT_COMPILE_VXC
  double t23, t24, t25;

#ifndef XC_DONT_COMPILE_FXC
  double t30, t35, t36;

#ifndef XC_DONT_COMPILE_KXC
  double t45, t53, t62, t65, t68, t69;

#ifndef XC_DONT_COMPILE_LXC
  double t75, t86, t90, t99, t103, t104;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t12 = 0.4888270e1 + 0.79425925000000000000e0 * t4 * t6 / t7;
  t13 = atan(t12);
  t16 = t1 * t1;
  t17 = (-0.655868e0 * t13 + 0.897889e0) * t16;
  t19 = 0.1e1 / t3 * t5;
  t21 = t17 * t19 * t7;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t21 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t23 = t12 * t12;
  t24 = t23 + 0.1e1;
  t25 = 0.1e1 / t24;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.4e1 / 0.9e1 * t21 + 0.69457230103866666663e0 * t25;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t30 = t7 * t7;
  t35 = t24 * t24;
  t36 = 0.1e1 / t35;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.92609640138488888884e0 / rho[0] * t25 + 0.4e1 / 0.27e2 * t17 * t19 / t30 + 0.36778031659583040509e0 * t36 * t12 * t1 * t3 * t6 / t7 / rho[0];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t45 = rho[0] * rho[0];
  t53 = t4 * t6;
  t62 = 0.1e1 / t35 / t24;
  t65 = t3 * t3;
  t68 = 0.1e1 / t30 / t45;
  t69 = t65 * t5 * t68;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.61739760092325925923e0 / t45 * t25 - 0.1e-19 / t7 / t45 * t36 * t12 * t53 - 0.8e1 / 0.81e2 * t17 * t19 / t30 / rho[0] + 0.15579355649288896569e1 * t62 * t23 * t16 * t69 - 0.38948389123222241422e0 * t36 * t16 * t69;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t75 = t45 * rho[0];
  t86 = 0.1e1 / t30 / t75;
  t90 = t16 * t65 * t5;
  t99 = t35 * t35;
  t103 = t45 * t45;
  t104 = 0.1e1 / t103;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.10289960015387654321e1 / t75 * t25 - 0.32691583697407147117e0 / t7 / t75 * t36 * t12 * t53 - 0.41544948398103724184e1 * t86 * t62 * t23 * t90 + 0.10386237099525931046e1 * t86 * t36 * t90 + 0.40e2 / 0.243e3 * t17 * t19 * t68 + 0.94530758360525579704e1 / t99 * t23 * t12 * t104 - 0.47265379180262789851e1 * t62 * t12 * t104;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t12, t13, t14, t15, t17, t18;
  double t19, t20, t21, t26, t27, t29, t31, t32;
  double t33, t34, t35, t36;

#ifndef XC_DONT_COMPILE_VXC
  double t37, t38, t40, t41, t42, t43, t44, t45;
  double t46, t48, t49, t52, t56, t57, t58, t60;
  double t61, t63, t66, t68;

#ifndef XC_DONT_COMPILE_FXC
  double t71, t72, t74, t78, t79, t80, t83, t84;
  double t85, t86, t91, t92, t95, t96, t99, t100;
  double t101, t103, t107, t108, t111, t114, t116, t118;
  double t119, t120, t123, t124, t126, t129, t130, t132;
  double t133, t134, t135, t138, t140, t143, t146, t149;
  double t152, t154, t158, t160, t164, t168, t171, t174;
  double t177, t179;

#ifndef XC_DONT_COMPILE_KXC
  double t181, t182, t183, t185, t189, t191, t195, t197;
  double t198, t200, t201, t202, t206, t207, t208, t210;
  double t214, t217, t222, t224, t226, t229, t230, t233;
  double t236, t238, t239, t242, t245, t246, t247, t249;
  double t252, t254, t255, t258, t261, t264, t269, t270;
  double t272, t273, t275, t277, t279, t281, t284, t289;
  double t290, t292, t293, t295, t297, t300, t301, t304;
  double t305, t308, t309, t310, t313, t314, t315, t318;
  double t322, t325, t326, t329, t339, t342, t352, t354;
  double t356, t362, t364, t365, t368, t370, t371, t375;
  double t377, t379, t381, t385, t390, t395, t398, t403;
  double t406, t409, t411, t413, t421, t426, t432, t435;
  double t440, t443, t445, t447, t448;

#ifndef XC_DONT_COMPILE_LXC
  double t451, t453, t455, t458, t461, t462, t463, t467;
  double t475, t477, t480, t484, t487, t494, t497, t501;
  double t506, t509, t510, t516, t522, t523, t525, t530;
  double t531, t537, t549, t552, t556, t560, t567, t570;
  double t574, t578, t579, t580, t581, t583, t584, t586;
  double t589, t591, t597, t600, t601, t602, t604, t608;
  double t610, t612, t613, t614, t616, t618, t633, t636;
  double t637, t640, t643, t648, t649, t653, t657, t658;
  double t662, t664, t683, t701, t716, t722, t725, t730;
  double t732, t738, t740, t742, t745, t746, t747, t749;
  double t751, t757, t761, t763, t771, t783, t796, t803;
  double t805, t820, t823, t862, t867, t869, t874, t879;
  double t888, t890, t893, t895, t897, t899, t901, t911;
  double t924, t930, t939, t960, t982, t986, t989, t992;
  double t1000, t1002, t1019, t1021, t1026, t1032, t1035, t1040;
  double t1054, t1064;
#endif

#endif

#endif

#endif

#endif



  t1 = rho[0] - rho[1];
  t2 = rho[0] + rho[1];
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = 0.1e1 + t4;
  t6 = POW_1_3(t5);
  t7 = t6 * t6;
  t8 = 0.1e1 - t4;
  t9 = POW_1_3(t8);
  t10 = t9 * t9;
  t12 = t7 / 0.2e1 + t10 / 0.2e1;
  t13 = t12 * t12;
  t14 = t13 * t12;
  t15 = M_CBRT3;
  t17 = POW_1_3(0.1e1 / M_PI);
  t18 = t15 * t17;
  t19 = M_CBRT4;
  t20 = t19 * t19;
  t21 = POW_1_3(t2);
  t26 = 0.4888270e1 + 0.79425925000000000000e0 * t18 * t20 / t21;
  t27 = atan(t26);
  t29 = -0.655868e0 * t27 + 0.897889e0;
  t31 = t15 * t15;
  t32 = t14 * t29 * t31;
  t33 = 0.1e1 / t17;
  t34 = t33 * t19;
  t35 = t34 * t21;
  t36 = t32 * t35;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t36 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t37 = 0.4e1 / 0.9e1 * t36;
  t38 = t21 * t2;
  t40 = t38 * t13 * t29;
  t41 = t31 * t33;
  t42 = 0.1e1 / t6;
  t43 = t2 * t2;
  t44 = 0.1e1 / t43;
  t45 = t1 * t44;
  t46 = t3 - t45;
  t48 = 0.1e1 / t9;
  t49 = -t46;
  t52 = t42 * t46 / 0.3e1 + t48 * t49 / 0.3e1;
  t56 = t26 * t26;
  t57 = t56 + 0.1e1;
  t58 = 0.1e1 / t57;
  t60 = 0.69457230103866666663e0 * t14 * t58;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t40 * t41 * t19 * t52 + t37 + t60;

  t61 = -t3 - t45;
  t63 = -t61;
  t66 = t42 * t61 / 0.3e1 + t48 * t63 / 0.3e1;
  t68 = t41 * t19 * t66;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t40 * t68 + t37 + t60;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t71 = t13 * t29 * t31;
  t72 = t21 * t52;
  t74 = t71 * t34 * t72;
  t78 = 0.92609640138488888884e0 * t14 * t3 * t58;
  t79 = t21 * t21;
  t80 = 0.1e1 / t79;
  t83 = 0.4e1 / 0.27e2 * t32 * t34 * t80;
  t84 = t38 * t12;
  t85 = t84 * t29;
  t86 = t52 * t52;
  t91 = t13 * t58;
  t92 = t91 * t52;
  t95 = 0.1e1 / t6 / t5;
  t96 = t46 * t46;
  t99 = t43 * t2;
  t100 = 0.1e1 / t99;
  t101 = t1 * t100;
  t103 = -0.2e1 * t44 + 0.2e1 * t101;
  t107 = 0.1e1 / t9 / t8;
  t108 = t49 * t49;
  t111 = -t103;
  t114 = -t95 * t96 / 0.9e1 + t42 * t103 / 0.3e1 - t107 * t108 / 0.9e1 + t48 * t111 / 0.3e1;
  t116 = t41 * t19 * t114;
  t118 = t57 * t57;
  t119 = 0.1e1 / t118;
  t120 = t14 * t119;
  t123 = t20 / t38;
  t124 = t18 * t123;
  t126 = 0.36778031659583040509e0 * t120 * t26 * t124;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.8e1 / 0.3e1 * t74 + t78 + t83 + 0.2e1 * t85 * t41 * t19 * t86 + 0.41674338062319999998e1 * t92 + t40 * t116 + t126;

  t129 = t21 * t13 * t29;
  t130 = t129 * t68;
  t132 = t29 * t31;
  t133 = t84 * t132;
  t134 = t66 * t52;
  t135 = t34 * t134;
  t138 = t91 * t66;
  t140 = t95 * t61;
  t143 = t42 * t1;
  t146 = t107 * t63;
  t149 = t48 * t1;
  t152 = -t140 * t46 / 0.9e1 + 0.2e1 / 0.3e1 * t143 * t100 - t146 * t49 / 0.9e1 - 0.2e1 / 0.3e1 * t149 * t100;
  t154 = t41 * t19 * t152;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.4e1 / 0.3e1 * t74 + t78 + t83 + 0.4e1 / 0.3e1 * t130 + 0.2e1 * t133 * t135 + 0.20837169031159999999e1 * t138 + t40 * t154 + 0.20837169031159999999e1 * t92 + t126;

  t158 = t66 * t66;
  t160 = t41 * t19 * t158;
  t164 = t61 * t61;
  t168 = 0.2e1 * t44 + 0.2e1 * t101;
  t171 = t63 * t63;
  t174 = -t168;
  t177 = -t95 * t164 / 0.9e1 + t42 * t168 / 0.3e1 - t107 * t171 / 0.9e1 + t48 * t174 / 0.3e1;
  t179 = t41 * t19 * t177;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.8e1 / 0.3e1 * t130 + t78 + t83 + 0.2e1 * t85 * t160 + 0.41674338062319999998e1 * t138 + t40 * t179 + t126;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t181 = t12 * t29;
  t182 = t181 * t31;
  t183 = t21 * t86;
  t185 = t182 * t34 * t183;
  t189 = t71 * t34 * t80 * t52;
  t191 = t52 * t114;
  t195 = t13 * t119;
  t197 = t195 * t52 * t26;
  t198 = t197 * t124;
  t200 = t13 * t3;
  t201 = t58 * t52;
  t202 = t200 * t201;
  t206 = 0.61739760092325925923e0 * t14 * t44 * t58;
  t207 = t12 * t58;
  t208 = t207 * t86;
  t210 = t91 * t114;
  t214 = t71 * t34 * t21 * t114;
  t217 = 0.1e1 / t21 / t43;
  t222 = t26 * t15 * t17 * t20;
  t224 = 0.1e-19 * t14 * t217 * t119 * t222;
  t226 = 0.1e1 / t79 / t2;
  t229 = 0.8e1 / 0.81e2 * t32 * t34 * t226;
  t230 = t86 * t52;
  t233 = t41 * t19;
  t236 = t5 * t5;
  t238 = 0.1e1 / t6 / t236;
  t239 = t96 * t46;
  t242 = t95 * t46;
  t245 = t43 * t43;
  t246 = 0.1e1 / t245;
  t247 = t1 * t246;
  t249 = 0.6e1 * t100 - 0.6e1 * t247;
  t252 = t8 * t8;
  t254 = 0.1e1 / t9 / t252;
  t255 = t108 * t49;
  t258 = t107 * t49;
  t261 = -t249;
  t264 = 0.4e1 / 0.27e2 * t238 * t239 - t242 * t103 / 0.3e1 + t42 * t249 / 0.3e1 + 0.4e1 / 0.27e2 * t254 * t255 - t258 * t111 / 0.3e1 + t48 * t261 / 0.3e1;
  t269 = 0.1e1 / t118 / t57;
  t270 = t14 * t269;
  t272 = t17 * t17;
  t273 = t31 * t272;
  t275 = 0.1e1 / t79 / t43;
  t277 = t273 * t19 * t275;
  t279 = 0.15579355649288896569e1 * t270 * t56 * t277;
  t281 = t272 * t19;
  t284 = 0.38948389123222241422e0 * t120 * t31 * t281 * t275;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.8e1 * t185 + 0.4e1 / 0.3e1 * t189 + 0.6e1 * t133 * t34 * t191 + 0.33100228493624736458e1 * t198 + 0.83348676124639999996e1 * t202 - t206 + 0.12502301418695999999e2 * t208 + 0.62511507093479999997e1 * t210 + 0.4e1 * t214 - t224 - t229 + 0.2e1 * t38 * t230 * t29 * t233 + t40 * t41 * t19 * t264 + t279 - t284;

  t289 = t80 * t13 * t29;
  t290 = t289 * t68;
  t292 = t21 * t12;
  t293 = t292 * t132;
  t295 = 0.16e2 / 0.3e1 * t293 * t135;
  t297 = t38 * t86 * t29;
  t300 = t152 * t52;
  t301 = t34 * t300;
  t304 = t66 * t114;
  t305 = t34 * t304;
  t308 = t66 * t26;
  t309 = t195 * t308;
  t310 = t309 * t124;
  t313 = 0.8e1 / 0.3e1 * t185 + 0.8e1 / 0.9e1 * t189 + 0.22066818995749824306e1 * t198 + 0.4e1 / 0.9e1 * t290 + t295 + 0.2e1 * t297 * t68 + 0.4e1 * t133 * t301 + 0.2e1 * t133 * t305 + 0.11033409497874912153e1 * t310 + 0.55565784083093333330e1 * t202 - t206;
  t314 = t58 * t66;
  t315 = t200 * t314;
  t318 = 0.83348676124639999996e1 * t207 * t134;
  t322 = 0.41674338062319999998e1 * t91 * t152;
  t325 = 0.8e1 / 0.3e1 * t129 * t154;
  t326 = t238 * t61;
  t329 = t95 * t1;
  t339 = t254 * t63;
  t342 = t107 * t1;
  t352 = 0.4e1 / 0.27e2 * t326 * t96 - 0.4e1 / 0.9e1 * t329 * t100 * t46 - t140 * t103 / 0.9e1 + 0.2e1 / 0.3e1 * t42 * t100 - 0.2e1 * t143 * t246 + 0.4e1 / 0.27e2 * t339 * t108 + 0.4e1 / 0.9e1 * t342 * t100 * t49 - t146 * t111 / 0.9e1 - 0.2e1 / 0.3e1 * t48 * t100 + 0.2e1 * t149 * t246;
  t354 = t41 * t19 * t352;
  t356 = 0.27782892041546666665e1 * t315 + t318 + 0.41674338062319999998e1 * t208 + 0.20837169031159999999e1 * t210 + t322 + 0.4e1 / 0.3e1 * t214 - t224 - t229 + t279 + t325 + t40 * t354 - t284;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t313 + t356;

  t362 = t292 * t29 * t160;
  t364 = t66 * t152;
  t365 = t34 * t364;
  t368 = t129 * t179;
  t370 = t177 * t52;
  t371 = t34 * t370;
  t375 = 0.4e1 / 0.9e1 * t189 + 0.11033409497874912153e1 * t198 + 0.8e1 / 0.9e1 * t290 + t295 + 0.22066818995749824305e1 * t310 + 0.8e1 / 0.3e1 * t362 + 0.4e1 * t133 * t365 + 0.4e1 / 0.3e1 * t368 + 0.2e1 * t133 * t371 + 0.27782892041546666665e1 * t202 - t206;
  t377 = t207 * t158;
  t379 = t91 * t177;
  t381 = t38 * t52;
  t385 = t238 * t164;
  t390 = t95 * t168;
  t395 = -0.2e1 * t100 - 0.6e1 * t247;
  t398 = t254 * t171;
  t403 = t107 * t174;
  t406 = -t395;
  t409 = 0.4e1 / 0.27e2 * t385 * t46 - 0.4e1 / 0.9e1 * t140 * t101 - t390 * t46 / 0.9e1 + t42 * t395 / 0.3e1 + 0.4e1 / 0.27e2 * t398 * t49 + 0.4e1 / 0.9e1 * t146 * t101 - t403 * t49 / 0.9e1 + t48 * t406 / 0.3e1;
  t411 = t41 * t19 * t409;
  t413 = 0.55565784083093333331e1 * t315 + t318 + t322 + 0.41674338062319999998e1 * t377 + 0.20837169031159999999e1 * t379 - t224 - t229 + t279 + t325 + 0.2e1 * t381 * t29 * t160 + t40 * t411 - t284;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t375 + t413;

  t421 = t158 * t66;
  t426 = t164 * t61;
  t432 = -0.6e1 * t100 - 0.6e1 * t247;
  t435 = t171 * t63;
  t440 = -t432;
  t443 = 0.4e1 / 0.27e2 * t238 * t426 - t140 * t168 / 0.3e1 + t42 * t432 / 0.3e1 + 0.4e1 / 0.27e2 * t254 * t435 - t146 * t174 / 0.3e1 + t48 * t440 / 0.3e1;
  t445 = t41 * t19 * t443;
  t447 = t66 * t177;
  t448 = t34 * t447;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.4e1 / 0.3e1 * t290 + 0.33100228493624736458e1 * t310 + 0.8e1 * t362 + 0.4e1 * t368 - t206 + 0.83348676124639999996e1 * t315 + 0.12502301418695999999e2 * t377 + 0.62511507093479999997e1 * t379 - t224 - t229 + t279 + 0.2e1 * t38 * t421 * t29 * t233 + t40 * t445 - t284 + 0.6e1 * t133 * t448;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t451 = t91 * t264;
  t453 = t230 * t58;
  t455 = t12 * t119;
  t458 = t455 * t86 * t26 * t124;
  t461 = t18 * t20 * t217;
  t462 = t197 * t461;
  t463 = 0.3e-19 * t462;
  t467 = t181 * t41 * t19 * t21 * t191;
  t475 = t195 * t114 * t26 * t124;
  t477 = t13 * t269;
  t480 = t477 * t52 * t56 * t277;
  t484 = t71 * t34 * t80 * t114;
  t487 = t195 * t52 * t277;
  t494 = 0.32691583697407147117e0 * t14 / t21 / t99 * t119 * t222;
  t497 = t71 * t34 * t21 * t264;
  t501 = t14 / t79 / t99;
  t506 = 0.41544948398103724184e1 * t501 * t269 * t56 * t31 * t281;
  t509 = 0.1e1 / t6 / t236 / t5;
  t510 = t96 * t96;
  t516 = t103 * t103;
  t522 = 0.1e1 / t245 / t2;
  t523 = t1 * t522;
  t525 = -0.24e2 * t246 + 0.24e2 * t523;
  t530 = 0.1e1 / t9 / t252 / t8;
  t531 = t108 * t108;
  t537 = t111 * t111;
  t549 = 0.83348676124639999996e1 * t451 + 0.16669735224927999999e2 * t453 + 0.13240091397449894583e2 * t458 - t463 + 0.32e2 * t467 + 0.8e1 * t133 * t34 * t52 * t264 + 0.66200456987249472916e1 * t475 + 0.18695226779146675883e2 * t480 + 0.8e1 / 0.3e1 * t484 - 0.46738066947866689707e1 * t487 - t494 + 0.16e2 / 0.3e1 * t497 - t506 + t40 * t41 * t19 * (-0.28e2 / 0.81e2 * t509 * t510 + 0.8e1 / 0.9e1 * t238 * t96 * t103 - t95 * t516 / 0.3e1 - 0.4e1 / 0.9e1 * t242 * t249 + t42 * t525 / 0.3e1 - 0.28e2 / 0.81e2 * t530 * t531 + 0.8e1 / 0.9e1 * t254 * t108 * t111 - t107 * t537 / 0.3e1 - 0.4e1 / 0.9e1 * t258 * t261 - t48 * t525 / 0.3e1);
  t552 = t182 * t34 * t80 * t86;
  t556 = t71 * t34 * t226 * t52;
  t560 = t114 * t114;
  t567 = 0.10289960015387654321e1 * t14 * t100 * t58;
  t570 = t230 * t29 * t31 * t35;
  t574 = 0.40e2 / 0.243e3 * t32 * t34 * t275;
  t578 = 0.10386237099525931046e1 * t501 * t119 * t273 * t19;
  t579 = t12 * t3;
  t580 = t58 * t86;
  t581 = t579 * t580;
  t583 = t13 * t44;
  t584 = t583 * t201;
  t586 = t207 * t191;
  t589 = t200 * t58 * t114;
  t591 = t118 * t118;
  t597 = 0.94530758360525579704e1 * t14 / t591 * t56 * t26 * t246;
  t600 = 0.47265379180262789851e1 * t270 * t26 * t246;
  t601 = 0.16e2 / 0.3e1 * t552 - 0.32e2 / 0.27e2 * t556 + 0.12e2 * t297 * t116 + 0.6e1 * t85 * t41 * t19 * t560 + t567 + 0.32e2 / 0.3e1 * t570 + t574 + t578 + 0.33339470449855999998e2 * t581 - 0.74087712110791111108e1 * t584 + 0.50009205674783999996e2 * t586 + 0.16669735224927999999e2 * t589 + t597 - t600;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t549 + t601;

  t602 = t580 * t66;
  t604 = t91 * t352;
  t608 = t309 * t461;
  t610 = t80 * t12;
  t612 = t610 * t132 * t135;
  t613 = 0.8e1 / 0.3e1 * t612;
  t614 = t293 * t301;
  t616 = t293 * t305;
  t618 = t381 * t132;
  t633 = 0.12502301418695999999e2 * t602 + 0.62511507093479999997e1 * t604 + 0.20837169031159999999e1 * t451 + 0.41674338062319999998e1 * t453 - 0.1e-18 * t608 + t613 + 0.16e2 * t614 + 0.8e1 * t616 + 0.6e1 * t618 * t305 + 0.6e1 * t133 * t34 * t352 * t52 + 0.6e1 * t133 * t34 * t152 * t114 + 0.2e1 * t133 * t34 * t66 * t264;
  t636 = t195 * t152 * t26 * t124;
  t637 = 0.33100228493624736458e1 * t636;
  t640 = t477 * t66 * t56 * t277;
  t643 = 0.13e-18 * t462;
  t648 = t579 * t314 * t52;
  t649 = 0.16669735224927999999e2 * t648;
  t653 = t637 + 0.46738066947866689708e1 * t640 + 0.66200456987249472917e1 * t458 - t643 + 0.8e1 * t467 + 0.33100228493624736459e1 * t475 + 0.14021420084360006912e2 * t480 + t649 + 0.4e1 / 0.3e1 * t484 - 0.35053550210900017281e1 * t487 - t494 + 0.4e1 / 0.3e1 * t497;
  t657 = t289 * t154;
  t658 = 0.4e1 / 0.3e1 * t657;
  t662 = t195 * t66 * t277;
  t664 = t129 * t354;
  t683 = 0.8e1 * t143 * t522;
  t701 = 0.8e1 * t149 * t522;
  t716 = -0.28e2 / 0.81e2 * t509 * t61 * t239 + 0.4e1 / 0.9e1 * t326 * t46 * t103 + 0.8e1 / 0.9e1 * t238 * t1 * t100 * t96 - 0.2e1 / 0.3e1 * t95 * t100 * t46 - 0.2e1 / 0.3e1 * t329 * t100 * t103 + t683 - 0.28e2 / 0.81e2 * t530 * t63 * t255 + 0.4e1 / 0.9e1 * t339 * t49 * t111 - 0.8e1 / 0.9e1 * t254 * t1 * t100 * t108 + 0.2e1 / 0.3e1 * t107 * t100 * t49 + 0.2e1 / 0.3e1 * t342 * t100 * t111 - t701 + 0.2e1 * t329 * t246 * t46 - 0.2e1 * t342 * t246 * t49 - t140 * t249 / 0.9e1 - 0.4e1 * t42 * t246 - t146 * t261 / 0.9e1 + 0.4e1 * t48 * t246;
  t722 = t226 * t13 * t29 * t68;
  t725 = t183 * t29 * t68;
  t730 = t455 * t308 * t18 * t123 * t52;
  t732 = -t506 + 0.8e1 / 0.3e1 * t552 - 0.8e1 / 0.9e1 * t556 + t658 + 0.6e1 * t297 * t154 - 0.11684516736966672427e1 * t662 + 0.4e1 * t664 + t40 * t41 * t19 * t716 - 0.8e1 / 0.27e2 * t722 + 0.8e1 * t725 + 0.66200456987249472917e1 * t730 + t567;
  t738 = t583 * t314;
  t740 = t207 * t300;
  t742 = t207 * t304;
  t745 = t200 * t58 * t152;
  t746 = 0.83348676124639999996e1 * t745;
  t747 = 0.8e1 / 0.3e1 * t570 + t574 + t578 + 0.16669735224927999999e2 * t581 - 0.55565784083093333330e1 * t584 + 0.12502301418695999999e2 * t586 + 0.83348676124639999995e1 * t589 + t597 - t600 - 0.18521928027697777777e1 * t738 + 0.25004602837391999999e2 * t740 + 0.12502301418695999999e2 * t742 + t746;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t633 + t653 + t732 + t747;

  t749 = t201 * t158;
  t751 = t91 * t409;
  t757 = t455 * t158 * t26 * t124;
  t761 = t195 * t177 * t26 * t124;
  t763 = t293 * t365;
  t771 = t293 * t371;
  t783 = 0.83348676124639999996e1 * t749 + 0.41674338062319999998e1 * t751 + 0.83348676124639999996e1 * t602 + 0.41674338062319999998e1 * t604 + 0.22066818995749824305e1 * t757 + 0.11033409497874912153e1 * t761 + 0.32e2 / 0.3e1 * t763 + 0.8e1 * t618 * t365 + 0.4e1 * t133 * t34 * t66 * t352 + 0.16e2 / 0.3e1 * t771 + 0.4e1 * t133 * t34 * t409 * t52 + 0.2e1 * t133 * t34 * t177 * t114 + 0.32e2 / 0.9e1 * t612 + 0.32e2 / 0.3e1 * t614;
  t796 = 0.16e2 / 0.3e1 * t616 + 0.44133637991499648610e1 * t636 + 0.93476133895733379411e1 * t640 + 0.22066818995749824306e1 * t458 - t643 + 0.11033409497874912153e1 * t475 + 0.93476133895733379415e1 * t480 + 0.22226313633237333332e2 * t648 + 0.4e1 / 0.9e1 * t484 - 0.23369033473933344854e1 * t487 - t494 - t506 + 0.8e1 / 0.9e1 * t552 - 0.16e2 / 0.27e2 * t556 + 0.16e2 / 0.9e1 * t657;
  t803 = t72 * t29 * t160;
  t805 = t129 * t411;
  t820 = t1 * t1;
  t823 = 0.1e1 / t245 / t43;
  t862 = -0.28e2 / 0.81e2 * t509 * t164 * t96 + 0.32e2 / 0.27e2 * t326 * t46 * t1 * t100 + 0.4e1 / 0.27e2 * t385 * t103 - 0.8e1 / 0.9e1 * t95 * t820 * t823 - 0.4e1 / 0.9e1 * t140 * t100 + 0.4e1 / 0.3e1 * t140 * t247 + 0.4e1 / 0.27e2 * t238 * t168 * t96 - 0.2e1 / 0.9e1 * t95 * t395 * t46 - t390 * t103 / 0.9e1 + t683 - 0.28e2 / 0.81e2 * t530 * t171 * t108 - 0.32e2 / 0.27e2 * t339 * t49 * t1 * t100 + 0.4e1 / 0.27e2 * t398 * t111 - 0.8e1 / 0.9e1 * t107 * t820 * t823 + 0.4e1 / 0.9e1 * t146 * t100 - 0.4e1 / 0.3e1 * t146 * t247 + 0.4e1 / 0.27e2 * t254 * t174 * t108 - 0.2e1 / 0.9e1 * t107 * t406 * t49 - t403 * t111 / 0.9e1 - t701;
  t867 = t610 * t29 * t160;
  t869 = t152 * t152;
  t874 = t289 * t179;
  t879 = -0.23369033473933344853e1 * t662 + 0.8e1 / 0.3e1 * t664 - 0.16e2 / 0.27e2 * t722 + 0.16e2 / 0.3e1 * t725 + 0.16e2 / 0.3e1 * t803 + 0.8e1 / 0.3e1 * t805 + 0.2e1 * t38 * t114 * t29 * t160 + t40 * t41 * t19 * t862 + 0.8e1 / 0.9e1 * t867 + 0.4e1 * t85 * t41 * t19 * t869 + 0.4e1 / 0.9e1 * t874 + 0.2e1 * t297 * t179 + 0.88267275982999297221e1 * t730 + t567;
  t888 = t579 * t58 * t158;
  t890 = t207 * t364;
  t893 = t200 * t58 * t177;
  t895 = t207 * t370;
  t897 = t574 + t578 + 0.55565784083093333330e1 * t581 - 0.37043856055395555554e1 * t584 + 0.27782892041546666665e1 * t589 + t597 - t600 - 0.37043856055395555554e1 * t738 + 0.16669735224927999999e2 * t740 + 0.83348676124639999996e1 * t742 + 0.11113156816618666666e2 * t745 + 0.55565784083093333331e1 * t888 + 0.16669735224927999999e2 * t890 + 0.27782892041546666665e1 * t893 + 0.83348676124639999996e1 * t895;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t783 + t796 + t879 + t897;

  t899 = t421 * t58;
  t901 = t91 * t443;
  t911 = t293 * t448;
  t924 = 0.41674338062319999998e1 * t899 + 0.20837169031159999999e1 * t901 + 0.12502301418695999999e2 * t749 + 0.62511507093479999997e1 * t751 + 0.6e1 * t133 * t34 * t66 * t409 + 0.66200456987249472914e1 * t757 + 0.33100228493624736458e1 * t761 + 0.8e1 * t911 + 0.2e1 * t133 * t34 * t443 * t52 + 0.6e1 * t618 * t448 + 0.6e1 * t133 * t34 * t152 * t177 + 0.16e2 * t763;
  t930 = 0.8e1 * t771 + t613 + t637 + 0.14021420084360006912e2 * t640 - t463 + 0.46738066947866689707e1 * t480 + t649 - 0.11684516736966672427e1 * t487 - t494 - t506 - 0.8e1 / 0.27e2 * t556 + t658;
  t939 = t38 * t158 * t29;
  t960 = 0.12e2 * t246 + 0.24e2 * t523;
  t982 = -0.28e2 / 0.81e2 * t509 * t426 * t46 + 0.8e1 / 0.9e1 * t385 * t101 + 0.4e1 / 0.9e1 * t326 * t168 * t46 - 0.2e1 / 0.3e1 * t329 * t100 * t168 - t140 * t395 / 0.3e1 - t95 * t432 * t46 / 0.9e1 + t42 * t960 / 0.3e1 - 0.28e2 / 0.81e2 * t530 * t435 * t49 - 0.8e1 / 0.9e1 * t398 * t101 + 0.4e1 / 0.9e1 * t339 * t174 * t49 + 0.2e1 / 0.3e1 * t342 * t100 * t174 - t146 * t406 / 0.3e1 - t107 * t440 * t49 / 0.9e1 - t48 * t960 / 0.3e1;
  t986 = t129 * t445;
  t989 = -0.35053550210900017280e1 * t662 - 0.8e1 / 0.9e1 * t722 + 0.8e1 * t803 + 0.4e1 * t805 + 0.8e1 / 0.3e1 * t867 + 0.4e1 / 0.3e1 * t874 + 0.6e1 * t939 * t154 + t40 * t41 * t19 * t982 + 0.4e1 / 0.3e1 * t986 + 0.66200456987249472916e1 * t730 + t567 + t574;
  t992 = t21 * t421 * t29 * t233;
  t1000 = t207 * t447;
  t1002 = t578 + 0.8e1 / 0.3e1 * t992 - 0.18521928027697777777e1 * t584 + t597 - t600 - 0.55565784083093333331e1 * t738 + t746 + 0.16669735224927999999e2 * t888 + 0.25004602837391999998e2 * t890 + 0.83348676124639999996e1 * t893 + 0.12502301418695999999e2 * t895 + 0.12502301418695999999e2 * t1000;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t924 + t930 + t989 + t1002;

  t1019 = 0.16669735224927999999e2 * t899 + 0.83348676124639999996e1 * t901 + 0.8e1 * t133 * t34 * t443 * t66 + 0.13240091397449894583e2 * t757 + 0.66200456987249472916e1 * t761 + 0.32e2 * t911 - 0.3e-19 * t608 + 0.18695226779146675883e2 * t640 - t494 - t506 - 0.46738066947866689707e1 * t662 - 0.32e2 / 0.27e2 * t722 + 0.16e2 / 0.3e1 * t867 + 0.8e1 / 0.3e1 * t874;
  t1021 = t164 * t164;
  t1026 = t168 * t168;
  t1032 = 0.24e2 * t246 + 0.24e2 * t523;
  t1035 = t171 * t171;
  t1040 = t174 * t174;
  t1054 = t177 * t177;
  t1064 = 0.16e2 / 0.3e1 * t986 + t40 * t41 * t19 * (-0.28e2 / 0.81e2 * t509 * t1021 + 0.8e1 / 0.9e1 * t385 * t168 - t95 * t1026 / 0.3e1 - 0.4e1 / 0.9e1 * t140 * t432 + t42 * t1032 / 0.3e1 - 0.28e2 / 0.81e2 * t530 * t1035 + 0.8e1 / 0.9e1 * t398 * t174 - t107 * t1040 / 0.3e1 - 0.4e1 / 0.9e1 * t146 * t440 - t48 * t1032 / 0.3e1) + 0.12e2 * t939 * t179 + 0.6e1 * t85 * t41 * t19 * t1054 + t567 + t574 + t578 + 0.32e2 / 0.3e1 * t992 + t597 - t600 - 0.74087712110791111108e1 * t738 + 0.33339470449855999998e2 * t888 + 0.16669735224927999999e2 * t893 + 0.50009205674783999996e2 * t1000;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t1019 + t1064;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


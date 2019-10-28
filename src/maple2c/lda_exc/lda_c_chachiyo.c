/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_chachiyo.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


GPU_FUNCTION static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t5, t7, t8, t9, t13;
  double t14, t16, t17, t18, t22, t23;

#ifndef XC_DONT_COMPILE_VXC
  double t24, t33, t34;

#ifndef XC_DONT_COMPILE_FXC
  double t49, t52, t53, t54;

#ifndef XC_DONT_COMPILE_KXC
  double t57, t63, t74, t81, t83;

#ifndef XC_DONT_COMPILE_LXC
  double t96, t118, t122, t123;
#endif

#endif

#endif

#endif

#endif


  lda_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (lda_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bp * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = POW_1_3(rho[0]);
  t13 = params->bp * t1;
  t14 = t5 * t5;
  t16 = t7 * t7;
  t17 = 0.1e1 / t14 * t16;
  t18 = t9 * t9;
  t22 = 0.1e1 + t3 * t8 * t9 / 0.3e1 + t13 * t17 * t18 / 0.3e1;
  t23 = log(t22);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = params->ap * t23;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t24 = rho[0] * params->ap;
  t33 = t3 * t8 / t18 / 0.9e1 + 0.2e1 / 0.9e1 * t13 * t17 / t9;
  t34 = 0.1e1 / t22;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t24 * t33 * t34 + (params->ap * t23);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t49 = -0.2e1 / 0.27e2 * t3 * t8 / t18 / rho[0] - 0.2e1 / 0.27e2 * t13 * t17 / t9 / rho[0];
  t52 = t33 * t33;
  t53 = t22 * t22;
  t54 = 0.1e1 / t53;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t24 * t49 * t34 - t24 * t52 * t54 + 0.2e1 * params->ap * t33 * t34;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t57 = params->ap * t49;
  t63 = rho[0] * rho[0];
  t74 = 0.10e2 / 0.81e2 * t3 * t8 / t18 / t63 + 0.8e1 / 0.81e2 * t13 * t17 / t9 / t63;
  t81 = t52 * t33;
  t83 = 0.1e1 / t53 / t22;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.3e1 * t24 * t49 * t54 * t33 + t24 * t74 * t34 + 0.2e1 * t24 * t81 * t83 - 0.3e1 * params->ap * t52 * t54 + 0.3e1 * t57 * t34;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t96 = t63 * rho[0];
  t118 = t49 * t49;
  t122 = t52 * t52;
  t123 = t53 * t53;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.4e1 * params->ap * t74 * t34 - 0.12e2 * t57 * t54 * t33 + 0.8e1 * params->ap * t81 * t83 + t24 * (-0.80e2 / 0.243e3 * t3 * t8 / t18 / t96 - 0.56e2 / 0.243e3 * t13 * t17 / t9 / t96) * t34 - 0.4e1 * t24 * t74 * t54 * t33 + 0.12e2 * t24 * t49 * t83 * t52 - 0.3e1 * t24 * t118 * t54 - 0.6e1 * t24 * t122 / t123;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


GPU_FUNCTION static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t5, t7, t8, t9, t13;
  double t14, t16, t17, t18, t22, t23;

#ifndef XC_DONT_COMPILE_VXC
  double t24, t33, t34;

#ifndef XC_DONT_COMPILE_FXC
  double t49, t52, t53, t54;

#ifndef XC_DONT_COMPILE_KXC
  double t57, t63, t74, t81, t83;

#ifndef XC_DONT_COMPILE_LXC
  double t96, t118, t122, t123;
#endif

#endif

#endif

#endif

#endif


  lda_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (lda_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bf * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = POW_1_3(rho[0]);
  t13 = params->bf * t1;
  t14 = t5 * t5;
  t16 = t7 * t7;
  t17 = 0.1e1 / t14 * t16;
  t18 = t9 * t9;
  t22 = 0.1e1 + t3 * t8 * t9 / 0.3e1 + t13 * t17 * t18 / 0.3e1;
  t23 = log(t22);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = params->af * t23;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t24 = rho[0] * params->af;
  t33 = t3 * t8 / t18 / 0.9e1 + 0.2e1 / 0.9e1 * t13 * t17 / t9;
  t34 = 0.1e1 / t22;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t24 * t33 * t34 + (params->af * t23);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t49 = -0.2e1 / 0.27e2 * t3 * t8 / t18 / rho[0] - 0.2e1 / 0.27e2 * t13 * t17 / t9 / rho[0];
  t52 = t33 * t33;
  t53 = t22 * t22;
  t54 = 0.1e1 / t53;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t24 * t49 * t34 - t24 * t52 * t54 + 0.2e1 * params->af * t33 * t34;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t57 = params->af * t49;
  t63 = rho[0] * rho[0];
  t74 = 0.10e2 / 0.81e2 * t3 * t8 / t18 / t63 + 0.8e1 / 0.81e2 * t13 * t17 / t9 / t63;
  t81 = t52 * t33;
  t83 = 0.1e1 / t53 / t22;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.3e1 * t24 * t49 * t54 * t33 + t24 * t74 * t34 + 0.2e1 * t24 * t81 * t83 - 0.3e1 * params->af * t52 * t54 + 0.3e1 * t57 * t34;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t96 = t63 * rho[0];
  t118 = t49 * t49;
  t122 = t52 * t52;
  t123 = t53 * t53;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.4e1 * params->af * t74 * t34 - 0.12e2 * t57 * t54 * t33 + 0.8e1 * params->af * t81 * t83 + t24 * (-0.80e2 / 0.243e3 * t3 * t8 / t18 / t96 - 0.56e2 / 0.243e3 * t13 * t17 / t9 / t96) * t34 - 0.4e1 * t24 * t74 * t54 * t33 + 0.12e2 * t24 * t49 * t83 * t52 - 0.3e1 * t24 * t118 * t54 - 0.6e1 * t24 * t122 / t123;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


GPU_FUNCTION static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t5, t7, t8, t9, t10;
  double t11, t14, t15, t17, t18, t19, t20, t23;
  double t24, t25, t26, t29, t32, t33, t35, t36;
  double t37, t38, t39, t40, t42, t43, t45, t47;
  double t50, t51;

#ifndef XC_DONT_COMPILE_VXC
  double t53, t57, t60, t62, t63, t68, t70, t72;
  double t74, t75, t76, t77, t78, t80, t83, t85;
  double t88, t90, t93, t95;

#ifndef XC_DONT_COMPILE_FXC
  double t98, t99, t103, t107, t110, t111, t112, t113;
  double t115, t116, t117, t121, t122, t124, t126, t127;
  double t129, t131, t133, t134, t135, t136, t137, t140;
  double t141, t142, t144, t147, t148, t149, t152, t155;
  double t157, t161, t162, t165, t168, t171, t174, t176;
  double t180, t181, t185, t188, t191, t194, t196;

#ifndef XC_DONT_COMPILE_KXC
  double t199, t200, t201, t206, t211, t215, t216, t217;
  double t218, t219, t223, t224, t225, t231, t233, t239;
  double t242, t244, t246, t247, t249, t252, t253, t256;
  double t259, t260, t261, t263, t267, t268, t271, t274;
  double t277, t279, t283, t286, t288, t289, t290, t293;
  double t303, t306, t316, t318, t324, t325, t330, t335;
  double t338, t343, t346, t349, t351, t356, t358, t364;
  double t367, t372, t375, t377;

#ifndef XC_DONT_COMPILE_LXC
  double t380, t381, t382, t383, t389, t394, t399, t401;
  double t404, t405, t408, t409, t411, t414, t427, t431;
  double t433, t439, t441, t444, t447, t449, t451, t452;
  double t458, t464, t465, t467, t470, t472, t473, t479;
  double t494, t499, t501, t502, t504, t529, t547, t556;
  double t559, t573, t575, t586, t589, t628, t631, t640;
  double t659, t681, t684, t692, t697, t703, t706, t711;
#endif

#endif

#endif

#endif

#endif


  lda_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (lda_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bp * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = rho[0] + rho[1];
  t10 = POW_1_3(t9);
  t11 = t8 * t10;
  t14 = params->bp * t1;
  t15 = t5 * t5;
  t17 = t7 * t7;
  t18 = 0.1e1 / t15 * t17;
  t19 = t10 * t10;
  t20 = t18 * t19;
  t23 = 0.1e1 + t3 * t11 / 0.3e1 + t14 * t20 / 0.3e1;
  t24 = log(t23);
  t25 = params->ap * t24;
  t26 = params->bf * t2;
  t29 = params->bf * t1;
  t32 = 0.1e1 + t26 * t11 / 0.3e1 + t29 * t20 / 0.3e1;
  t33 = log(t32);
  t35 = params->af * t33 - t25;
  t36 = rho[0] - rho[1];
  t37 = 0.1e1 / t9;
  t38 = t36 * t37;
  t39 = 0.1e1 + t38;
  t40 = POW_1_3(t39);
  t42 = 0.1e1 - t38;
  t43 = POW_1_3(t42);
  t45 = t40 * t39 + t43 * t42 - 0.2e1;
  t47 = M_CBRT2;
  t50 = 0.1e1 / (0.2e1 * t47 - 0.2e1);
  t51 = t35 * t45 * t50;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t25 + t51;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t53 = t8 / t19;
  t57 = t18 / t10;
  t60 = t3 * t53 / 0.9e1 + 0.2e1 / 0.9e1 * t14 * t57;
  t62 = 0.1e1 / t23;
  t63 = params->ap * t60 * t62;
  t68 = t26 * t53 / 0.9e1 + 0.2e1 / 0.9e1 * t29 * t57;
  t70 = 0.1e1 / t32;
  t72 = params->af * t68 * t70 - t63;
  t74 = t72 * t45 * t50;
  t75 = t9 * t9;
  t76 = 0.1e1 / t75;
  t77 = t36 * t76;
  t78 = t37 - t77;
  t80 = -t78;
  t83 = 0.4e1 / 0.3e1 * t40 * t78 + 0.4e1 / 0.3e1 * t43 * t80;
  t85 = t35 * t83 * t50;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t25 + t51 + t9 * (t63 + t74 + t85);

  t88 = -t37 - t77;
  t90 = -t88;
  t93 = 0.4e1 / 0.3e1 * t40 * t88 + 0.4e1 / 0.3e1 * t43 * t90;
  t95 = t35 * t93 * t50;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t25 + t51 + t9 * (t63 + t74 + t95);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t98 = 0.2e1 * t63;
  t99 = 0.2e1 * t74;
  t103 = t8 / t19 / t9;
  t107 = t18 / t10 / t9;
  t110 = -0.2e1 / 0.27e2 * t3 * t103 - 0.2e1 / 0.27e2 * t14 * t107;
  t111 = params->ap * t110;
  t112 = t111 * t62;
  t113 = t60 * t60;
  t115 = t23 * t23;
  t116 = 0.1e1 / t115;
  t117 = params->ap * t113 * t116;
  t121 = -0.2e1 / 0.27e2 * t26 * t103 - 0.2e1 / 0.27e2 * t29 * t107;
  t122 = params->af * t121;
  t124 = t68 * t68;
  t126 = t32 * t32;
  t127 = 0.1e1 / t126;
  t129 = -params->af * t124 * t127 + t122 * t70 - t112 + t117;
  t131 = t129 * t45 * t50;
  t133 = t72 * t83 * t50;
  t134 = 0.2e1 * t133;
  t135 = t40 * t40;
  t136 = 0.1e1 / t135;
  t137 = t78 * t78;
  t140 = t75 * t9;
  t141 = 0.1e1 / t140;
  t142 = t36 * t141;
  t144 = -0.2e1 * t76 + 0.2e1 * t142;
  t147 = t43 * t43;
  t148 = 0.1e1 / t147;
  t149 = t80 * t80;
  t152 = -t144;
  t155 = 0.4e1 / 0.9e1 * t136 * t137 + 0.4e1 / 0.3e1 * t40 * t144 + 0.4e1 / 0.9e1 * t148 * t149 + 0.4e1 / 0.3e1 * t43 * t152;
  t157 = t35 * t155 * t50;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t98 + t99 + 0.2e1 * t85 + t9 * (t112 - t117 + t131 + t134 + t157);

  t161 = t72 * t93 * t50;
  t162 = t136 * t88;
  t165 = t40 * t36;
  t168 = t148 * t90;
  t171 = t43 * t36;
  t174 = 0.4e1 / 0.9e1 * t162 * t78 + 0.8e1 / 0.3e1 * t165 * t141 + 0.4e1 / 0.9e1 * t168 * t80 - 0.8e1 / 0.3e1 * t171 * t141;
  t176 = t35 * t174 * t50;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t98 + t99 + t85 + t95 + t9 * (t112 - t117 + t131 + t133 + t161 + t176);

  t180 = 0.2e1 * t161;
  t181 = t88 * t88;
  t185 = 0.2e1 * t76 + 0.2e1 * t142;
  t188 = t90 * t90;
  t191 = -t185;
  t194 = 0.4e1 / 0.9e1 * t136 * t181 + 0.4e1 / 0.3e1 * t40 * t185 + 0.4e1 / 0.9e1 * t148 * t188 + 0.4e1 / 0.3e1 * t43 * t191;
  t196 = t35 * t194 * t50;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t98 + t99 + 0.2e1 * t95 + t9 * (t112 - t117 + t131 + t180 + t196);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t199 = 0.3e1 * t112;
  t200 = 0.3e1 * t117;
  t201 = 0.3e1 * t131;
  t206 = t8 / t19 / t75;
  t211 = t18 / t10 / t75;
  t215 = params->ap * (0.10e2 / 0.81e2 * t3 * t206 + 0.8e1 / 0.81e2 * t14 * t211);
  t216 = t215 * t62;
  t217 = t116 * t60;
  t218 = t111 * t217;
  t219 = 0.3e1 * t218;
  t223 = 0.1e1 / t115 / t23;
  t224 = params->ap * t113 * t60 * t223;
  t225 = 0.2e1 * t224;
  t231 = params->af * (0.10e2 / 0.81e2 * t26 * t206 + 0.8e1 / 0.81e2 * t29 * t211);
  t233 = t127 * t68;
  t239 = 0.1e1 / t126 / t32;
  t242 = 0.2e1 * params->af * t124 * t68 * t239 - 0.3e1 * t122 * t233 + t231 * t70 - t216 + t219 - t225;
  t244 = t242 * t45 * t50;
  t246 = t129 * t83 * t50;
  t247 = 0.3e1 * t246;
  t249 = t72 * t155 * t50;
  t252 = 0.1e1 / t135 / t39;
  t253 = t137 * t78;
  t256 = t136 * t78;
  t259 = t75 * t75;
  t260 = 0.1e1 / t259;
  t261 = t36 * t260;
  t263 = 0.6e1 * t141 - 0.6e1 * t261;
  t267 = 0.1e1 / t147 / t42;
  t268 = t149 * t80;
  t271 = t148 * t80;
  t274 = -t263;
  t277 = -0.8e1 / 0.27e2 * t252 * t253 + 0.4e1 / 0.3e1 * t256 * t144 + 0.4e1 / 0.3e1 * t40 * t263 - 0.8e1 / 0.27e2 * t267 * t268 + 0.4e1 / 0.3e1 * t271 * t152 + 0.4e1 / 0.3e1 * t43 * t274;
  t279 = t35 * t277 * t50;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t199 - t200 + t201 + 0.6e1 * t133 + 0.3e1 * t157 + t9 * (t216 - t219 + t225 + t244 + t247 + 0.3e1 * t249 + t279);

  t283 = 0.2e1 * t176;
  t286 = t129 * t93 * t50;
  t288 = t72 * t174 * t50;
  t289 = 0.2e1 * t288;
  t290 = t252 * t88;
  t293 = t136 * t36;
  t303 = t267 * t90;
  t306 = t148 * t36;
  t316 = -0.8e1 / 0.27e2 * t290 * t137 + 0.16e2 / 0.9e1 * t293 * t141 * t78 + 0.4e1 / 0.9e1 * t162 * t144 + 0.8e1 / 0.3e1 * t40 * t141 - 0.8e1 * t165 * t260 - 0.8e1 / 0.27e2 * t303 * t149 - 0.16e2 / 0.9e1 * t306 * t141 * t80 + 0.4e1 / 0.9e1 * t168 * t152 - 0.8e1 / 0.3e1 * t43 * t141 + 0.8e1 * t171 * t260;
  t318 = t35 * t316 * t50;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t199 - t200 + t201 + 0.4e1 * t133 + t157 + t180 + t283 + t9 * (t216 - t219 + t225 + t244 + 0.2e1 * t246 + t249 + t286 + t289 + t318);

  t324 = t72 * t194 * t50;
  t325 = t252 * t181;
  t330 = t136 * t185;
  t335 = -0.2e1 * t141 - 0.6e1 * t261;
  t338 = t267 * t188;
  t343 = t148 * t191;
  t346 = -t335;
  t349 = -0.8e1 / 0.27e2 * t325 * t78 + 0.16e2 / 0.9e1 * t162 * t142 + 0.4e1 / 0.9e1 * t330 * t78 + 0.4e1 / 0.3e1 * t40 * t335 - 0.8e1 / 0.27e2 * t338 * t80 - 0.16e2 / 0.9e1 * t168 * t142 + 0.4e1 / 0.9e1 * t343 * t80 + 0.4e1 / 0.3e1 * t43 * t346;
  t351 = t35 * t349 * t50;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t199 - t200 + t201 + t134 + 0.4e1 * t161 + t283 + t196 + t9 * (t216 - t219 + t225 + t244 + t246 + 0.2e1 * t286 + t289 + t324 + t351);

  t356 = 0.3e1 * t286;
  t358 = t181 * t88;
  t364 = -0.6e1 * t141 - 0.6e1 * t261;
  t367 = t188 * t90;
  t372 = -t364;
  t375 = -0.8e1 / 0.27e2 * t252 * t358 + 0.4e1 / 0.3e1 * t162 * t185 + 0.4e1 / 0.3e1 * t40 * t364 - 0.8e1 / 0.27e2 * t267 * t367 + 0.4e1 / 0.3e1 * t168 * t191 + 0.4e1 / 0.3e1 * t43 * t372;
  t377 = t35 * t375 * t50;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = t199 - t200 + t201 + 0.6e1 * t161 + 0.3e1 * t196 + t9 * (t216 - t219 + t225 + t244 + t356 + 0.3e1 * t324 + t377);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t380 = 0.4e1 * t216;
  t381 = 0.12e2 * t218;
  t382 = 0.8e1 * t224;
  t383 = 0.4e1 * t244;
  t389 = t8 / t19 / t140;
  t394 = t18 / t10 / t140;
  t399 = params->ap * (-0.80e2 / 0.243e3 * t3 * t389 - 0.56e2 / 0.243e3 * t14 * t394) * t62;
  t401 = 0.4e1 * t215 * t217;
  t404 = 0.12e2 * t111 * t223 * t113;
  t405 = t110 * t110;
  t408 = 0.3e1 * params->ap * t405 * t116;
  t409 = t113 * t113;
  t411 = t115 * t115;
  t414 = 0.6e1 * params->ap * t409 / t411;
  t427 = t121 * t121;
  t431 = t124 * t124;
  t433 = t126 * t126;
  t439 = (params->af * (-0.80e2 / 0.243e3 * t26 * t389 - 0.56e2 / 0.243e3 * t29 * t394) * t70 - 0.4e1 * t231 * t233 + 0.12e2 * t122 * t239 * t124 - 0.3e1 * params->af * t427 * t127 - 0.6e1 * params->af * t431 / t433 - t399 + t401 - t404 + t408 + t414) * t45 * t50;
  t441 = t242 * t83 * t50;
  t444 = t129 * t155 * t50;
  t447 = t72 * t277 * t50;
  t449 = t39 * t39;
  t451 = 0.1e1 / t135 / t449;
  t452 = t137 * t137;
  t458 = t144 * t144;
  t464 = 0.1e1 / t259 / t9;
  t465 = t36 * t464;
  t467 = -0.24e2 * t260 + 0.24e2 * t465;
  t470 = t42 * t42;
  t472 = 0.1e1 / t147 / t470;
  t473 = t149 * t149;
  t479 = t152 * t152;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t380 - t381 + t382 + t383 + 0.12e2 * t246 + 0.12e2 * t249 + 0.4e1 * t279 + t9 * (t399 - t401 + t404 - t408 - t414 + t439 + 0.4e1 * t441 + 0.6e1 * t444 + 0.4e1 * t447 + t35 * (0.40e2 / 0.81e2 * t451 * t452 - 0.16e2 / 0.9e1 * t252 * t137 * t144 + 0.4e1 / 0.3e1 * t136 * t458 + 0.16e2 / 0.9e1 * t256 * t263 + 0.4e1 / 0.3e1 * t40 * t467 + 0.40e2 / 0.81e2 * t472 * t473 - 0.16e2 / 0.9e1 * t267 * t149 * t152 + 0.4e1 / 0.3e1 * t148 * t479 + 0.16e2 / 0.9e1 * t271 * t274 - 0.4e1 / 0.3e1 * t43 * t467) * t50);

  t494 = 0.6e1 * t288;
  t499 = t242 * t93 * t50;
  t501 = t129 * t174 * t50;
  t502 = 0.3e1 * t501;
  t504 = t72 * t316 * t50;
  t529 = 0.32e2 * t165 * t464;
  t547 = 0.32e2 * t171 * t464;
  t556 = -0.8e1 * t293 * t260 * t78 + 0.8e1 * t306 * t260 * t80 + 0.40e2 / 0.81e2 * t451 * t88 * t253 - 0.8e1 / 0.9e1 * t290 * t78 * t144 - 0.16e2 / 0.9e1 * t252 * t36 * t141 * t137 + 0.8e1 / 0.3e1 * t136 * t141 * t78 + 0.8e1 / 0.3e1 * t293 * t141 * t144 + t529 + 0.40e2 / 0.81e2 * t472 * t90 * t268 - 0.8e1 / 0.9e1 * t303 * t80 * t152 + 0.16e2 / 0.9e1 * t267 * t36 * t141 * t149 - 0.8e1 / 0.3e1 * t148 * t141 * t80 - 0.8e1 / 0.3e1 * t306 * t141 * t152 - t547 + 0.4e1 / 0.9e1 * t162 * t263 - 0.16e2 * t40 * t260 + 0.4e1 / 0.9e1 * t168 * t274 + 0.16e2 * t43 * t260;
  t559 = t35 * t556 * t50 + t399 - t401 + t404 - t408 - t414 + t439 + 0.3e1 * t441 + 0.3e1 * t444 + t447 + t499 + t502 + 0.3e1 * t504;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t9 * t559 + 0.9e1 * t246 + 0.6e1 * t249 + t279 + 0.3e1 * t318 + t356 + t380 - t381 + t382 + t383 + t494;

  t573 = t129 * t194 * t50;
  t575 = t72 * t349 * t50;
  t586 = t36 * t36;
  t589 = 0.1e1 / t259 / t75;
  t628 = 0.40e2 / 0.81e2 * t451 * t181 * t137 - 0.64e2 / 0.27e2 * t290 * t78 * t36 * t141 - 0.8e1 / 0.27e2 * t325 * t144 + 0.32e2 / 0.9e1 * t136 * t586 * t589 + 0.16e2 / 0.9e1 * t162 * t141 - 0.16e2 / 0.3e1 * t162 * t261 - 0.8e1 / 0.27e2 * t252 * t185 * t137 + 0.8e1 / 0.9e1 * t136 * t335 * t78 + 0.4e1 / 0.9e1 * t330 * t144 + t529 + 0.40e2 / 0.81e2 * t472 * t188 * t149 + 0.64e2 / 0.27e2 * t303 * t80 * t36 * t141 - 0.8e1 / 0.27e2 * t338 * t152 + 0.32e2 / 0.9e1 * t148 * t586 * t589 - 0.16e2 / 0.9e1 * t168 * t141 + 0.16e2 / 0.3e1 * t168 * t261 - 0.8e1 / 0.27e2 * t267 * t191 * t149 + 0.8e1 / 0.9e1 * t148 * t346 * t80 + 0.4e1 / 0.9e1 * t343 * t152 - t547;
  t631 = t35 * t628 * t50 + t399 - t401 + t404 - t408 - t414 + t439 + 0.2e1 * t441 + t444 + 0.2e1 * t499 + 0.4e1 * t501 + 0.2e1 * t504 + t573 + 0.2e1 * t575;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t9 * t631 + 0.6e1 * t246 + 0.2e1 * t249 + 0.6e1 * t286 + 0.8e1 * t288 + 0.2e1 * t318 + 0.2e1 * t324 + 0.2e1 * t351 + t380 - t381 + t382 + t383;

  t640 = t72 * t375 * t50;
  t659 = 0.12e2 * t260 + 0.24e2 * t465;
  t681 = 0.40e2 / 0.81e2 * t451 * t358 * t78 - 0.16e2 / 0.9e1 * t325 * t142 - 0.8e1 / 0.9e1 * t290 * t185 * t78 + 0.8e1 / 0.3e1 * t293 * t141 * t185 + 0.4e1 / 0.3e1 * t162 * t335 + 0.4e1 / 0.9e1 * t136 * t364 * t78 + 0.4e1 / 0.3e1 * t40 * t659 + 0.40e2 / 0.81e2 * t472 * t367 * t80 + 0.16e2 / 0.9e1 * t338 * t142 - 0.8e1 / 0.9e1 * t303 * t191 * t80 - 0.8e1 / 0.3e1 * t306 * t141 * t191 + 0.4e1 / 0.3e1 * t168 * t346 + 0.4e1 / 0.9e1 * t148 * t372 * t80 - 0.4e1 / 0.3e1 * t43 * t659;
  t684 = t35 * t681 * t50 + t399 - t401 + t404 - t408 - t414 + t439 + t441 + 0.3e1 * t499 + t502 + 0.3e1 * t573 + 0.3e1 * t575 + t640;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t9 * t684 + t247 + 0.9e1 * t286 + 0.6e1 * t324 + 0.3e1 * t351 + t377 + t380 - t381 + t382 + t383 + t494;

  t692 = t181 * t181;
  t697 = t185 * t185;
  t703 = 0.24e2 * t260 + 0.24e2 * t465;
  t706 = t188 * t188;
  t711 = t191 * t191;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t380 - t381 + t382 + t383 + 0.12e2 * t286 + 0.12e2 * t324 + 0.4e1 * t377 + t9 * (t399 - t401 + t404 - t408 - t414 + t439 + 0.4e1 * t499 + 0.6e1 * t573 + 0.4e1 * t640 + t35 * (0.40e2 / 0.81e2 * t451 * t692 - 0.16e2 / 0.9e1 * t325 * t185 + 0.4e1 / 0.3e1 * t136 * t697 + 0.16e2 / 0.9e1 * t162 * t364 + 0.4e1 / 0.3e1 * t40 * t703 + 0.40e2 / 0.81e2 * t472 * t706 - 0.16e2 / 0.9e1 * t338 * t191 + 0.4e1 / 0.3e1 * t148 * t711 + 0.16e2 / 0.9e1 * t168 * t372 - 0.4e1 / 0.3e1 * t43 * t703) * t50);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


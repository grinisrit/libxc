/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_lp96.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t4, t6;

#ifndef XC_DONT_COMPILE_VXC
  double t9, t13;

#ifndef XC_DONT_COMPILE_FXC
  double t19, t22, t26;

#ifndef XC_DONT_COMPILE_KXC
  double t32, t35, t39;

#ifndef XC_DONT_COMPILE_LXC
  double t45;
#endif

#endif

#endif

#endif

#endif


  lda_c_lp96_params *params;

  assert(p->params != NULL);
  params = (lda_c_lp96_params * )(p->params);

  t1 = POW_1_3(rho[0]);
  t3 = params->C2 / t1;
  t4 = t1 * t1;
  t6 = params->C3 / t4;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = params->C1 + t3 + t6;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t9 = params->C2 / t1 / rho[0];
  t13 = params->C3 / t4 / rho[0];
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = params->C1 + t3 + t6 + rho[0] * (-t9 / 0.3e1 - 0.2e1 / 0.3e1 * t13);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t19 = rho[0] * rho[0];
  t22 = params->C2 / t1 / t19;
  t26 = params->C3 / t4 / t19;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 / 0.3e1 * t9 - 0.4e1 / 0.3e1 * t13 + rho[0] * (0.4e1 / 0.9e1 * t22 + 0.10e2 / 0.9e1 * t26);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t32 = t19 * rho[0];
  t35 = params->C2 / t1 / t32;
  t39 = params->C3 / t4 / t32;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.4e1 / 0.3e1 * t22 + 0.10e2 / 0.3e1 * t26 + rho[0] * (-0.28e2 / 0.27e2 * t35 - 0.80e2 / 0.27e2 * t39);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t45 = t19 * t19;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.112e3 / 0.27e2 * t35 - 0.320e3 / 0.27e2 * t39 + rho[0] * (0.280e3 / 0.81e2 * params->C2 / t1 / t45 + 0.880e3 / 0.81e2 * params->C3 / t4 / t45);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t4, t6;

#ifndef XC_DONT_COMPILE_VXC
  double t9, t13;

#ifndef XC_DONT_COMPILE_FXC
  double t19, t22, t26;

#ifndef XC_DONT_COMPILE_KXC
  double t32, t35, t39;

#ifndef XC_DONT_COMPILE_LXC
  double t45;
#endif

#endif

#endif

#endif

#endif


  lda_c_lp96_params *params;

  assert(p->params != NULL);
  params = (lda_c_lp96_params * )(p->params);

  t1 = POW_1_3(rho[0]);
  t3 = params->C2 / t1;
  t4 = t1 * t1;
  t6 = params->C3 / t4;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = params->C1 + t3 + t6;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t9 = params->C2 / t1 / rho[0];
  t13 = params->C3 / t4 / rho[0];
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = params->C1 + t3 + t6 + rho[0] * (-t9 / 0.3e1 - 0.2e1 / 0.3e1 * t13);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t19 = rho[0] * rho[0];
  t22 = params->C2 / t1 / t19;
  t26 = params->C3 / t4 / t19;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 / 0.3e1 * t9 - 0.4e1 / 0.3e1 * t13 + rho[0] * (0.4e1 / 0.9e1 * t22 + 0.10e2 / 0.9e1 * t26);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t32 = t19 * rho[0];
  t35 = params->C2 / t1 / t32;
  t39 = params->C3 / t4 / t32;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.4e1 / 0.3e1 * t22 + 0.10e2 / 0.3e1 * t26 + rho[0] * (-0.28e2 / 0.27e2 * t35 - 0.80e2 / 0.27e2 * t39);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t45 = t19 * t19;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.112e3 / 0.27e2 * t35 - 0.320e3 / 0.27e2 * t39 + rho[0] * (0.280e3 / 0.81e2 * params->C2 / t1 / t45 + 0.880e3 / 0.81e2 * params->C3 / t4 / t45);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t4, t5, t7;

#ifndef XC_DONT_COMPILE_VXC
  double t10, t14;

#ifndef XC_DONT_COMPILE_FXC
  double t20, t23, t27;

#ifndef XC_DONT_COMPILE_KXC
  double t33, t36, t40;

#ifndef XC_DONT_COMPILE_LXC
  double t46;
#endif

#endif

#endif

#endif

#endif


  lda_c_lp96_params *params;

  assert(p->params != NULL);
  params = (lda_c_lp96_params * )(p->params);

  t1 = rho[0] + rho[1];
  t2 = POW_1_3(t1);
  t4 = params->C2 / t2;
  t5 = t2 * t2;
  t7 = params->C3 / t5;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = params->C1 + t4 + t7;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t10 = params->C2 / t2 / t1;
  t14 = params->C3 / t5 / t1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = params->C1 + t4 + t7 + t1 * (-t10 / 0.3e1 - 0.2e1 / 0.3e1 * t14);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t20 = t1 * t1;
  t23 = params->C2 / t2 / t20;
  t27 = params->C3 / t5 / t20;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 / 0.3e1 * t10 - 0.4e1 / 0.3e1 * t14 + t1 * (0.4e1 / 0.9e1 * t23 + 0.10e2 / 0.9e1 * t27);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t33 = t20 * t1;
  t36 = params->C2 / t2 / t33;
  t40 = params->C3 / t5 / t33;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.4e1 / 0.3e1 * t23 + 0.10e2 / 0.3e1 * t27 + t1 * (-0.28e2 / 0.27e2 * t36 - 0.80e2 / 0.27e2 * t40);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t46 = t20 * t20;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.112e3 / 0.27e2 * t36 - 0.320e3 / 0.27e2 * t40 + t1 * (0.280e3 / 0.81e2 * params->C2 / t2 / t46 + 0.880e3 / 0.81e2 * params->C3 / t5 / t46);

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = v4rho4[0];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = v4rho4[1];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = v4rho4[2];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = v4rho4[3];

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


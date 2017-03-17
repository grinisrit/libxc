/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
  
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
  
 You should have received a copy of the GNU Lesser General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "util.h"

#define XC_GGA_XC_TH3          156 /* Tozer and Handy v. 3 */
#define XC_GGA_XC_TH4          157 /* Tozer and Handy v. 4 */

typedef struct{
  FLOAT *omega;
} gga_xc_th3_params;


/* parameters for TH3 */
static FLOAT omega_TH3[] = 
  {-0.142542e+00, -0.783603e+00, -0.188875e+00, +0.426830e-01, -0.304953e+00, +0.430407e+00, 
   -0.997699e-01, +0.355789e-02, -0.344374e-01, +0.192108e-01, -0.230906e-02, +0.235189e-01, 
   -0.331157e-01, +0.121316e-01, +0.441190e+00, -0.227167e+01, +0.403051e+01, -0.228074e+01,
   +0.360204e-01};

/* parameters for TH4 */
static FLOAT omega_TH4[] = 
  {+0.677353e-01, -0.106763e+01, -0.419018e-01, +0.226313e-01, -0.222478e+00, +0.283432e+00,
   -0.165089e-01, -0.167204e-01, -0.332362e-01, +0.162254e-01, -0.984119e-03, +0.376713e-01,
   -0.653419e-01, +0.222835e-01, +0.375782e+00, -0.190675e+01, +0.322494e+01, -0.168698e+01,
   -0.235810e-01};


static void 
gga_xc_th3_init(XC(func_type) *p)
{
  gga_xc_th3_params *params;

  assert(p->params == NULL);
  p->params = malloc(sizeof(gga_xc_th3_params));
  params = (gga_xc_th3_params *)p->params;

  switch(p->info->number){
  case XC_GGA_XC_TH3:
    params->omega = omega_TH3;
    break;

  case XC_GGA_XC_TH4:
    params->omega = omega_TH4;
    break;

  default:
    fprintf(stderr, "Internal error in gga_xc_th3\n");
    exit(1);
  }
}

#include "maple2c/gga_xc_th3.c"

#define func maple2c_func
#include "work_gga_c.c"

const XC(func_info_type) XC(func_info_gga_xc_th3) = {
  XC_GGA_XC_TH3,
  XC_EXCHANGE_CORRELATION,
  "Tozer and Handy v. 3",
  XC_FAMILY_GGA,
  {&xc_ref_Handy1998_707, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  gga_xc_th3_init, NULL, 
  NULL, work_gga_c, NULL
};

const XC(func_info_type) XC(func_info_gga_xc_th4) = {
  XC_GGA_XC_TH4,
  XC_EXCHANGE_CORRELATION,
  "Tozer and Handy v. 4",
  XC_FAMILY_GGA,
  {&xc_ref_Handy1998_707, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  gga_xc_th3_init, NULL, 
  NULL, work_gga_c, NULL
};
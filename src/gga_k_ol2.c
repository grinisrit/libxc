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

#define XC_GGA_K_OL2          513 /* Ou-Yang and Levy v.2 */
#define XC_GGA_X_OL2          183 /* Exchange form based on Ou-Yang and Levy v.2 */

typedef struct{
  FLOAT aa, bb, cc;
} gga_k_ol2_params;

static void 
gga_k_ol2_init(XC(func_type) *p)
{
  gga_k_ol2_params *params;

  assert(p!=NULL && p->params == NULL);
  p->params = malloc(sizeof(gga_k_ol2_params));
  params = (gga_k_ol2_params *) (p->params);

  switch(p->info->number){
  case XC_GGA_K_OL2:
    params->aa = 1.0;
    params->bb = 1.0/K_FACTOR_C;
    params->cc = 0.00887/K_FACTOR_C;
    break;
  case XC_GGA_X_OL2:
    params->aa = M_CBRT2*0.07064/X_FACTOR_C;
    params->bb = M_CBRT2*0.07064/X_FACTOR_C;
    params->cc = M_CBRT2*M_CBRT2*0.07064*34.0135/X_FACTOR_C;
    break;
  }
}

#include "maple2c/gga_k_ol2.c"

#define func maple2c_func
#include "work_gga_x.c"

const XC(func_info_type) XC(func_info_gga_x_ol2) = {
  XC_GGA_X_OL2,
  XC_EXCHANGE,
  "Exchange form based on Ou-Yang and Levy v.2",
  XC_FAMILY_GGA,
  {&xc_ref_Fuentealba1995_31, &xc_ref_OuYang1991_379, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  gga_k_ol2_init, NULL, 
  NULL, work_gga_x, NULL
};


#define XC_KINETIC_FUNCTIONAL
#include "work_gga_x.c"

const XC(func_info_type) XC(func_info_gga_k_ol2) = {
  XC_GGA_K_OL2,
  XC_KINETIC,
  "Ou-Yang and Levy v.2",
  XC_FAMILY_GGA,
  {&xc_ref_OuYang1991_379, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  gga_k_ol2_init, NULL, 
  NULL, work_gga_k, NULL
};

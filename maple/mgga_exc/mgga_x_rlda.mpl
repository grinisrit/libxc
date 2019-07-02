(*
 Copyright (C) 2017 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*)

(* type: mgga_exc *)
(* prefix:
  mgga_x_rlda_params *params;

  assert(p->params != NULL);
  params = (mgga_x_rlda_params * )(p->params);
*)

rlda_a1 := (5/4) * 3*Pi*params_a_prefactor/X_FACTOR_C:

rlda_f := (x, u, t) -> my_piecewise3(2*t - u/4 > 1e-10, 
  rlda_a1/(2*t - u/4), 0):

f := (rs, z, xt, xs0, xs1, u0, u1, t0, t1) ->
  mgga_exchange(rlda_f, rs, z, xs0, xs1, u0, u1, t0, t1):

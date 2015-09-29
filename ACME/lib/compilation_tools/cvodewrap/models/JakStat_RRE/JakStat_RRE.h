#ifndef _MY_JakStat_RRE
#define _MY_JakStat_RRE

#include <cvodes/cvodes.h>
#include <cvodes/cvodes_band.h>
#include <cvodes/cvodes_bandpre.h>
#include <cvodes/cvodes_dense.h>
#include <cvodes/cvodes_sparse.h>
#include <cvodes/cvodes_diag.h>
#include <cvodes/cvodes_spbcgs.h>
#include <cvodes/cvodes_spgmr.h>
#include <cvodes/cvodes_sptfqmr.h>
#include <nvector/nvector_serial.h>
#include <sundials/sundials_types.h>
#include <sundials/sundials_math.h>
#include <udata.h>
#include <math.h>
#include <mex.h>

             void x0_JakStat_RRE(N_Vector x0, void *user_data);
             int J_JakStat_RRE(long int N, realtype t, N_Vector x,N_Vector fx, DlsMat J, void *user_data,N_Vector tmp1, N_Vector tmp2, N_Vector tmp3);
             int JSparse_JakStat_RRE(realtype t, N_Vector x,N_Vector fx, SlsMat J, void *user_data,N_Vector tmp1, N_Vector tmp2, N_Vector tmp3);
             int JBand_JakStat_RRE(long int N, long int mupper, long int mlower, realtype t, N_Vector x,N_Vector fx, DlsMat J, void *user_data,N_Vector tmp1, N_Vector tmp2, N_Vector tmp3);
             int JB_JakStat_RRE(long int NeqB,realtype t, N_Vector x, N_Vector xB, N_Vector fx, DlsMat J, void *user_data,N_Vector tmp1, N_Vector tmp2, N_Vector tmp3);
             int JSparseB_JakStat_RRE(realtype t, N_Vector x, N_Vector xB, N_Vector fx, SlsMat J, void *user_data,N_Vector tmp1, N_Vector tmp2, N_Vector tmp3);
             int JBBand_JakStat_RRE(long int N, long int mupper, long int mlower, realtype t, N_Vector x, N_Vector xB, N_Vector fx, DlsMat J, void *user_data,N_Vector tmp1, N_Vector tmp2, N_Vector tmp3);
             int Jv_JakStat_RRE(N_Vector v, N_Vector Jv, realtype t, N_Vector x, N_Vector xdot, void *user_data, N_Vector tmp);
             int JBv_JakStat_RRE(N_Vector v, N_Vector Jv, realtype t, N_Vector x, N_Vector xdot, void *user_data, N_Vector tmp);
             int sx_JakStat_RRE(int Ns, realtype t, N_Vector x, N_Vector xdot,int ip, N_Vector sx, N_Vector sxdot, void *user_data, N_Vector tmp1, N_Vector tmp2);
             void sx0_JakStat_RRE(int ip, N_Vector sx0, void *user_data);
             void y_JakStat_RRE(double t, int nt, int it, double *y, double *p, double *k, double *u, double *x);
             void dydp_JakStat_RRE(double t, int nt, int it, double *dydp, double *y, double *p, double *k, double *u, double *x, int *plist, int np, int ny);
             void dydx_JakStat_RRE(double t, double *dydx, double *y, double *p, double *k, double *x);
             void sy_JakStat_RRE(double t, int nt, int it, int ip, int np, int nx, int ny, double *sy, double *p, double *k, double *x, double *sx);
             double sroot_JakStat_RRE(double t, int ip, int ir, N_Vector x, N_Vector sx, void *user_data);
             double srootval_JakStat_RRE(double t, int ip, int ir, N_Vector x, N_Vector sx, void *user_data);
             double s2root_JakStat_RRE(double t, int ip, int jp, int ir, N_Vector x, N_Vector sx, void *user_data);
             double s2rootval_JakStat_RRE(double t, int ip, int jp, int ir, N_Vector x, N_Vector sx, void *user_data);


#endif /* _MY_JakStat_RRE */
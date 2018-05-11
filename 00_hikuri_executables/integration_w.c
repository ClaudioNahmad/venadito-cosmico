/***********************************************/
/* Claudio Nahmad			       */
/* Numerical Integration of an equation        */
/*                           of state w(a)     */
/*                                             */
/* Version 0.01: 2018-may-08                   */
/***********************************************/
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_integration.h>
 
#define LIMIT_SIZE 1000
 
/* 1. INTEGRANT ---------------------------------- */

/* w(a) */
int a_function(
           double a,
           double * a_trans,
           double * a_func) {

 *a_func = (1.- a / a)*(pba->a_trans / (1. - pba->a_trans));

  return _SUCCESS_DEFINING_wa_;
}


int background_w_fld(
                     double a,
                     double q = q_factor,			
                     double * w_fld,
               
                    ) {
  /** local variables */
  double * a_func;
 
  *w_fld = w0_fld + wa_fld * ((pow(a_func, q_factor)) / (1. + pow(a_func, q_factor)));
/**************************************************************************************************************************/
 
int main(void)
{
    int i, times, status;
    gsl_function f;
    gsl_integration_workspace *workspace;
    double a, b, ret, ret_abserr;
 
    /* set integration interval and integrant */
    a = 0.0;
    b = M_PI;
    f.function = &background_w_fld;
    f.params = 0;
 
    /* Define type of Interpolation */
    workspace = gsl_integration_workspace_alloc(LIMIT_SIZE);
 
    /* QAG adaptive integraion */
    gsl_integration_qag(&f, a, b, 1.0e-20, 1.0e-10, LIMIT_SIZE, GSL_INTEG_GAUSS41, workspace, &ret, &ret_abserr);
 
    /* print */
    printf("QAG (exact_abserr, returned abserr): %25.17e (%10.3e, %10.3e)\n", ret, fabs(ret - 2.0), ret_abserr);
 
    /* free */
    gsl_integration_workspace_free(workspace);
 
    return 0;
}

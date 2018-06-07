
/***********************************************/
#include <stdio.h>
#include <math.h>

/**int main(){ */
    
    /* set parameters */
/*    double a = 0.5;
    double b0_fld = -0.9;
    double b1_fld = 0.2;
    double b2_fld = -1.;
    double w_fld;
 
    w_fld = b2_fld + (b1_fld - 2.*b2_fld)*a + (b0_fld - b1_fld +b2_fld)*pow(a,2.);
*/
    /* print */
/*    printf("resultado %25.17e \n", w_fld);
 
    return 0;
}*/


int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);

    return 0;
}

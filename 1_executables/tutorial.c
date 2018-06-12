/***********************************************/




/****** SECTION 1: input/output ***************************************************************/


/*tutorial 1: OUTPUT*/
/*
#include <stdio.h>      //This is needed to run printf() function.
int main()
{
    printf("C Programming \n");  //displays the content inside quotation
    return 0;
}*/

/*tutorial 2: INTEGER OUTPUT*/
/*
#include <stdio.h>
int main()
{
    int testInteger = 5;
    printf("Number = %d \n", testInteger);
    return 0;
}*/

/*tutorial 3a: INTEGER INPUT/OUTPUT*/
/*
#include <stdio.h>
int main()
{
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d",&testInteger);  
    printf("Number = %d \n",testInteger);
    return 0;
}*/

/*tutorial 3b: FLOATS INPUT/OUTPUT (I/O)*/
/*
#include <stdio.h>
int main()
{
    float f;
    printf("Enter a number: ");
// %f format string is used in case of floats
    scanf("%f",&f);
    printf("Value = %f \n", f);
    return 0;
}*/

/*tutorial 4: CHARACTER I/O*/
/*
#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);     
    printf("You entered %c. \n",chr);  
    return 0;
} */

/*tutorial 5: CHAR TO ASCII*/
/*
#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);     

    // When %c text format is used, character is displayed in case of character types
    printf("You entered %c.\n",chr);  

    // When %d text format is used, integer is displayed in case of character types
    printf("ASCII value of %c is %d.\n", chr, chr);  
    return 0;
}*/

/*tutorial 6: ASCII TO CHAR*/
/*
#include <stdio.h>
int main()
{
    int chr = 15;
    printf("Character having ASCII value 69 is %c. \n",chr);
    return 0;
}  */

/*tutorial 7: SOME SYNTAX ON OUTPUT*/
/*
#include <stdio.h>
int main()
{

    int integer = 9876;
    float decimal = 987.6543;

    //  Prints the number right justified within 6 columns
    printf("4 digit integer right justified to 6 column: %6d\n", integer);

    // Tries to print number right justified to 3 digits but the number is not right adjusted because there are only 4 numbers
    printf("4 digit integer right justified to 3 column: %3d\n", integer);

    // Rounds to two digit places
    printf("Floating point number rounded to 2 digits: %.2f\n",decimal);

    // Rounds to 0 digit places
    printf("Floating point number rounded to 0 digits: %.f\n",decimal);

    // Prints the number in exponential notation(scientific notation)
    printf("Floating point number in exponential form: %e\n",decimal);
    return 0;
}   */

/****** SECTION 2: C-Operators ***************************************************************/

/*tutorial 8: Arithmetic Operators*/

#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    printf("a = %d \n",a);
    printf("b = %d \n",b);

    c = a+b;
    printf("a+b = %d \n",c);

    c = a-b;
    printf("a-b = %d \n",c);
    
    c = a*b;
    printf("a*b = %d \n",c);
    
    c=a/b;
    printf("a/b = %d \n",c);
    
    c=a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}


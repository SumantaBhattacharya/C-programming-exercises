// Online C compiler to run C program online

    // Write C code here

#include <stdio.h>


int main()
{
    float kilometre, centimetre, metre, feet , inches ;
    
    // Write C code here

    printf("please enter the length in kilometres :");
    scanf("%f",&kilometre);
    
  metre =kilometre * 100.0;
  feet = kilometre * 3280.84;
  centimetre = kilometre * 100000.0;
  inches= kilometre * 39370.1;
  
  
    printf ("The length meter:%f\n", metre);
    printf ("the length in feet is:%f\n",feet);
    printf ("the length in centimetre is:%f\n", centimetre);
    printf("the length in inches:%f\n",inches);
    
    return 0;
}
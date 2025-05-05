// Online C compiler to run C program online

#include <stdio.h>

int main() 
{
    // Write C code here
float principleamount, Time ,rateofinterest, simpleinterest,compoundinterest;

printf("Please Enter the principle amount:");
scanf("%f",&principleamount);
printf("Please Enter the time:");
scanf("%f",&Time);
printf("Please Enter the rate of interest:");
scanf("%f",&rateofinterest);

simpleinterest=(principleamount*Time*rateofinterest)/100;
//compoundinteres= principleamount(1+rateofinterest/100)noofyears
printf ("the result of your calculation is:%f\n", simpleinterest);

    return 0;
}
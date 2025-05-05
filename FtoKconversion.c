
// Online C compiler to run C program online
//algorithm for converting Fahrenheit to kelvin first step start second step input Fahrenheit 3rd step Kelvin equal to 5 x (f- 32) / 9 + 273 4th step print Kelvin fifth step end/
#include <stdio.h>

int main()
{
    float Fahrenheit ,Kelvin;
    printf("please enter the temperature in Fahrenheit:");
    scanf("%f",& Fahrenheit);
    Kelvin= 5*(Fahrenheit-32)/9+273;
    // Write C code here
    printf(" the temperature in kelvin is:%f\n", Kelvin);

    return 0;
}
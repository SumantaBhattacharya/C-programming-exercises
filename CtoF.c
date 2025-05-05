/*write an algorithm for converting celsius to fahrenheit step one start and step 2 input Celsius step 3 Fahrenheit is equal to 9C / 5 + 32 step 4 output Fahrenheit step 5 stop */

// Online C compiler to run C program online

#include <stdio.h>


int main() {
    // pre-defined reserved word - keyword-32
    float celsius, fahrenheit;
    
    // Write C code here

    printf("please enter the temperature in Celsius:");
    scanf("%f",&celsius);
    fahrenheit=(1.8*celsius )+32;
    printf ("The Temperature in fahrenheit:%f", fahrenheit);
    return 0;
}
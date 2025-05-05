/*write an algorithm for converting fahrenheit to celsius step one start and step 2 input fahrenheit step 3 celsius is equal to (Fahrenheit)*5/9 step 4 output celsius step 5 stop */


#include<stdio.h>
int main() {
    float celsius, fahrenheit;
    
    // Write C code here

    printf("please enter the temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    
    celsius=(fahrenheit-32)*5/9;
    printf ("temperature in degree celsius is:%f", celsius);
    return 0;
}
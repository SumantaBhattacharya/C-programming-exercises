// Online C  to run C program online

    // Write C code here

#include <stdio.h>


int main()
{
    float cm, km,m ;
    
    // Write C code here

    printf("please enter the in length in centimetre:");
    scanf("%f",&cm);
    
  m = cm / 100.0;
  km = cm/100000.0;
  
  
  
  
    printf ("The length in meter is:%f\n", m);
    printf ("the length in kilometre is:%f\n",km);
    
    
    return 0;
}
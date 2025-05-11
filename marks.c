//c compiler to run C program 
#include <stdio.h>

int main() {
    // Write C code here
int marks;

    printf("Please Enter your marks here:");
scanf ("%d",&marks);

if (marks>60 && marks<100)
{
    printf("you have succeeded to achieve first division");
    
}
else if (marks>=50 && marks<=60)
{
    printf("second division ");
    
}
else if (marks>=33 && marks<=50)
{
    printf("third division ");
}
else  if  (marks>=1 && marks<=33)
{
    printf("failed ");
}
  else {
  }
  
    return 0;
}
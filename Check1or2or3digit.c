// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() 
{
  int n;  
    // Write C code here
    printf("Enter Any Number :");
    scanf("%d",&n);
    
    if (n>=0 && n<=9)
    {
        printf("your number is a one digit number");
        
    }
    
     else if(n>=10 && n<=99)
    {
        printf("your number is a two digits number ");
    }
else if (n>=100 && n<=999)
{
printf("your number is three digits number");
}
else {
    printf("your number is more than three digit number");
}
    return 0;
}
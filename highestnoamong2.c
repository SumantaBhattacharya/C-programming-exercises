// Online C compiler to run C program online

#include <stdio.h>

int main()
{
    // Write C code here
int a,b;

    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
    printf("a is greater than b");
    }
    else if (b>a)
   {
  printf("b is greater than a");
   }
   
  else {
    
    printf ("a and b are equal");
}
    return 0;
}
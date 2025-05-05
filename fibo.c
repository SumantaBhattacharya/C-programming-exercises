#include<stdio.h>
int fib()
{
int a=1,b=0,c,n;
for(int i=3;i<=n;i++)
{
c=a+b;
    a=b;
    b=c;
printf("%d",c);
return c;
}
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
int result=fib(n);
printf("%d",result);
}

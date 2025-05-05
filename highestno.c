// Online C compiler to run C program online
#include<stdio.h>

void main()

{

int a,b,c;

printf("Enter the first values\n");
scanf("%d",&a);
printf("Enter the 2nd values\n");
scanf("%d",&b);
printf("Enter the third values\n");
scanf("%d",&c);

if(a>b && a>c)
{
printf("%d is big\n",a);
}
else if(b>a && b>c)
{
printf("%d is big\n",b);
}
else{
printf("%d is big\n",c);
}
return 0;


}
// Online C compiler to run C program online
#include <stdio.h>
int main ()
{
    int a,b,c;
    
    printf ("enter the three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    
    if ((a==b) && (b==c))
    {
    printf("Equilateral Triangle");  }
 else if ((a==b )||(a==c)|| (b==c))
   {
       printf("isosceles Traingle");
   }
   
    else {
    printf ("scaline Triangle:");
    
}
return 0;
}
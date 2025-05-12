// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int week ;
    
printf("Enter the week number:");
scanf("%d",&week);

switch (week)
{
case 1: 
printf ("Sunday");
break;
case 2: 
printf ("Monday");
break;
case 3: 
printf ("Tuesday");
break;
case 4: 
printf ("Wednesday");
break;
case 5: 
printf ("Thursday");
break;
case 6: 
printf ("Friday");
break;
case 7: 
printf ("Saturday");
break;

default: 
printf("invalid input! please enter the week between 1-7");
}

    return 0;
    
}
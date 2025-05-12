// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
int i;

    printf("Enter the input :\n");
    scanf("%d",&i);
   
   if(i == 1)
{
printf("Sunday");
}
 else  if(i == 2)
{
printf("Monday");
}
  else if(i == 3)
{
printf("Tuesday");
}
else if(i == 4)
{
printf("Wednesday");
}
  else if(i == 5)
{
printf("Thursday");
}
  else if(i == 6)
{
printf("Friday");
}
   else if (i == 7)
{
printf("Saturday");
}
   else 
{
printf("the day is not valid");
}



    return 0;
}
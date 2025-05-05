// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int age;
    printf("enter your age:");
    // Write C code here
    scanf("%d",&age);
if (age>=18 && age<=100)
{
    printf("you are eligible to vote");
}
 else if (age<=18){

    printf("you aren't eligible");
}
else{
    printf("you aren't eligible");
}
    return 0;
}
#include<stdio.h> 
void main()       
{
    int *j;
    {
        int i = 1000;
        j = &i;
    }
    printf("%d", *j);
}

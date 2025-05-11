// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
int a=40;
int *p;
p=&a;
printf("The memory address of p is:%p\n",&p);
    printf("The value of p is:%d",*p);

    return 0;
}
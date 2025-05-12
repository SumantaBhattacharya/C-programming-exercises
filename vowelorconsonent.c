// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
char ch;
printf("enter any character:");
scanf("%c",&ch);

 if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
 {
    printf("your character is vowel");
} else {
    printf ("your character is consonant ");
}
    return 0;
}
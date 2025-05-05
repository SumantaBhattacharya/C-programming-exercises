#include <stdio.h>
void main() {

    // What is the value of x in this C code

    // left to right
    int x = 4*5/2+9;// 20 / 2 + 9 = 10 + 9 = 19
     //  In C language, when you have operators of the same precedence (like *, /, and %), they have the same precedence level and evaluated from left to right — this is called associativity.
     //  But assignment (=) and some unary operators (like ++, --, sizeof) have right-to-left associativity.

    printf("%d", x);

}

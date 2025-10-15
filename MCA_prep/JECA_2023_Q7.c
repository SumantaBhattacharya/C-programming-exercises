// ## 7. What is the output of the following program ? 

#include <stdio.h> 
void main( ) 
{ 
 int i = -9; // In C, the order of evaluation of function arguments is unspecified (compiler-dependent). Different compilers can produce different results.
 printf(“%d %d %d”, i++, ++i, ++i); 
} 

// ++i → pre-increment (increments first, then returns new value).In C, the order of evaluation of function arguments is unspecified.i++, ++i, and ++i are all modifying i. But there is no sequence point between them. So the result depends on the order the compiler chooses to evaluate arguments.This means the program causes undefined behavior in C.
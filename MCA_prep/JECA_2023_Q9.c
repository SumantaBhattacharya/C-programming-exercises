// ## 9. What is the output of the following program ? 

#include <stdio.h> 
#include <stdlib.h> 
void main( ) 
{ 
 int *ptr; // calloc() is one of the functions used for dynamic memory allocation in C.
 ptr = (int*) calloc(3, sizeof(int)); // Allocates contiguous memory for 3 integers (12 bytes) and initializes all 3 elements to 0.
 ptr[2] = 30; // Sets the 3rd element (index 2) to 30. (ptr[0]=0, ptr[1]=0, ptr[2]=30)
 printf(“%d”, *ptr); // *ptr is equivalent to ptr[0].
 free(ptr); free(ptr); // Releases the allocated memory.
} 

// The calloc function initializes the allocated memory to zero. *ptr is the first element of this zero-initialized array, so it prints 0.
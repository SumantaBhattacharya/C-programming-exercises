// ## 4. What is the output of the following program ?

#include <stdio.h> 
void main( ) 
{ 
    // In C, any non-zero value is "truthy"
 int x = -1, y = 1, z = 0; 
 if(x && y++ && z) 
  ++x, y++, --z; 
 printf("%d, %d, %d", x++, y++, z++); 
} 

#include <stdio.h>
void main() {
    int a = 1, b= 2, c=3, d;

    //   3      3+2=5  3+5+3
    d = (a=c, b+=a, c=a+b+c);// last expression is assigned to d

    printf("%d %d %d %d", d, a, b, c);// , operation helps to execute multiple expressions in a sequence

    /*
      14. The continue statement cannot be used with
          A. for B. while C. do while D. Switch

          ans- D. Switch

      15. Switch statement accepts
         A. int
         B. char
         C. long
         D. All of the above

         ans - D. All of the above

      16. Which loop is guaranteed to execute at least one time
         A. for
         B. while
         C. do while
         D. None of the above

         ans- C. do while
        
    */

}

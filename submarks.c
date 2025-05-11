// Online C compiler to run C program online
#include <stdio.h>


int main() {
    int physics, chemistry, maths, english,hindi;
    
    
    printf ("Pleae Enter marks of 5 subjects:");
    scanf("%d %d%d%d%d",&physics, &chemistry, &maths,& english ,&hindi );

int add =physics+chemistry+maths+english+hindi;
printf ("the addition of the marks of 5 subject is: %d\n",add);
float avg= add/5.0;
printf ("the average marks of 5 subjects is : %f\n",avg);
float percentage= (add/500.0)*100;
printf ("The percentage out of 5 subjects is:%f\n", percentage);

    return 0;
}
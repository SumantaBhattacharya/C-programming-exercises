// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
int H1,H2,M1,M2,S1,S2,H,M,S;

 printf("Enter the time\n");
 scanf("%d%d%d",&H1,&M1,&S1);
    printf("Enter the time2\n");
 scanf("%d%d%d",&H2,&M2,&S2);

S=S1+S2;
if(S>=60)
{
    M=S/60;
    S=S%60;
}
M=M+M1+M2;
if (M>60)
{
    H=M%60;
    M=M%60;
}
H=H+H1+H2;
printf ("time1= \n");
printf ("%d hours: %d minutes: %d second\n",H1,M1,S1);
printf("Time2=\n");
printf("%d hours %d minutes %d seconds", H2,M2,S2);
printf("Addition results");
printf("%d hour's %d minutes %d seconds",H,M,S);
    return 0;
}
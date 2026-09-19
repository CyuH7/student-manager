#include<stdio.h>
int main()
{
    int A,B,C,D,SUM;
    scanf("%d",&A);
    B=A/100;
    C=(A-B*100)/10;
    D=A-(B*100+C*10);
    SUM=B+C+D;
    printf("%d %d %d\n%d",B,C,D,SUM);
    return 0;
}
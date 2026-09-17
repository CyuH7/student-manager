#include<stdio.h>
#include<math.h>
int main()
{
    float Xa,Ya,Xb,Yb,l;
    scanf("%f %f",&Xa,&Ya);
    scanf("%f %f",&Xb,&Yb);
    float A=(Xa-Xb);
    float B=(Ya-Yb);
    l=sqrt(A*A+B*B);
    printf("%.2f",l);
    return 0;
}
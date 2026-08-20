#include<stdio.h>

int main()
{
    int a;
    int b;

    printf("please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
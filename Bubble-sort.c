#include<stdio.h>
int main()
{
    int a[10]={5,2,8,1,9,3,7,4,6,0};
    int n=10,i,j,t;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
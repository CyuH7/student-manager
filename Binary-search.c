#include<stdio.h>
int binarySearch(int a[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    printf("%d\n",binarySearch(a,10,7));
    return 0;
}
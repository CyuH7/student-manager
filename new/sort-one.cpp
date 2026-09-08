#include<iostream>
#include<algorithm>
using namespace std;
void QuickSort(int *a,int first,int last){
    if(first >= last){
        return;
    }
    int i = first,j =last;
    int k =a[first];
    while(i != j){
        while(k <= a[j] && i < j){
            j--;
        }
        swap(a[i],a[j]);
        while(k > a[i] && i < j){
            i++;
        }
        swap(a[i],a[j]);
    }
    
    QuickSort(a,first,i);
    QuickSort(a,i+1,last);
}
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    QuickSort(a,0,n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}    
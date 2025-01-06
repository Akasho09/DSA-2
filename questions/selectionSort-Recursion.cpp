#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
if(n==0 || n==1) return ;
for (int i=1;i<n;i++){
    if(arr[0]>arr[i]){
        swap(arr[0],arr[i]);
    }
}
return selectionSort(arr+1,n-1);

}
int main(){
int arr[]={7,6,5,4,3,2,1};
int n=7;
selectionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
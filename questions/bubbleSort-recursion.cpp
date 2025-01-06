#include<iostream>
using namespace std;
void sort(int arr[],int n){
if(n==1 || n==0) return ;


for(int i=0;i<n-1;i++){
if(arr[i]>arr[i+1])
swap(arr[i],arr[i+1]);
}
  sort(arr,n-1);
}
int main(){
int arr[]={7,6,5,4,3,2,1};
int n=7;
 sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
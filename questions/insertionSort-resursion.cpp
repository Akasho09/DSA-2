#include<iostream>
using namespace std;
void insert(int arr[],int n,int i){
    if(i>n) return ;
     for(int j=i-1;j>=0;j-- ){
        if(arr[i]<arr[j]){
            swap(arr[j],arr[i]);
            i=j;
        }
     }
            return insert(arr,n,i+1);
}
int main(){
int arr[]={6,5,4,3,2,1};
int n=6;
int i=1;
insert(arr,n,i);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

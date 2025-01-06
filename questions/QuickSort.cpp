#include <iostream>
using namespace std;
int divide(int arr[],int low,int high){
int pivot=arr[low];
  int i=low;
  int j=high;
  while(i<j){
    while(i<=high && arr[i]<=pivot){
      i++;
    }
    while(j>=low && arr[j]>pivot){
      j--;
    }
    if(i<j){
      swap(arr[i],arr[j]);
    }
  }
      cout<<"arr[low] "<<arr[low]<<" arr[j] "<<arr[j]<<endl;
  swap(arr[low],arr[j]);
  return j;
}
void QS(int arr[],int low,int high){
  if(low<high){
    //Pindex=partition index
    int Pindex=divide(arr,low,high);
    QS(arr,0,Pindex-1);
    QS(arr,Pindex+1,high);
  } 
}
int main() {
  int arr[]={2,0,2,1,1,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  QS(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
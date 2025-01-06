#include <iostream>
using namespace std;
int main() {
int arr[]={2,1,5,4,6,0};
 for(int i=0;i<6;i++){
   
   for(int j=0;j<6-i;j++){
     if(arr[j]>arr[j+1])
       swap(arr[j],arr[j+1]);
   }
 }
  for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
  }
}
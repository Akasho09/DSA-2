#include <iostream>
#include <vector>
using namespace std;
int sumset(int arr[],int n,int i,int k,int sum){
if(i==n){
    if(sum==k)
     return 1;
    return 0;
}

      int l= sumset(arr,n,i+1,k,sum+=arr[i]);
     
      int r= sumset(arr,n,i+1,k,sum-=arr[i]);
return l+r;
}
int main(){
int arr[]={1,2,3};
int n=3;
int i=0;
int k=3;
cout<<sumset(arr,n,i,k,0);
}

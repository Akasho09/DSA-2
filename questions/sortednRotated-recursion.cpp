#include <iostream>
using namespace std;
int binary(int arr[],int s,int e,int k){
  if(s>e)
  return -1;
  int m=s+(s-e)/2;
  if (arr[m]==k)  
return m;
  if (arr[m]>k)
return binary(arr,s,m-1,k);
if (arr[m]<k)
return binary(arr,m+1,e,k);
return -1;
}
int pivot(int arr[],int n,int s,int e){
  if(s>e)
    return -1;
  int m=s+(e-s)/2;
  if(arr[m]>arr[m+1])
    return m;
  if(arr[m]<arr[m-1])
          return m-1;
  if(arr[m]<arr[n-1])
    return pivot(arr,n,s,m-1);
  if(arr[m]>=arr[0])
    return pivot(arr,n,m+1,e);
  return -1;
}
int main() {
  int arr[]={9,10,1,2,3,4,5};
  int n=7;
  int s=0,e=n-1;
  int k;
  cin>>k;
int ans= pivot(arr,n,s,e); 
   if(ans==-1 || arr[0]>k)
  cout<< binary(arr,ans+1,n-1,k);
  else
  cout<<binary(arr,0,ans,k);
}


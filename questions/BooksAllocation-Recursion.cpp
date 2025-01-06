#include<iostream>
using namespace std;
int books(int arr[],int time,int &stdcount,int ans,int size,int std){
  if(size==0 || stdcount>std) return stdcount;
   if(ans+arr[0]<=time){
    ans+=arr[0];
    return books(arr+1,time,stdcount,ans,size-1,std);
   } 
   else{
    stdcount++;
    ans=arr[0];
    return books(arr+1,time,stdcount,ans,size-1,std);
   }
}
int minTime(int arr[],int s,int e,int n,int std){
if(s>e) return s;
int mid =s+(e-s)/2;
int stdcount=1;
int ans=0;
 books(arr,mid,stdcount,ans,n,std);
  if(stdcount<=std){
    return minTime(arr,s,mid-1,n,std);
  }
    return minTime(arr,mid+1,e,n,std);
}
int main(){
int arr[]={1,2,2,3,1};
int n=5;
int std=3;
int min=*max_element(arr,arr+n);
int max=0;
for(int i=0;i<n;i++){
    max+=arr[i];
}
cout<<minTime(arr,min,max,n,std);
}
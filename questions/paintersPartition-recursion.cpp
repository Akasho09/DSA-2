#include<iostream>
using namespace std;
     int traverse(int arr[],int time,int size,int &p,int ans ,int k){
    if(size==0 || p>k) return p;
    if(ans+arr[0]<=time) {
      ans+=arr[0];
       return traverse(arr+1,time,size-1,p,ans,k);
    }
    else{
        ans=arr[0];
        p++;
       return traverse(arr+1,time,size-1,p,ans,k);
    }
    }
int minTime(int arr[],int s,int e,int k,int n ){
    if(s>e) return s;
    int mid=s+(e-s)/2;
    int p=1;
    int ans=0;
        traverse(arr,mid,n,p,ans,k);
     if(p<=k){
          return minTime(arr,s,mid-1,k,n);
     }
        return minTime(arr,mid+1,e,k,n);
     return 0;
}
int main() {
int arr[]={48,90};
int n=2;
int k=2;
int min = *max_element(arr,arr+n);
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
 cout<<minTime(arr,min,sum,k,n);
 return 0;
}
#include<iostream>
using namespace std;
int Cows(int arr[],int mid,int &cowscount,int cows,int lastposition,int size){
 if(size==0 || cowscount>cows) return cowscount;
// cout<<"arr[0] "<<arr[0]<<endl;
//cout<<"lastposition "<<lastposition<<endl;
//cout<<"cowscount "<<cowscount<<endl;

 if(arr[0]-lastposition>=mid){
 cowscount++;
 lastposition=arr[0];
 Cows(arr+1,mid,cowscount,cows,lastposition,size-1);
 }
 else 
 Cows(arr+1,mid,cowscount,cows,lastposition,size-1);
 return 0;
}
int minDistance(int arr[],int s,int e,int n,int cows,int ans){
if(s>e) return ans;
int mid=s+(e-s)/2;
  // cout<<"mid "<<mid<<endl;

int cowscount=1;
int lastposition=arr[0];
   Cows(arr+1,mid,cowscount,cows,lastposition,n-1);

if(cowscount>=cows){
     ans =mid;
    return minDistance(arr,mid+1,e,n,cows,ans);

}
    return minDistance(arr,s,mid-1,n,cows,ans);
}
int main(){
int arr[]={4,2 ,1, 3, 6};
int n=5;
int cows=2;
sort(arr,arr+n);
int min=1;
int max=arr[n-1]-arr[0];
//cout<<"max "<<max<<endl;
int ans=-1;
cout<<minDistance(arr,min,max,n,cows,ans);
}
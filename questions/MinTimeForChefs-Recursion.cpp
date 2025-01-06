#include<iostream>
using namespace std;
int chefs(int arr[],int mid,int &dishescount,int size,int d,int var,int ans){
if(size==0 || dishescount > d) return dishescount;
  if(ans+arr[0]*var<=mid){
    ans+=arr[0]*var;
    dishescount++;  var++;
  return chefs(arr,mid,dishescount,size,d,var,ans);
  }
  else return chefs(arr+1,mid,dishescount,size-1,d,1,0);
}
int minTime(int arr[],int size,int d,int s,int e,int &exacttime){
if(s>e) return exacttime;
int mid=s+(e-s)/2;
int dishescount=0;
int var=1;
int ans=0;
chefs(arr,mid,dishescount,size,d,var,ans);
if(dishescount>=d){
exacttime=mid;
return minTime(arr,size,d,s,mid-1,exacttime);
}
else return minTime(arr,size,d,mid+1,e,exacttime);
}
int main(){
  int arr[]={1,1,1,1,1,1,1,1};
  int n=8;
  int d=8;
  int exacttime=-1;
 long long int maxTime =0;
  for(int i=1;i<=d;i++){
     maxTime+=arr[n-1]*i;
  }
   cout<< minTime(arr,n,d,1,maxTime,exacttime);
}
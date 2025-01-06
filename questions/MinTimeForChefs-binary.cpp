#include <iostream>
using namespace std;
void linearsearch(int arr[],int n,int m,int e){
int time=0;
int s=1;
  while(s<=e){
    int mid=s+(e-s)/2;
    int ans=0;
    int var=1;
    int dishes=0;
    for(int j=0;j<n;){
      if(ans+arr[j]*var<=mid){
        ans+=arr[j]*var;
        var++;
        dishes++;
      }
      else{
        j++;
        var=1;
        ans=0;
      }
      }
        if(dishes>=m){ 
      time=mid;
      e=mid-1;
    }
    else s=mid+1;
  }
  cout<<time;
}
int main() {
int arr[]={1,2,3,4};
  int n=4;
  int m=10;
  int max=0;
  for(int i=1;i<=m;i++){
    max=max+i;
  }
  max=max*arr[n-1];
  linearsearch(arr,n,m,max);
}
#include <iostream>
using namespace std;
void linearsearch(int arr[],int n,int m,int max){
int time=0;
  for(int t=1;t<=max;t++){
    int ans=0;
    int var=1;
    int dishes=0;
    for(int j=0;j<n;){
      if(ans+arr[j]*var<=t){
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
      time=t;
      break;
    }
  }
  cout<<time;
}
int main() {
int arr[]={1,2,3,4};
  int n=4;
  int m=5;
  int max=0;
  for(int i=1;i<=m;i++){
    max=max+i;
  }
  max=max*arr[n-1];
//  cout<<max;
  linearsearch(arr,n,m,max);
}
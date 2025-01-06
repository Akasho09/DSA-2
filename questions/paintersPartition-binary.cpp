#include<iostream>
using namespace std;
bool painters(int arr[],int t ,int n,int k){
int ans=0; int p=1;
for(int i=0;i<n;i++){
    if(ans+arr[i]<=t){
      ans+=arr[i];
    }
    else{
        p++;
        ans=arr[i];
    }
        if(p>k) return false;
}
return true;
}
int time(int arr[],int s,int e,int n,int k){
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
      int number=painters(arr,mid,n,k);
      if(number){
        ans=mid;
        e=mid-1;
      }
      else{
        s=mid+1; 
      }
    }
    return ans;
}
int main(){
int arr[]={2,1,5,6,2,3};
int n=6;
int k=2;
;
int max=*max_element(arr,arr+n);
int sum=0;
for (int i=0;i<n;i++){
    sum+=arr[i];
}

 cout<<time(arr,max,sum,n,k);
}
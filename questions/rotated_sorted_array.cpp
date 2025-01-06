#include<iostream>
using namespace std;
int main(){
     int nums[]={7,8,9,10,6};
     int n=sizeof(nums)/sizeof(nums[0]);
     int s=0;
     int e=n-1;
       if(nums[0]<=nums[n]) return nums[0];
       int last=nums[n-1];
       int first=nums[0];
       int ans=0;
      while(s<=e){
     int mid=s+(e-s)/2;
    if(nums[mid]>nums[n-1]) s=mid+1;
    else e=mid-1;        
    }
   if(m==0){
        return min(nums[0],nums[1]);
    } else if(m==n-1){
        return min(nums[m],nums[m-1]);
    } else {
        return min((nums[m-1],nums[m]),nums[m+1]);
    }
     
        cout<<ans;
}

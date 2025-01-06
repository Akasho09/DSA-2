#include<iostream>
using namespace std;
int main(){
     int nums[]={7,8,9,10,6};
     int s=0;
        int e=nums.size();
        int n=sizeof(nums)/sizeof(nums[0]);
        if(nums[0]<=nums[n]) return nums[0];
       int last=nums[n-1];
       int first=nums[0];
       int ans=0;
    while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                 ans=nums[mid];
                 break;
            }
            else if(nums[mid]>nums[mid+1]){
                 ans=nums[mid+1];
                 break;
            }
            else if(nums[mid]<first || nums[mid]>first ){
                 s=mid+1;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]<first){
                e=mid-1;
            }
        } 
        cout<<ans;
}
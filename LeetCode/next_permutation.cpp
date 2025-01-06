#include<iostream>
using namespace std;
int main(){
    int nums[]={2,3,1};
    int l=3-1;
    while(l>=0){
     
     if(nums[l]<nums[l+1]){
        break;
     }
     l--;
    }
    cout<<"l "<<l<<endl;
   if(l==-1){
     sort(nums,nums+3);
   }
   else{
    sort(nums+l+1,nums+3);
for(int i=0;i<3;i++){
        cout<<nums[i]<<" ";
      }
      cout<<endl;
      int s=l+1;
      int e=2;
    int key=l+1;
      while(s<=e){
          int m=(s+e)/2;
          cout<<"m "<<m<<endl;
        if(nums[m]>nums[l]){
            e=m-1;
            key=m;
      cout<<"key o "<<key<<endl;

        }
        else{
            s=m+1;

        }

      }
      cout<<"key "<<key<<endl;
        swap(nums[l],nums[key]);
   }
      for(int i=0;i<3;i++){
        cout<<nums[i]<<" ";
      }
      cout<<endl;
   }
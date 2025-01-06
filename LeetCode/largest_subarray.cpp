#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int max_sum=INT_MIN;
    // for(int i=0;i<9;i++){
    //      int sum=0;
    //     for(int j=i;j<9;j++){
    //          sum+=nums[j];
    //          if(sum>max_sum){
    //             max_sum=sum;
    //          } 
    //     cout<<sum<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<max_sum;
  
      int curMax = 0, maxi = INT_MIN;
        for(int i=0;i<9;i++){
            cout<<"nums[i] "<<nums[i]<<endl;
            curMax = max(nums[i], curMax + nums[i]);
            cout<<"curmax "<<curMax<<endl;
            maxi = max(maxi, curMax);
    }
     cout<<maxi<<endl;
}
//[4,-1,2,1]
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(-2);
    nums.push_back(-5);
    nums.push_back(-4);
    nums.push_back(-3);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(5);
    //  [1,-2,-5,-4,-3,3,3,5]
    set<vector<int> >st;
    int target=-11;
    int sum=0;
     vector<vector<int> > v;
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size()-3;i++){
      sum=0;
      sum+=nums[i];
        for(int j=i+1;j<nums.size()-2;j++){
            sum+=nums[j];
            // cout<<"nums[i]+nums[j] "<<nums[i]<<" "<<nums[j]<<endl;
            // if(sum>target) break;
            int k=j+1;
            int l=nums.size()-1;
            while(k<l){
               sum+=nums[k]+nums[l];
               cout<<"nums[k],nums[l] "<<nums[k]<<" "<<nums[l]<<endl;
            cout<<"sum "<<sum<<endl;

               if(sum<target && k<l){
                sum-=nums[k]+nums[l];
                k++;
               }
               else if(sum>target && l>k){
                sum-=nums[l]+nums[k];
                l--;
               }
               else if(sum==target){
               vector<int> temp;
               cout<<"akh "<<endl;
               temp.push_back(nums[i]);
               temp.push_back(nums[j]);
               temp.push_back(nums[k]);
               temp.push_back(nums[l]);
             

                   if(!st.empty() && st.find(temp) == st.end() ){
                    v.push_back(temp);
                   }
                   else if(v.empty()) v.push_back(temp);
                    st.insert(temp);
                    temp.clear();
                      sum-=nums[k];
                       sum-=nums[l];
                    k++;
                    l--;
              
               }
            }
            sum-=nums[j];
        }
     }
      for(int i=0;i<v.size();i++){
         for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
         }
         cout<<endl;
      }
    }
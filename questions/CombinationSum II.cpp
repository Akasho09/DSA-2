#include<iostream>
using namespace std;
void combination(int ind,int t,vector<int> temp,int arr[],vector<vector<int> > &ans,int n){
if(t==0){
    ans.push_back(temp);
    return;
}
for(int i=ind;i<n;i++){
if(i>ind && arr[i]==arr[i-1]) continue;
if(arr[i]>t) break;
temp.push_back(arr[i]);
combination(i+1,t-arr[i],temp,arr,ans,n);
temp.pop_back();
}
}

int main(){
int arr[]={2,5,2,1,2};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int> temp;
vector<vector<int> > ans;
int target=5;
 combination(0,target,temp,arr,ans,n);
 for(auto i : ans){
    for(auto j : i){
        cout<<j<<" ";
    }
    cout<<endl;
 }
}
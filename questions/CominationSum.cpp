#include<iostream>
using namespace std;
void combination(int i,int arr[],int target,int n,vector<int> temp,vector<vector<int> > &ans){
if(i==n){
    if(target==0){
        ans.push_back(temp);
    }
    return;
}
if(arr[i]<=target){
   temp.push_back(arr[i]);
    combination(i,arr,target-=arr[i],n,temp,ans);
       temp.pop_back();
}
       combination(i+1,arr,target,temp,ans);

}
int main(){
int arr[]={1,2,3,5,6,4};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>temp;
vector<vector<int> > ans;
int target=5;
combination(0,arr,target,n,temp,ans);
for(int i : ans){
    for(int j : i){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
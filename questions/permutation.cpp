#include<iostream>
using namespace std;
void recursion(int arr[],int n,vector<int> temp,vector<vector<int> > &ans,vector<bool> p){
if(temp.size()==n){
    ans.push_back(temp);
    return;
}
 for(int i=0;i<n;i++){
    if(p[i]==0){
        temp.push_back(arr[i]);
        p[i]=1;
    recursion(arr,n,temp,ans,p);
  p[i]=0;
  temp.pop_back();
 }
}
}
int main(){
     int arr[]={1,2,3};
     int n=3;
     vector<int> temp;
     vector<vector<int> > ans;
     vector<bool> p(n,0);
    recursion(arr,n,temp,ans,p);
    for(int i =0;i<ans.size();i++){
       for(int j=0;j<3;j++){
        cout<<arr[j]<<" ";
       }
       cout<<endl;
    }
}
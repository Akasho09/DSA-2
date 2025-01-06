#include <iostream>
#include <vector>
using namespace std;
void sumset(int arr[],int n,vector<int> v,int i,int k,int sum){
if(i==n ){
    if(sum==k){
         for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    }
    return ;
}
    v.push_back(arr[i]);

        sumset(arr,n,v,i+1,k,sum+=arr[i]);
  
    v.pop_back();
     
        sumset(arr,n,v,i+1,k,sum-=arr[i]);

}
int main(){
int arr[]={1,2,3};
int n=3;
vector<int> v;
int i=0;
int k=3;
sumset(arr,n,v,i,k,0);
}

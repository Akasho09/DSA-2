#include <iostream>
#include <vector>
using namespace std;
bool sumset(int arr[],int n,vector<int> v,int i,int k,int sum){
if(i==n){
    if(sum==k){
         for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    return true;
    }
    return  false;
}
    v.push_back(arr[i]);

       if(sumset(arr,n,v,i+1,k,sum+=arr[i])==true)
       return true;
  
    v.pop_back();
     
        if(sumset(arr,n,v,i+1,k,sum-=arr[i])==true)
        return true;

        return false;

}
int main(){
int arr[]={1,2,3};
int n=3;
vector<int> v;
int i=0;
int k=3;
sumset(arr,n,v,i,k,0);
}


#include<iostream>
#include<set>
using namespace std;
using namespace std;
void threesum(int arr[],int n){
set<vector<int> > st;
for(int i=0;i<n;i++){
    set<int> hashset;
    for(int j=i+1;j<n;j++){
        int third=-(arr[i]+arr[j]);
          if(hashset.find(third)!=hashset.end()){
            vector<int> temp={arr[i],arr[j],third};
            sort(temp.begin(),temp.end());
            st.insert(temp);
          }
          hashset.insert(arr[j]);
    }
}
for(auto i : st){
for(auto j : i){
    cout<<j<<" ";
}
}
}
int main(){
int arr[]={1,-1,0,2,-2,1,-3,3,0,-1};
int n=sizeof(arr)/sizeof(arr[0]);
threesum(arr,n);
}
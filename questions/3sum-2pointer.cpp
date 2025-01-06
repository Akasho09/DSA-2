#include<iostream>
#include<set>
using namespace std;
void threesum(int arr[],int n){
    set<vector<int> > st;
for(int i=0;i<n;i++){
    //int temp1=arr[i];
    int j=i+1;
    int k=n-1;
    while(j<=k){
       // int temp2=arr[j];
       // int temp3=arr[k];
        if(arr[i]+arr[j]+arr[k]==0){
            vector<int> temp={arr[i],arr[j],arr[k]};
            st.insert(temp);
        }
        else if(arr[i]+arr[j]+arr[k]<0){
            j++;
        }
          else if(arr[i]+arr[j]+arr[k]>0){
            k--;
        }
    }
    

}
for(int i : st){
    for(int j : i){
        cout<<j<<" ";
    }
}
}
int main(){
int arr[]={0,-1,-2,-2,2,1,0,-1,1};
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);
threesum(arr,n);
}
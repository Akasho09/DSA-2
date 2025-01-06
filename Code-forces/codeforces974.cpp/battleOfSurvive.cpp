#include<iostream>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<int>arr;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            arr.push_back(e);
        }
        long long sum=0;
        for(int i=0;i<arr.size()-2;i++){
            sum+=arr[i];
        }
        cout<<sum<<endl;
        sum=arr[n-2]-sum;
        cout<<sum<<endl;
        cout<<arr[n-1]-(sum)<<endl;
        
    }
    
}
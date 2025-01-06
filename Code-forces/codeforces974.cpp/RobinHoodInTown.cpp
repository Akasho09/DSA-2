#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
        int mid=n/2 +1;
        int avg=sum/(2*n);
        if(n==1 || n==2) cout<<"-1"<<endl;
        else if(avg>arr[mid]) cout<<"0"<<endl;
        else{
            cout<<(arr[mid]*(2*n))-sum+1<<endl;
        }
    }
    return 0;
}
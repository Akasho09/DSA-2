#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;2
        vector<int>arr(n);
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        int ans=0;
        int r=0;
        for(int i=0;i<n;i++){
            if(r>0){
                if(arr[i]==0){
                    ans+=1;
                    r-=1;
                }
                else if(arr[i]>=k){
                    r+=arr[i];
                }
            }
            else{
               if(arr[i]>=k){
                    r+=arr[i];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
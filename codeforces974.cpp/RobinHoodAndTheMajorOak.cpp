#include<iostream>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
         int i=n-k+1;
         int count=0;
             if(i%2==0 && n%2==0){
               count+=(n-i)/2;
             }
             else {
                count+=(n-i)/2 +1;
             }
        if(count%2==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
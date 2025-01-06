 #include<iostream>
 #include<cmath>
 #include<algorithm>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    long long k;
    cin>>n>>k;
    vector<long long>v;
    long long mx=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        long long e;
        cin>>e;
       v.push_back(e);
       sum+=e;
       mx=max(e,mx);
    } 
 

return 0;
}
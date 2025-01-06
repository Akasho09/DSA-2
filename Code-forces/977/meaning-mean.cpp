#include<iostream>
using namespace std;
void ans(){
  int n;
  cin>>n;
  vector<long long > v(n);
  for(int i=0;i<n;i++){
     cin>>v[i];
  }
    while(v.size()>1){
        sort(v.begin(),v.end());
        long long avg=(v[0]+v[1])/2;
        v.erase(v.begin(),v.begin()+2);
        v.push_back(avg);
    }
    cout<<v[0]<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
    ans();
}
return 0;
}
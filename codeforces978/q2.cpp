#include<iostream>
using namespace std;
void ans(){
int n,x;
cin>>n>>x;
vector<int>v;
while(n--){
 int e;
 cin>>e;
v.push_back(e);
}
sort(v.begin(),v.end(),greater<int>());
int cus=0;
  while(v.size()>=x){
  if(x<=v.size()){
    cus+=v[x-1];
    int k=v[x-1];
    int z=x;
    for(int i=0;i<z;i++){
        v[i]-=k;
        if(v[i]==0){
            v.erase(v.begin()+i);
            --i;
            z--;
        }
    }
  }
  else{
    cus+=v[0];
    break;
  }
  }
 cout<<cus<<endl;
}
int main(){
int t;
while(t--){
    ans();
}
return 0;
}


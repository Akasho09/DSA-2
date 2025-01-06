#include<iostream>
using namespace std;
void subsequence(string s,int n){
for(int num=0;num<(1<<n);num++){
   // cout<<"num "<<num<<endl;
  string sub="";
  for(int j=0;j<n;j++){
   // cout<<"j "<<j<<endl;

    if((num&(1<<j))!=0){
        sub+=s[j];
    }
  }
cout<<sub<<endl;

}
}
int main(){
    string s="abc";
    int n=s.length();
     subsequence(s,n);
}
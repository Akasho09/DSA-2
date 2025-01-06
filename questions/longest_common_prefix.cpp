#include<iostream>
#include<vector>
#include<string>
using namespace std;
void find(vector<string> s,int ind,int l){
string str="";
 bool flag=0;
  for(int j=0;j<l;j++){
    int i=0;
    for(;i<s.size();i++){
      if(s[ind][j]!=s[i][j]) {
   flag=1;
        break;
      }
    }
    if(i==s.size() && flag==0) str.push_back(s[ind][j]);
  }
  
 cout<<str<<endl;
  
}
int main(){
vector<string> strs ;
strs.push_back("cir");
strs.push_back("car");
// strs.push_back("car");
        int minsize=-1;
  int ind=-1;
for(int i=0;i<strs.size();i++){
if(minsize>strs[i].size() || minsize==-1){
  minsize=strs[i].size();
  ind=i;
}  
}
 find(strs,ind,minsize);
    }

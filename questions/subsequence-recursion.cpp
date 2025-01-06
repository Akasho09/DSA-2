#include<iostream>
#include<vector>
using namespace std;
void subseq(string str,int i,int n,vector<string> &s){
if(i==n){ 
  for (string x : s) {
      cout << x <<" ";
  }
  cout<<endl;
         return ;
}
     s.push_back(string(1, str[i]));
     subseq(str,i+1,n,s);

  s.pop_back();
        subseq(str,i+1,n,s);

}
int main(){
string str="abc";
  int i=0;
vector<string> s;
 subseq(str,i,str.length(),s);
}

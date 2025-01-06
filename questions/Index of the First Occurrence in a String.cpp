#include <iostream>
using namespace std;
void index(string s1,string s2){
    for(int i=0;i<s1.size();i++){
string temp=s1.substr(i,s2.size());
    if(temp==s2) return i;
}
return -1;
}
/*void findindex(string s1,string s2){
int ind=-1;int j=0;
  for(int i=0;j<s2.size()&&i<s1.size();i++){
    if(s2[j]==s1[i]){
      if(j==0){
        ind=i;
      }
      j++;
    }
    else{
      j=0;
    }
  }
  if(j==0) ind=-1;
   cout<<ind;
} */
int main() {
  string s1="mississippi";
  string s2="issip";
 // findindex(s1,s2);
 index(s1,s2);
}
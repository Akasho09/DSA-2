#include<iostream>
#include<stack>
using namespace std;
bool valid(string s,stack<string> st){
  if((s.size())%2 !=0) return false;
for(int i=0;i<s.size();i++){
  if(s[i]== '[' || s[i]== '{' || s[i]== '('){
  st.push(string(1, s[i]));
    continue;
}
  if(!st.empty() &&( ( st.top() =="{" && s[i]=='}') || (st.top() =="(" && s[i]==')') || (st.top() =="[" && s[i]==']'))){
    st.pop();
  }
  else return false;
 
}
  return true;
}
int main(){
    string s={'(',']'};
  stack<string> st;
    int result=valid(s,st);
    if(result==true) cout<<true;
    else cout<< false;
}
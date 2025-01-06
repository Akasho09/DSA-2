#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="  0000000000012345678";
    stack<int> st;
    char sign='+';
    int ch=0;
    for(int i=0;i<s.length();i++){
        cout<<"s "<<s[i]<<endl;
        if(s[i]==' ' && st.empty()) continue;
        else if(s[i]=='+' && st.empty()){
            ch++;
            continue;
        }
        else if(s[i]=='-' && st.empty()) {
            ch++;
            sign='-';
        }
        else if(s[i]>='0' && s[i]<='9') st.push(s[i]);
        else break;             
    }
    if(ch>=2) return 0;
    long long j=1;
    long long ans=0;
     while(!st.empty()){
        cout<<"tt "<<st.top()<<endl;
        ans+=(st.top()-'0')*j;
        st.pop();
     if(ans>INT_MAX){
       ans = (sign == '-') ? INT_MIN : INT_MAX;
       break;
        // return ans;
     }
        j*=10;
       if(j>INT_MAX) j=INT_MAX;
     }
     cout<<"ans1 "<<ans<<endl;
    //  if(sign=='-' && ans==INT_MAX){
    //     ans=-ans-1;
    //  }
      if(sign=='-'){
        ans=-ans;
     }
   cout<<"ans= "<<ans<<endl;
   cout<<"INT_MAX "<<INT_MAX<<endl;
   cout<<"INT_MIN "<<INT_MIN<<endl;


}
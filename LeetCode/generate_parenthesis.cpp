#include<iostream>
#include<vector>
using namespace std;

void rec(vector<string>&s, string st, int left, int rt, int n){
   
   if (st.length() == n) {
        s.push_back(st);
        return;
    }

    if(left<n/2){
    rec(s,st + '(',left+1,rt,n);
    }

    if(rt<left){
        rec(s,st + ')',left,rt+1,n);
    }
}

int main(){

   int n=3;
     vector<string>s;
     string st="";
     rec(s,st,0,0,n*2);
  
     for(int i =0; i<s.size();i++){
        cout<<s[i]<<" ";
     }
 return 0;
}   
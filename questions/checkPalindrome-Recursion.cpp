#include<iostream>
using namespace std;
bool check(string s,int n,int i){
if(i>n/2) return true;
if(s[i]!=s[n-i-1]) return false;
i++;
return check(s,n,i);
}
int main(){
string s= "madama";
int l=s.length();
int i=0;
 int ans=check(s,l,i);
 if(ans) cout<<"yes";
 else cout<<"no";
}
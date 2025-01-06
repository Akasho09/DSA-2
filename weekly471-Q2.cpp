#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int c=0;
    int ss=0;
    map<char,int>mpp;
     int i=0,j=0;
     while(j<s.length()){
     if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') mpp[s[j]]++;
     else c++;
     while(c>k) {
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') mpp[s[i]]--;
     else c--;
     if(mpp[s[i]]==0) mpp.erase(s[i]);
     i++;
     }
      if(mpp.size()>=5 && c==k) ss++;
    j++;
}
cout<<ss<<endl;
}
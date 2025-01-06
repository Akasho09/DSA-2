#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s1="a";
        while(s1.length()<k){
            string s2="";
            for(int i=0;i<s1.length();i++){
                if(s1[i]=='z') s2+='a';
                else  s2+=s1[i]+1; 
            }
            s1+=s2;
        }
        cout<<s1[k-1]<<endl;
}
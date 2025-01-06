#include<iostream>
using namespace std;
int main(){
    //INTEGER HASHING 
    int arr[]={3,1,3,5,4,5,2};
    //max ele=5
    int hash[5]={0};

     for(int i=0;i<7;i++){
        hash[arr[i]]++;
     }
      int n;
      cout<<"enter int"<<endl;
      cin>>n;
      cout<<hash[n]<<endl;


      // CHARACTER HASHING
      string s="abcdabfg";
      int hashc[26]={0};
      for(int i=0;i<s.length();i++){
        hashc[s[i]-'a']++;
      }
      char chr;
      cout<<"enter chr "<<endl;
      cin>>chr;
      cout<<hashc[chr-'a'];
}
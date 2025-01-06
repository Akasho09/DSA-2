#include <iostream>
#include <list>
using namespace std;
void add(string s1,string s2){
int c=0; 
  string s;
  list<int> l;
  int i=s1.size()-1;
  int j=s2.size()-1;
  for(;i>=0 && j >=0;i--,j--){
      int sum= (s1[i]-'0')+(s2[j]-'0')+c;
        if(sum==0 || sum==1) {
          l.push_front(sum);
          c=0;
        }
      else if(sum==2){
        l.push_front(0);
        c=1;
      }
      else if(sum==3){
        l.push_front(1);
      }
    }
  if(c==1 && i==-1 && j==-1) l.push_front(1);
  cout<<c<<endl;
  bool h=false;
  for(;i>=0;i--){
    h=true;
    if(c==0){
      l.push_front(s1[i]-'0');
      continue;
    }
    else{
      int sum=(s1[i]-'0') +c;
      cout<<sum<<endl;
      if(sum==1){
        l.push_front(1);
        c=0;
      }
      else if(sum==2){
        l.push_front(0);
      }
    }
  }
  if(h==true && c==1){
    l.push_front(1);
  }
  bool h2=false;
  for(;j>=0;j--){
    h2=true;
    if(c==0){
      l.push_front(s2[j]-'0');
      continue;
    }
    else{
      int sum=(s2[j]-'0') +c;
      if(sum==1){
        l.push_front(1);
        c=0;
      }
      else if(sum==2){
        l.push_front(0);
      }
    }
  }
  if(h2==true && c==1){
    l.push_front(1);
  } 
 for(auto it=l.begin();it!=l.end();++it){
   s.push_back((*it)+'0');
 }
  for(auto i : s){
    cout<<i;
  }
    }
int main() {
  string s1="101111";
  string s2="10";
  add(s1,s2);
  
}
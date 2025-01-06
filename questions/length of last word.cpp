#include <iostream>
using namespace std;
int main() {
string s=" this   is  my    world  ";
//getline(cin,s);
  int count =0;
  //cout<<s.length()<<endl;
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]==' '){
      continue;
    }
    else{
      count++;
      if(s[i-1]==' ') break;
    }
  }
  cout<<count;
}
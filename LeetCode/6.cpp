#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="A";
    int rows=4;
    int col=0;
    int l=0;
   vector<vector<char> > v(rows, vector<char>(s.length(), ' '));
    while(col<s.length()){
     if(l>s.length()) break;
     int r=0;
        while(r<rows && l<s.length()){
            v[r][col]=s[l];
            l++;
            r++;
        }
        r-=2;
        col++;
          while(r>0 && l<s.length()){
            v[r][col]=s[l];
            col++;
            r--;
            l++;
          }
    }
    string t="";
    for(int i=0;i<rows;i++){
        for(int j=0;j<s.length();j++){
            if(v[i][j]!=' '){
                t+=v[i][j];
            }
        }
    }
    cout<<"ans= "<<t<<endl;

}
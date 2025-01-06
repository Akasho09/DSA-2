#include<iostream>
#include<stack>
using namespace std;
bool isPalindrome(string s){
        int i=0;
        int j=s.length()-1;
        while(i<=j){
          if(s[i]!=s[j]) return false;
          i++;
          j--;
        }
     return true;
}
   int main(){
    string s="xaaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeeeffffffffffgggggggggghhhhhhhhhhiiiiiiiiiijjjjjjjjjjkkkkkkkkkkllllllllllmmmmmmmmmmnnnnnnnnnnooooooooooppppppppppqqqqqqqqqqrrrrrrrrrrssssssssssttttttttttuuuuuuuuuuvvvvvvvvvvwwwwwwwwwwxxxxxxxxxxyyyyyyyyyyzzzzzzzzzzyyyyyyyyyyxxxxxxxxxxwwwwwwwwwwvvvvvvvvvvuuuuuuuuuuttttttttttssssssssssrrrrrrrrrrqqqqqqqqqqppppppppppoooooooooonnnnnnnnnnmmmmmmmmmmllllllllllkkkkkkkkkkjjjjjjjjjjiiiiiiiiiihhhhhhhhhhggggggggggffffffffffeeeeeeeeeeddddddddddccccccccccbbbbbbbbbbaaaaaaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeeeffffffffffgggggggggghhhhhhhhhhiiiiiiiiiijjjjjjjjjjkkkkkkkkkkllllllllllmmmmmmmmmmnnnnnnnnnnooooooooooppppppppppqqqqqqqqqqrrrrrrrrrrssssssssssttttttttttuuuuuuuuuuvvvvvvvvvvwwwwwwwwwwxxxxxxxxxxyyyyyyyyyyzzzzzzzzzzyyyyyyyyyyxxxxxxxxxxwwwwwwwwwwvvvvvvvvvvuuuuuuuuuuttttttttttssssssssssrrrrrrrrrrqqqqqqqqqqppppppppppoooooooooonnnnnnnnnnmmmmmmmmmmllllllllllkkkkkkkkkkjjjjjjjjjjiiiiiiiiiihhhhhhhhhhggggggggggffffffffffeeeeeeeeeeddddddddddccccccccccbbbbbbbbbbaaaa";
    int l=0;
    int firstloop=0;
    int secloop=0;
    string longest="";
    for(int i=0;i<s.length();i++){
        firstloop++;
        string c="";
        if((i+l)>s.length()) break;
          c+=s.substr(i,l);
        for(int j=i+l;j<s.length();j++){
            secloop++;
            c+=s[j];
       if(isPalindrome(c)){
            if(c.length()>longest.length()) longest=c;
       }
        }
         l=longest.length();
    }
    cout<<"floop "<<firstloop<<endl;
    cout<<"secloop "<<secloop<<endl;
    // cout<<3*1992;
    cout<<"ans= "<<longest;
}
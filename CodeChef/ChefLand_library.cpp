#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    int i=1;
    map<int, int>mpp;
    while(i<=n){
     int d;
     cin>>d;
     mpp[d]=i;
    }
    int ans=0;
    for(auto &i: mpp){
     ans+=i.second;
    }
    cout<<ans<<endl;

}
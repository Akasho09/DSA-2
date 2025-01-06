#include<iostream>
using namespace std;
void ans(){
    int n,r;
    cin>>n>>r;
    int ans=0;
    int rem=0;
    int total=0;
    int happy=0;
    while(n--){
        int e;
        total+=e;
        cin>>e;
        if(e%2==0){
          happy+=e;
        }
        else {
            happy+=e-1;
            rem+=1;
        }
    }
    int seats=r*2;
    int remspace=seats-happy;
    if((remspace/2)>=rem) happy+=rem;
    else happy+=remspace-rem;
     cout<<happy<<endl;
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        ans();
    }
    return 0;
}


#include<iostream>
using namespace std;
void isprime(int n){
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<n;i++){
        if(prime[i]==true){
            for(int j=2*i;j<=n;j=j+i){
                prime[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }
}
int main(){
int n;
cin>>n;
isprime(n);
}
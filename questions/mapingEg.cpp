#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[]={3,1,2,3,3,2,7,9};
    map<int,int> mpp;
    for(int i=0;i<8;i++){
        mpp[arr[i]]++;
    }
    int n;
    cout<<"enter int"<<endl;
    cin>>n;
    cout<<mpp[n];
    
}
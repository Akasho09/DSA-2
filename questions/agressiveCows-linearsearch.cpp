
#include<iostream>
using namespace std;
int mindist(int arr[],int n,int k,int max){
    int dist=0;
    for(int minD=1;minD<=max;minD++){
     int lastposition=0;
     int h=0;
     int cows=1;
     for(int j=1;j<n;j++){
        if(arr[j]-arr[lastposition]>=minD){
            cows++;  lastposition+=h+1; h=0;
        }
        else{
             h++;
        }
        if(cows>=k) break;
     }
     if(cows==k) dist=minD;
     if(cows<k) break;  
    }
return dist;
}
int main(){
    int arr[]={4,2,1,3,6};
    int n=5;
    int k=2;
    sort(arr,arr+n);
int max=arr[n-1]-arr[0];
cout<<mindist(arr,n,k,max);
}
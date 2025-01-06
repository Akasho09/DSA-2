
#include<iostream>
using namespace std;
int mindist(int arr[],int n,int k,int e){
    int s=1;
    int dist=0;
    while(s<=e){
        int mid=s+(e-s)/2;
     int lastposition=0;
     int h=0;
     int cows=1;
     for(int j=1;j<n;j++){
        if(arr[j]-arr[lastposition]>=mid){
            cows++;  lastposition+=h+1; h=0;
        }
        else{
             h++;
        }
        if(cows>=k) break;
     }
     if(cows>=k){
         dist=mid;
         s=mid+1;
     }
     if(cows<k) e=mid-1;  
    }
return dist;
}
int main(){
    int arr[]={0,3,4,7,10,9};
    int n=6;
    int k=4;
    sort(arr,arr+n);
int max=arr[n-1]-arr[0];
cout<<mindist(arr,n,k,max);
}
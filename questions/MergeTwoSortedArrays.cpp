#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int m,int n,vector<int> &temp){
 int left1=0;
 int last1=m-n-1;
  int left2=0;
 int last2=n-1;
 while(left1<=last1 && left2<=last2){
   if(arr1[left1]<=arr2[left2]){
        temp.push_back(arr1[left1]);
        left1++;
    }
    else{
    temp.push_back(arr2[left2]);
    left2++;
    }
 }
 while(left1<=last1){
     temp.push_back(arr1[left1]);
        left1++;
 }
 while(left2<=last2){
    temp.push_back(arr2[left2]);
    left2++;
 }
}
int main(){
 int arr1[]={1,2,3,0,0,0};
 int arr2[]={2,5,6};
int m=sizeof(arr1)/sizeof(arr1[0]);
int n=sizeof(arr2)/sizeof(arr2[0]);
 vector<int> temp;
 merge(arr1,arr2,m,n,temp);
  for(int i=0;i<temp.size();i++){
    arr1[i]=temp[i];
    cout<<arr1[i]<<" ";
 }
 cout<<endl;
 //cout<<m<< " "<<n;
 ;
 return 0;
}
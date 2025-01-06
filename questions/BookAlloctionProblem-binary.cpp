#include<iostream>
using namespace std;
#include<algorithm>
int binarysearch(int time[],int s,int e,int n)
{
    while(s<=e){
     long long int mid=s+(e-s)/2;
   long long int days=1;
    long long int chapters= 0;
    for(int i=0;i<5;i++)
    {
      if(chapters+time[i]<=mid)
      {
        chapters+=time[i];
      }
      else{
        days++;
        chapters=time[i];
      } 
  }
      if(days>n){
        s=mid+1;
      }
      else{
        e=mid-1;
      }
} 
  return s;
}
int main() 
{
  int time[]={1,2,2,3,1};
  int n=3;
  int m=5;
  if(n>m) cout<< -1;
long long int sum=0;
for(int i=0;i<m;i++){
  sum+=time[i];
}
 long long int maxi=*max_element(time,time+m);
  cout<< binarysearch(time,maxi,sum,n);
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
  vector<int>arr{1,9};
  int n=arr.size()-1;
  for(int i=n;i>=0;i--){
    if(i==n && arr[i]<9){
      arr[i]=arr[i]+1;
      break;
    }
    else if(i>=0 && arr[i]<9){
      arr[i]+=1;
          for(int j=i+1;j<=n;j++){
            arr[j]=0;
          }
      break;
      }
    else if(i==0 && arr[i]==9){
       arr[0]=1;
      int j=1;
      for(;j<=n;j++){
       arr[j]=0;
      }
      arr.push_back(0);
      break;
    }
      }
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  }

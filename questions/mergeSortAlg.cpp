#include<iostream>
using namespace std;
void merge(int (&arr)[10],int low,int mid,int high){
    int right=mid+1;
    int left = low;
    vector<int> temp;
    cout<<"low"<<low<<endl<<"high"<<high<<endl;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }   
    }
    while(left<=mid){
         temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
         temp.push_back(arr[right]);
            right++;
    }
    for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
}
}
void mergesort(int (&arr)[10],int low,int high){
  if(low==high) return; 
int mid=low+(high-low)/2;
mergesort(arr,low,mid);
mergesort(arr,mid+1,high);
 merge(arr,low,mid,high);
}
int main(){
int arr[]= {4,2,5,2,8,9,6,0,1,7};
int n=10;
mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
#include<iostream>
using namespace std;
void triangle(int arr[],int n){
sort(arr,arr+n);
vector<vector<int> > ans;
for(int i=0;i<n;i++){ 
    if(i>0 && arr[i]==arr[i-1]) continue;
    int j=i+1;
    int k=n-1;
    while(j<k){
        if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k]>arr[i]){
            vector<int> temp;//={arr[i],arr[j],arr[k]};
             temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
            ans.push_back(temp);
            j++;
            k--;
            while( j<k && arr[j]==arr[j-1]) {
                j++;
            }
            while(j<k && arr[k]==arr[k+1]){

             k--;
            }
        }
        else if(arr[i]+arr[j]<=arr[k]){
            k--;
        }
        else if(arr[j]+arr[k]<=arr[i]) {
            j++;
        }
        else //if(arr[i]+arr[k]<arr[j])
        {
               break;
        }
    }
}
    for(int i : ans){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
int main(){
int arr[]={9,3,4,5,1,6,8,7,2};
int n=sizeof(arr)/sizeof(arr[0]);
triangle(arr,n);

}
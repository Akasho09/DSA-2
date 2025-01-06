#include<iostream>
using namespace std;
bool palindrome(vector<int> arr){
int i=0;
int j=arr.size()-1;
while(i<=j){
    if(arr[i]!=arr[j]){
        return false;
    }
    i++;
    j--;
}
return true;
}
void push(int n,vector<int> &arr){
while(n!=0){
    int r=n%10;
     arr.push_back(r);
     n=n/10;
}
}
int main(){
int n=12321;
vector<int> arr;
push(n,arr);
 int result= palindrome(arr);
 if(result==false){
    cout<<"not a palindrome";
 }
 else{
    cout<<"it is a palindrome";
 }
 return 0;
}
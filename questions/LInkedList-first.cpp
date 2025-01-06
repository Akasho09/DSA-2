#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
};
int main(){
   int arr[]={1,2,3,4};
   node y= node(arr[1],nullptr);
   cout<<y.data;
}
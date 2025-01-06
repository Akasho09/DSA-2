#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node* back;
public:
  Node(int data,Node* next,Node* back){
   this-> data=data;
    this->next=next;
   this-> back=back;
  }
public: 
Node(int data){
 this-> data=data;
  next=nullptr;
  back=nullptr;
}

};
void print(Node* head){
  while(head){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}
Node* convert(int arr[],int n){
  Node* head=new Node(arr[0]);
  Node* prev=head;
  for(int i=1;i<n;i++){
    Node* temp=new Node(arr[i],nullptr,prev);
    prev->next=temp;
    prev=temp;
  }
  return head;
}
int main(){
  int arr[]={2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);
  print(head); 
  
}
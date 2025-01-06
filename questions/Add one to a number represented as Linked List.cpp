#include <iostream>
using namespace std;
class Node{
  public:
  int data;
Node* next;
public:
Node(){
  this->data=0;
  this->next=nullptr;
}
public:
Node(int data){
  this->data=data;
  this->next=NULL;
}
public:
Node(int data,Node* next){
  this->data=data;
  this->next=next;
}
};
void print (Node* head){
  while(head!=NULL){
  cout<<head->data<<" ";
  head=head->next;
}
  cout<<endl;
}
Node* convert(int arr[],int n){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<n;i++){
    Node* temp=new Node(arr[i]);
  mover->next=temp;
    mover=temp;
}
   return head;
}
int helper(Node* head){
  if(head==NULL){
    return 1;
  }
  int carry=helper(head->next);
 head->data+=carry;
  if(head->data<10) return 0;
  head->data=0;
  return 1; 
}
Node* add(Node* head){
  Node* temp=head;
 int carry= helper(temp);
  if(carry==1){
    Node* newhead=new Node(1);
    newhead->next=head;
    head=newhead;
  }
  return head;
}
int main() {
  int arr[]={1,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);
   head=add(head);
  print(head);
}
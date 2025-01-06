#include <iostream>
#include <stack>
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
Node* rev(Node* head){
if(head==NULL || head->next==NULL) return head;

  Node* newhead=rev(head->next);
  
  Node* front=head->next;
  
  front->next=head;
  
  head->next=NULL;
  
  return newhead;
  
}
int main() {
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n); 
  head=rev(head);
  print (head);
}
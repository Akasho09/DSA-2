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
Node* segregate(Node* head){
  if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
  Node* newhead1=new Node(head->data);
  Node* newhead2=new Node(head->next->data);
  Node* odd=head->next->next;
  Node* mover1=newhead1;
  Node* mover2=newhead2;
  Node* even=odd->next;
  while(odd->next!=NULL && even->next!=NULL){
    Node* temp1=new Node(odd->data);
    mover1->next=temp1;
    mover1=temp1;
       odd=odd->next->next;
    Node* temp2=new Node(even->data);
    mover2->next=temp2;
    mover2=temp2;
         even=even->next->next;
     }
  if(odd!=NULL  ){
     Node* temp1=new Node(odd->data);
    mover1->next=temp1;
    mover1=temp1;
  }
  if(even!=NULL ){
    Node* temp2=new Node(even->data);
    mover2->next=temp2;
    mover2=temp2;
  } 
mover1->next=newhead2;
  return newhead1;
}  
int main() {
  int arr[]={2,4,6,8,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);
 head= segregate(head);
  print (head);
}
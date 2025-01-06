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
Node* sort012(Node* head){
  if(head==NULL || head->next==NULL) return head;
  Node* head0=new Node();
   Node* head1=new Node();
   Node* head2=new Node();
  Node* mover0=head0;
  Node* mover1=head1;
  Node* mover2=head2;
  while(head!=NULL){
    if(head->data==0){
      Node* temp0=new Node(head->data);
      mover0->next=temp0;
      mover0=temp0;
    }
    else if(head->data==1){
        Node* temp1=new Node(head->data);
        mover1->next=temp1;
        mover1=temp1;
    }
    else{
         Node* temp2=new Node(head->data);
      mover2->next=temp2;
      mover2=temp2;
    }
    head=head->next;
  }
  mover0->next=head1->next;
  mover1->next=head2->next;
  return head0->next; 
}
int main() {
  int arr[]={1,2,0,0,1,0,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);
  head=sort012(head);
  print(head);
}
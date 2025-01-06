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
Node* del(Node* head,int k){
Node* slow=head;
  Node* fast=head;
  int cnt=0;
  while(fast->next!=NULL){
    if(cnt>=k){
      slow=slow->next;
    }
    cnt++;
      fast=fast->next;
  }
  if(cnt<k){
     head=head->next;
    delete slow;
    return  head;
  }
  Node* cur=slow->next;
  slow->next=cur->next;
  delete cur;
  return head;
}
int main() {
  int arr[]={2,4,6,8,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);  
  head=del(head,5);
  print (head);
}
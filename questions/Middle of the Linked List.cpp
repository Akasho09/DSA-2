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
void insertNode(Node*& head, int data) {
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}
Node* middle(Node* head){
  Node* slow=head;
  Node* fast=head;
  if(head->next==NULL) return head;
  while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
  }
  return slow;
}
  int main() {
      // creation of both lists 
      Node* head = NULL;

    
    insertNode(head,8);
    insertNode(head,1);
      insertNode(head,4);
  Node* mid=middle(head);
    cout<<mid->data;
  }
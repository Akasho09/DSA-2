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
Node* deletemid(Node* head){
  if(head->next==NULL){
    delete head;
    return NULL;
  }
  Node* slow=head;
  Node* fast=head;
  while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    if(fast!=NULL && fast->next!=NULL) slow=slow->next;
  }
  Node* nxt=slow->next->next;
  delete slow->next;
  slow->next=nxt;
  return head;
}
  int main() {
      Node* head = NULL;
    insertNode(head,8);
    insertNode(head,2);
      insertNode(head,4);
    insertNode(head,3);
    insertNode(head,1);
    head=deletemid(head);
print (head);

  }
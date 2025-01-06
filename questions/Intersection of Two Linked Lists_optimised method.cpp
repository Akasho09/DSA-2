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
Node* getintersection(Node* head1,Node* head2){
  Node* temp1=head1;
  Node* temp2=head2;
  while(temp1!=temp2){
    temp1=temp1->next;
    temp2=temp2->next;
    if(temp1==temp2) return temp1;
    if(temp1==NULL) temp1=head2;
    if(temp2==NULL) temp2=head1;
  }
  return temp1;
}
  int main() {
      // creation of both lists 
      Node* head = NULL;
      insertNode(head,5);
      insertNode(head,4);
      insertNode(head,8);
      insertNode(head,1);
      insertNode(head,4);
      Node* head1 = head;
      head = head->next->next;
      Node* headSec = NULL;
      insertNode(headSec,1);
    insertNode(headSec,6);
    insertNode(headSec,5);

      Node* head2 = headSec;
      headSec->next = head;
      //printing of the lists
      cout<<"List1: "; print(head1);
      cout<<"List2: "; print(head2);
      //checking if intersection is present
    Node* ans=getintersection(head1,head2);
    cout<<ans->data;
  }
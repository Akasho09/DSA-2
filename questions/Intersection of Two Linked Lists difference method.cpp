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
int getlength(Node* head1,Node* head2){
  int l1=0;
  int l2=0;
  while(head1!=NULL){
    l1++;
    head1=head1->next;
  }
  while(head2!=NULL){
    l2++;
    head2=head2->next;
  }
  return l1-l2;
}
Node* getintersection(Node* head1,Node* head2,int d){
  if(d<0){
    while(d++!=0){ head2=head2->next;}}
    else {while(d--!=0) head1=head1->next;}
    while(head1!=NULL){
    if(head2==head1) return head1;
  head2=head2->next;
      head1=head1->next;
    }
    return NULL;
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
   int d= getlength(head1,head2);
   Node* temp= getintersection(head1,head2,d);
    cout<<temp->data;
  }
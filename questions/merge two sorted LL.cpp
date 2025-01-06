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
void insert2(Node* &m,Node* &cur,int data){
  Node* temp=new Node(data);
  if(m==NULL) {
    m=temp;
  }
  if(cur!=NULL){
  cur->next=temp;
  temp->next=NULL;
  }
  cur=temp;
}
Node* mer(Node* head1,Node* head2){
  Node* cur=NULL;
  Node* mergedLL=NULL;
  Node* t1=head1;
  Node* t2=head2;
  while(t1!=NULL && t2!=NULL){
    if(t1->data < t2->data){
     insert2(mergedLL,cur,t1->data);
      t1=t1->next;
    }
    else {
      insert2(mergedLL,cur,t2->data); 
      t2=t2->next;
    }
  }
  while(t1!=NULL){
  insert2(mergedLL,cur,t1->data);
    t1=t1->next;

}
   while(t2!=NULL){
  insert2(mergedLL,cur,t2->data);
     t2=t2->next;
  }
  return mergedLL;
}
  int main() {
      // creation of both lists 
      Node* head1 = NULL;
      insertNode(head1,4);
      insertNode(head1,2);
      insertNode(head1,1);
      Node* head2=NULL;
    insertNode(head2,4);
    insertNode(head2,3);
    insertNode(head2,1);
   Node* head=mer(head1,head2);
    print (head);
      
  }
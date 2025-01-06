#include <iostream>
#include <unordered_map>
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
void insertNode(Node* &head,int data){
 Node* temp=new Node(data);
  temp->next=head;
  head=temp;
}
Node* first(Node* head){
  if(head==NULL || head->next==NULL) return NULL;
  Node* fast=head;
 Node* slow=head;
  while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow){
      slow=head;
      while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
      }
      return slow;
    }
  }
  return NULL;
}
int main(){
  Node* head = new Node(1);
  Node* second = new Node(2);
  Node* third = new Node(3);
  Node* fourth = new Node(4);
  Node* fifth = new Node(5);

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
   // Create a loop
  fifth->next=third;
  Node* temp=first(head);
  cout<<temp->data;

}
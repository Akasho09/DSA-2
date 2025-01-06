#include <iostream>
using namespace std;
class Node{
public:
  int data;
Node* next;
  Node(int data,Node* next){
    this->data=data;
    this->next=next;
  }
   Node(int data){
   this->data=data;
   this->next=NULL;
   }
};
int lengthis(Node* head){
  if(head==NULL || head->next==NULL) return 0;
  int length=0;
  Node* fast = head ;
  Node* slow = head ;
  while ( fast!=NULL && fast->next!=NULL ){
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow){
      slow=slow->next;
      length=1;
      while(fast!=slow){
        slow=slow->next;
        length++;
      }
      return length;
    }
  }
  return 0;
} 

int main(){
  Node* head=new Node(6);
  Node* first=new Node(5);
  Node* second=new Node(4);
  Node* third=new Node(3);
  Node* fourth=new Node(2);
  Node* fifth=new Node(1);
  head->next=first;
  first->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  //creating a loop
  fifth->next=second;
  cout<<lengthis(head);
}
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        next=nullptr;
    }
       Node(int data,Node* next){
        this->data=data;
        this->next=next;
       }
};
Node* singlyll(Node* &head,int data){
Node* temp=new Node(data,head);
head=temp;
return head;
}
void print(Node* head){
  Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  cout<<endl;
}
Node* deleteduplicates(Node* head){
  if(head==NULL || head->next==NULL)
    return head;
    Node* dummy=new Node(-1);
    Node* cur=dummy;
   Node* temp=head;
   Node* prev=NULL;
   while(temp!=NULL){
   if(temp->data==temp->next->data){
     int n=temp->data;
     while(n==temp->data && temp!=NULL){
       Node* nxt=temp->next;
       temp->next=NULL;
       if(prev!=NULL) {
         prev->next=nxt;
         temp=nxt;
       }
       else{
         Node* del=temp;
         temp=temp->next;
         delete del;
       } 
     }
   }
     else{
       prev=temp;
       temp=temp->next;
     }
     cur->next=prev;
      cur=prev; 
  }
  return dummy->next;
}
int main(){
Node* head=NULL;
    singlyll(head,5);
  singlyll(head,5);
singlyll(head,4);
singlyll(head,3);
singlyll(head,3);
singlyll(head,2);
  singlyll(head,1);
print(head);
  head=deleteduplicates(head);
  print(head);
}
#include <iostream>
#include<vector>
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
Node* rev(Node* head){
  if(head==NULL || head->next==NULL) return head;
  Node* newhead=rev(head->next);
  Node* temp=head->next;
  temp->next=head;
  head->next=NULL;
    return newhead;
}
bool check(Node* head){
  if(head->next==NULL) return true;
  Node* fast=head;
  Node* slow=head;
  while(fast->next!=NULL && fast->next->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
  }
  Node* revhead=rev(slow->next);
  Node* temp1=head;
  Node* temp2=revhead;
  while(temp2!=NULL){
    if(temp1->data!=temp2->data) return false;
    temp1=temp1->next;
    temp2=temp2->next;
  }
  return true;
}
int main() {
  int arr[]={1,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);  
   int ans = check(head);
  if(ans) cout<<"true";
  else cout<<"false";
}
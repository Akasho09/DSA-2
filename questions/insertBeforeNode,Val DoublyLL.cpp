#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node* back;
public:
  Node(int data,Node* next,Node* back){
   this-> data=data;
    this->next=next;
   this-> back=back;
  }
public: 
Node(int data){
 this-> data=data;
  next=nullptr;
  back=nullptr;
}

};
void print(Node* head){
  while(head){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}
Node* convert(int arr[],int n){
  Node* head=new Node(arr[0]);
  Node* prev=head;
  for(int i=1;i<n;i++){
    Node* temp=new Node(arr[i],nullptr,prev);
    prev->next=temp;
    prev=temp;
  }
  return head;
}
Node* insertbK(Node* head,int val,int k){
  Node* temp=head;
  if(k==1){
   Node* newhead=new Node(val,temp,nullptr);
    temp->back=newhead;
    return newhead;
  }
  int cnt=1;
  while(temp){
    if(cnt==k){
      Node* newele=new Node(val,temp,temp->back);
      temp->back->next=newele;
      temp->back=newele;
      break;
    }
    cnt++;
    temp=temp->next;
  }
  return head;
}
Node* insertbVal(Node* head,int val){
  Node* temp=head;
  while(temp){
    if(temp->data==head->data){
      Node* newele=new Node(val,temp,temp->back);
      temp->back->next=newele;
      temp->back=newele;
      break;
    }
        temp=temp->next;
  }
  return head;
}
int main(){
  int arr[]={4,10,3,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);
 // head=insertbK(head,20,4);
  head=insertbVal(head,3);
  print(head); 
}
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
void print(Node* head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}

 Node* convert(int arr[],int n){
   Node* head= new Node(arr[0]);
   Node* mover=head;
   for(int i=1;i<n;i++){
     Node* temp = new Node(arr[i]);
     mover->next=temp;
     mover=temp;
   }
   return head;
 }
  Node* insertk(Node* head,int k){
 Node* value=new Node(k);
 if(head==nullptr){
    head=value;
    return head;
 }
    Node* temp=head;
    while(temp){
      if(temp->next==nullptr){
        temp->next=value;
       // value->next=nullptr;
        break;
      }
      temp=temp->next;
    }
   return head;
 }
int main(){
int arr[]={2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
Node* head=convert(arr,n);
 head=insertk(head,6);
 print(head);
}
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
 Node* insertk(Node* head,int x,int k){
   Node* temp=head;
   Node* naya=new Node(x);
   if(k==head->data){
     head=naya;
     head->next=temp;
     return head;
     
   }
   while(temp!=nullptr){
     if(temp->next->data==k){  
       naya->next=temp->next;
       temp->next=naya;
       break;
     }
     temp=temp->next;
   }
   return head;
 }
int main(){
int arr[]={3,5,7,9};
int n=sizeof(arr)/sizeof(arr[0]);
Node* head=convert(arr,n);
 head=insertk(head,6,3);
 print(head);
}
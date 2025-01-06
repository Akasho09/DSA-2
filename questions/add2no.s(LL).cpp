#include <iostream>
#include<stack>
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
Node* add2LL(Node* head1,Node* head2){
   //brute Force
  /*int carry=0;
  Node* temp1=head1->next;
  Node* temp2=head2->next;
int sum=head1->data+head2->data;
  int summ=0;
  if(sum>=10){
    carry=1;
    summ=sum-10;
  }
  else{
    summ=sum;
    carry=0;
  }
  Node* sumhead=new Node(summ);
  Node* mover=sumhead;
  while(temp1!=NULL && temp2!=NULL){
    int sum=carry+temp1->data+temp2->data;
    int summ=0;
   if(sum>=10){
     summ=sum-10;
     carry=1;
   }
    else{
   summ=sum;
      carry=0;
    }
   Node* temp=new Node(summ);
    mover->next=temp;
    mover=temp;
    temp1=temp1->next;
    temp2=temp2->next;
  }
  while(temp1){
      int sum=carry+temp1->data;
    int summ=0;
    if(sum>=10){
      summ=sum-10;
      carry=1;
    }
    else{
      summ=sum;
      carry=0;
    }
    Node* temp=new Node(summ);
    mover->next=temp;
    mover=temp;
    temp1=temp1->next;
  }
  while(temp2){
    int sum=carry+temp2->data;
    int summ=0;
    if(sum>=10){
      summ=sum-10;
      carry=1;
    }
    else{
      summ=sum;
      carry=0;
    }
    Node* temp=new Node(summ);
    mover->next=temp;
    mover=temp;
    temp2=temp2->next;
  }
  if(carry==1){
    Node* temp=new Node(1);
    mover->next=temp;
    mover=temp;
  }*/
  
 //OPTIMAL
  Node* sumhead=new Node();
  Node* mover=sumhead;
  int carry =0;
  while(head1!=NULL || head2!=NULL || carry){
    int sum=0;
    if(head1!=NULL){
      sum+=head1->data;
     head1= head1->next;
    }
    if(head2!=NULL){
      sum+=head2->data;
      head2=head2->next;
    }
    sum+=carry;
    carry=sum/10;
    Node* temp=new Node(sum%10);
    mover->next=temp;
    mover=temp;
  }
  return sumhead->next;
}
int main() {
  int arr1[]={2,4,9};
  int n1=sizeof(arr1)/sizeof(arr1[0]);
  Node* head1=convert(arr1,n1);
 // print (head1);
  int arr2[]={5,6,4,9};
  int n2=sizeof(arr2)/sizeof(arr2[0]);
  Node* head2=convert(arr2,n2);
 // print (head2);
  Node* newhead=add2LL(head1,head2);
  print (newhead);
}
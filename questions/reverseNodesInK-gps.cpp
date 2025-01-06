#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    public:
    node(int data){
        this->data=data;
        next=nullptr;
    }
       node(int data,node* next){
        this->data=data;
        this->next=next;
       }
};
node* singlyll(node* head,int data){
node* temp=new node(data,head);
head=temp;
return head;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
node* head=NULL;
singlyll(head,1);
singlyll(head,2);
singlyll(head,3);
singlyll(head,4);
singlyll(head,5);
print(head);
}
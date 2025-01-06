#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
};
node* convert(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
     node* temp =new node(arr[i]);
     mover->next=temp;
     mover=temp;
    }
    return head;
}
int length(node* head){
    int cnt=0;
    while(temp){//while(temp!=null)
      cout<<temp->data<<" ";
      temp=temp->next;
      cnt++;
     }
     return cnt;
}
int main(){
    vector<int> arr{2,3,4,5};
    node* head = convert(arr);
    // cout<<head->data;
     node*temp=head;
     while(temp){//while(temp!=null)
      cout<<temp->data<<" ";
      temp=temp->next;
     }
     cout<<endl;
     cout<<length(head);
}
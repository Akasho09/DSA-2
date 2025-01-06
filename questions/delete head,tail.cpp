#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
    Node* convert(int arr[],int n){
        Node* head= new Node(arr[0]);
        Node* mover=head;
        for(int i=1;i<n;i++){
            Node* temp=new Node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
             return head;
    }
    void print(Node* head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;

    }
   Node* deletehead( Node* head){
        if(head==NULL) return head;
        Node* temp =head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* deleteTail(Node* head){
        Node* temp=head;
        if(head==NULL || head->next==NULL) return NULL;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
        return head;
    }
int main(){
    int arr[]={2,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* head = convert(arr,n);
      head=deletehead(head);
      print(head);
      head=deleteTail(head);
      print(head);
}
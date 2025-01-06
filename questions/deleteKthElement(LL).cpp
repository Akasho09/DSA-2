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
   Node* deletek(Node* head,int k){
     if(head==nullptr) return head;
     if(k==0){
       Node* temp=head;
       head=head->next;
       delete(temp);
         return head;
     }
   int cnt=0;
   Node* temp=head;
   while(temp){
     if(cnt==(k-1)) {
       Node* current=temp->next;
       temp->next=temp->next->next;
           delete current;
     break;
   }
  temp=temp->next;
   cnt++;
   }
   return head;
   }
  int main(){
  int arr[]={2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convert(arr,n);
   head=deletek(head,1);
   print(head);
  }
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data1){
       this->data=data1;
        prev=nullptr;
        next=nullptr;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }cout<<"Memory free from mode with data"<<val<<endl;
    }
};
int length(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
void print(Node* head){
    Node* reffer=head;
    while(reffer){
        cout<<reffer->data<<" ";
        reffer=reffer->next;
    }

}
Node* convert(vector<int>arr){
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    return head;
}
Node* insertAtHead(Node* head, int d) {
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
    }else{
    Node* temp = new Node(d);
    if (head != nullptr) {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
    }
    return head;
}

Node* InserAttail(Node* head,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
    }else{
     Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    Node* temp=new Node(d);
    // temp->next=tail->next;
    temp->prev=tail;
    tail->next=temp;
    }
    return head;
}
Node* InsertAtPosition(Node* head,int position,int val){
    Node* temp=new Node(val);
    int cnt=0;
    Node* posi=head;
    while(cnt<position-1){
        posi=posi->next;
        cnt++;
    }
    temp->next=posi->next;
     posi->next->prev=temp;
    temp->prev=posi;
    posi->next=temp;
   
    return head;
}
Node* delPosi(Node* head,int pos){
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete(temp);
    }else{
        Node* curr=head;
        Node* pre=NULL;
    int cnt=1;
    Node* posi=head;
    while(cnt<pos){
        pre=curr;
        curr=curr->next;
        cnt++;
    }
   curr->prev=nullptr;
   pre->next=curr->next;
   curr->next=nullptr;
   delete curr;
    // posi->next=posi->next->next;
    // posi->next->next=NULL;
    // posi->next->prev=NULL;
    // delete(posi->next->next);
    // delete(posi->next->prev);
    }
    return head;
}

int main() {
    vector<int>arr={1,3,5};
    Node* head=convert(arr);
//    Node* node1=new Node(10);
//    Node* head=node1;
    print(head);
    cout<<endl;
    
    head=insertAtHead(head,11);
    print(head);
    cout<<endl;
    
    head=InserAttail(head,15);
     print(head);
     cout<<endl;
     

     head=InserAttail(head,14);
     print(head);
     cout<<endl;
     cout<<"enter the position at which u want to insert the new node:"<<endl;
     int position;
    cin>>position;
    cout<<"Enter the value to be inserted"<<endl;
    int val;
    cin>>val;
    head=InsertAtPosition(head,position,val);
    print(head);
    cout<<endl;
    
     cout<<"enter the position at which u want to delete node:"<<endl;
     int delposi;
    cin>>delposi;
    head=delPosi(head,delposi);
    print(head);
    cout<<head->data;
    return 0;
}
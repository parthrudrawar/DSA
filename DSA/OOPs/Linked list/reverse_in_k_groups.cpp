#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data1){
        data=data1;
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
    return
     head;
}
    Node* reverse(Node* head){
        if(head==NULL && head->next==NULL){
        return head;
        }
        Node* curr=head;
        Node* pre=NULL;
        Node* forward=NULL;
        while(curr!=NULL){
         forward=curr->next;
         curr->prev=forward;
        curr->next=pre;
        pre=curr;
        curr=forward;
    }
 return pre;
}
Node* reverseK(Node*head,int k,int n){
        Node* curr=head;
        Node* pre=NULL;
        Node*forward=NULL;
        
    for(int i=1;i<n;i++){
       forward=curr->next;
       curr->prev=forward;
       curr->next=pre;
       pre=curr;
       curr=forward;
        
        
    }
    Node* k=reverseK(pre,k,n);
    // head=k;
    return pre;
}
int main() {
    vector<int>arr={1,3,5};
    Node* head=convert(arr);
    print(head);
    cout<<endl;
    head= reverse(head);
    print(head);
    cout<<"Eneter the value of K"<<endl;
    int k;
    cin>>k;
    head=reverseK(head,k, length(head));
    return 0;
}
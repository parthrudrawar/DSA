#include<iostream>
#include<vector>
using namespace std;
class Node
{
public:
    int data;
   
   
Node* next;

    Node(int data){
        this->data=data;
        next=nullptr;
      
    }
   
};
Node* convert(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        

    }
    return head;

}
Node* print(Node* head){
    Node* now=head;
    while(now!=NULL){
        cout<<now->data<<" ";
    now=now->next;
    }
    cout<<endl;
}
Node* reverse(Node* head){

     Node*curr=head;
       Node* prev=nullptr;
       Node* forward=nullptr;
       while(curr){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
       }
       return head;
}


int main() {
    vector<int>vec={1,3,5,7,9};
    
    Node* head=convert(vec);
    print(head);
    head=reverse(head);
    print(head);
    return 0;
}
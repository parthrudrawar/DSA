#include<iostream>
#include<vector>
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
Node* convert_to_ll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        //or mover=mover->next;

    }
    return head;

}
Node* delHead(Node* head){
Node* temp=head;
head=head->next;
delete(temp);
return head;
}
void print(Node* head){
    Node*store=head;
     while(store){
     cout<<store->data<<" ";
     store=store->next;       
    }
}
int main() {
    vector<int>arr={3,1,2,4};
    Node* head=convert_to_ll(arr);
    
     head=delHead(head);
     print(head);
    // while(store){
    //  cout<<store->data<<" ";
    //  store=store->next;       
    // }

    return 0;
}
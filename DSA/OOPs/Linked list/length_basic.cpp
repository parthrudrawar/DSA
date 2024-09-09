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
Node* convert(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
       
    }
    return head;
}
int length(Node* head){
      int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main() {
    vector<int>arr={1,8,2,3,4,4,5,6,6,7,8,};
     Node* head=convert(arr);
    Node* store=head;
    while(store){
        cout<<store->data<<" ";
        store=store->next;
    }
    cout<<endl;
    cout<<length(head);
    return 0;
}
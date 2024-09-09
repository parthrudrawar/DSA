#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int data1){
        data=data1;
        next=nullptr;
    }
};
Node* Convert(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
 }
int main() {
    vector<int>arr={1,2,3,4,5};
    Node* head=Convert(arr);
    Node* store=head;
    while(store){
        cout<<store->data<<" ";
        store=store->next;
    }
    return 0;
}
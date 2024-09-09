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
int lengthofll(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int search(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val)return 1;
        temp=temp->next;
    }
    return 0;
}
int main() {
    vector<int>arr={3,1,2,4};
    Node* head=convert_to_ll(arr);
    Node*store=head;
    while(store){
     cout<<store->data<<" ";
     store=store->next;       
    }
    // cout<<head;
    cout<<endl;
    cout<<lengthofll(head);
    int val;
    cout<<"eneter the value of val u wamn tot search:"<<endl;
    cin>>val;
    cout<<search(head,val);
    return 0;
}
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
Node* ConvertArr(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
return head;
}
void print(Node* head){
    Node* reffer=head;
    while(reffer){
        cout<<reffer->data<<" ";
        reffer=reffer->next;
    }

}
Node* deltail(Node* head){
    Node* temp=head;
    if(head==NULL||head->next==NULL)return NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;
    return head;
}
int main() {
    vector<int>arr={1,2,3,4,5};
    Node* head= ConvertArr(arr);
    print(head);
    cout<<endl;
    head=deltail(head);
    print(head);
    
    
    
    return 0;
}
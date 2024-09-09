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
// Node* deltail(Node* head){
//     Node* temp=head;
//     if(head==NULL||head->next==NULL)return NULL;
//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//     delete(temp->next);
//     temp->next=nullptr;
//     return head;
// }
Node* insertathead(Node* head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
return head;
}
Node* insertattail(Node* tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    return tail;
}
Node* insertrand(Node* head,int position,int val){
    if(position==1){
        insertathead(head,val);
        return head;
    }
    Node* temp=head;
    int cnt=0;
    while(cnt<position){
        temp=temp->next;
        cnt++;
    }
    Node* Nodetoinsert=new Node(val);
    Nodetoinsert->next=temp->next;
    temp->next=Nodetoinsert;
    return head;
}
int main() {
    vector<int>arr={1,2,3,4,5};
     Node* head= ConvertArr(arr);
         print(head);
    // Node* head=new Node(arr[0]);
    cout<<endl;
    head=insertathead(head,7);
    print(head);
    cout<<endl;
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    tail = insertattail(tail, 9);
    print(head);   
    // head=deltail(head);

    int pos;
    cout<<"Eneter the position at which u wan to inser the elemenmt:"<<endl;
    cin>>pos;

    int num;
    cout<<"Enete the number u wan t to insert:"<<endl;
    cin>>num;    
    head=insertrand(head,pos,num);
    print(head); 
    
    
    return 0;
}
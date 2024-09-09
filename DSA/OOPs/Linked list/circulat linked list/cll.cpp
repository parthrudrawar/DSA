#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        this-> data=data1;
        this ->next=nullptr;
    }
    ~Node() {
    int value = this->data;
    if (this->next != nullptr) {
        delete next;
        next = nullptr;
    }
    cout << "Memory freed at value " << value << endl;
}

};
Node* InsertNode(Node*  tail,int element,int d){
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }else{
        Node* curr=tail;
    
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
    return tail;
}
void  print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<< " ";
         tail=tail->next;
    }   while(tail!=temp);
    cout<<endl;
}
Node* deelete(Node* tail,int value){
    if(tail==NULL){
        cout<<"list is empty."<<endl;
    }else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
    return tail;
}
// Node* convert(vector<int>arr){
//     Node* tail= new Node(arr[0]);
    
//     for(int i=1;i<arr.size();i++){
//         Node* temp= new Node(arr[i]);
//         tail->next=temp;
//         tail=temp;
//     }
//     return tail;
// }
int main() {
    // vector<int>arr={1,3,5};
    // Node* tail=convert(arr);
    Node* tail=NULL;
    tail=InsertNode(tail,1,1);
     print(tail);
      
    tail=InsertNode(tail,1,2);
    print(tail);
    cout<<endl;
    tail=deelete(tail,1);
    print(tail);
    return 0;
}
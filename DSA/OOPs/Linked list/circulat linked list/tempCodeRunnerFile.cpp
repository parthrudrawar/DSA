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
    ~Node(){
        int value=this->data;
        if(this->next=NULL){
            delete next;
            next=NULL;
        }cout<<"memory free at value"<<value<<endl;
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
void  print(Node* &tail){
    Node* temp=tail;
    do{
        cout<<temp->data<< " ";
         tail=tail->next;
    }   while(temp->next!=temp);
}
Node* convert(vector<int>arr){
    Node* tail= new Node(arr[0]);
    
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        tail->next=temp;
        tail=temp;
    }
    return tail;
}
int main() {
    vector<int>arr={1,3,5};
    Node* tail=convert(arr);
    
    tail=InsertNode(tail,1,1);
     print(tail);
      
    tail=InsertNode(tail,2,2);
    print(tail);
    return 0;
}
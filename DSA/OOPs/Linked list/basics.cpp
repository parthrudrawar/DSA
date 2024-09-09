#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
     Node(int data1){
        data=data1;
        next=nullptr;//to initialise it to nullpointer all the way
    }
};

int main() {
    // vector<int>arr={1,2,3,4};
    Node* y=new Node(3,nullptr);
    cout<<y->data;// for data 
    cout<<y;  /// for addresss
  
    return 0;
}
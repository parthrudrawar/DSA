#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* createTree(Node* root){
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the value at left "<<endl;
    root->left=createTree( root->left);
    cout<<"Enter the value at right "<<endl;
    root->right=createTree( root->right);
}
int main() {
    Node * root=NULL;
    createTree(root);
    return 0;
}
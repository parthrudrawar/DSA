#include<iostream>
#include<queue>
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
    int data;
    cout<<"Enetr the data"<<endl;
    cin>>data;
    root=new Node(data);

    if(data==-1)return NULL;
    cout<<"Enter the left side "<<endl;
    root->left=createTree(root->left);
    cout<<"Enter the right side"<<endl;

    root->right=createTree(root->right);
}
Node* levelOrderTranverse(Node* root){
    if (root == nullptr) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data;
            if(temp->left){
                q.push(temp->left);
            }
              if(temp->right){
                q.push(temp->right);
            }
        }
    }

}
int main() {
  Node* root=NULL;
  createTree(root);  
  levelOrderTranverse(root);
    return 0;
}
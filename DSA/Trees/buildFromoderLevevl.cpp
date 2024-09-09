#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildFromLevel(Node* &root) {
    queue<Node*> q;
    cout << "Enter the data for root node: ";
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        int leftData, rightData;
        cout << "Enter the left child of " << temp->data << " (-1 for no child): ";
        cin >> leftData;
        if (leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        
        cout << "Enter the right child of " << temp->data << " (-1 for no child): ";
        cin >> rightData;
        if (rightData != -1) {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main() {
    Node* root = NULL;
    buildFromLevel(root);
    // Perform any other operations with the binary tree if needed
    return 0;
}

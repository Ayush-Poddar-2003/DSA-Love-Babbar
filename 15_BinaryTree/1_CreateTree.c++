#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree(Node* root){
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;

    root = new Node(data);
    if(data == -1) return NULL;

    cout << "Enter the data to insert at left : " << endl;
    root->left = createTree(root->left);
    cout << "Enter the data to insert at right : " << endl;
    root->right = createTree(root->right);

    return root;
}

int main(){
    Node *root = NULL;
    root = createTree(root);

    return 0;
}
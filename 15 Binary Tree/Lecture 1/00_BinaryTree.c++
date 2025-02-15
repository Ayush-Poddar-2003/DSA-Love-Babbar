#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

Node* createTree(){
    cout << "Enter value for node : " ;
    int value;
    cin >> value;

    if(value==-1){
        return NULL;
    }
    else{
        Node* root = new Node(value);

        cout << "Adding to left of " << root->data << endl;
        root->left = createTree();

        cout << "Adding to right of " << root->data << endl;
        root->right = createTree();

        return root;
    }
}

void preOrderTraversal(Node* root)
{
    if(root==NULL) 
        return;
    else{
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void inOrderTraversal(Node* root){
    if(root==NULL) 
        return;
    else{
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

void postOrderTraversal(Node* root){
    if(root==NULL) 
        return;
    else{
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node* root = createTree();

    // cout << "Root value " << root->data;

    cout << "\nPreOrderTraversal : " << endl ;
    preOrderTraversal(root);

    cout << "\nInOrderTraversal : " << endl ;
    inOrderTraversal(root);

    cout << "\nPostOrderTraversal : " << endl ;
    postOrderTraversal(root);

    return 0;
}
#include<iostream>
using namespace std;

//Node Structure
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

//Function to create node
Node* createTree(){
    int value;
    cout << "Enter the value for Node : " << endl;
    cin >> value;

    if(value==-1) 
        return NULL;
    else{
        Node* root = new Node(value);
        //1 case hum kr rhe baaki recurssion
        cout << "Adding left child for " << value << endl;
        root->left = createTree();

        cout << "Adding rigth child for " << value << endl;
        root->right = createTree();

        return root;
    }
}


// TRAVERSAL ----------------
void preOrderTraversal(Node* root){
    //if empty
    if(root == NULL) 
        return;
    
    //NLR
    //N
    cout << root->data << " ";
    //L
    preOrderTraversal(root->left);
    //R
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    //if empty
    if(root == NULL) 
        return;
    
    //LNR
    //L
    inOrderTraversal(root->left);
    //N
    cout << root->data << " ";
    //R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    //if empty
    if(root == NULL) 
        return;
    
    //LRN
    //L
    postOrderTraversal(root->left);
    //R
    postOrderTraversal(root->right);
    //N
    cout << root->data << " ";
}

int main(){

    Node* root = createTree();
    return 0;
}
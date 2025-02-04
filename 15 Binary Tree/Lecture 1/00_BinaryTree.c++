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

int main()
{
    Node* root = createTree();

    cout << "Root value " << root->data;

    return 0;
}
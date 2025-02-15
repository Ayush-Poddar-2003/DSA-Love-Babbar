#include<iostream>
#include<queue>
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


Node* buildBST(int val, Node* root)
{
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    else{
        if(val <= root->data){
            //val in left subtree
            root->left = buildBST(val, root->left);
        }
        else{
            //val in right subtree
            root->right = buildBST(val, root->right);
        }
    }
    return root;
}

//1
void createTree(Node* &root)
{
    cout << "Enter the value for Node : ";
    int val;
    cin >> val;

    //Check if value isn't -1
    while(val!=-1)
    {
        //Tree me insert
        root = buildBST(val, root);

        //Ask next val
        cout << "Enter the value for Node : ";
        cin >> val;
    }
}


void levelOrderTraversal(Node* root){
    queue<Node*> q;
    
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << front->data << " ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }

    }
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main(){

    Node* root = NULL;
    createTree(root);

    cout << "\n\nLevel Order Traversal : " << endl;
    levelOrderTraversal(root);

    cout << "\n\nIn Order Traversal : ";
    inOrderTraversal(root);
    cout << "\n\nPre Order Traversal : ";
    preOrderTraversal(root);
    cout << "\n\nPost Order Traversal : ";
    postOrderTraversal(root);

    return 0;
}
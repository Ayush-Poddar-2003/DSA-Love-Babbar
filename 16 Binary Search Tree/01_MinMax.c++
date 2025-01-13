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

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int getMin(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->left!=NULL){
        root = root->left; 
    }
    return root->data;
}

int getMax(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->right!=NULL){
        root = root->right; 
    }
    return root->data;
}

int main(){

    Node* root = NULL;
    createTree(root);

    cout << "\nLevel Order Traversal : " << endl;
    levelOrderTraversal(root);

    cout << "\nIn Order Traversal : ";
    inOrderTraversal(root);

    cout << "\n\nMin Element : " << getMin(root);
    cout << "\nMax Element : " << getMax(root);

    return 0;
}
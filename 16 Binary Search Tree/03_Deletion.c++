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

int getMax(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->right!=NULL){
        root = root->right; 
    }
    return root->data;
}

Node* deleteNode(Node* root, int target)
{
    if(root==NULL){
        return NULL;
    }

    if(root->data == target){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 left child
        if(root->left!=NULL && root->right==NULL){
            Node* leftChild = root->left;
            root->left = NULL;
            delete root;
            return leftChild;
        }
        // 1 right child
        if(root->left==NULL && root->right!=NULL){
            Node* rightChild = root->right;
            root->right = NULL;
            delete root;
            return rightChild;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int lessMax = getMax(root->left);
            //replace
            root->data = lessMax;
            //delete pre existing lessMax
            root->left = deleteNode(root->left, lessMax);
            return root;
        }
    }
    else{
        // not match
        if(target<root->data){
            root->left = deleteNode(root->left, target);
        }
        else{
            root->right = deleteNode(root->right, target);
        }
    }

    return root;
}


int main(){

    Node* root = NULL;
    createTree(root);

    cout << "\nLevel Order Traversal : " << endl;
    levelOrderTraversal(root);



    return 0;
}
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

Node* createTree(){
    int value;
    cout << "Enter root node value : ";
    cin>>value;

    if(value == -1)
        return NULL;

    else{
        Node* root = new Node(value);
        root->left = createTree();
        root->right = createTree();
        return root;
    }
}


void LevelOrderTraversal(Node* root){

    if(root == NULL)
        return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << front->data << " ";

            //Bchho ko add kro
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }

}

int main(){

    Node* root = createTree();
    // 10 50 40 -1 -1 -1 30 20 -1 -1 -1

    // 10
    // 50 30
    // 40 20

    LevelOrderTraversal(root);

    return 0;
    
}
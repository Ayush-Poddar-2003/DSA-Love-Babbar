// https://www.youtube.com/watch?v=5NiXlPrLslg&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=473s&ab_channel=CodeHelp-byBabbar
// 26:55 to 30:00

#include<iostream>
#include<queue>
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

void LevelOrderTraversal(Node *root){
    queue<Node*> q; 
    q.push(root);
    q.push(NULL); //to depict that one level has completed

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp==NULL){ //time to move to next level
            cout << endl;
            if(!q.empty()){
                q.push(NULL); //Child elements aa chuke honge, so next level
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

int main(){
    Node *root = NULL;
    root = createTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    LevelOrderTraversal(root);

    /*
1
3 5 
7 11 17   
*/
    return 0;
}
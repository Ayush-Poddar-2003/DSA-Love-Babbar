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
    cout << "Enter value for root : ";
    int val;
    cin >> val;

    if(val==-1) return NULL;
    else{
        Node* root = new Node(val);
        root->left = createTree();
        root->right = createTree();
        return root;
    }
}

void levelOrderTravesal(Node* root)
{
    if(root==NULL) 
        return;
    else
    {
        queue<Node*> q;
        q.push(root);
        q.push(NULL); //1st lvl completed

        while(!q.empty())
        {
            Node* front = q.front();
            q.pop();

            if(front==NULL) //End of level
            {
                cout << endl;
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                cout << front->data << " ";

                if(front->left!=NULL)
                    q.push(front->left);

                if(front->right)
                    q.push(front->right);
            }
        } 
    }
}

int main()
{
    Node* root = createTree();
    levelOrderTravesal(root);

    return 0;
}
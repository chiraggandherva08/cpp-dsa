#include<iostream>
#include<queue>
using namespace std;

int maxLevel = 0;
vector<int> vec;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
    }

    // iterative solution.
    void leftView(Node* root){
        if(root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (q.empty() == false){
            Node* leftMost = q.front();
            cout << leftMost->data << endl;

            int size = q.size();

            for(int i=0; i<size; i++){
                Node* curr = q.front();
                q.pop();

                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
            }
        }
    }

    // recursive way.
    void leftView_rec(Node* root, int level){
        if(root == NULL) return;

        if(maxLevel < level){
            cout << root->data << endl;
            vec.push_back(root->data);
            maxLevel = level;
        }
        leftView_rec(root->left, level+1);
        leftView_rec(root->left, level+1);
    }
};



int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(10);
    root->left->right = new Node(93);
    root->right->left = new Node(89);
    root->right->right = new Node(0);
    root->left->left->left = new Node(12);
    root->left->left->right = new Node(0);

    root->leftView(root);
    root->leftView_rec(root, 1);

    return 0;
}
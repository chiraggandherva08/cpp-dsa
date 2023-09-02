#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
    }

    int max_val(Node* root){
        if(root == NULL)
            return INT_MIN;

        int max_v1 = max(max_val(root->left), max_val(root->right));
        return max(max_v1, root->data);
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

    cout << root->max_val(root) << endl;
    return 0;
}
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

    // visit left -> then print root -> visit right
    void inorder(Node* root){
        if (root == NULL)
            return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    // then print root -> visit left -> visit right
    void preorder(Node* root){
        if (root == NULL)
            return;

        cout << root->data << " ";
        inorder(root->left);
        inorder(root->right);
    }

    // visit left -> visit right -> then print root
    void postorder(Node* root){
        if (root == NULL)
            return;

        inorder(root->left);
        inorder(root->right);
        cout << root->data << " ";
    }
};

int main(){
    return 0;
}
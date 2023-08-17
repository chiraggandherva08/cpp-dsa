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

    // size of a binary tree.
    int size(Node* root){
        if(root == NULL)
            return 0;
        
        return size(root->left) + size(root->right) + 1;
    }
};

int main(){
    return 0;
}
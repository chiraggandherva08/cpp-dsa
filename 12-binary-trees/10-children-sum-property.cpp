#include<iostream>
using namespace std;

/*  Children sum property:- 
        sum of both left and right children must be equal to parent.
*/

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
    }

    bool sumProperty(Node* root){
        if(root == NULL) return true;
        if(root->left == NULL && root->right == NULL) return true;
    
        return sumProperty(root->left) && 
        sumProperty(root->right) && 
        (root->data == root->left->data + root->right->data);
    }

};

int main(){
    return 0;
}
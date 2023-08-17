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

    // height of a tree.
    int height(Node* root){
        if(root == NULL)
            return 0;

        return max(height(root->left), height(root->left)) + 1;
    }
};

int main(){
    return 0;
}

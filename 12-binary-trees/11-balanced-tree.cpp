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

    int isTreeBalanced(Node* root){
        if(root == NULL) return 0;

        int lst = isTreeBalanced(root->left);
        int rst = isTreeBalanced(root->right);

        if(lst == -1 || rst == -1) return -1;

        if(abs(lst - rst) > 1) return -1;

        return max(lst, rst) + 1;
    }
};

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(10);
    
    root->left->right = new Node(93);
    root->left->right->right = new Node(93);
    root->left->right->right->right = new Node(93);

    root->right->left = new Node(89);
    root->right->right = new Node(0);
    root->left->left->left = new Node(12);
    root->left->left->right = new Node(0);
    
    cout << root->isTreeBalanced(root) << endl;
    return 0;
}

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

    void printNodes_k(Node* root, int k){
        if(root == NULL)
            return;
        else if(k == 0)
            cout << root->data << " ";

        printNodes_k(root->left, k-1);
        printNodes_k(root->right, k-1);
    }
};

int main(){
    return 0;
}
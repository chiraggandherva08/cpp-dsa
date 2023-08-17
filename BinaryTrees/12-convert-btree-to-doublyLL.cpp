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

    // Time Complexity: O(N);
    // AUX. Space Complexity: O(H);
    Node* bTreeDLL(Node* root, Node* prev = NULL){
        if(root == NULL) return root;

        Node* head = bTreeDLL(root->left);

        if(prev == NULL){
            head = root;
        }
        else {
            root->left = prev;
            prev->right = root;
        }
        prev = root;

        bTreeDLL(root->right);
        return head;
    }
};

int main(){
    return 0;
}
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

    Node* prev = NULL;

    Node* bTreeToCList(Node* root){
        Node* head = convertTo_CDLL(root);
        Node* tail = head;

        while (tail->right != NULL)
            tail = tail->right;

        tail->right = head;
        head->left = tail;
        return head;
    }

    Node* convertTo_CDLL(Node* root){
        if(root == NULL) return root;
        
        Node* head = convertTo_CDLL(root->left);

        if(prev == NULL){
            head = root;
        }
        else {
            prev->right = root;
            root->left = prev;
        }
        prev = root;

        convertTo_CDLL(root->right);
        return head;
    }
};

int main(){
    return 0;
}
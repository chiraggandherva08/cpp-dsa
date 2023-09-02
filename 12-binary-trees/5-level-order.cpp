#include<iostream>
#include <queue>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
    }

    void lever_order(Node* root){
        if(root == NULL) return;
        
        queue<Node*> q;
        q.push(root);

        while(q.empty() == false){
            Node* curr = q.front();
            q.pop();

            cout << curr->data << " ";

            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
    }

    // method 1
    void lever_order_method1(Node* root){
        if(root == NULL) return;

        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while (q.size() > 1){
            Node* curr = q.front();
            q.pop();

            if(curr == NULL){
                q.push(NULL);
                cout << endl;
                continue;
            }
            
            cout << curr->data << " ";

            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
    }

    // method 2
    void lever_order_method2(Node* root){
        if(root == NULL) return;

        queue<Node*> q;
        q.push(root);

        while (q.empty() == false){
            int size = q.size();
            
            for(int o = 0; o < size; o++){
            
                Node* curr = q.front();
                q.pop();

                cout << curr->data << " ";

                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
            }
            cout << endl;
        }
    }
};

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->left->right = new Node(30);
    root->right->left = new Node(30);
    root->right->right = new Node(30);
    root->left->left->left = new Node(40);
    root->left->left->right = new Node(40);

    root->lever_order(root);
    cout << endl;
    
    root->lever_order_method1(root);
    cout << endl;
    
    root->lever_order_method2(root);
    
    return 0;
}
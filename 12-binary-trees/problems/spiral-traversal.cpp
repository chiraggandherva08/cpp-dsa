#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
    }

    void spiralTraversal(Node* root){
        if(root == NULL) return;

        bool left_to_right = true;

        queue<Node*> level;
        level.push(root);

        while(level.empty() == false){
            int size = level.size();

            for(int i=0; i<size; i++){
                Node* curr = level.front();
                level.pop();

                if(left_to_right == true){
                    if(curr->right != NULL) level.push(curr->right);
                    if(curr->left != NULL) level.push(curr->left);
                } else {
                    if(curr->left != NULL) level.push(curr->left);
                    if(curr->right != NULL) level.push(curr->right);
                }
            }
            left_to_right = false;
            cout << endl;
        }
    }
};

int main(){
    return 0;
}
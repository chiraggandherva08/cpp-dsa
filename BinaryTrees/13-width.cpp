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

    int treeWidth(Node* root){
        int maxWidth = 0;

        queue<Node*> que_nodes;
        que_nodes.push(root);

        while(que_nodes.empty() == false){
            int curr_size_queue = que_nodes.size();
            maxWidth = max(maxWidth, curr_size_queue);

            for(int i=0; i<curr_size_queue; i++){
                Node* curr = que_nodes.front();
                que_nodes.pop();

                if(curr->left != NULL) que_nodes.push(curr->left);
                if(curr->right != NULL) que_nodes.push(curr->right);
            }
        }
        return maxWidth;
    }
};

int main(){
    return 0;
}

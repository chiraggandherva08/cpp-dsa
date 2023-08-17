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

        void rightView(Node* root){
            if(root == NULL) return;

            queue<Node*> level;
            level.push(root);

            while (level.empty() == false){
                int size = level.size();

                for(int i=0; i<size; i++){
                    Node* curr = level.front();
                    level.pop();

                    if(i == size - 1) cout << curr->data << endl;
                    if(curr->left != NULL) level.push(curr->left);
                    if(curr->right != NULL) level.push(curr->right);
                }
            }
        }
};

int main(){
    return 0;
}
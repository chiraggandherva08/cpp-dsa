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

        Node* createBtree(int* inorder, int* postorder, int in_start, int in_end, int postorder_index){
           if(in_start > in_end) return NULL;

            Node* root = new Node(postorder[postorder_index]);

            int index_inorder;
            for(int i=in_end; i<in_start; i--){
                if(inorder[i] == root->data){
                    index_inorder = i;
                    break;
                }
            }

            root->left = createBtree(inorder, postorder, in_start, index_inorder-1, postorder_index-1);
            root->right = createBtree(inorder, postorder, index_inorder+1, in_end, postorder_index-1);
            
            return root;
        }
};

int main(){
    return 0;
}

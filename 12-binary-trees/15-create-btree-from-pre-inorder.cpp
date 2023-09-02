#include<iostream>
using namespace std;

int preorder_index = 0;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int data){
            this->data = data;
        }

        Node* createBtree(int* inorder, int* preorder, int in_start, int in_end){
            if(in_start > in_end) return NULL;

            Node* root = new Node(preorder[preorder_index]);
            preorder_index++;

            int index_inorder;
            for(int i=in_start; i<in_end; i++){
                if(inorder[i] == root->data){
                    index_inorder = i;
                    break;
                }
            }

            root->left = createBtree(inorder, preorder, in_start, index_inorder-1);
            root->right = createBtree(inorder, preorder, index_inorder+1, in_end);
            
            return root;
        }
};

int main(){
    return 0;
}

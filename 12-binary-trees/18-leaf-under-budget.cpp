#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }

    int getCount(Node *root, int k){
        queue<Node*> q;
        
        vector<int> costs;
        
        q.push(root);
        q.push(NULL);
        
        int level = 1;
        
        while(q.size() > 1){
            Node* curr = q.front();
            q.pop();
            
            if(curr == NULL){
                level += 1;
                q.push(NULL);
                cout << endl;
                continue;
            }
            else{
                cout << curr->data << " ";
            }
            if(curr->left == NULL && curr->right == NULL){ // we encountered a leaf node.
                costs.push_back(level);
                continue;
            }
            else{
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
        }

        sort(costs.begin(), costs.end());
        int res = 0;
        
        for(int i = 0; i < costs.size(); i++) {
            res += costs[i];
            if(res > k) {
                return i;
            }
        }
        return costs.size();
    }
};

int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->left->right = new Node(30);
    root->right->left = new Node(30);
    root->right->right = new Node(30);
    root->left->left->left = new Node(40);
    root->left->left->right = new Node(40);

    int k = 10;
    int ans = root->getCount(root, k);
    cout << endl << endl << ans << endl;

    return 0;
}

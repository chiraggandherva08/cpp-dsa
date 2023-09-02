#include <iostream>
#include <queue>
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

    void left_boundary(Node *root, vector<int> &l_b)
    {
        if (root->left == NULL && root->right == NULL)
            return;

        l_b.push_back(root->data);

        if (root->left == NULL)
            left_boundary(root->right, l_b);
        else
            left_boundary(root->left, l_b);
    }

    void right_boundary(Node *root, vector<int> &r_b)
    {
        if (root->left == NULL && root->right == NULL)
            return;

        r_b.push_back(root->data);

        if (root->right == NULL)
            right_boundary(root->left, r_b);
        else
            right_boundary(root->right, r_b);
    }

    void leaf_nodes(Node *root, vector<int> &l_n)
    {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
            l_n.push_back(root->data);

        leaf_nodes(root->left, l_n);
        leaf_nodes(root->right, l_n);
    }

    vector<int> boundary(Node *root)
    {
        vector<int> res;

        if (root == NULL)
            return res;

        res.push_back(root->data);

        if (root->right == NULL && root->left == NULL)
            return res;

        vector<int> l_b;
        vector<int> r_b;
        vector<int> l_n;

        if (root->left != NULL)
            left_boundary(root->left, l_b);
        if (root->right != NULL)
            right_boundary(root->right, r_b);

        leaf_nodes(root, l_n);

        for (int i = 0; i < l_b.size(); i++)
            res.push_back(l_b[i]);

        for (int i = 0; i < l_n.size(); i++)
            res.push_back(l_n[i]);

        int n = r_b.size();
        for (int i = 0; i < n; i++)
            res.push_back(r_b[n - (i + 1)]);

        return res;
    }
};

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->left->right = new Node(30);
    root->right->left = new Node(30);
    root->right->right = new Node(30);
    root->left->left->left = new Node(40);
    root->left->left->right = new Node(40);

    vector<int> ans = root->boundary(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

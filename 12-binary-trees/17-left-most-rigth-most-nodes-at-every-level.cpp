#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
    }

    void printCorner(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        queue<Node *> q;
        q.push(root);

        while (q.empty() == false)
        {
            int size = q.size();

            for (int o = 0; o < size; o++)
            {

                Node *curr = q.front();
                q.pop();

                if (o == 0 || o == size - 1)
                {
                    cout << curr->data << " ";
                }

                if (curr->left != NULL)
                {
                    q.push(curr->left);
                }

                if (curr->right != NULL)
                {
                    q.push(curr->right);
                }
            }
        }
    }
};

int main()
{
    return 0;
}

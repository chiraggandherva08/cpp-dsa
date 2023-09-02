#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node* pairwise_rev(Node* prev, Node* curr)
{
    if (curr == NULL)
    {
        return prev;
    }
    else if (curr->next == NULL)
    {
        curr->next = prev;
        prev->next = NULL;

        return curr;
    }

    Node* nprev = prev->next->next;
    Node* ncurr = curr->next->next;

    Node* next_ = pairwise_rev(nprev, ncurr);

    curr->next = prev;
    prev->next = next_;

    return curr;
}


Node* pairwise_swap(Node* node)
{
    if (node->next == NULL)
    {
        return NULL;
    }

    return pairwise_rev(node, node->next);
}

int main()
{
    return 0;
}
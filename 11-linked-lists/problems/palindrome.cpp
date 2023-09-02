#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *rev(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *p1 = head;
    Node *p2 = head->next;

    while (p2 != NULL)
    {
        Node *p3 = p2->next;
        p2->next = p1;

        p1 = p2;
        p2 = p3;
    }
    head->next = NULL;
    return p1;
}

bool isPalindrome(Node *head)
{
    Node *mid = head;
    Node *fs = head;
    Node *middle;

    while (fs->next != NULL && fs->next->next != NULL)
    {
        mid = mid->next;
        fs = fs->next->next;
    }

    Node *head2 = mid->next;
    mid->next = NULL;

    head2 = rev(head2);

    while (head2 != NULL)
    {
        if (head->data != head2->data)
        {
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    return true;
}

int main()
{
    Node *head = new Node(12);
    head->next = new Node(10);
    head->next->next = new Node(30);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(12);

    cout << isPalindrome(head) << endl;
    return 0;
}
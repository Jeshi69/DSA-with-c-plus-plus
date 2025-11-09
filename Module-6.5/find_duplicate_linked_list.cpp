#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

bool find_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *check = tmp->next;
        while (check != NULL)
        {
            if (tmp->val == check->val)
            {
                return true;
            }
            check = check->next;
        }
        tmp = tmp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    if (find_duplicate(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
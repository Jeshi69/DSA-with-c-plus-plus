// taking two doubly linked list as input if they same or not
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val; // data input or fixed assign
    Node *next;
    Node *prev; // node er addrese
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    // First node case
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    // Normal case
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // 2nd input
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }
    // print_forward(head);
    // print_forward(head2);
    Node *t1 = head;
    Node *t2 = head2;
    bool same = true;

    while (t1 != NULL && t2 != NULL)
    {
        if (t1->val != t2->val)
        {
            same = false;
            break;
        }
        t1 = t1->next;
        t2 = t2->next;
    }

    if (t1 != NULL || t2 != NULL)
        same = false;

    if (same)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;    // data input or fixed assign
    Node *next; // node er addrese

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    while (tmp->next != NULL)
    {
      tmp = tmp->next;
    }
    // right now tmp is last node
    tmp->next = newnode; // last node e tailer address add
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // connections
    head->next = a;
    a->next = b;

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    print_linked_list(head);
    return 0;
}
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
void insert_at_tail(Node* &head, Node* &tail ,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
      head = newnode;
      return;

    }
    // right now tmp is last node
    tail->next = newnode; // last node e tailer address add
    tail = tail->next;
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
    Node* tail = new Node(40);

    // connections
    head->next = a;
    a->next = tail;

    insert_at_tail(head,tail, 40);
    insert_at_tail(head, tail,50);
    insert_at_tail(head,tail, 60);
    print_linked_list(head);
    cout <<"tail = "<<tail->val<<endl;
    return 0;
}
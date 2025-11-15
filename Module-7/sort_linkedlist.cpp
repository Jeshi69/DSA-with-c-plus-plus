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
      tail = newnode;
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
}void sort_linked_list(Node* head)
{
        for (Node* i = head; i->next != NULL;i = i->next)//temporary node
    {
        for (Node* j = i->next; j->next != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
                                                                                                                    
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
          break;  
        }
        insert_at_tail(head,tail,val);
    }
    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}
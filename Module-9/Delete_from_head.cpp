#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;//data input or fixed assign
    Node *next;
    Node *prev;// node er addrese

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node* head)
{
 Node* tmp = head;
 while(tmp != NULL)
 {
    cout << tmp->val<<" ";
    tmp = tmp->next;
 }
 cout << endl;
}
void delete_at_head(Node* &head,Node* &tail)
{
    Node* deleteNode = head;
    head = head->next;
     delete deleteNode;
    if(head == NULL)//tail track
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
   
}
int main ()
{ 
Node * head =new Node(10);
Node * a = new Node(20);
Node * tail = new Node(30);

head->next = a;//connection
a->prev = head;

a->next = tail;
tail->prev =a;

delete_at_head(head,tail);
delete_at_head(head,tail);
print_forward(head);


return 0;
}
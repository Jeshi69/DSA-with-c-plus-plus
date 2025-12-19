// paimdrom
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;//data input or fixed assign
    Node *next;
    Node * prev;// node er addrese

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node* head)
{
    Node * tmp = head;
 while(tmp != NULL )
 {
    cout << tmp->val<<" ";
    tmp = tmp->next;
 }
 cout <<endl;
}
void insert_tail(Node* &head,Node* &tail,int val)
{
 Node* newnode = new Node(val);

 if (head == NULL)
 {
    head = newnode;
    tail = newnode;
    return;
 }
 tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void reverse_doubly(Node* head,Node* tail)
{
    for(Node * i = head,* j = tail;i != j && i->prev !=j;i = i->next,j= j->prev)
    {
        swap(i->val,j->val);
    }
}
//paimdrom check
bool is_palimdrom(Node* head,Node* tail)
{   
   while(head != tail && head->prev != tail)
   {
    if (head->val != tail->val)
    {
        return false;
    }
    head = head->next;
    tail = tail->prev;
   }
   return true;
}
int main ()
{ 
Node * head = NULL;
Node * tail = NULL;

int val;

while(true)
{
    cin >> val;
    if(val == -1)
    {
        break;
    }
    insert_tail(head,tail,val);
}


 if(is_palimdrom (head,tail))
 {
    cout <<"YES";
 }
 else{
    cout <<"NO";
 }

return 0;
}

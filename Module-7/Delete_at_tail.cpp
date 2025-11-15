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
}
   void delete_at_tail(Node* head,Node* &tail,int idx) 
   {
    Node* tmp= head;
    for(int i =1;i < idx;i++)
    {
       tmp = tmp->next; 
    }
    Node* deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    tail = tmp;
    
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
    cout <<"tail before delete : "<<tail->val<<endl;
    delete_at_tail(head,tail,3);
    print_linked_list(head);
        cout <<"tail after delete : "<<tail->val<<endl;
    return 0;
}
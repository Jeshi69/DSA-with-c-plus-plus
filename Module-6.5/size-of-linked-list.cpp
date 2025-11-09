#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;//data input or fixed assign
    Node *next;// node er addrese

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
 Node *newnode = new Node(val);
    if(head == NULL)
    {
      head = newnode;
      tail = newnode;
      return;

    }
    // right now tmp is last node
    tail->next = newnode; // last node e tail er address add
    tail = tail->next;
}
int size_at_linked_list(Node* head)
{
     Node *tmp = head;
     int cnt =0;
    while (tmp != NULL)
    {
        
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main ()
{ 
Node* head = NULL;
Node* tail = NULL;
 
int val;
   while(cin >> val){
    insert_at_tail(head,tail,val);
   }
cout <<size_at_linked_list(head)<<endl;
return 0;
}
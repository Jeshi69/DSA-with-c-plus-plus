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
int main()

{   // node create
    Node a(10), b(20), c(30);//object hisabe ache

   // link create
    a.next = &b;
    b.next = &c;
    
    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val<<endl;
    return 0;
}
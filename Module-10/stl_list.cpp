#include <bits/stdc++.h>
using namespace std;
int main ()
{
// list<int> l = {1,2,3,4};
// int a[] = {10,20,30,40};

vector<int> v = {10,20,30};


list<int>l2(v.begin(),v.end());

// for(auto it = l.begin();it != l.end();it++)
// {
//     cout << *it << endl;
// }
cout << l2.size() <<endl;
if(l2.empty())
{
    cout <<" Empty";
}
for(int val : l2)
{
    cout << val << endl;
}

return 0;
}
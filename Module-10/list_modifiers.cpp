#include <bits/stdc++.h>
using namespace std;
int main ()
{ 
list<int> l = {10,20,30};


// list<int>l2;

// l2 = l;// use sortcut method
// l2.assign(l.begin(),l.end());

// l.push_back(50);
// l.push_front(100);
// l.pop_back();

// l.insert(next(l.begin(),2),100);
// cout << *next(l.begin(),2);

//  replace(l.begin(),l.end(),20,100);

auto it = find(l.begin(),l.end(),200);

if(it == l.end()){
    cout << "Not found" <<endl;
}
else{
    cout << "Found"<< endl;
}
for(int val:l)
{
    cout << val <<" ";
}
return 0;
}
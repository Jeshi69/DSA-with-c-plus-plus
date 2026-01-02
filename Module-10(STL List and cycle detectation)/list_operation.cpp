#include <bits/stdc++.h>
using namespace std;
int main ()
{ 
list<int> l = {20,30,40,50,30,60,10};
 l.sort();
// l.sort(greater <int > ());

l.unique();// duplicate remove korte pari

for(int val : l)
{
    cout <<val << endl;
}
return 0;
}
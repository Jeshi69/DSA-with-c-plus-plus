#include <bits/stdc++.h>
using namespace std;
void recursion(int i ,int n)
{
    //base case
    if(i >n)
    {
        return;
    }
     recursion(i+1,n);
    cout << i << endl;
   
}
int main ()
{ 
int n =5;
recursion(1,n);
return 0;
}
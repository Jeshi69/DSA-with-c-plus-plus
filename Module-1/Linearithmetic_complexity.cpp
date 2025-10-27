#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)//o(n)
    {
        for (int j = 1; j < n; j * 2)//o(log n)
        {
            cout << "Hello" << endl; // o(n log n)
        }
    }
    return 0;
}
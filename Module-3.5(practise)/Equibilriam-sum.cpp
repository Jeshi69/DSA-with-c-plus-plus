#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        int rightsum = sum - leftsum - a[i];
        if (rightsum == leftsum)
        {
            cout << i << endl;
            return 0;
        }
        leftsum+=a[i];
    }

    return 0;
}
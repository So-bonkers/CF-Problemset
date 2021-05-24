#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, y = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        y = y + x;
    }
    cout << (double)y / n;
}
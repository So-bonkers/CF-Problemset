#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f[51], m, b = 1001, i;
    for (cin >> n >> m; i < m;)
        cin >> f[i++];
    for (sort(f, f + m); --m - n + 1 >= 0;)
        b = min(f[m] - f[m - n + 1], b);
    cout << b;
}
#include <bits/stdc++.h>
using namespace std;
int k, n, p, q, w[105];
main()
{
    for (cin >> n >> p; p--; n -= !w[k]++)
        cin >> k;
    for (cin >> q; q--; n -= !w[k]++)
        cin >> k;
    cout << (n ? "Oh, my keyboard!" : "I become the guy.");
}

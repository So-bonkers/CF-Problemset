#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    n = k - ++n / 2;
    cout << (n > 0 ? 2 * n : 2 * k - 1);
}
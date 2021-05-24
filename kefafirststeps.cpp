#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, t = 0, l = 0, counter = 0;
    cin >> n;
    while (n--)
    {
        c = t;
        cin >> t;
        c > t ? l = 1 : l++;
        counter = l > counter ? l : counter;
    }
    cout << counter;
}
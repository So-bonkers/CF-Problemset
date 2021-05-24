#include <bits/stdc++.h>
using namespace std;
void reverseStr(string& str);
int main()
{
    string a, b;
    cin >> a >> b;
    reverseStr(a);
    if (a == b)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }
}

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
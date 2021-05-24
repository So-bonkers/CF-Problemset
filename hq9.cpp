#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    cin >> line;
    string x = "H";
    string y = "Q";
    string z = "9";
    size_t foundh = line.find(x);
    size_t foundq = line.find(y);
    size_t found9 = line.find(z);
    if ((foundh == string::npos) && (foundq == string::npos) && (found9 == string::npos))
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES";
        return 0;
    }
}
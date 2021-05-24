#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string str;
    cin >> str;
    regex p("WUB");
    string str_new = regex_replace(str, p," ");
    cout << str_new;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
char a[105];
int main()
{
    int i = 1, f = 1;
    gets(a);
    for (; a[i];)
        f &= (a[i++] < 'a');
    for (i = 0; a[i];)
        putchar(a[i++] ^ f * 32);
}
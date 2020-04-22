#include <bits/stdc++.h>

using namespace std;

void sym(char a, int b)
{
    for(int i = 0; i < b; ++i)
        cout << a;
    cout << '\n';
}

int main()
{
    char a;
    int b;
    cin >> a >> b;
    for(int i = 1; i <= b; ++i)
        sym(a, i);
    return 0;
}
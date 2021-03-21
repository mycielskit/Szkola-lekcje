#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a;
    b = a;
    reverse(b.begin(), b.end());
    if(a != b)
        cout << "NIE";
    else
        cout << "TAK";
    return 0;
}
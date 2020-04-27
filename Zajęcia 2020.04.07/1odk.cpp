#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    short a[10];
    for(auto val : a)
        cin >> val;
    for(short i = 9; i >= 0; i--)
        cout << a[i] << endl;
    return 0;
}
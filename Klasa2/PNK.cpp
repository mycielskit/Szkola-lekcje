#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2;
    cin >> a1 >> a2;
    if(a1 == a2)
        cout << "REMIS";
    else if(a1 - a2 == 1 || a1 - a2 == -2)
        cout << "AREK";
    else
        cout << "ANTEK";
    return 0;
}

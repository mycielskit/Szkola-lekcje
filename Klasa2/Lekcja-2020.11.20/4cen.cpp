#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int n;
    getline(cin, a);
    cin >> n;
    for(char &i : a)
        i += n;
    a.pop_back();
    cout << a;
    return 0;
}
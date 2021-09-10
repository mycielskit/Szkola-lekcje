#include <bits/stdc++.h>

using namespace std;

int pairCombos(int a)
{
    return a * (a - 1) / 2;
}

int main()
{
    int c = 0, n = 1;
    string a;
    set<char> j;
    vector<set<char>> b;
    for(int i = 0; i < 5000; i++)
    {
        j = set<char>();
        cin >> a;
        for(int g = 0; g < a.size(); g++)
        {
            j.insert(a[g]);
        }
        b.push_back(j);
    }
    sort(b.begin(), b.end());
    for(int i = 1; i < b.size(); i++)
    {
        if(b[i] == b[i - 1])
            n++;
        else
        {
            c += pairCombos(n);
            n = 1;
        }
    }
    c += pairCombos(n);
    cout << c << '\n';
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string in[5], m;
    vector<string> a;
    int c = 0;
    for(int i = 0; i < 200; i++)
    {
        cin >> in[0];
        m = in[0];
        for(int i = 1; i < 5; i++)
        {
            cin >> in[i];
            m += ' ' + in[i];
        }
        for(int i = 1; i < 5; i++)
            if(in[i].size() != in[0].size())
                goto end;
        c++;
        a.push_back(m);
        end:;
    }
    cout << c << '\n';
    for(string i : a)
        cout << i << '\n';
}
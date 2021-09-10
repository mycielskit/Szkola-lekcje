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
        sort(in[0].begin(), in[0].end());
        for(int i = 1; i < 5; i++)
        {
            cin >> in[i];
            m += ' ' + in[i];
            sort(in[i].begin(), in[i].end());
        }
        for(int i = 1; i < 5; i++)
            if(in[i] != in[0])
                goto end;
        c++;
        a.push_back(m);
        end:;
    }
    cout << c << '\n';
    for(string i : a)
        cout << i << '\n';
}
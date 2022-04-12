#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string in;
    long double out = 0.0, multr = 0.5;
    cin >> in;
    for(int i = 2; i < in.size(); i++, multr /= 2)
        if(in[i] == '1')
            out += multr;
    cout << setprecision(12) << out;
    return 0;
}
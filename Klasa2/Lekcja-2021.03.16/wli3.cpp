#include <bits/stdc++.h>

using namespace std;

int x_chooses_2(int a) // binomial_coefficient
{
    return a * (a - 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string in;
    int combos[1024] = {}, out = 0;
    bitset<10> digits;
    for(int i = 0; i < 5000; i++)
    {
        cin >> in;
        for(char j : in)
            digits[j - '0'] = 1;
        combos[digits.to_ulong()]++;
        digits.reset();
    }
    for(int i = 0; i < 1024; i++)
        out += x_chooses_2(combos[i]);
    cout << out;
    return 0;
}
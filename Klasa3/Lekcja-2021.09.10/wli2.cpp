#include <bits/stdc++.h>

using namespace std;

bool czyPalindromBinarnie(int n)
{
    string out = "", outr;
    do
        out += (n % 2) ? '1' : '0';
    while(n /= 2);
    int c = 0;
    for(int i = 0; out[i] == '0'; i++)
        c = i;
    if(out[0] == '0')
        out.erase(0, c + 1);
    outr = out;
    reverse(out.begin(), out.end());
    return out == outr;
}

int main()
{
    int c = 0, a;
    for(int i = 0; i < 5000; i++)
    {
        cin >> a;
        if(czyPalindromBinarnie(a))
            c++;
    }
    cout << c << '\n';
}
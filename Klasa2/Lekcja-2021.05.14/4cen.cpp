#include <bits/stdc++.h>

using namespace std;

int main()
{
    int key;
    string in;
    getline(cin, in);
    cin >> key;
    for(int i = 0; i < in.size() - 1; i++)
        putchar(in[i] + key);
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int key;
    bool a;
    string in, num;
    getline(cin, num);
    key = stoi(num);
    getline(cin, in);
    while(in.size() % key) in += ' ';
    for(int i = 0; i < key; i++)
    {
        a = false;
        for(int j = 0; j < in.size(); j += key)
        {
            if(a)
                putchar(in[j + key - i - 1]);
            else
                putchar(in[j + i]);
            a = !a;
        }
    }
}
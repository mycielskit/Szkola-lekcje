#include <bits/stdc++.h>

using namespace std;

string swapchars(string in, char a, char b)
{
    for(auto &c : in)
    {
        if(c == a)
            c = b;
        else if(c == b)
            c = a;
    }
    return in;
}

string iterHanoi(int n)
{
    string out = "AC";
    while(--n)
        out = swapchars(out, 'C', 'B') + " AC " + swapchars(out, 'A', 'B');
    return out;
}

void Hanoi(int n, char A='A', char B='B', char C='C')
{
    if(n)
    {
        Hanoi(--n, A, C, B);
        cout << A << C << ' ';
        Hanoi(n, B, A, C);
    }
}

int main()
{
    int n;
    while(cin >> n)
    {
        Hanoi(n);
        cout << endl << iterHanoi(n) << endl;
    }
    return 0;
}

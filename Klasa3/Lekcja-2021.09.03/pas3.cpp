#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int av, bv;
    for(int i = 0; i < 200; i++)
    {
        av = 0, bv = 0;
        cin >> a >> b;
        if(a.find(b) != string::npos) // b in a
            cout << a << '\n';
        else
        {
            for(int j = 1; j < b.size(); j++) // b + a
                if(a.substr(0, j) == b.substr(b.size() - j))
                    av = j;
            for(int j = 1; j < b.size(); j++) // a + b
                if(a.substr(a.size() - j) == b.substr(0, j))
                    bv = j;
            if(!(av || bv)) // a & b
                cout << a << b << '\n';
            else if(av > bv) // b + a
                cout << b << a.substr(av) << '\n';
            else // a + b
                cout << a << b.substr(bv) << '\n';
        }
    }
}
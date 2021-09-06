#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int av, bv, out = 0;
    for(int i = 0; i < 200; i++)
    {
        av = 0, bv = 0;
        cin >> a >> b;
        if(a.find(b) != string::npos)
            continue;
        else
        {
            for(int j = 1; j < b.size(); j++)
                if(a.substr(0, j) == b.substr(b.size() - j))
                    av = j;
            for(int j = 1; j < b.size(); j++)
                if(a.substr(a.size() - j) == b.substr(0, j))
                    bv = j;
            if(!(av || bv))
                out++;
        }
    }
    cout << out;
}
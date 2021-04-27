#include <bits/stdc++.h>

using namespace std;

int main()
{
    string in;
    unsigned char count = 1;
    getline(cin, in);
    for(int i = 1; i < in.size(); i++)
    {
        if(in[i - 1] == in[i])
            count++;
        else
        {
            if(count > 3)
                cout << '#' << in[i - 1] << count;
            else
                while(count--)
                    cout << in[i - 1];
            count = 1;
        }
    }
    if(count > 3)
        cout << '#' << in[in.size() - 1] << count;
    else
        while(count--)
            cout << in[in.size() - 1];
    return 0;
}
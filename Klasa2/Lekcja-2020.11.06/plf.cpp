#include <bits/stdc++.h>

using namespace std;

string toUpper(string a)
{
    string out = "";
    for(char i : a)
    {
        if(i >= '0' && i <= '9')
            out += i;
        else if(i > 64)
        {
            if(i < 123 && i > 96)
                i -= 32;
            if(i == 'J')
            i--;
            out += i;
        }
    }
    return out;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string in, out = ""; getline(cin, in);
    in = toUpper(in);
    bool is[26] = {};
    for(int i = 0; i < in.size(); ++i)
    {
        if(!is[in[i] - 'A'])
        {
            is[in[i] - 'A'] = true;
            out += in[i];
        }
    }
    for(char i = 'A'; i <= 'Z'; ++i)
    {
        if(i == 'J')
            continue;
        if(!is[i - 'A'])
            out += i;
    }
    pair<int, int> pary[26];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            pary[out[i*5+j] - 'A'] = make_pair(i, j);
    }
    getline(cin, in);
    in = toUpper(in);
    if(in.size() % 2)
        in += 'X';
    string answer = "";
    int x1, x2, y1, y2;
    for(int i = 0; i < in.size() - 1; i += 2)
    {
        if(in[i] == in[i + 1])
        {
            answer += in[i];
            answer += in[i];
            continue;
        }
        x1 = pary[in[i] - 'A'].first;
        x2 = pary[in[i + 1] - 'A'].first;
        y1 = pary[in[i] - 'A'].second;
        y2 = pary[in[ i+ 1] - 'A'].second;
        if(x1 == x2)
        {
            answer += out[x1*5 + (y1 + 1) % 5];
            answer += out[x2*5 + (y2 + 1) % 5];
        }
        else if(y1 == y2)
        {
            answer += out[((x1 + 1) % 5)*5 + y1];
            answer += out[((x2 + 1) % 5)*5 + y2];
        }
        else
        {
            answer += out[x1*5 + y2];
            answer += out[x2*5 + y1];
        }
    }
    cout << answer;
    return 0;
}
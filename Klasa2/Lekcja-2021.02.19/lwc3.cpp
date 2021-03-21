#include <bits/stdc++.h>

using namespace std;

bool key(const int &a, const int &b)
{
    return a > b; //reverse
}

int main(void)
{
    long long last, curr;
    cin >> last;
    map<int, int> luki;
    for (int i = 1; i < 1000; i++)
    {
        cin >> curr;
        luki[abs(last-curr)]++;
        last = curr;
    }
    int mostoften = 0;
    for(map<int, int>::iterator i = luki.begin(); i != luki.end(); i++)
    {
        if(i->second > mostoften)
            mostoften = i->second;
    }
    cout << mostoften << '\n';
    vector<int> often;
    for(map<int, int>::iterator i = luki.begin(); i != luki.end(); i++)
        if(i->second == mostoften)
            often.push_back(i->first);
    sort(often.begin(), often.end(), key);
    for(auto it = often.begin(); it != often.end(); it++)
        cout << *it << '\n';
    return 0;
}
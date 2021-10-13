#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w, n, curr, t;
    cin >> w >> n;
    map<int, int> mems;
    for(int i = 0; i < n; i++)
    {
        cin >> curr;
        if(mems.find(curr) == mems.end())
            mems[curr] = 1;
        else
            mems[curr]++;
    }
    map<int, int>::iterator start = mems.begin(), end = mems.end();
    curr = 0, end--;
    while(start->first < end->first)
    {
        if(end->first + start->first > w)
        {
            curr += end->second;
            end--;
        }
        else
        {
            t = min(end->second, start->second);
            curr += t;
            start->second -= t;
            end->second -= t;
        }
        if(!start->second)
            start++;
        if(!end->second)
            end--;
    }
    if(start == end && start->second)
        curr += start->second * start->first / w + bool(start->second * start->first % w);
    cout << curr;
    return 0;
}
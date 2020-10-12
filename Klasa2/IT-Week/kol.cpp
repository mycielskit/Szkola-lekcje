#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h, w, k, num[26];
	string in, kol[26] = {};
    while(1)
    {
        cin >> h >> w >> k;
        if(!h && !w && !k)
            break;
        for(int i = 0; i < k; i++)
            cin >> kol[i];//names
        for(int &n : num)
            n = 0;
        while(h--)
        {
            cin >> in;
            for(char c : in)
            {
                if(c == '*')
                    continue;
                for(int i = 0; i < k; i++)
                    if(kol[i][0] == c)
                        num[i]++;//going through first letters of all names in the set
            }
        }
        w = 0;//max count in the num array
        h = 0;
        for(int i = 0; i < k; i++)
        {
            if(num[i] > w)
            {
                h = i;//h is the index, w is the value
                w = num[i];
            }
        }
        cout << kol[h] << endl;
    }
	return 0;
}

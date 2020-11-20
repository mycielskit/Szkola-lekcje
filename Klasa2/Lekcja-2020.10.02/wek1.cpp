#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, out = 0;
	while(cin >> a >> b)
	{
		if(!a || !b)
		{
			cout << a << ' ' << b << endl;
			out++;
		}
	}
	cout << out;
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, sum = 0;
	do
	{
		cin >> n;
		sum += n;
	}
	while(n);
	cout << sum;
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	double c[100];
	for(int i = 0; i < 100; i++)
	{
		cin >> a >> b;
		c[i] = sqrt(a * a + b * b);
	}
	sort(c, c + 100);
	for(int i = 0; i < 100; i++)
		printf("%.2f\n", c[i]);
	return 0;
}
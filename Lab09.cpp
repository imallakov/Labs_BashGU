#include <iostream>

using namespace std;
int main()
{
	int n, k, a[109][109];
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int i = 1, j = n - 1;
	while (i <= n && j >= 1)
	{
		if (a[i][j] < 0)
		{
			--k;
			if (k == 0)
			{
				cout << i << " " << j << endl;
				break;
			}
		}
		if (j < n && i < n)
		{
			++i;
			++j;
		}
		else
		{
			if (i < j)
			{
				j = n - i;
				i = 1;
			}
			else
			{
				i = i - j + 2;
				j = 1;
			}
		}
		if (i == n && j == 1) break;
	}
	if (k > 0)
	{
		for (int i = 1; i <= n / 2; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				a[n - i + 1][j] = a[i][j];
			}
		}
		for (int i = 1; i <= n ; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

	}
}

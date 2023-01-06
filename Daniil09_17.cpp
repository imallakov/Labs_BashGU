#include <iostream>

using namespace std;
int main()
{
	int n, a[109][109];
	cin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int i = 1, j = n, ki = -1, kj = -1;
	while (i < n && j <= n)
	{
		if (a[i][j] % 2 != 0 && a[i][j] < 0)
		{
			ki = i;
			kj = j;
		}
		--j;
		if (j == i)
		{
			++i;
			j = n;
		}
	}
	if (ki == -1)
	{
		int b[215], l = 0;
		i = 2, j = 1;
		while (i <= n && j < n)
		{
			b[++l] = a[i][j];
			++i;
			if (i == n + 1)
			{
				++j;
				i = j + 1;
			}
		}
		for (int i = 1; i <= l; ++i)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << ki << " " << kj << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;
int main()
{
	int n, a[109][109];
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cin >> a[i][j];
		}
	}

	int k = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if (a[i][j] > a[i][j + 1])
			{
				k = i;
				break;
			}
		}
		if (k > 0) break;
	}
	if (k == 0)
	{
		cout << "vse stroki uporyadocheny po vozrostaniyu" << endl;
	}
	else
	{
		cout << k << endl;
	}

	return 0;
}

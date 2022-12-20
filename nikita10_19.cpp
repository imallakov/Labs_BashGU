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

	for (int i = 1; i <= n; ++i)
	{
		int l = 0;
		for (int j = 1; j <= n; ++j)
		{
			if (a[j][i] > 0) ++l;
		}
		if (l == n)
		{
			cout << j << endl;
			break;
		}
	}

	return 0;
}

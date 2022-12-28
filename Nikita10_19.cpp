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

	int ans = -1;
	for (int i = 1; i <= n; ++i)
	{
		int l = 0, j = 1;
		while(1)
		{
			if (a[i][j] > 0) ++l;
			++j;
			if (j == n + 1) break;
		}
		if (l == n && ans == -1)
		{
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}

#include <iostream>

using namespace std;
int main()
{
	int n, a[109], b[109], k = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; ++i)
	{
		if (a[i] > a[i + 1])
		{
			b[++k] = a[i];
		}
	}

	cout << k << endl;

	for (int i = 1; i <= k; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	return 0;
}

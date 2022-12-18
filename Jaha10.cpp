#include <iostream>

using namespace std;
int main()
{
	int n, a[500][500];
	
	cin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int sum = 0, psum = 0;
	for (int i = n; i >= 1; --i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (a[i][j] > 0) psum += a[i][j];
			sum += a[i][j];
		}
	}

	if (psum == 0)
	{
		cout << sum;
	}
	else
	{
		cout << psum;
	}

	return 0;
}

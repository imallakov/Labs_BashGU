#include <iostream>

using namespace std;
int main()
{
	int n, A[57][57], b[82];
	cin >> n;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> A[i][j];

	for (int i = 1; i <= n; ++i)
		cin >> b[i];

	int srednarif = 0;
	for (int i = 1; i <= n; ++i)
	{
		srednarif += A[i][i];
	}
	srednarif /= n;

	bool bl = true;
	for (int i = 1; i <= n; ++i)
	{
		if (srednarif >= b[i]) bl = false;
	}

	if (bl == true)
	{
		int c[95], k = 0;
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				if (A[i][j] >= 0)
				{
					A[i][j] += j;
					c[++k] = A[i][j];
				}
				else
				{
					A[i][j] -= j;
				}
			}
		}
		for (int i = 1; i <= k; ++i)
		{
			cout << c[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

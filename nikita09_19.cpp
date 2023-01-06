#include <iostream>

using namespace std;
int main()
{
	int n, a[109][109], d;
	cout << "Enter n and d: ";
	cin >> n >> d;
	cout << "Enter an array with size n*n:\n";
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int i = n, j = 1, ki = -1, kj = -1, c = -1;
	while (i != n || j != 2)
	{
		if (abs(a[i][j]) < d && ki == -1 && kj == -1)
		{
			ki = i;
			kj = j;
		}
		i+=c;
		if (i == 0)
		{
			++j;
			i = 1;
			c *= -1;
		}
	}
	if (ki == -1)
	{
		int b[250], l = 0;
		for (int j = 1; j <= n; ++j)
		{
			for (int i = 1; i <= n; ++i)
			{
				if (i >= j && j >= n - i + 1)
				{
					b[++l] = a[i][j];
				}
			}
		}
		for (int i = 1; i <= l; ++i)
			cout << b[i] << " ";
	}
	else
	{
		cout << ki << " " << kj << endl;
	}
	return 0;
}

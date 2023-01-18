#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, m = 0, a[23], b[23], c[23];
	cin >> n;
	
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];

	int mina_ind = 0, minb_ind = 0;

	for (int i = 1; i < n; ++i)
	{
		if (a[i] < a[mina_ind]) mina_ind = i;
		if (b[i] < a[minb_ind]) minb_ind = i;
	}

	if (abs(a[mina_ind]) > b[minb_ind])
	{
		for (int i = 0; i < n; ++i)
		{
			if (a[i] >= b[i])
			{
				c[m] = a[i];
				++m;
			}
		}
		for (int i = 0; i < m; ++i)
			cout << c[i] << " ";
		cout << endl;
	}

	return 0;
}

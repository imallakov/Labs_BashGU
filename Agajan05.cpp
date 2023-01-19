#include <iostream>

using namespace std;
int main()
{
	int n, m = 0, a[37], b[37];
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];

	for (int i = 1; i <= n; ++i)
	{
		if (a[i] % 2 == 0) b[++m] = a[i];
	}
	if (m == 0)
	{
		cout << "Все числа нечетные!\n";
	}
	else
	{
		for (int i = 1; i <= m; ++i)
			cout << b[i] << " ";
	}
	return 0;
}

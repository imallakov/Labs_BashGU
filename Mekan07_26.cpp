#include <iostream>

using namespace std;
int main()
{
	int n, a[35], b[35], k = 0;
	cin >> n;
	
	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	double summa = 0, nechet = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			b[++k] = a[i];
		}
		else
		{
			nechet += a[i];
		}
		summa += a[i];
	}
	cout << nechet / (summa / 100) <<"%" << endl;

	for (int i = 1; i <= k; ++i)
		cout << b[i] << " ";
	cout << endl;

	return 0;
}

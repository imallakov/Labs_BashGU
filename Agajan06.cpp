#include <iostream>

using namespace std;

int main()
{
	int n, a[22], b[22];
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	for (int i = 1; i <= n; ++i) cin >> b[i];
	int P = 0;
	for (int i = 1; i <= n; ++i)
	{
		P += a[i] * b[i];
	}
	cout << P << endl;
	return 0;
}

#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 2; i <= n; ++i)
	{
		double chis = 1;
		if (i % 2 == 0) chis = -1;

		double znam = (2 * i - 1) * (2 * i - 1);
		sum += chis / znam;
	}

	cout << sum << endl;

	return 0;
}

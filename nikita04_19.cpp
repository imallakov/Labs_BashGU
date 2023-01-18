#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double sum = 0, x = 0;
	cin >> x;
	for (int i = 1; i <= 8; ++i)
	{
		double znam = 1, chis = 1;
		double prod = 1;
		for (int j = 1; j <= 2 * i - 1; ++j)
		{
			prod *= x;
		}
		double k = (chis * prod) / znam;
		if (i % 2 == 0) k *= -1;
		sum += k;
	}
	cout << sum;
	return 0;
}

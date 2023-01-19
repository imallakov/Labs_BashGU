#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int m = n, max = m % 10;
	while (m > 0)
	{
		if (m % 10 > max)
		{
			max = m % 10;
		}
		m /= 10;
	}
	n /= 10;
	n = n * 10 + max;
	cout << n << endl;
	return 0;
}

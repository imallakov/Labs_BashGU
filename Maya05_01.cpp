#include <iostream>

using namespace std;

int main()
{
	int n, a = 0, b = -1;
	cin >> n;
	while (n > 0)
	{
		if (b == -1)
		{
			b = n % 10;
		}
		else
		{
			a = n % 10;
		}
		n /= 10;
	}

	cout << a + b;

	return 0;
}

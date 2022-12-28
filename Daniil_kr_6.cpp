#include <iostream>

using namespace std;

int nod(int a, int b)
{
	int k = 2, m = 1;
	if (a == 0) return b;
	if (b == 0) return a;
	while (k <= min(a, b))
	{
		if (a % k == 0 && b % k == 0)
		{
			m = k;
		}
		++k;
	}
	return m;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << nod(nod(a, b), c) << endl;
	cout << nod(a, 0) << endl;
	cout << nod(b, a % b);
	return 0;
}

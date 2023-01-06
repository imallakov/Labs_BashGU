#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double eps, a = 1, b = 1, c, sum, x, i = 2;
	cout << "enter x and eps: ";
	cin >> x >> eps;
	sum = x * x;
	c = -1;
	while (1)
	{
		a *= 2 * i - 3;
		b *= 2 * i + 2;
		sum += c * (a / b) * 1.0 * pow(x, i + 1);
		//cout << i << " --> " << c << "*(" << a << "/" << b << ")*" << x << "^" << i + 1 << endl;
		if (1.0 * (a / b) < eps) break;
		c *= -1;
		++i;
	}
	cout << sum << endl;
	return 0;
}

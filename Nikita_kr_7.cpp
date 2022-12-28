#include <iostream>

using namespace std;
int p(int x)
{
	const int a3 = 1;
	const int a2 = 1;
	const int a1 = 1;
	const int a0 = 1;
	return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}

int q(int x)
{
	return p(x + 1) + p(x);
}

int main()
{
	for (int i = 1; i <= 5; ++i)
	{
		cout << q(i) << endl;
	}
}

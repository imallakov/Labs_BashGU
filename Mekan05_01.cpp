#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;

	int b = n % 10;
	while (n >= 10) n /= 10;
	cout << n + b;
	return 0;
}

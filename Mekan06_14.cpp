#include <iostream>

using namespace std;
int main()
{
	double n, R[123], H[123], V[123];
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> R[i];

	for (int i = 1; i <= n; ++i)
		cin >> H[i];

	for (int i = 1; i <= n; ++i)
		V[i] = 3.14 * R[i] * R[i] * H[i];

	for (int i = 1; i <= n; ++i)
		cout << V[i] << " ";

	return 0;
}

#include <iostream>

using namespace std;
int main()
{
	int n, X[15], A = 1, B = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i) cin >> X[i];

	for (int i = 1; i <= n; ++i)
	{
		B += X[i];
		A *= X[i];
	}
	cout << A / B;
  return 0;
}

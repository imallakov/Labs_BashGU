#include <iostream>

using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;

	if (((x + 4) * (x + 4) + (y - 4) * (y - 4) <= 9) || (y <= 6 - x && x >= 0 && y >= 0))
	{
		cout << "tochka lezhit vnutri figur";
	}
	else
	{
		cout << "tochka lezhit snaruzhi figur";
	}
	return 0;
}

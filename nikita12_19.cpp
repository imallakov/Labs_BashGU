#include <iostream>
#include <string>

using namespace std;

struct meal
{
	string name = "";
	int price = 0;
	int kal = 0;
};

int main()
{
	int n;
	meal a[1009];
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i].name >> a[i].price >> a[i].kal;
	}

	int maxp = 1, minp = 1, maxk = 1;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i].price > a[maxp].price) maxp = i;
		if (a[i].price < a[minp].price) minp = i;
		if (a[i].kal > a[maxk].kal) maxk = i;
	}
	cout << "samoe dorogoe blyudo:  " << a[maxp].name << "  price=" << a[maxp].price << endl;
	cout << "samoe deshewoe blyudo:  " << a[minp].name << "  price=" << a[minp].price << endl;
	cout << "samoe kaloriynoe blyudo:  " << a[maxk].name << "  kal=" << a[maxk].kal << endl;
  return 0;
}

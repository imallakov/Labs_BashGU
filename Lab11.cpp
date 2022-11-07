// Lab11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void sort(int n, int* x, int* y)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			if (y[j] < y[j + 1])
			{
				int k = y[j];
				y[j] = y[j + 1];
				y[j + 1] = k;
				k = x[j];
				x[j] = x[j + 1];
				x[j + 1] = k;
			}
			if (y[j] == y[j + 1] && x[j] > x[j + 1])
			{
				int k = y[j];
				y[j] = y[j + 1];
				y[j + 1] = k;
				k = x[j];
				x[j] = x[j + 1];
				x[j + 1] = k;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < 3*n; ++i)
	{
		cin >> x[i] >> y[i];
	}

	sort(3*n, x, y);

	for (int i = 0; i < 3 * n; ++i)
	{
		cout << "( " << x[i] << " , " << y[i] << " )\n";
		if((i+1)%3==0) cout<<endl;
	}
	cout << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

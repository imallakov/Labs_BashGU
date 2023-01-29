#include <iostream>
#include <string>

using namespace std;
int main()
{
	int n, m, alph[260];
	for (int i = 1; i <= 259; ++i) alph[i] = 0;
	char a[47][47];
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
		}
	}
	string word;
	cin >> word;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			alph[int(a[i][j])]++;
		}
	}
	bool b = true;
	for (int i = 0; i < word.length(); ++i)
	{
		alph[int(word[i])]--;
		if (alph[int(word[i])] < 0) b = false;
	}

	if (b == true)
	{
		cout << "mozhno";
	}
	else
	{
		cout << "ne vozmozhno";
	}

}

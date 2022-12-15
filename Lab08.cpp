#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> v)
{

	if (v.size() == 1)
	{
		return v;
	}

	vector<int>v1, v2;
	for (int i = 0; i < v.size()/2; ++i)
	{
		v1.push_back(v[i]);
	}
	for (int i = v.size() / 2; i < v.size(); ++i)
	{
		v2.push_back(v[i]);
	}

	v1 = merge(v1);
	v2 = merge(v2);
	
	vector<int>v3 = {};
	
	int i = 0, j = 0;
	while (i < v1.size() || j < v2.size())
	{
		if (i < v1.size() && j < v2.size())
		{
			if (v1[i] < v2[j])
			{
				v3.push_back(v1[i]);
				++i;
			}
			else
			{
				v3.push_back(v2[j]);
				++j;
			}
		}
		else
		{
			if (i < v1.size())
			{
				v3.push_back(v1[i]);
				++i;
			}
			else
			{
				if (j < v2.size())
				{
					v3.push_back(v2[j]);
					++j;
				}
				else
				{
					break;
				}
			}
		}
	}
	return v3;
}

int main()
{
	int n;
	cin >> n;
	vector<int>v;
	for (int i = 1; i <= n; ++i)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	v = merge(v);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

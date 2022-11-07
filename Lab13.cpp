#include <iostream>
#include <random>

using namespace std;

float a[1009], b[1009], c[1009];

void rndm(int n);
int sumb(int n);
bool check(int n, int sum);
int fillc(int n);

struct mx
{
	bool chk = false;
	float value = -999.0;
	int i = -1;
	int j = -1;
};

mx findmx(int n);

int main()
{
	cout << "Choose the way of entering values to the arrays:\n1.Enter yourself\n2.Random\n";
	int t = 0, n = 0;
	while (t != 1 && t != 2)
	{
		cout << "Please enter 1 or 2: ";
		cin >> t;
	}
	cout << "Please enter the size of arrays: ";
	cin >> n;
	if (t == 2)
	{
		rndm(n);
	}
	else
	{
		cout << "Please enter values of n elements of array A:\n";
		for (int i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		cout << "Please enter values of n elements of array B:\n";
		for (int i = 1; i <= n; ++i)
		{
			cin >> b[i];
		}
	}
	mx result;
	result = findmx(n);
	if (result.chk) cout << "\nFirst condition is true!\ni=" << result.i << "	j=" << result.j<<"	a["<<result.i<<"]="<<a[result.i]<<"	b["<<result.j<<"]="<<b[result.j]<<"	a["<<result.i<<"]/(b["<<result.j<<"]*b["<<result.j<<"]+a["<<result.i<<"]*a["<<result.i<<"])="<<result.value << endl;
	else cout << "\nFirst condition is false!\n";
	int g=fillc(n);

	cout << "\nArray C:\n";
	for (int i = 1; i <= g; ++i)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}

void rndm(int n)
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 10); // distribution in range [1, 6]
	for (int i = 1; i <= n; ++i)
	{
		a[i] = dist6(rng);
		b[i] = dist6(rng);
	}
	cout << "Array A:\n";
	for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << "\nArray B:\n";
	for (int i = 1; i <= n; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	return;
}

mx findmx(int n)
{
	mx m;
	int sm = sumb(n);
	m.chk = check(n,sm);
	if (m.chk)
	{
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				float mth = a[i] / (b[j] * b[j] + a[i] * a[i]);
				if ( mth > m.value )
				{
					m.value = mth;
					m.i = i;
					m.j = j;
				}
			}
		}
	}
	return m;
}

int sumb(int n)
{
	int l = 0;
	for (int i = 1; i <= n; ++i)
	{
		l += b[i];
	}
	return l;
}

bool check(int n, int sum)
{
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] >= sum) return false;
	}
	return true;
}

int fillc(int n)
{
	int m = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] >= b[i])
		{
			c[++m] = a[i];
		}
	}
	return m;
}

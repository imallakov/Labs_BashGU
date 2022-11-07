// lab15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

bool func(int a[], int l, int r)
{
    if (l == r) return sin(a[l])>0;
    int mid = l + (r - l) / 2;
    return func(a, l, mid) | func(a, mid+1, r);
}

int main()
{

    int a[1009];
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    cout << func(a,1,n);

}

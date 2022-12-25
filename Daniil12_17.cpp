#include <iostream>

using namespace std;

struct student
{
    string name = "";
    string surname = "";
    string fname = "";
    int height = 0;
};

int main()
{
    int n;
    student a[109];
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i].name >> a[i].surname >> a[i].fname >> a[i].height;
    }

    double mid = 0;
    int max = 1, min = 1, k = 0;

    for (int i = 1; i <= n; ++i)
    {
        mid += a[i].height;
        if (a[i].height > a[max].height) max = i;
        if (a[i].height < a[min].height) min = i;
        if (a[i].height > 170) ++k;
    }
    mid /= n;

    cout << "sredniy rost vseh studentov: " << mid << endl;
    cout << "student s max rostom: " << a[max].name << " " << a[max].surname << " " << a[max].fname << " " << a[max].height << endl;
    cout << "student s min rostom: " << a[min].name << " " << a[min].surname << " " << a[min].fname << " " << a[min].height << endl;
    cout << "kolicestvo studentov kotoryye mogut zanimatsya basketbolom: " << k << endl;

    return 0;
}

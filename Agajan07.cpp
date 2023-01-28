#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    if (y <= (4 * x + 8) / 5 && y >= 4 && x <= 8)
    {
        cout << "Tochka lezhit vnutri treugolnika";
    }
    else
    {
        cout << "Tochka NE lezhit vnutri treugolnika";
    }

    return 0;

}

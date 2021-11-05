#include <iostream>

using namespace std;

int main()
{
    double a;
    cout << "Nhap a: ";
    cin >> a;
    double phanLe = a - long(a);
    if (a == 0)
    {
        cout << -1 << endl;
    }
    else if (a > 0)
    {
        if (phanLe == 0)
        {
            cout << a - 1 << endl;
        }
        else
        {
            cout << a - phanLe << endl;
        }
    }
    else
    {
        if (phanLe == 0)
        {
            cout << a - 1 << endl;
        }
        else
        {
            cout << a - phanLe - 1 << endl;
        }
    }
    return 0;
}

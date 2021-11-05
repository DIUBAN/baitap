#include <iostream>

using namespace std;

int main()
{
    double a;
    cout << "Nhap a: ";
    cin >> a;
    if (a == 0)
    {
        cout << 0;
        return 0;
    }
    else if (a > 0)
    {
        a = long long(a + 0.5);
    }
    else
    {
        a = long long(a - 0.5);
    }
    cout << a << endl;
    return 0;
}
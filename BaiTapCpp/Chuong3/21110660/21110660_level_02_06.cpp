#include <iostream>
#include <math.h>
using namespace std;

void kiemTraTamGiac(double a, double b, double c)
{
    // kiem tra tam giac deu
    if (a == b && b == c)
    {
        cout << "Tam giac deu" << endl;
    }
    // kiem tra tam giac vuong
    // pow(co so, mu)
    else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
    {
        if (a == b || a == c || b == c)
        {
            cout << "Tam giac vuong can" << endl;
        }
        else
        {
            cout << "Tam giac vuong" << endl;
        }
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Tam giac can" << endl;
    }
    else
    {
        cout << "Tam giac thuong" << endl;
    }
};

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0)
    {
        if ((a - b < c) && (a - c < b) && (b - c < a))
        {
            kiemTraTamGiac(a, b, c);
        }
    }
    else
    {
        cout << "Khong phai do dai 3 canh cua tam giac" << endl;
    }

    return 0;
}
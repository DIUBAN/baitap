#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a, b, c;

    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh vo so nghiem" << endl;
            }
            else
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        }
        else
        {
            cout << -double(c) / b << endl;
        }
    }
    else
    {
        double delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (delta == 0)
        {
            cout << -double(b) / 2 * a << endl;
        }
        else
        {
            double x1 = double((-b + sqrt(delta))) / 2 * a;
            double x2 = double((-b - sqrt(delta))) / 2 * a;
            cout << "Phuong trinh co nghiem x1 = " << x1 << endl;
            cout << "Phuong trinh co nghiem x2 = " << x2 << endl;
        }
    }
    return 0;
}
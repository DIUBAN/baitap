#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "PT vo so nghiem" << endl;
        }
        else
        {
            cout << "PT vo nghiem" << endl;
        }
    }
    else
    {
        cout << "Nghiem cua PT: " << fixed << setprecision(2) << -(double)b / a << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    if (a == 0 || b == 0)
    {
        cout << a + b << endl;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << a << endl;
    return 0;
}
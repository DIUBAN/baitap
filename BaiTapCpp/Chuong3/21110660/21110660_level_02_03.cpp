#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if (a <= b && b <= c)
    {
        cout << a << endl;
    }
    else if (b <= a && b <= c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }

    return 0;
}
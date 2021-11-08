#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int soLuong = 0;
    if (n <= 1)
    {
        cout << 0;
    }
    else // n>=2
    {
        for (long long i = 1; i < n; i++)
        {
            if (sqrt(i) == (long long)(sqrt(i)))
            {
                soLuong++;
            }
        }
        cout << soLuong;
    }

    return 0;
}
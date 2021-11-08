#include <iostream>
#include <math.h>

using namespace std;

bool kiemTraSHH(long long n)
{
    if (n <= 5)
    {
        return false;
    }
    else if (n == 6)
    {
        return true;
    }
    else
    {
        long long tong = 1;

        for (long long i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                tong = tong + i;
            }
        }
        if (tong == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    long long n;
    cin >> n;
    int soLuong = 0;
    if (n <= 6)
    {
        cout << 0;
    }
    else
    {
        for (long long i = 6; i < n; i++)
        {
            if (kiemTraSHH(i) == true)
            {
                soLuong++;
            }
        }
        cout << soLuong;
    }

    return 0;
}
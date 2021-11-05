#include <iostream>
#include <math.h>
using namespace std;

bool kiemTraSNT(long long n)
{
    if (n <= 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    long long n;
    cin >> n;
    if (kiemTraSNT(n) == true)
    {
        cout << n << " la so nguyen to" << endl;
    }
    else
    {
        cout << n << " khong la so nguyen to" << endl;
    }

    return 0;
}
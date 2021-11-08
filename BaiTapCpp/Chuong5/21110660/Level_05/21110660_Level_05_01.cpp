#include <iostream>
#include <math.h>
using namespace std;

bool kiemTraSNT(long long n)
{
    if (n == 2)
    {
        return true;
    }
    else
    {
        for (long long i = 2; i <= sqrt(n); i++)
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
    if (n <= 2)
    {
        cout << "";
    }
    else
    {
        for (long long i = 2; i < n; i++)
        {
            if (kiemTraSNT(i) == true)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
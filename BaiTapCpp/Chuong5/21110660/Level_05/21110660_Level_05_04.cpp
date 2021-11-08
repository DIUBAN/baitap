#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n <= 1)
    {
        cout << "";
    }
    else
    {
        for (long long i = 1; i < n; i++)
        {
            if (sqrt(i) == (long long)(sqrt(i)))
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
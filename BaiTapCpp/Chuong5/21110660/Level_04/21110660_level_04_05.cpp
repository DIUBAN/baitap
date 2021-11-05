#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int max = n % 10;
    n = n / 10;

    int donVi;
    while (n > 0)
    {
        donVi = n % 10;
        n = n / 10;
        if (donVi > max)
        {
            max = donVi;
        }
    }
    cout << max << endl;
    return 0;
}

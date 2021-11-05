#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long soNguoc = 0;

    while (n > 0)
    {
        int donVi = n % 10;
        soNguoc = soNguoc * 10 + donVi;
        n = n / 10;
    }
    cout << soNguoc << endl;
    return 0;
}
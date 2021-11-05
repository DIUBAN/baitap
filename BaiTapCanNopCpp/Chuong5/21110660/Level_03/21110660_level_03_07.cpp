#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    while (n > 0)
    {
        int donVi = n % 10;
        sum = sum + donVi;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}
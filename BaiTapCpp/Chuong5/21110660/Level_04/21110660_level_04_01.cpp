#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (sqrt(n) == long(sqrt(n)))
    {
        cout << n << " la so chinh phuong" << endl;
    }
    else
    {
        cout << n << " khong la so chinh phuong" << endl;
    }

    return 0;
}
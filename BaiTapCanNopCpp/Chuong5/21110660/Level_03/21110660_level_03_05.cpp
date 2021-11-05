#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = n;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}
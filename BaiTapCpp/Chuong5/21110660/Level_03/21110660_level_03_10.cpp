#include <iostream>
using namespace std;

int main()
{
    long long a, b, n;
    cin >> a >> b >> n;
    long long sum = 0;
    for (long long i = 1; i < n; i++)
    {
        if (i % a == 0 && i % b != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
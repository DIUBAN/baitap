#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++)
    {
        giaiThua = giaiThua * i;
    }
    cout << giaiThua << endl;
    return 0;
}
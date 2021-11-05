#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    // fibonacci
    // 1 1 2 3 5 8 13
    if (n < 1)
    {
        cout << 0 << endl;
    }
    else if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        long long current;
        long long prev1 = 0;
        long long prev2 = 1;
        // prev1 prev2 current
        //   1     1     2       3
        // prev1 = 1;
        // prev2 = 2;
        cout << 1 << " ";
        for (int i = 0; i < n - 1; i++)
        {
            current = prev1 + prev2;
            cout << current << " ";

            prev1 = prev2;
            prev2 = current;
        }
    }

    return 0;
}
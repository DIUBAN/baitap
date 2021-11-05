#include <iostream>
using namespace std;

int main()
{
    long long mang[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> mang[i];
    }

    long long max = mang[0];
    for (int i = 1; i <= 3; i++)
    {
        if (mang[i] > max)
        {
            max = mang[i];
        }
    }
    cout << max << endl;
    return 0;
}
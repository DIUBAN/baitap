#include <iostream>
#include <limits>
using namespace std;

int main()
{
    long nam;
    cout << "Nhap nam: ";
    cin >> nam;

    if (nam % 400 == 0)
    {
        cout << nam << " la nam nhuan" << endl;
    }
    else if (nam % 4 == 0 && nam % 100 != 0)
    {
        cout << nam << " la nam nhuan" << endl;
    }
    else
    {
        cout << nam << " khong phai la nam nhuan" << endl;
    }
    return 0;
}
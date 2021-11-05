#include <iostream>
using namespace std;

int main()
{
    // 1234
    // bool check = true;
    // 4
    // 3 -> check = false;
    // 5 % 2 = 1;
    long long n;
    cin >> n;

    bool check = true;
    int donVi;
    while (n > 0)
    {
        donVi = n % 10;
        n = n / 10;
        if (donVi % 2 == 1)
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "Phai" << endl;
    }
    else
    {
        cout << "Khong phai" << endl;
    }

    return 0;
}
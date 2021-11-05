#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int temp = n % 10;
    n = n / 10;

    int donVi;
    bool check = true;
    while (n > 0)
    {
        donVi = n % 10;
        n /= 10;
        if (temp < donVi)
        {
            check = false;
            break;
        }
        else
        {
            temp = donVi;
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
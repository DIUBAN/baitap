#include <iostream>
using namespace std;

bool kiemTraSNT(int donVi)
{
    if (donVi == 2 || donVi == 3 || donVi == 5 || donVi == 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long n;
    cin >> n;

    int donVi;
    int soLuong = 0;

    while (n > 0)
    {
        donVi = n % 10;
        n = n / 10;
        if (kiemTraSNT(donVi) == true)
        {
            soLuong++;
        }
    }
    cout << soLuong << endl;
    return 0;
}
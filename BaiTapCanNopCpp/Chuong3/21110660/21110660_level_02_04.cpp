#include <iostream>
using namespace std;

bool kiemTraNamNhuan(int nam)
{
    if (nam % 400 == 0)
    {
        return true;
    }
    if (nam % 4 == 0 && nam % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int main()
{
    int thang, nam;
    cin >> thang >> nam;

    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << 31 << endl;
        break;
    case 2:
        // thang 2 phai kiem tra nam nhuan
        // la nam nhuan
        if (kiemTraNamNhuan(nam) == true)
        {
            cout << 29 << endl;
            break;
        }
        // khong phai nam nhuan
        else
        {
            cout << 28 << endl;
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        cout << 30 << endl;
        break;
    }
    return 0;
}
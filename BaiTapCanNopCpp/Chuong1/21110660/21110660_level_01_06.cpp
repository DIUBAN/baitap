#include <iostream>

using namespace std;

int main()
{
    int h, m, s;
    cout << "Nhap h: ";
    cin >> h;
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap s: ";
    cin >> s;
    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
        cout << h << ":" << m << ":" << s << " la hop le" << endl;
    }
    else
    {
        cout << h << ":" << m << ":" << s << " la khong hop le" << endl;
    }

    return 0;
}

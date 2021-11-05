#include <iostream>
using namespace std;

bool check(int h, int m, int s)
{
    if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59)
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
    int h, m, s;
    cin >> h >> m >> s;

    if (check(h, m, s))
    {
        s++;
        if (s == 60)
        {
            s = 0;
            m++;
            if (m == 60)
            {
                m = 0;
                h++;
                if (h == 24)
                {
                    h = 0;
                }
            }
        }
        cout << h << ":" << m << ":" << s << endl;
    }
    else
    {
        cout << "Khong hop le" << endl;
    }

    return 0;
}
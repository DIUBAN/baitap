#include <iostream>
#include <string>
using namespace std;

bool kiemTraDX(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
};

int main()
{
    long long n;
    cin >> n;
    string s = to_string(n);
    if (kiemTraDX(s) == true)
    {
        cout << n << " la so doi xung" << endl;
    }
    else
    {
        cout << n << " khong la so doi xung" << endl;
    }

    return 0;
}
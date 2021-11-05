#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <math.h>

#define ll long long
#define vint vector<int>
#define vlong vector<long>
using namespace std;

int main()
{
a:
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << char(a - 32) << endl;
    }
    if (a >= 'A' && a <= 'Z')
    {
        cout << char(a + 32) << endl;
    }
    else
    {
        cout << "" << endl;
    }

    return 0;
}
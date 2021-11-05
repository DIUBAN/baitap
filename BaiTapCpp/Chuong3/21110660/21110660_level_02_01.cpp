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
    ll a, b;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Khong chia duoc";
    }
    else
    {
        double ketqua = double(a) / b;
        cout << ketqua;
    }

    return 0;
}
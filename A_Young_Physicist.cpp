#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long forces;
    cin >> forces;
    long long data[3] = {0, 0, 0};
    while (forces--)
    {
        long long x, y, z;
        cin >> x >> y >> z;
        data[0] += x;
        data[1] += y;
        data[2] += z;
    }
    if (!(data[0]||data[1]||data[2]))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
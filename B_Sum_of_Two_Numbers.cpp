#include <bits/stdc++.h>
using namespace std;
int k, n, x, y;

void sol(int n)
{
    if (n >= 10)
        sol(n / 10);
    x *= 10;
    y *= 10;
    x += (n % 10) / 2;
    y += (n % 10 + 1) / 2;
    if (n & 1)
        swap(x, y);
}

int main()
{
    cin >> k;
    while (k--)
    {
        cin >> n;
        x = y = 0;
        sol(n);
        cout << x << ' ' << y << endl;
    }
}
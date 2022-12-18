#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(a - c) == abs(b - d))
        cout << a << " " << d << " " << c << " " << b << endl;
    else if (a == c)
        cout << a + b - d << " " << b << " " << a + b - d << " " << d << endl;
    else if (b == d)
        cout << a << " " << b + a - c << " " << c << " " << d + a - c << endl;
    else
        cout << -1 << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n2, n3, n5, n6, a = 0, b = 0, c = 0;
    cin >> n2 >> n3 >> n5 >> n6;
    a = min(n2, min(n5, n6));
    a = max(c, a);
    n2 -= a;
    b = min(n2, n3);
    b = max(c, b);
    cout << a * 256 + b * 32 << endl;
}
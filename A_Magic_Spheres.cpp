#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, needA, needB, needC, extra = 0, need = 0;
    cin >> a >> b >> c >> needA >> needB >> needC;
    if (needA < a)
        extra += (a - needA)>>1;
    if (needB < b)
        extra += (b - needB)>>1;
    if (needC < c)
        extra += (c - needC)>>1;
    if (needA > a)
        need += needA - a;
    if (needB > b)
        need += needB - b;
    if (needC > c)
        need += needC - c;
    if (need > extra)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}
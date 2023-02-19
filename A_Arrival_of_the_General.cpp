#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long siz;
    cin >> siz;
    long long mx = 0, mn = INTMAX_MAX, mxIndex, mnIndex;
    for (long long i = 1; i <= siz; i++)
    {
        long long x;
        cin >> x;
        if (x > mx)
        {
            mx = x;
            mxIndex = i;
        }
        if (x <= mn)
        {
            mn = x;
            mnIndex = i;
        }
    }
    if (mnIndex > mxIndex)
        cout << -mnIndex + mxIndex + siz-1 << endl;
    else
        cout << -mnIndex + mxIndex + siz-2<< endl;
}
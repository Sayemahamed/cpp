#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long x;
        cin >> x;
        if (!(x & 1))
        {
            x-=2;
            while (x--)
                cout <<2<< ' ';
                cout<<1<<' '<<3;
        }
        else
            while (x--)
                cout << 1 << ' ';
        cout << endl;
    }
}
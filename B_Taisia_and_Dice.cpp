#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, s, r;
        cin >> n >> s >> r;
        cout<<s-r<<' ';
        s=r;
        for (long long i = 1; i < n; i++)
        {
            cout << (s + n - i - 1) / (n - i) << " ";
            s -= (s + n - i - 1) / (n - i);
        }
        cout << endl;
    }
}
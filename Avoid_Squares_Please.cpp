#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        // cout<<((n|1)^1)<<endl;
        for (long long i = ((n | 1) ^ 1); i > 0; i -= 2)
            cout << i << ' ';
        // cout<<(n&1)<<endl;
        if (n & 1)
            ;
        else
            n--;
        for (long long i = n; i > 0; i -= 2)
            cout << i << ' ';
        cout << endl;
    }
}
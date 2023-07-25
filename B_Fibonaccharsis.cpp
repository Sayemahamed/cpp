#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, limit;
    cin >> n >> limit;
    long long ans = 0;
    for (long long j = 0; j < n; j++)
    {
        long long first = n;
        long long second = ((first + 1) / 2) + j;
        bool totalBreaker = false;
        bool isValid = true;
        for (long long i = 0; i < limit - 1; i++)
        {
            long long tmp = first;
            first = second;
            second = tmp - second;
            if (first < 0 or second < 0)isValid = false;
            if (!isValid)break;
        }
        if (isValid)ans++;
    }
    cout << ans << endl;
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}
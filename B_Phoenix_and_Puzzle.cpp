#include <bits/stdc++.h>
using namespace std;
string solve(long long n)
{
    if (n % 2 == 0)
    {
        if (sqrt(n / 2) == (long long)sqrt(n / 2))
            return "YES";
    }
    if (n % 4 == 0)
    {
        if (sqrt(n / 4) == (long long)sqrt(n / 4))
            return "YES";
    }
    return "NO";
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
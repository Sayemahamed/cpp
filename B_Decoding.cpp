#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin >> n;
    string s;
    cin >> s;
    ll count{0}, cr{0}, cl{0};
    char c[n] = {};
    while (count < n)
    {
        if (count % 2 == 0)
        {
            c[n - 1 - cr] = s[n - 1 - count];
            s.pop_back();
            cr++;
        }
        else
        {
            c[cl] = s[n - 1 - count];
            s.pop_back();
            cl++;
        }
        count++;
    }
    for (ll x = 0; x < n; x++)
    {
        cout << c[x];
    }
}
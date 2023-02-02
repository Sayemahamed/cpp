#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long siz, a, b, n;
        cin >> siz >> a >> b;
        string s;
        cin >> s;
        n = unique(s.begin(), s.end()) - s.begin();
        n /= 2;
        n++;
        cout << siz * a + max(n * b, siz * b) << endl;
    }
}
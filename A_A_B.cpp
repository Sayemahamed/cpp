#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        long long a = 0, b = 0, i = 0;
        while (s[i] != '+' and i < s.length())
        {
            a *= 10;
            a += s[i++] - '0';
        }
        i++;
        while (s[i] != '+' and i < s.length())
        {
            b *= 10;
            b += s[i++] - '0';
        }
        cout << a + b << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long siz, min = 0, i = 0, j;
        cin >> siz;
        string s;
        cin >> s;
        j = s.length() - 1;

        while (s[i++] != s[j--] and j >= i-1)
            min += 2;

        cout << s.length() - min << endl;
    }
}
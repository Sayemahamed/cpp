#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long mx, power, k = 0, ans = 0;
    cin >> mx >> power;
    string s;
    cin >> s;
    long long data[26][mx];
    memset(data, 0, sizeof(data));
    for (long long j = 0; j < mx; j++)
    {
        for (long long i = 0; i < 26; i++)
        {
            if (j == 0)
            {
                if (s[j] - 'a' == i)
                    data[i][j] = 1;
                else
                    data[i][j] = 0;
            }
            else
            {
                if (s[j] - 'a' == i)
                    data[i][j] = 1 + data[i][j - 1];
                else
                    data[i][j] = 0 + data[i][j - 1];
            }
        }
    }
    for (long long i = 0; i < mx; i++)
    {
    }
}
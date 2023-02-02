#include <bits/stdc++.h>

using namespace std;

int a[27];

bool check()
{
    for (int i = 0; i <= 25; i++)
        if (a[i] >= 2)
            return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (s.size() < 26)
    {
        cout << -1;
        exit(0);
    }
    for (int i = 25; i < s.size(); i++)
    {
        for (int l = 0; l < 27; l++)
            a[l] = 0;
        for (int j = i; j >= i - 25; j--)
            a[s[j] - 'A']++;
        if (check())
        {
            int m = 0;
            while (a[m] > 0)
                m++;
            for (int j = i - 25; j <= i; j++)
            {
                if (s[j] == '?')
                {
                    s[j] = m + 'A';
                    m++;
                    while (a[m] > 0)
                        m++;
                }
            }
            for (int i = 0; i < s.size(); i++)
                s[i] = (s[i] == '?' ? 'A' : s[i]);
            cout << s;
            exit(0);
        }
    }
    cout << -1;
    exit(0);
}
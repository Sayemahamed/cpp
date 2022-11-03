#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, flag = true, cont = 0;
        cin >> n;
        string s;
        cin >> s;
        // cout << s << endl;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cont++;
            }
            else
            {
                if (cont & 1)
                {
                    flag = false;
                    break;
                }
                else
                    cont = 0;
            }
        }
        if (cont & 1)
        {
            flag = false;
        }
        if (flag || n == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
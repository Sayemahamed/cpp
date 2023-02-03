#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        int a, x = 0, y = 0, flag = false;
        cin >> a;
        string s;
        cin >> s;
        for (auto &it : s)
        {
            if (it == 'U')
                y++;
            if (it == 'D')
                y--;
            if (it == 'L')
                x--;
            if (it == 'R')
                x++;
            if (x == 1 and y == 1)
                flag = true;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
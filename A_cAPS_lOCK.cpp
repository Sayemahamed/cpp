#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
        if (s[i] > 91)
        {
            cout << s;
            return 0;
        }
    if (s[0] > 91)
        s[0] -= 32;
    else
        s[0] += 32;
    for (int i = 1; i < s.size(); i++)
        s[i] += 32;
    cout << s;
}

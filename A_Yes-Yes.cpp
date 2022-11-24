#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ans, s;
    while (ans.size() < 1000)
        ans += "Yes";
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (ans.find(s) != -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
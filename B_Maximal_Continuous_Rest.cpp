#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, ans = 0, temp = 0;
    cin >> size;
    string s = "";
    char c;
    while (cin >> c)
        s += c;
    s += s;
    for (auto &it : s)
    {
        if (it == '1')
            temp++;
        else
        {
            ans = max(ans, temp);
            temp = 0;
        }
    }
    ans = max(ans, temp);
    cout << ans;
}
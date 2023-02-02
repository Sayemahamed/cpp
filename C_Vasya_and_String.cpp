#include <bits/stdc++.h>
using namespace std;
map<char, long long> values;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long mx, power, j = 0, ans = 0;
    cin >> mx >> power;
    string s;
    cin >> s;
    for (long long i = 0; i < s.length(); i++)
    {
        while (((values['a'] + (s[j] == 'a')) <= power or (values['b'] + (s[j] == 'b')) <= power) and j < s.length())
            values[s[j]]++, j++;
        values[s[i]]--;
        ans = max(ans, j - i);
    }
    cout << ans << endl;
}
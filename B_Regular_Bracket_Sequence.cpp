#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s = "$" + s;
    long long preSum[s.size()], postSum[s.size()], ans = 0, j = 0;
    memset(preSum, 0, sizeof(preSum));
    memset(postSum, 0, sizeof(postSum));
    for (long long i = 1; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            preSum[i] += preSum[i - 1] + 1;
            postSum[i] += postSum[i - 1];
        }
        else
        {
            preSum[i] += preSum[i - 1];
            postSum[i] += postSum[i - 1] + 1;
        }
    }
    for (long long i = 1; i <= s.size(); i++)
    {
        while (preSum[i] >= postSum[j] and j < s.size())
            j++;
        if (s[i] != ')' and s[j] != '(')
            ans = max(ans, j - i + 1);
    }
    cout << ans << endl;
}
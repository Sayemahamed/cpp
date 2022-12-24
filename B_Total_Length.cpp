#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long siz, upperLimit, sum = 0, ans = 0, j = 0;
    cin >> siz >> upperLimit;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    for (long long i = 0; i < siz; i++)
    {
        while (sum + dat[j] <= upperLimit and j < siz)
        {
            sum += dat[j];
            j++;
        }
        ans += j - i;
        sum -= dat[i];
    }
    cout << ans << endl;
}
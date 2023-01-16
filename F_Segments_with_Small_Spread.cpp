#include <bits/stdc++.h>
using namespace std;
map<long long, long long> dat;
void add(long long j, vector<long long> &dta)
{
    dat[dta[j]]++;
}
void remove(long long i, vector<long long> &dta)
{
    dat[dta[i]]--;
    if (dat[dta[i]] <= 0)
    {
        dat.erase(dat.find(dta[i]));
    }
}
int main()
{
    long long size, upper, ans = 0, j = 0;
    cin >> size >> upper;
    vector<long long> dta(size);
    for (auto &it : dta)
        cin >> it;
    for (long long i = 0; i < size; i++)
    {
        if (dat.empty() and j < size)
            add(j++, dta);
        while (dat.rbegin()->first - dat.begin()->first <= upper and abs(dat.rbegin()->first - dta[j]) <= upper and abs(dat.begin()->first - dta[j]) <= upper and j < size)
            add(j++, dta);
        ans += j - i;
        remove(i, dta);
    }
    cout << ans << endl;
}
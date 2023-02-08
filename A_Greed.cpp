#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long cans, sum = 0;
    cin >> cans;
    for (long long i = 0; i < cans; i++)
    {
        long long x;
        cin >> x;
        sum += x;
    }
    vector<long long> dat(cans);
    for (auto &x : dat)
        cin >> x;
    sort(dat.begin(), dat.end());
    if (dat[cans - 1] + dat[cans - 2] >= sum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size;
    cin >> size;
    vector<long long> dat(size);
    for (auto &it : dat)
        cin >> it;
    sort(dat.begin(), dat.end());
    long long firstMax, secondMax, firstMin, secondMin;
    firstMax = dat[dat.size() - 1];
    secondMax = dat[dat.size() - 2];
    firstMin = dat[0];
    secondMin = dat[1];
    if (secondMax - firstMin > firstMax - secondMin)
        cout << firstMax - secondMin;
    else
        cout << secondMax - firstMin;
}
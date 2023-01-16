#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long firstSize, secondSize;
    cin >> firstSize >> secondSize;
    vector<long long> a(firstSize);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    while (secondSize--)
    {
        long long x;
        cin >> x;
        cout << upper_bound(a.begin(), a.end(), x) - a.begin() << ' ';
    }
}
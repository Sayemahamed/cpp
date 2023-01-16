#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size;
    cin >> size;
    vector<long long> odd, even;
    while (size--)
    {
        long long x;
        cin >> x;
        if (x & 1)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    if (odd.size() > even.size())
        cout << accumulate(odd.begin(), odd.begin() + odd.size() - even.size() - 1, 0);
    else if (odd.size() < even.size())
        cout << accumulate(even.begin(), even.begin() + even.size() - odd.size() - 1, 0);
    else
        cout << 0;
}
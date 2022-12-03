#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long childrens, eachQuery, mx = 0;
    cin >> childrens >> eachQuery;
    vector<long long> child(childrens + 1);
    child[0] = 0;
    for (long long i = 1; i <= childrens; ++i)
    {
        cin >> child[i];
        child[i] = (child[i] + eachQuery - 1) / eachQuery;
        mx = max(mx, child[i]);
    }
    // cout << mx << endl;
    for (long long i = childrens; i >= 0; i--)
    {
        if (child[i] == mx)
        {
            cout << i;
            return false;
        }
    }
}
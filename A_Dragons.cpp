#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long initialPower, dragons, i = 0;
    cin >> initialPower >> dragons;
    vector<pair<long long, long long>> data(dragons);
    for (auto &it : data)
        cin >> it.first >> it.second;
    sort(data.begin(), data.end());
    while (data[i].first < initialPower and i < dragons)
    {
        initialPower += data[i].second;
        i++;
    }
    if (i == dragons)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
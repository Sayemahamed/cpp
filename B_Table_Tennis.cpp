#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long participants, winCondition, currentMax = 0;
    cin >> participants >> winCondition;
    vector<long long> dat(participants);
    map<long long, long long> record;
    for (auto &it : dat)
        cin >> it;
    for (long long i = 1; i < participants; i++)
    {
        currentMax = max(currentMax, max(dat[i], dat[i - 1]));
        record[currentMax]++;
    }
    for (auto &it : dat)
    {
        if (record[it] >= winCondition)
        {
            cout << it << endl;
            return 0;
        }
    }
    cout << *max_element(dat.begin(), dat.end()) << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long enemy;
        cin >> enemy;
        long long enemyHealth[enemy], enemyBlessing[enemy];
        vector<set<long long, long long>> data;
        for (long long i = 0; i < enemy; i++)
            cin >> enemyHealth[i];
        for (long long i = 0; i < enemy; i++)
        {
            cin >> enemyBlessing[i];
            data.push_back({enemyHealth[i], enemyBlessing[i]});
        }
        sort(data.begin(), data.end());
        cout << data.first << endl;
    }
}
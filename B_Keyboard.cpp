#include <bits/stdc++.h>
using namespace std;
long long hight, length, handsReach, ans = 0, flag = false;
int main()
{
    cin >> hight >> length >> handsReach;
    unordered_multimap<char, pair<double, double>> keyboardData;
    vector<pair<long long, long long>> shift;
    for (long long i = 1; i <= hight; i++)
    {
        for (long long j = 1; j <= length; j++)
        {
            char x;
            cin >> x;
            if (x != 'S')
                keyboardData.insert(keyboardData.begin(), {x, {i, j}});
            else
                shift.push_back({i, j});
        }
    }
    // if(shift.size()==0){cout<<-1<<endl;return 0;}
    map<char, long long> data;
    for (auto &it : keyboardData)
        data[it.first] = -1;
    for (auto &it : shift)
    {
        for (auto &it1 : keyboardData)
        {
            long long x = abs(it.first - it1.second.first);
            long long y = abs(it.second - it1.second.second);
            if (islower(it1.first))
            {
                if (x * x + y * y <= handsReach * handsReach)
                    data[toupper(it1.first)] = -1;
                else
                {
                    if (data[toupper(it1.first)] != -1)
                        data[toupper(it1.first)] = 1;
                }
            }
            else
            {
                if (x * x + y * y <= handsReach * handsReach)
                    data[tolower(it1.first)] = -1;
                else
                {
                    if (data[tolower(it1.first)] != -1)
                        data[tolower(it1.first)] = 1;
                }
            }
        }
    }
    long long times;
    cin >> times;
    char c;
    while (times--)
    {
        cin >> c;
        if (data[c] != -1)
            ans++;
        if (data[c] == 0)
            flag = true;
    }
    if (flag)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
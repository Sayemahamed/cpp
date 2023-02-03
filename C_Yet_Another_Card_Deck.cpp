#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long card, qur, i = 1;
    cin >> card >> qur;
    vector<pair<long long, long long>> dat(card);
    for (auto &it : dat)
    {
        cin >> it.first;
        it.second = i++;
    }
    sort(dat.begin(), dat.end());
    list<long long> sorted;
    sorted.
}
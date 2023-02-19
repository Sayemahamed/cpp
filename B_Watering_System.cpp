#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long pipes, water, need, first, total = 0, i = 0;
    cin >> pipes >> water >> need >> first;
    vector<long long> dat(pipes - 1);
    for (auto &it : dat)
        cin >> it, total += it;
        total+=first;
    sort(dat.begin(), dat.end());
    long long j = dat.size();
    while (total * need > water * first)
    {
        total -= dat[--j];
        i++;
    }
    cout << i << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long ans = 0, tmp = 0, numbers;
    cin >> numbers;
    vector<long long> dat(numbers);
    for (auto &it : dat)
        cin >> it;
    for (auto &it : dat)
    {
        ans += abs(it - tmp);
        tmp = it;
    }
    cout << ans;
}
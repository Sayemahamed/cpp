#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//

//----------------------------------------------------------------//
// helper functions //
long long dp(vector<int> &coin, vector<long long> &tmp, long long amount)
{
    if (amount == 0)
        return 0;
    if (tmp[amount] != -1)
        return tmp[amount];
    long long ans = INT_MAX;
    for (auto &it : coin)
    {
        if (amount >= it)
            ans = min(ans, dp(coin, tmp, amount - it) + 1);
    }
    tmp[amount] = ans;
    return ans;
}
int coinChange(vector<int> &coins, int amount)
{
    vector<long long> tmp(amount+7, -1);
    int ans = dp(coins, tmp, amount);
    return (ans == INT_MAX ? -1 : ans);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long coins, amount;
    cin >> coins;
    vector<int> coin(coins);
    for (auto &it : coin)
        cin >> it;
    cin >> amount;
    cout << coinChange(coin, amount) << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}
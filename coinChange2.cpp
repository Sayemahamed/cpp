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
long long ans = 0;
void dp(multiset<long long> &coin, long long amount,vector<vector<long long>>&tmp, long long lb)
{
    if(tmp[amount][lb]){
        ans+=tmp[amount][lb];
        return;
    }
    if (amount == 0){
        ans++;
        tmp[amount][lb]=ans;
    }
    auto it =coin.lower_bound(lb);
    while(true)
    {
        if (amount >= (*it))
            dp(coin, amount - (*it),tmp, (*it));
            if(it==coin.begin()){
                break;
            }
            it--;
    }
}
int change(int amount, vector<int> &coins)
{
    multiset<long long> coin;
    for (auto &it : coins)
        coin.insert(it);
        vector<vector<long long>>tmp;
        for(long long i = 0; i <=amount+7; i++){
            vector<long long>t;
            for(long long j = 0; j<= (*coin.rbegin())+7;j++)t.push_back(0);
            tmp.push_back(t);
        }
    dp(coin, amount,tmp, *coin.rbegin());
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz, amount, x;
    cin >> siz;
    vector<int> coin;
    while (siz--)
    {
        cin >> x;
        coin.push_back(x);
    }
    cin >> amount;
    change(amount, coin);
    cout << ans << endl;
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
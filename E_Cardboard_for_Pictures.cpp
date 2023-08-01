#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define all(x)  x.begin(), x.end()
#define rall(x)  x.rbegin(), x.rend()
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //
long long isPossible( vector<long long>& data, long long board, long long target )
{
    unsigned long long ans = 0;
    for (auto& it : data)
    {
        ans += (it + board) * (it + board);
        if (ans > target)
            break;
    }
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfPictures, target;
    cin >> numberOfPictures >> target;
    vector<long long >data( numberOfPictures );
    for (auto& it : data)
        cin >> it;
    long long low = 0, high = 10e9, mid;
    while (high - low > 1)
    {
        mid = (low + high) / 2;
        if (isPossible( data, mid, target ) <= target)
            low = mid;
        else
            high = mid;
    }
    cout << low / 2 << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}
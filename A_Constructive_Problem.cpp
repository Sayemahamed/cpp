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
long long currentMEX( vector<long long>data ) {
    sort( all( data ) );
    long long ans = 0;
    for (auto& it : data)if (it == ans)ans++;
    return ans;
}
long long firstOf( vector<long long>& data, long long val ) {
    for (long long i = 0;i < data.size();i++)if (data[ i ] == val)return i;
    return data.size();
}
long long lastOf( vector<long long>& data, long long val ) {
    for (long long i = data.size() - 1;i >= 0;i--)if (data[ i ] == val)return i;
    return -1;
}
void replace( vector<long long>& data, long long val, long long target ) {
    for (long long i = 0;i < data.size();i++)if (data[ i ] == val) { data[ i ] = target;return; }
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size;cin >> size;
    vector<long long>data( size );
    map<long long, long long>count;
    for (auto& it : data)cin >> it, count[ it ]++;
    long long targetMEX = currentMEX( data ) + 1;
    long long first = firstOf( data, targetMEX );
    long long last = lastOf( data, targetMEX );
    for (long long i = first;i <= last;i++)data[ i ] = targetMEX - 1;
    if (targetMEX != currentMEX( data ))
        for (auto& it : count) {
            if (it.second > 1 or it.first > targetMEX) {
                replace( data, it.first, targetMEX - 1 );
                break;
            }
        }
    if (targetMEX == currentMEX( data ))cout << "Yes" << endl;
    else cout << "No" << endl;
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
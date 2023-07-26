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
bool getThePermutation( map<long long, long long>& counter, long long siz ) {
    if (counter.size() == siz)return true;
    long long noneExists;
    for (long long i = 1;i < siz;i++) {
        if (counter.find( i ) == counter.end()) {
            noneExists = i;
            break;
        }
    }
    for (auto& it : counter) {
        if (it.second == 2 or it.first > siz) {
            counter[ noneExists ]++;
            counter[ it.first - noneExists ]++;
            break;
        }
    }
    for (long long i = 1;i <= siz;i++) {
        if (counter.find( i ) == counter.end()) return false;
    }
    return true;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;
    cin >> siz;
    vector<long long>data( siz - 1 );
    bool isValid = true;
    long long tmp = (siz * (siz + 1)) / 2;
    for (auto& it : data) {
        cin >> it;
        if (it > tmp)isValid = false;
    }
    map<long long, long long>counter;
    if (isValid) {
        counter[ data[ 0 ] ]++;
        long long sum = data[ 0 ];
        for (long long i = 1; i < data.size(); ++i) {
            counter[ data[ i ] - data[ i - 1 ] ]++;
            sum += data[ i ] - data[ i - 1 ];
        }
        if (tmp - sum > 0)
            counter[ tmp - sum ]++;
        isValid = getThePermutation( counter, siz );
        if (isValid)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
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
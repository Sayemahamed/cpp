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
long long getIdx( set<long long>& temp ) {
    long long i = 1;
    for (auto& it : temp) {
        if (it != i)break;
        i++;
    }
    return i;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size, idx;cin >> size;
    vector<long long>data( size );
    vector<bool>ans( size, false );
    vector<bool>direction( size + 1 );
    for (long long i = 0;i < size;i++) {
        cin >> data[ i ];
        if (data[ i ] == 1)idx = i;
    }
    for (long long i = idx;i < size;i++) {
        direction[ data[ i ] ] = true;
    }
    set<long long >temp;
    long long i = idx - 1, j = idx;
    idx = 1;
    while (i >= 0 or j < size) {
        if (direction[ idx ]) {
            temp.insert( data[ j ] );
            if (data[ j ] == idx) {
                if (temp.size() == *temp.rbegin())
                    ans[ j ] = true;
                idx = getIdx( temp );
            }
            j++;
        }
        else {
            temp.insert( data[ i ] );
            if (data[ i ] == idx) {
                idx = getIdx( temp );
                if (temp.size() == *temp.rbegin())
                    ans[ i ] = true;
            }
            i--;
        }
    }
    for (long long i = 0; i < size;i++)cout << ans[ i ];
    cout << endl;
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
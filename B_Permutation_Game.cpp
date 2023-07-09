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


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfChildren, numberOfTurns;cin >> numberOfChildren >> numberOfTurns;
    set<long long>answer;
    bool flag = true;
    vector<long long>turns( numberOfTurns );
    vector<long long>tmpAns( numberOfChildren + 1, false );
    for (long long i = 1;i <= numberOfChildren;i++) {
        answer.insert( i );
    }
    for (auto& it : turns)cin >> it;
    for (long long i = 0;i < numberOfTurns - 1;i++) {
        if (turns[ i ] > turns[ i + 1 ]) {
            tmpAns[ turns[ i ] ] = turns[ i + 1 ] - turns[ i ] + numberOfChildren;
        }
        else if (turns[ i ] == turns[ i + 1 ]) {
            tmpAns[ turns[ i ] ] = numberOfChildren;
        }
        else {
            tmpAns[ turns[ i ] ] = turns[ i + 1 ] - turns[ i ];
        }
        answer.erase( tmpAns[ turns[ i ] ] );
    }
    long long index = turns[ 0 ];
    for (long long i = 1;i <= numberOfChildren;i++) {
        if (!tmpAns[ i ]) {
            tmpAns[ i ] = *answer.begin();
            answer.erase( *answer.begin() );
        }
    }
    for (long long i = 0;i < numberOfTurns;i++) {
        if (index != turns[ i ]) {
            flag = false;
            break;
        }
        index += tmpAns[ index ];
        index %= (numberOfChildren);
        if (!index)index = numberOfChildren;
    }
    map<long long, long long >checker;
    for (auto& it : tmpAns) {
        checker[ it ]++;
        if (checker[ it ] > 1) {
            flag = false;
            break;
        }
    }
    if (flag) {
        for (int i = 1;i <= numberOfChildren;i++) {
            cout << tmpAns[ i ] << " ";
        }
    }
    else cout << -1 << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}
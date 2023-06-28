#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //
void alice( vector<long long>list[], vector<long long>& ans, long long index, long long distance ) {
    if (ans[ index ] != -1)return;
    for (auto& it : list[ index ]) {
        ans[ index ] = distance;
        alice( list, ans, it, distance + 1 );
    }
}
long long BobRunning( vector<long long>list[], vector<long long>& ans, long long location, long long distance ) {
    for (auto& it : list[ location ]) {
        if (ans[ it ] > distance)
            return max( BobRunning( list, ans, it, distance + 1 ), ans[ location ] );
    }
    return ans[ location];
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz, Bob, x, y;cin >> siz >> Bob;
    vector<long long>adjacencyList[ siz + 1 ], ans( siz + 1, -1 );
    while (siz-- > 1) {
        cin >> x >> y;
        adjacencyList[ x ].push_back( y );
        adjacencyList[ y ].push_back( x );
    }
    alice( adjacencyList, ans, 1, 0 );
    cout << BobRunning( adjacencyList, ans, Bob, 0 ) * 2 << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}
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
bool testOne( string str[], long long size ) {
    long long rCount = 0, bCount = 0, gCount = 0;
    for (long long i = 0;i < size;i++) {
        if (str[ i ][ 0 ] == 'R')rCount++;
        if (str[ i ][ 0 ] == 'B')bCount++;
        if (str[ i ][ 0 ] == 'G')gCount++;
        for (long long j = 0;j < str[ i ].length() - 1;j++) {
            if (str[ i ][ j ] != str[ i ][ j + 1 ])return false;
        }
    }
    return rCount == bCount and bCount == gCount;
}
bool testTwo( string str[], long long sizeX, long long sizeY ) {
    long long rCount = 0, bCount = 0, gCount = 0;
    for (long long i = 0;i < sizeX;i++) {
        if (str[ 0 ][ i ] == 'R')rCount++;
        if (str[ 0 ][ i ] == 'B')bCount++;
        if (str[ 0 ][ i ] == 'G')gCount++;
        for (long long j = 0;j < sizeY - 1;j++) {
            if (str[ j ][ i ] != str[ j + 1 ][ i ])return false;
        }
    }
    return rCount == bCount and bCount == gCount;
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long sizX, sizY;
    cin >> sizY >> sizX;
    string flag[ sizY ];
    for (long long i = 0;i < sizY;i++)cin >> flag[ i ];
    if (testOne( flag, sizY )) {
        cout << "YES" << endl;
        return;
    }
    if (testTwo( flag, sizX, sizY )) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
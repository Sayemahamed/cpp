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
long long canVisit( char board[ 10 ][ 10 ], long long X, long long Y, long long pointX, long long pointY, long long distance ) {
    if (X + pointX >= 0 and X + pointX < 10 and Y + pointY >= 0 and Y + pointY < 10 and board[ X + pointX ][ Y + pointY ] == 'X')
        return canVisit( board, X + pointX, Y + pointY, pointX, pointY, distance + 1 );
    else return distance;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    char board[ 10 ][ 10 ];
    long long xCount = 0, oCount = 0, aCount = 0;
    for (auto& it : board) {
        cin >> it;
    }
    for (long long i = 0;i < 10;i++) {
        for (long long j = 0;j < 10;j++) {
            if (board[ i ][ j ] == '.') {
                if (canVisit( board, i, j, 0, 1, 0 ) + canVisit( board, i, j, 0, -1, 0 ) >= 4)
                    board[ i ][ j ] = 'a';
                if (canVisit( board, i, j, 1, 0, 0 ) + canVisit( board, i, j, -1, 0, 0 ) >= 4)
                    board[ i ][ j ] = 'a';
                if (canVisit( board, i, j, 1, -1, 0 ) + canVisit( board, i, j, -1, 1, 0 ) >= 4)
                    board[ i ][ j ] = 'a';
                if (canVisit( board, i, j, 1, 1, 0 ) + canVisit( board, i, j, -1, -1, 0 ) >= 4)
                    board[ i ][ j ] = 'a';
            }
            if (board[ i ][ j ] == 'X')xCount++;
            if (board[ i ][ j ] == 'O')oCount++;
            if (board[ i ][ j ] == 'a')aCount++;
        }
    }
    // cout << xCount << " " << oCount << " " << aCount << endl;
    if (xCount == oCount and aCount) {
        cout << "YES" << endl;
    }
    else if (xCount > oCount and aCount > 1) {
        cout << "YES" << endl;
    }
    else
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
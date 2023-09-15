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
struct city {
    long long x, y;
    bool isMajor;
    city() { x = 0, y = 0, isMajor = false; }
};

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfCity, majorCity, startCity, endCity;
    cin >> numberOfCity >> majorCity >> startCity >> endCity;
    vector<city> cities( numberOfCity );
    city aCity, bCity;
    for (long long i = 0;i < numberOfCity;i++) {
        cin >> cities[ i ].x >> cities[ i ].y;
        if (i < majorCity)cities[ i ].isMajor = true;
        if (i == startCity-1) {
            aCity.x = cities[ i ].x;aCity.y = cities[ i ].y;
        }
        if (i == endCity-1) {
            bCity.x = cities[ i ].x;bCity.y = cities[ i ].y;
        }
    }
    long long aDistance = INT64_MAX/2, bDistance = INT64_MAX/2;
    for (long long i = 0; i < numberOfCity;i++) {
        if (cities[ i ].isMajor) {
            aDistance = min( abs( cities[ i ].x - aCity.x ) + abs( cities[ i ].y - aCity.y ), aDistance );
            bDistance = min( abs( cities[ i ].x - bCity.x ) + abs( cities[ i ].y - bCity.y ), bDistance );
        }
    }
    cout << min( abs( aCity.x - bCity.x ) + abs( aCity.y - bCity.y ), aDistance + bDistance ) << endl;
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
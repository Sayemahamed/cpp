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
struct dat {
    long long  points, penalty;
    dat() {
        points = 0;
        penalty = 0;
    }
};
//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long participants, problems, duration;
    cin >> participants >> problems >> duration;
    vector<dat>people( participants );
    dat Rudolf;
    for (long long i = 0;i < participants;i++) {
        vector<long long>data( problems );
        for (auto& it : data)cin >> it;
        sort( data.begin(), data.end() );
        long long tmp = duration, tmp1 = data[ 0 ], j = 0;
        while (tmp >= data[ j ] and j < problems) {
            tmp -= data[ j ];
            people[ i ].points++;
            people[ i ].penalty += tmp1;
            tmp1 += data[ ++j ];
        }
        if (!i) {
            Rudolf.points = people[ 0 ].points;
            Rudolf.penalty = people[ 0 ].penalty;
        }
    }
    sort( people.begin(), people.end(), []( const auto& a, const auto& b ) {
        if (a.points == b.points)
            return b.penalty > a.penalty;
        else return a.points > b.points;
        } );
    // for (auto& it : people)cout << it.points << " " << it.penalty << endl;
    // cout << endl << endl;
    cout << (lower_bound( people.begin(), people.end(), Rudolf, []( const auto& a, const auto& b ) {
        if (a.points == b.points)
            return b.penalty > a.penalty;
        else return a.points > b.points;
        } ) - people.begin()) + 1 << endl;
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
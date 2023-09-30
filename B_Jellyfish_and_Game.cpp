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
    long long x, jelly, gelly, terns;cin >> jelly >> gelly >> terns;
    long long jellyAns = 0, mx, mn;
    map<long long, long long >jellyData, gellyData;
    for (long long i = 0; i < jelly; i++) {
        cin >> x;
        jellyData[ x ]++;
        jellyAns += x;
    }
    for (long long i = 0;i < gelly; i++) {
        cin >> x;
        gellyData[ x ]++;
    }
    mx = max( gellyData.rbegin()->first, jellyData.rbegin()->first );
    mn = min( gellyData.begin()->first, jellyData.begin()->first );
    // cout<<jellyData.begin()->first<<endl;
    for (long long i = 1;i <= terns and i <= 3;i++) {
        if (i & 1) {
            if (jellyData.begin()->first <= gellyData.rbegin()->first) {

                jellyAns += gellyData.rbegin()->first;
                jellyData[ gellyData.rbegin()->first ]++;
                gellyData.rbegin()->second--;
                if (gellyData.rbegin()->second == 0)
                    gellyData.erase( gellyData.find( gellyData.rbegin()->first ) );


                jellyAns -= jellyData.begin()->first;
                gellyData[ jellyData.begin()->first ]++;
                jellyData.begin()->second--;
                if (jellyData.begin()->second == 0)
                    jellyData.erase( jellyData.find( jellyData.begin()->first ) );
            }
        }
        else {
            if (jellyData.rbegin()->first >= gellyData.begin()->first) {

                jellyAns -= jellyData.rbegin()->first;
                gellyData[ jellyData.rbegin()->first ]++;
                jellyData.rbegin()->second--;
                if (jellyData.rbegin()->second == 0)
                    jellyData.erase( jellyData.find( jellyData.rbegin()->first ) );
                jellyAns += gellyData.begin()->first;
                jellyData[ gellyData.begin()->first ]++;
                gellyData.begin()->second--;
                if (gellyData.begin()->second == 0)
                    gellyData.erase( gellyData.find( gellyData.begin()->first ) );
            }
        }
    }
    if (terns <= 3)
        cout << jellyAns << endl;
    else {
        if (terns & 1) {
            cout << jellyAns << endl;
        }
        else {
            cout << jellyAns - mx + mn << endl;
        }
    }
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
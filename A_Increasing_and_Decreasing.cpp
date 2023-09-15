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
    long long start, end, size, i = 0;cin >> start >> end >> size;
    stack<long long>ans;
    while (size-- > 1) {
        end -= i;
        ans.push( end );
        i++;
    }
    if (ans.top() < start + i)cout << -1 << endl;
    else {
        cout << start << ' ';
        while (ans.size()) {
            cout << ans.top() << ' ';
            ans.pop();
        }
        cout << endl;
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
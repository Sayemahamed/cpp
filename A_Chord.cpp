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
    string str;
    cin>>str;
    if(str=="ACE" or str=="BDF" or str=="CEG"  or str=="DFA" or str=="EGB" or str=="FAC" or str=="GBD")
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}
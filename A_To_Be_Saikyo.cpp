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
    long long siz,ans=0;cin>>siz;
    vector<long long>data(siz);
    for(auto&it:data)cin>>it;
    for(long long i=1;i<siz;i++)
    ans=max(ans,data[i]+1-data[0]);
    cout<<ans<<endl;
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
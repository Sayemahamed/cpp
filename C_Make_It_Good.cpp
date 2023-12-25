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
    long long size;cin>>size;
    vector<long long>dat(size);
    for(auto&it:dat)cin>>it;
    long long i=size-1;
    while(i>0 and dat[i]<=dat[i-1])i--;
    while(i>0 and dat[i]>=dat[i-1])i--;
    cout<<i<<endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}
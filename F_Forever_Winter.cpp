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
    long long n,m,x,y,first;cin>>n>>m;
    vector<long long>index[n+1];
    for(long long i=0;i<m;i++){
        cin>>x>>y;
        index[x].push_back(y);
        index[y].push_back(x);
    } 
}

//----------------------------------------------------------------//
// main function//
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}
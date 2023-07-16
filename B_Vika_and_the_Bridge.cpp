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
    long long siz, colors;
    cin >> siz >> colors;
    vector<long long> index( siz );
    for (auto& it : index)cin >> it;
    for (long long i = 0; i < siz; i++) {
        bool hasALife = true;
        long long tmp = index[ i ];
        for (long long j = i;true;j += i + 1) {
            if (j >= siz) {
                cout << i << endl;
                return;
            }
            if (index[ j ] != tmp) {
                if (hasALife) {
                    long long x=j;
                    while(x<=j+i){
                        if(index[++x]==tmp){
                            j=x;
                            break;
                        }
                    }
                    hasALife = false;
                }
                else break;
            }
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
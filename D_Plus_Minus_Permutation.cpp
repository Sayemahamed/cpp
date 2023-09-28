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
    long long numbers, plus, minus;cin >> numbers >> plus >> minus;
    long long temp = numbers /( (plus*minus)/gcd( plus, minus ));
    plus = numbers / plus;minus = numbers / minus;
    plus -= temp;minus -= temp;
    long long ans = (numbers*(numbers+1))/2 -((numbers-plus)*(numbers+1-plus))/2;
    ans-=(minus*(minus+1))/2;
    cout << ans << endl;
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
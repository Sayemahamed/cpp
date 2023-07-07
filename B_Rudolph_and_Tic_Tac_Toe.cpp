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
    string str1, str2, str3, ans = "DRAW";
    cin >> str1 >> str2 >> str3;
    if (str1[ 0 ] == str1[ 1 ] && str1[ 1 ] == str1[ 2 ] and str1[ 2 ] != '.')ans = str1[ 0 ];
    if (str2[ 0 ] == str2[ 1 ] && str2[ 1 ] == str2[ 2 ] and str2[ 2 ] != '.')ans = str2[ 0 ];
    if (str3[ 0 ] == str3[ 1 ] && str3[ 1 ] == str3[ 2 ] and str3[ 2 ] != '.')ans = str3[ 0 ];
    for (int i = 0;i < 3;i++) {
        if (str1[ i ] == str2[ i ] && str1[ i ] == str3[ i ] and str1[ i ] != '.')ans = str1[ i ];
    }
    if (str1[ 0 ] == str2[ 1 ] and str2[ 1 ] == str3[ 2 ] and str1[ 0 ] != '.')ans = str1[ 0 ];
    if (str1[ 2 ] == str2[ 1 ] and str2[ 1 ] == str3[ 0 ] and str1[ 2 ] != '.')ans = str1[ 2 ];
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
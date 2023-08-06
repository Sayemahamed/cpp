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
long long sortIt( long long turn, string& str ) {
    if (is_sorted( str.begin(), str.end() ))return turn;
    string str1 = str, str3 = str;
    long long index = str.length() - 1;
    while (index > 0 and str[ index ] == '0' + (index))index--;
    for (long long i = 1;i < index;i++) {
        if (str[ i ] != '0' + i and (str[ i ] - str[ index ]) == 1) swap( str1[ i ], str1[ index ] );
        if (str[ i ] != '0' + i and (str[ i ] - str[ index ]) == 2)swap( str3[ i ], str3[ index ] );
    }
    if (str1 == str and str == str3) {
        for (long long i = 1;i < index;i++) {
            if (str[ i ] - str[ index ] == 1)
                swap( str1[ i ], str1[ index ] );
            if (str[ i ] - str[ index ] == 2)
                swap( str3[ i ], str3[ index ] );
        }
    }
    if (str1 == str)return sortIt( turn + 1, str3 );
    if (str3 == str)return sortIt( turn + 1, str1 );
    return min( sortIt( turn + 1, str1 ), sortIt( turn + 1, str3 ) );
}

//----------------------------------------------------------------//
// solve function//
void solve( long long siz ) {
    string str = "0";
    for (int i = 0;i < siz;i++) {
        char a;
        cin >> a;
        str += a;
    }
    // cout << str << endl;
    // if (is_sorted( str.rbegin(), str.rend() - 1 ))
    //     cout << siz - 1 << endl;
    // else
    cout << sortIt( 0, str ) << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test, siz;
    cin >> siz >> test;
    while (test--) {
        solve( siz );
    }
}
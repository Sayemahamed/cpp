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
void add( map<char, long long>& frequencyMap, char x ) {
    frequencyMap[ x ]++;
}
void remove( map<char, long long>& frequencyMap, char x ) {
    frequencyMap[ x ]--;
    if (frequencyMap[ x ] == 0)frequencyMap.erase( frequencyMap.find( x ) );
}
bool isCorrect( map<char, long long>& frequencyMap, long long frequency ) {
    for (auto& it : frequencyMap)
        if (it.second != frequency)return false;
    // if (frequencyMap.size() == 0)return false;
    return true;
}
bool isAddable( map<char, long long>& frequencyMap, char x, long long frequency ) {
    for (auto& it : frequencyMap)
        if (it.second + (it.first == x) > frequency)return false;
    return true;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz, frequency;cin >> siz >> frequency;
    string str;cin >> str;
    long long longestAns = 0, j = 0;
    string ans = "IMPOSSIBLE";
    map<char, long long>frequencyMap;
    for (long long i = 0;j < siz;i++) {
        while (i < siz and isAddable( frequencyMap, str[ i ], frequency )) {
            add( frequencyMap, str[ i++ ] );
            if (i - j > longestAns and isCorrect( frequencyMap, frequency )) {
                longestAns = i - j;
                string tmp = "";
                for (long long k = j;k < i;k++)tmp += str[ k ];
                ans = tmp;
            }
        }
        remove( frequencyMap, str[ j++ ] );
    }
    if (ans == "IMPOSSIBLE") {
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        cout << longestAns << endl;
        cout << ans << endl;
    }
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}
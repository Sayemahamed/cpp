#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
string reFactor( string str ) {
    for (long long i = 0;i < str.length();i++) {
        if (str[ i ] >= 97)str[ i ] -= 32;
    }
    return str;
}
long long ans;
void dfs( map<string, vector<string>>& data, string str, long long distance ) {
    ans = max( ans, distance );
    for (auto& it : data[ str ]) {
        dfs( data, it, distance + 1 );
    }
}
int main() {
    long long siz;
    cin >> siz;
    string str1, str2, str3;
    map<string, vector<string>>data;
    while (siz--) {
        cin >> str1;
        str1 = reFactor( str1 );
        cin >> str2;
        str2 = reFactor( str2 );
        cin >> str3;
        str3 = reFactor( str3 );
        data[ str3 ].push_back( str1 );
    }
    dfs( data, "POLYCARP", 1 );
    cout << ans << endl;
}
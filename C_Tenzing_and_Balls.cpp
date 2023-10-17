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
long long dp( map<long long, vector<long long>>& location, vector<long long >& memoise, vector<long long >& colors, long long index ) {
	if (index == colors.size()) return 0;
	if (memoise[ index ] != -1)return memoise[ index ];
	long long ans = dp( location, memoise, colors, index + 1 );
	for (long long i = lower_bound( location[ colors[ index ] ].begin(), location[ colors[ index ] ].end(), index + 1 ) - location[ colors[ index ] ].begin();i < location[ colors[ index ] ].size();i++) {
		ans = max( ans, location[ colors[ index ] ][ i ] - index + 1 + dp( location, memoise, colors, location[ colors[ index ] ][ i ] + 1 ) );
	}
	memoise[ index ] = ans;
	return memoise[ index ];
}

//----------------------------------------------------------------//
// solve function//
void solve() {
	long long siz;cin >> siz;
	vector<long long>colors( siz ), memoise( siz, -1 );
	map<long long, vector<long long>>location;
	for (long long i = 0;i < siz;i++) {
		cin >> colors[ i ];
		location[ colors[ i ] ].push_back( i );
	}
	cout << dp( location, memoise, colors, 0 ) << endl;
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
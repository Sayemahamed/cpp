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
void dp( vector<long long>& colors, map<long long, vector<long long>>& index, vector<long long>& memoise, long long i ) {
	if (i - 1) dp( colors, index, memoise, i - 1 );
	long long ans ;
	for (auto& it : index[ colors[ i ] ]) {
		if (it >= i)break;
		ans = i - it + 1;
		memoise[ i ] = max( ans + memoise[ it - 1 ], memoise[ i ] );
	}
	if (!memoise[ i ])memoise[ i ] = memoise[ i - 1 ];
}

//----------------------------------------------------------------//
// solve function//
void solve() {
	long long siz;cin >> siz;
	vector<long long>colors( siz + 1, 0 ), memoise( siz + 1, 0 );
	map<long long, vector<long long>>index;
	for (long long i = 1;i <= siz;i++) {
		cin >> colors[ i ];
		index[ colors[ i ] ].push_back( i );
	}
	dp( colors, index, memoise, siz );
	auto ans = max_element( memoise.begin(), memoise.end() );
	cout << *ans << endl;
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
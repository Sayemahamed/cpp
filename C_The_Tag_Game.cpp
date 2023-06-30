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
long long diff, Bob;
//----------------------------------------------------------------//
// helper functions //
void dfs( vector<long long>list[], vector<long long>& ans, vector<long long>& parent, long long position, long long distance ) {
	if (position == Bob and !ans[ position ])diff = distance;
	ans[ position ] = distance;
	for (auto& child : list[ position ]) {
		parent[ child ] = position;
		if (!ans[ child ])
			dfs( list, ans, parent, child, distance + 1 );
		ans[ position ] = max( distance, ans[ child ] );
	}
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
	long long siz, x, y;
	cin >> siz >> Bob;
	vector<long long>list[ siz + 1 ], ans( siz + 1, 0 ), parent( siz + 1, 0 );
	for (long long i = 1;i < siz;i++) {
		cin >> x >> y;
		list[ x ].push_back( y );
		list[ y ].push_back( x );
	}
	dfs( list, ans, parent, 1, 1 );
	diff++;
	diff /= 2;
	while (diff--)Bob = parent[ Bob ];
	cout << (ans[ Bob ] - 1) * 2 << endl;
}


//----------------------------------------------------------------//
// main function//
int main()
{
	ios_base::sync_with_stdio( false );
	cin.tie( NULL );
	cout.tie( NULL );
	long long test = 1;
	// cin >> test;
	while (test--)
	{
		solve();
	}
}
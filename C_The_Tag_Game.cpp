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
void dfs( vector<int>list[], vector<int>& distance, vector<int>& parent, vector<int>& ans, int position, int dis ) {
	for (auto& child : list[ position ]) {
		if (child != parent[ position ]) {
			distance[ child ] = dis + 1;
			ans[ child ] = distance[ child ];
			parent[ child ] = position;
			dfs( list, distance, parent, ans, child, dis + 1 );
			ans[ position ] = max( ans[ child ], ans[ position ] );
		}
	}
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
	long long siz, Bob, x, y;
	cin >> siz >> Bob;
	vector<int>list[ siz + 1 ], distance( siz + 1, 0 ), ans( siz + 1, 0 ), parent( siz + 1, 0 );
	for (long long i = 1;i < siz;i++) {
		cin >> x >> y;
		list[ x ].push_back( y );
		list[ y ].push_back( x );
	}
	dfs( list, distance, parent, ans, 1, 0 );
	long long jump = distance[ Bob ] + 1;
	jump /= 2;
	while (jump-- > 1)Bob = parent[ Bob ];
	cout << ans[ Bob ] * 2 << endl;
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
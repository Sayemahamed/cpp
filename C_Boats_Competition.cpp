#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve()
{
	long long siz,ans=0;cin>>siz;
	multiset<long long>dat;
	for(long long i=0;i<siz;i++){
		long long x;cin>>x;
		dat.insert(x);
	}
	long long limit=(*dat.rbegin())*2;
	
	cout<<ans<<endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long test = 1;
	cin >> test;
	while (test--)
	{
		solve();
	}
}
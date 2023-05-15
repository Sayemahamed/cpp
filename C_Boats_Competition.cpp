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
	long long siz,x,ans=0;cin>>siz;
	map<long long, long long>dat;
	for(long long i=0;i<siz;i++){
		cin>>x;
		dat[x]++;
	}
	for(long long sum=0;sum<=siz*2;sum++){
		long long res=0;
		for(long long first=0;first*2<=sum;first++){
			if(dat.count(first) and dat.count(sum-first)){
				if(first==sum-first)res+=dat[first]/2;
				else res+=min(dat[first],dat[sum-first]);
			}
		}
		ans=max(ans,res);
	}
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
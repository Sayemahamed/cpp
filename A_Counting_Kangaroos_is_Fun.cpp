#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long siz, ans, j;
	cin >> siz;
	ans = siz;
	vector<long long> dat(siz);
	for (auto &it : dat)
		cin >> it;
	sort(dat.begin(), dat.end());
	j = lower_bound(dat.begin(), dat.end(), dat[0] * 2) - dat.begin();
	for (long long i = 0; i < siz; i++)
	{
		if(j<siz and dat[j]>=dat[i]*2)ans--,j++;
		j=max(j,lower_bound(dat.begin(), dat.end(), dat[0] * 2) - dat.begin());
	}
	cout<<ans<<endl;
}
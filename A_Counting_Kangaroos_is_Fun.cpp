#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long kangaroo, j = 0;
	cin >> kangaroo;
	vector<long long> dat(kangaroo);
	for (auto &it : dat)
		cin >> it;
	sort(dat.begin(), dat.end());
	for (long long i = 0; i < dat.size(); i++)
	{
		if (dat[i] >= 2 * dat[j])
			j++;
	}
	cout << kangaroo - j << endl;
}
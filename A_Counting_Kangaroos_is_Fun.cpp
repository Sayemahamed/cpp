#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long numberOfKangaroo, j = 0;
	cin >> numberOfKangaroo;
	vector<long long> sizeOfKangaroo(numberOfKangaroo);
	for (auto &it : sizeOfKangaroo)
		cin >> it;
	sort(sizeOfKangaroo.begin(), sizeOfKangaroo.end());
	for (long long i = 0; i < numberOfKangaroo; i++)
	{
		if (sizeOfKangaroo[i] >= 2 * sizeOfKangaroo[j])
			j++;
	}
	cout << numberOfKangaroo - min(j, numberOfKangaroo / 2) << endl;
}
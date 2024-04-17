#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	vector<int> oddValue;
	vector<int> evenValue(n);

	int sum = 0;
	
	for (int i = 0; i < n ; ++i)
	{
		cin >> evenValue[i];
	
		if (evenValue[i] % 2 == 0)
			evenValue[i] /= 2;
		else
		{
			oddValue.push_back(i);
			evenValue[i] = ceil(evenValue[i] / 2.0);
		}

		sum += evenValue[i];
	}

	if (sum != 0)
	{
		for (int i = 0; i < int(oddValue.size()) and sum != 0; ++i)
		{
			--sum;
			--evenValue[oddValue[i]];
		}
	}

	for (auto &it : evenValue)
		cout << it << endl;
}
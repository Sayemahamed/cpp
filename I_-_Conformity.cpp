#include <bits/stdc++.h>
using namespace std;
long long students;
int main()
{

	while (cin >> students, students)
	{
		map<vector<long long>, long long> data;
		for (long long i = 0; i < students; i++)
		{
			vector<long long> choice(5);
			for (auto &it : choice)
				cin >> it;
			sort(choice.begin(), choice.end());
			data[choice]++;
		}
		long long mx = 0, cnt = 0;
		for (auto &it : data)
		{
			if (it.second > mx)
			{
				mx = it.second;
			}
		}
		for (auto &it : data)
		{
			if (it.second == mx)
			{
				cnt++;
			}
		}
		cout << mx * cnt << endl;
	}
}
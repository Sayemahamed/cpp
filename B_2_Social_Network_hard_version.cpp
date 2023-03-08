#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	//freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, k;
	cin >> n >> k;
	
	queue<int> q;
	set<int> vals;
	for (int i = 0; i < n; ++i) {
		int id;
		cin >> id;
		if (!vals.count(id)) {
			if (int(q.size()) >= k) {
				int cur = q.front();
				q.pop();
				vals.erase(cur);
			}
			vals.insert(id);
			q.push(id);
		}
	}
	
	vector<int> res;
	while (!q.empty()) {
		res.push_back(q.front());
		q.pop();
	}
	reverse(res.begin(), res.end());
	cout << res.size() << endl;
	for (auto it : res) cout << it << " ";
	cout << endl;
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long peopleCount, guardsCount;
    cin >> peopleCount>> guardsCount;
    string s;
    cin >> s;
    bool flag = true;
    map<char, long long> tmp, ans;
    for (auto &it : s)
        tmp[it]++;
    for (auto &it : s)
    {
        ans[it]++;
        if (ans.size() > guardsCount)
            flag = false;
        if (ans[it] == tmp[it])
            ans.erase(ans.find(it));
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
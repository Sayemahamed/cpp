#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, i = 0;
    cin >> siz;
    string str;
    cin >> str;
    vector<long long> dat(siz);
    for (auto &it : dat)cin >> it;
    vector<bool> isVisited(siz, 0);
    while (i >= 0 and i < siz)
    {
        if (isVisited[i])
        {
            cout << "INFINITE";
            return 0;
        }
        isVisited[i] = true;
        if (str[i] == '>')
            i += dat[i];
        else
            i -= dat[i];
    }
    cout << "FINITE";
}
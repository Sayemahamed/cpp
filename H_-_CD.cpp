#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        long long n, m, ans = 0;
        cin >> n >> m;
        if(n==0&&m==0)break;
        map<long long, long long> data;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            data[x]++;
        }
        for (long long i = 0; i < m; i++)
        {
            long long x;
            cin >> x;
            data[x]++;
        }
        for (auto &it : data)
            if (it.second == 2)
                ans++;
        cout << ans << endl;
    }
}
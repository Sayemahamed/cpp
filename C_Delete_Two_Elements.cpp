#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long siz, tot = 0;
        cin >> siz;
        vector<long long> dat(siz);
        for (auto &i : dat)
            cin >> i, tot += i;
        if ((tot * 2) % siz != 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            long long ans = 0, needed = (tot * 2) / siz;
            map<long long, long long> datM;
            for (auto &it : dat)
                datM[it]++;
            for (auto &it : dat)
            {
                if (datM.find(needed - it) != datM.end())
                {
                    ans += datM[needed - it];
                    if (needed == it * 2)
                        ans--;
                }
            }
            cout << (ans >> 1) << endl;
        }
    }
}
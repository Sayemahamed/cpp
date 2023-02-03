#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long siz;
        cin >> siz;
        vector<long long> dat(siz);
        for (auto &it : dat)
            cin >> it;
        for (long long i = 0; i < siz - 1; i++)
        {
            if (dat[i] < 1 and dat[i + 1] > 0)
            {
                if (abs(dat[i]) > dat[i + 1])
                    dat[i] = abs(dat[i]);
                dat[i + 1] = -dat[i + 1];
            }
            else if (dat[i] > 0 and dat[i + 1] < 1)
            {
                if (abs(dat[i + 1]) > dat[i])
                    dat[i + 1] = abs(dat[i + 1]);
                dat[i] = -dat[i];
            }
            else if (dat[i] < 0 and dat[i + 1] < 0)
            {
                dat[i + 1] = -dat[i + 1];
                dat[i] = -dat[i];
            }
            if (dat[i] == 0 or dat[i + 1] == 0)
            {
                dat[i + 1] = abs(dat[i + 1]);
                dat[i] = abs(dat[i]);
            }
        }
        cout << accumulate(dat.begin(), dat.end(), 0) << endl;
    }
}
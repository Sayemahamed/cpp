#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numbers, firstIdx, lastIdx;
        cin >> numbers;
        vector<long long> num(numbers);
        for (long long i = 0; i < numbers; i++)
        {
            cin >> num[i];
            if (num[i] == 1)
            {
                firstIdx = i - 1;
                lastIdx = i + 1;
            }
        }
        set<long long> dat;
        if (lastIdx <= numbers)
            dat.insert(num[lastIdx - 1]);
        else
            dat.insert(num[firstIdx + 1]);
        while (firstIdx >= 0 || lastIdx < numbers)
        {
            if (lastIdx < numbers)
            {
                dat.insert(num[lastIdx]);
                long long siz = 0;
                for (auto it = dat.begin(); it != dat.lower_bound(num[lastIdx]); it++)
                    siz++;
                // cout<<siz<<' ';
                if (siz != num[lastIdx] - 1)
                    num[lastIdx] = 0;
                else
                    num[lastIdx] = 1;
                lastIdx++;
            }
            if (firstIdx >= 0)
            {
                dat.insert(num[firstIdx]);
                long long siz = 0;
                for (auto it = dat.begin(); it != dat.lower_bound(num[firstIdx]); it++)
                    siz++;
                // cout<<siz<<' ';
                if (siz != num[firstIdx] - 1)
                    num[firstIdx] = 0;
                else
                    num[firstIdx] = 1;
                firstIdx--;
            }
        }
        for (auto &it : num)
            cout << it;
        cout << endl;
    }
}

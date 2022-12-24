#include <bits/stdc++.h>
using namespace std;
long long num, idx[1000007];
void add(vector<long long> &data, long long j)
{
    if (idx[data[j]] == 0)
    {
        num++;
        idx[data[j]]++;
    }
    else
        idx[data[j]]++;
}
void remove(vector<long long> &data, long long i)
{
    if (idx[data[i]] == 1)
    {
        num--;
        idx[data[i]]--;
    }
    else
        idx[data[i]]--;
}
int main()
{
    long long size, upperLimit, j = 0, ans = 0;
    cin >> size >> upperLimit;
    vector<long long> data(size);
    for (auto &it : data)
        cin >> it;
    for (long long i = 0; i < size; i++)
    {
        while (num <= upperLimit and j < size)
        {
            add(data, j);
            j++;
        }
        if (num > upperLimit)
            remove(data, --j);
        ans += j - i;
        remove(data, i);
    }
    cout << ans << endl;
}
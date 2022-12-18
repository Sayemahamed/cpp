#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, j = 1, ans = 0;
    cin >> size;
    vector<long long> data(size);
    for (auto &it : data)
        cin >> it;
    for (long long i = 0; i < size; ++i)
    {
        if (i > j)
        {
            j = i;
            i--;
        }
        while (data[j - 1] <= data[j] and j < size)
            j++;
        ans = max(ans, j - i);
    }
    cout << ans << endl;
}
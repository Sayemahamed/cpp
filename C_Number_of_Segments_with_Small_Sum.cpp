#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, sum = 0, total, j = 0, ans = 0;
    cin >> size >> total;
    vector<long long> data(size);
    for (auto &it : data)
        cin >> it;
    for (long long i = 0; i < size; i++)
    {
        while (sum + data[j] <= total and j < size)
        {
            sum += data[j];
            j++;
        }
        sum -= data[i];
        ans += j - i;
    }
    cout << ans;
}
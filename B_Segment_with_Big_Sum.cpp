#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long elements, total, ans = _I64_MAX, j = 0, sum = 0;
    cin >> elements >> total;
    vector<long long> data(elements);
    for (auto &it : data)
        cin >> it;
    for (long long i = 0; i < elements; i++)
    {
        while (j < elements)
        {
            if (sum >= total)
                break;
            sum += data[j];
            j++;
        }
        if (sum >= total)
            ans = min(ans, j - i);
        sum -= data[i];
    }
    if (ans == _I64_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
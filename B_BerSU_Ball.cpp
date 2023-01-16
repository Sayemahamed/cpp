#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, ans = 0, i = 0, j = 0;
    cin >> a;
    vector<long long> datA(a);
    for (auto &it : datA)
        cin >> it;
    cin >> b;
    vector<long long> datB(b);
    for (auto &it : datB)
        cin >> it;
    sort(datA.begin(), datA.end());
    sort(datB.begin(), datB.end());
    while (i < datA.size() or j < datB.size())
    {
        if (abs(datA[i] - datB[j]) < 2)
        {
            ans++;
            i++;
            j++;
        }
        else if (datA[i] < datB[j])
        {
            i++;
        }
        else
            j++;
    }
    cout << ans << endl;
}
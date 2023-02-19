#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long potatoes, blender, blendPower, sum = 0, ans = 0, j = 0;
    cin >> potatoes >> blender >> blendPower;
    vector<long long> dat(potatoes);
    for (auto &it : dat)
        cin >> it;
    // sort(dat.begin(), dat.end());
    while (j < potatoes)
    {
        while (sum + dat[j] <= blender and j < potatoes)
            sum += dat[j++];
        while (j < potatoes and sum + dat[j] > blender)
        {
            long long tmp = dat[j] + sum - blender;
            tmp = (tmp + blendPower - 1) / blendPower;
            sum -= blendPower * tmp;
            ans += tmp;
            sum = max(sum, (long long)0);
        }
    }
    ans += (sum + blendPower - 1) / blendPower;
    cout << ans;
}
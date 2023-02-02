#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long prisoners, maxCrime, maxNumber, ans = 0, temp = 0, j = 0;
    cin >> prisoners >> maxCrime >> maxNumber;
    vector<long long> dat(prisoners);
    for (auto &it : dat)
        cin >> it;
    for (long long i = 0; i < prisoners; i++)
    {
        while (dat[j] <= maxCrime and j < prisoners)
        {
            temp++;
            j++;
        }
        // cout<<temp<<endl;
        ans += max(temp - maxNumber + 1, (long long)0);
        temp = 0;
        j = max(i + 1, j);
        i = max(i, j - 1);
    }
    cout << ans;
}
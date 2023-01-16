#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, destination, i = 0;
    cin >> siz >> destination;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    while (i < destination)
    {
        if (i == destination - 1)
        {
            cout << "YES" << endl;
            return 0;
        }
        i += dat[i];
    }
    cout << "NO" << endl;
    return 0;
}
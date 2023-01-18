#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long ranks;
    cin >> ranks;
    vector<long long> dat(--ranks);
    for (long long i = 0; i < ranks; i++)
    {
        cin >> dat[i];
        if (i)
            dat[i] += dat[i - 1];
    }
    long long a, b;
    cin >> a >> b;
    if (a > 1)
        cout << dat[b - 2] - dat[a - 2] << endl;
    else
        cout << dat[b - 2];
}
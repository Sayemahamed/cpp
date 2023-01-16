#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, k = 0;
    cin >> siz;
    cout << siz << endl;
    vector<long long> dat(siz);
    for (auto& it : dat)
        cin >> it;
    for (long long i = 0; i < siz; i++)
    {
        k = i;
        for (long long j = i; j < siz; j++)
            if (dat[j] < dat[k])
                k = j;
        cout << i << " " << k << endl;
        swap(dat[k], dat[i]);
    }
}
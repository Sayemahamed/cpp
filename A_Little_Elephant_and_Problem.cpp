#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long elements, num = 0;
    cin >> elements;
    vector<long long> dat(elements), dat2(elements);
    for (long long i = 0; i < elements; i++)
    {
        cin >> dat[i];
        dat2[i] = dat[i];
    }
    sort(dat.begin(), dat.end());
    for (long long i = 0; i < elements; i++)
        if (dat[i] != dat2[i])
            num++;
    if (num > 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
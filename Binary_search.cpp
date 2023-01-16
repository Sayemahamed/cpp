#include <bits/stdc++.h>
using namespace std;
long long binar(long long x, vector<long long> &dat)
{
    long long low = 0, high = 1, mid;
    while (x >= dat[high] and high < dat.size())
        high <<= 1;
    while (high - low > -1)
    {
        mid = (high + low) >> 1;
        if (dat[mid] == x)
            return mid;
        if (dat[mid] > x)
            high = mid - 1;
        else if (dat[mid] < x)
            low = mid + 1;
        else
            high = mid;
    }
    return -1;
}
int main()
{
    long long siz, qur;
    cin >> siz >> qur;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    while (qur--)
    {
        long long x;
        cin >> x;
        cout << binar(x, dat) << endl;
    }
}
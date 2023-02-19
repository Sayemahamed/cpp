#include <bits/stdc++.h>
using namespace std;
bool isPrime[1007];
vector<long long> dat;
int main()
{
    isPrime[0] = isPrime[1] = true;
    for (long long i = 2; i <= 1000; i++)
    {
        if (!isPrime[i])
        {
            dat.push_back(i);
            for (long long j = i * i; j <= 1000; j += i)
                isPrime[j] = true;
        }
    }
    long long n, need, tmp = 0, i = 0;
    cin >> n >> need;
    while (dat[i] + dat[i + 1] <= n and i<dat.size())
    {
        if (!isPrime[dat[i] + dat[i + 1] + 1])
            tmp++;
        i++;
    }
    if (tmp < need)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
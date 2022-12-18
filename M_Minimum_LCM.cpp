#include <bits/stdc++.h>
using namespace std;
bool prime[1000000];
int main()
{
    prime[0] = prime[1] = true;
    vector<long long> preCompute;
    for (long long i = 2; i < 100000; i++)
    {
        if (!prime[i])
        {
            preCompute.push_back(i);
            for (long long j = i * i; j < 100000; j += i)
                prime[j] = true;
        }
    }
    long long test;
    cin >> test;
    while (test--)
    {
        long long x, flag = true;
        cin >> x;
        for (long long i = 0; i < preCompute.size(); ++i)
        {
            if (!(x % preCompute[i]))
            {
                cout << x / preCompute[i] << ' ' << x - x / preCompute[i] << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << x - 1 << ' ' << 1 << endl;
    }
    // cout<<preCompute.size() << endl;
}
#include <bits/stdc++.h>
using namespace std;
const long long n = 500000 + 7;
bool isPrime[n];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<long long> dat;
    long long lim = sqrt(n);
    isPrime[0] = isPrime[1] = true;
    for (long long i = 2; i <= lim; i++)
    {
        if (!isPrime[i])
        {
            dat.push_back(i);
            for (long long j = i * i; j < n; j += i)
                isPrime[j] = true;
        }
    }
    for(long long i=lim+1;i<n;i++)if(!isPrime[i])dat.push_back(i);
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, ans = 0;
        cin >> n;
        for (auto &it : dat)
        {
            if (it * it > n)
                break;
            if (ans % it == 0)
            {
                if(it*it==ans)
                ans-=it;
                ans += it;
                ans += n / it;
            }
        }
        cout << ans + 1 << endl;
    }
}
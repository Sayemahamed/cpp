#include <bits/stdc++.h>
using namespace std;
bool isPrime[3007];
vector<long long> ans;
bool isAlmostPrime(long long a)
{
    map<long long, long long>dat;
    for(auto&it:ans)
    {
        if(it>a)break;
        if(!(a%it))dat[it]++;
    }
    if(dat.size()==2)return true; 
    return false;
}
int main()
{
    isPrime[0] = isPrime[1] = true;
    for (long long i = 2; i < 3007; i++)
    {
        if (!isPrime[i])
        {
            ans.push_back(i);
            for (long long j = i * i; j < 3007; j += i)
                isPrime[j] = true;
        }
    }
    long long n, ans = 0;
    cin >> n;
    for (long long i = 5; i <= n; ++i)
    {
        if (isAlmostPrime(i))
            ans++;
    }
    cout << ans << endl;
}
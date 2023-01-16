#include <bits/stdc++.h>
using namespace std;
bool isPrime[10000000];
vector<long long> di;
string solution(long long &x)
{
    if (x == 1 or sqrt(x) != (long long)sqrt(x))
        return "NO";
    if (!isPrime[(long long)sqrt(x)])
        return "YES";
    else
        return "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    isPrime[0] = isPrime[1] = true;
    for (long long i = 2; i < 10000000; i++)
    {
        if (!isPrime[i])
        {
            di.push_back(i);
            for (long long j = i * i; j < 10000000; j += i)
                isPrime[j] = true;
        }
    }
    // cout<<di.size()<<endl;
    long long test;
    cin >> test;
    while (test--)
    {
        long long x;
        cin >> x;
        cout << solution(x) << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,tmp, i = 0;
    cin >> n;
    vector<long long> dat[n];
    tmp=n*n;
    for (; i < tmp;)
    {
        for (long long k = 0; k < n; k++)
        {
            dat[k].push_back(++i);
        }
        for (long long k = n-1; k >=0; k--)
        {
            dat[k].push_back(++i);
        }
    }
    for(auto&it:dat)
    {
        for(auto&it2:it)cout<<it2<<' ';
        cout<<endl;
    }
}
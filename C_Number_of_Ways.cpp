#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long siz;
    cin >> siz;
    vector<long long> dat(siz, 0);
    for (long long i = 0; i < siz; i++)
    {
        cin >> dat[i];
        if (i)
            dat[i] += dat[i - 1];
    }
    if(dat[siz-1]%3)cout<<0<<endl;
    else
    {
        long long ans=0,k=0;
        for (long long i = 0; i < siz-1; i++)
        {
            if(dat[i]*3==dat[siz-1]*2)ans+=k;
            if(dat[i]*3==dat[siz-1])k++; 
        }
        cout<<ans<<endl;
    }
}
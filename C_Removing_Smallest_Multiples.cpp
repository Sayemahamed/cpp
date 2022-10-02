#include<bits/stdc++.h>
using namespace std; 
const long long mx=10e6;
long long primeFactors[mx];
int main()
{
    primeFactors[0]=primeFactors[1]=1;
    for(long long i=2; i<=mx; i++)
    {
        if(!primeFactors[i])
        {
            primeFactors[i]=i;
            for(long long j=i*i; j<=mx; j+=i)
            primeFactors[j]=i;
        }
    }
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,ans=0;
        cin >> n;
        string s;
        cin >> s;
        for(long long i=1; i<n; i++)
        {
            if(s[i]=='0')ans+=primeFactors[i];
        }
        cout<<ans<<endl;
    }
}
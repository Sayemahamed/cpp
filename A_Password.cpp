#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long ans=6,minus,factor=1;
        cin >> minus;
        // cout<<minus<<endl;
        for (long long i=0; i<minus; i++)
        {
            long long x;
            cin >> x;
        }
        for(long long i=1; i<=10-minus; i++)
        {
            factor*=i;
        }
        factor>>=1;
        // cout<<factor<<endl;
        for (long long i=1; i<=10-minus-2; i++)
        {
            factor/=i;
        }
        cout << factor*ans << endl;
    }
}
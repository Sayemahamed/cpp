#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==k)
        {
            cout<<2<<endl;
        }
        else
        {
            long long x=1;
            if(k%2)
            {
                for(long long i=0; i<n; i++)
                x=(x%1000000007)*2;
            }
            else
            {
                n--;
                for(long long i=0; i<n; i++)
                x=(x%1000000007)*2;
            }
            cout<<x%1000000007<<endl;

        }
    }
}
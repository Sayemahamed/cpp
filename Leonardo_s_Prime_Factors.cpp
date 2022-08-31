#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,count=0;
        cin>>n;
        for(int i=2; i*i<=n; i++)
        {
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
        }
        cout<<count<<endl;
    }
}
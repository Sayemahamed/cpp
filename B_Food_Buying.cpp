#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while (test--)
    {
        long long ans=0,n;
        cin>>n;
        while(n>=10)
        {
            ans+=n-n%10;
            n=n/10+n%10;
        }
        cout<<ans+n<<endl;
    }
}
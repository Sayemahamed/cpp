#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //
int diff(long long a, long long b)
{
    long long c=max(a,b),x=0,y=0;
    while(c>0)
    {
        x+=a%10;
        a/=10;
        y+=b%10;
        b/=10;
        c/=10;
    }
    return abs(x-y);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long n;cin>>n;
    if(n==1){cout<<1<<" "<<0<<endl;return;}
    if(n&1)
    {
        long long i=1,di=1;
        long long x=n/2,y=n/2;y++;
        for(;i<n;i++)
        {
            if(diff(x,y)<2)
            {
                cout<<x<<" "<<y<<endl;
                return;
            }
            else {
                x-=di;y+=di;
            }
            if(i%100==0)di*=10;
        }
    }
    else{
        cout<<n/2<<" "<<n/2<<endl;
    }
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}
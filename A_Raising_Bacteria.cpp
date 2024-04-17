#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,ans=0;
    cin >> n ;
    while (n)
    {
        if(n&1)ans++;
        n/=2;
    }
    cout<<ans<<endl;
}
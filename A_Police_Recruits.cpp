#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,count=0,ans=0;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        count+=x;
        if(count<0)
        {
            ans++;
            count=0;
        }
    }
    cout<<ans<<endl;
}
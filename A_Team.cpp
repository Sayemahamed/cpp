#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,ans=0;
    cin >> t;
    while (t--) 
    {
        int x=0,cnt=0;
        for(int i=0; i<3; i++)
        {
            cin >> x;
            if (x==1)cnt++;
        }
            if (cnt>=2)ans++;
    }
    cout<<ans<<endl;
}
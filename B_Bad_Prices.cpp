#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;cin>>test;
    while(test--)
    {
        long long siz,ans=0,mn=INT64_MAX;
        cin>>siz;
        vector<long long>dat(siz);
        for(auto&it:dat)cin>>it;
        for (int i = siz - 1; i >= 0; i--)
        {
            if(dat[i]<=mn)mn=min(dat[i],mn);
            else ans++;
        }
        cout<<ans<<endl;
    }
}
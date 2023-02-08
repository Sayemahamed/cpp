#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;cin>>test;while(test--)
    {
        long long n,ans=0,cur=0;
        cin>>n;
        vector<long long>dat(n);
        for(auto&it:dat)cin >>it;
        sort(dat.begin(),dat.end());
        for(long long i=0;i<n;i++)
        {
            if(dat[i]>cur+1)ans+=dat[i]- ++cur;
            else cur=dat[i];
        }
        cout<<ans<<endl;
    }
}
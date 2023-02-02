#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long siz, ans = 0;
        cin >> siz;
        map<long long, long long> mDat;
        vector<long long >dat(siz);
        for(auto&it:dat)cin>>it,mDat[it]++;
        sort(dat.begin(),dat.end());
        for(long long i=0;i<siz;i++)
        {
            if(mDat[dat[i]]>0)
            {
                ans++;
                long long temp =dat[i]+1;
                mDat[dat[i]]--;
                while(mDat.count(temp))
                {
                    if(mDat[temp]<=0)break;
                    mDat[temp]--;
                    temp++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
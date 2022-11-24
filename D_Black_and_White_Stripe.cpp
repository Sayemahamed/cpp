#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while   (test--)
    {
        long long size , needed,ans=INT64_MAX;
        cin >> size >> needed;
        long long preSum[size+1];
        memset(preSum, 0, sizeof(preSum));
        string s;
        cin >> s;
        for(long long i=0; i<size; i++)
        {
            if(s[i]=='W')preSum[i+1]=preSum[i]+1;
            else preSum[i+1]=preSum[i];
        }
        for(long long i=0; i<=size-needed; i++)
        {
            ans=min(ans,preSum[needed+i]-preSum[i]);
        }
        cout<<ans<<endl;
    }
}
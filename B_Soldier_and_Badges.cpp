#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0;
    cin>>n;
    vector<long long>dat(n);
    for(auto&it:dat)cin>>it;
    sort(dat.begin(),dat.end());
    for(long long i=0;i<n-1;i++)if(dat[i]>=dat[i+1])ans+=dat[i]-dat[i+1]+1,dat[i+1]+=dat[i]-dat[i+1]+1;
    cout<<ans<<endl;
}
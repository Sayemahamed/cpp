#include<bits/stdc++.h>
using namespace std;
vector<long long>dat;
void solve()
{
    long long siz,qu;cin>>siz>>qu;
    while(siz--)
    {
        long long x;cin>>x;
        dat.push_back(x);
    }
    sort(dat.begin(),dat.end());
    while(qu--)
    {
        long long x,y;cin>>x>>y;
        cout<<upper_bound(dat.begin(),dat.end(),y)-lower_bound(dat.begin(),dat.end(),x)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin>>test;
    for(long long i=1;i<=test;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        solve();
        dat.clear();
    }
}
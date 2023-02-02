#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long bars;
    cin>>bars;
    vector<long long >dat(bars);
    for(auto&it:dat)cin>>it;
    sort(dat.begin(),dat.end());
    long long workDays;
    cin>>workDays;
    while(workDays--)
    {
        long long money;cin>>money;
        cout<<upper_bound(dat.begin(),dat.end(),money)-dat.begin()<<endl;
    }
}
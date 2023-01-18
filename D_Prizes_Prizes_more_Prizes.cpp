#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long candies,current=0;
    cin>>candies;
    vector<long long>dat(candies);
    for(auto&it:dat)cin>>it;
    vector<pair<long long, long long>>ans(5);
    for(auto&it:ans)cin>>it.first,it.second=0;
    for(auto&it:dat)
    {
        current+=it;
        while(current>=ans[0].first)
        {
            long long j=0;
            while(j<4 and ans[j+1].first<=current)j++;
            ans[j].second+=current/ans[j].first;
            current%=ans[j].first;
        }
    }
    for(auto&it:ans)
    cout<<it.second<<" ";
    cout<<endl;
    cout<<current;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long laptop;
    cin >> laptop;
    vector<long long>ans(laptop);
    map<long long,long long>price;
    while(laptop--)
    {
        long long x,y;
        cin >> x >> y;
        price[x] = y;
    }
    long long i=0;
    for(auto& p :price)
    {
        ans[i++]=p.second;
    }
    if(is_sorted(ans.begin(), ans.end()))
    cout<<"Poor Alex";
    else cout <<"Happy Alex";
}
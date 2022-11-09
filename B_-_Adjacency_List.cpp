#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long city,roods;
    cin >>city>>roods;
    vector<vector<long long>>data(city+1);
    for (long long i = 0; i <roods;i++) 
    {
        long long x,y;
        cin >>x >>y;
        data[y].push_back(x);
        data[x].push_back(y);
    }
    for(long long i=1;i<=city;i++)
    {
        sort(data[i].begin(),data[i].end());
        cout<<data[i].size()<<' ';
        for(auto &it:data[i])
        cout<<it<<' ';
        cout<<endl;
    }
}
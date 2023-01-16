#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long siz,wrong;
    cin >> siz >> wrong;
    vector<long long>dat(siz*2+1);
    for(auto &it:dat)cin >> it;
    for(long long i=1;i<dat.size()-1;i++)
    {
        if(dat[i]-1>dat[i-1] and dat[i]-1>dat[i+1] and wrong>0)
        {
            dat[i]--;
            wrong--;
        }
    }
    for(auto &it:dat)cout<<it<<' ';
}
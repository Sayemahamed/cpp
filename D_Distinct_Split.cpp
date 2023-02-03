#include <bits/stdc++.h>
using namespace std;
void remove(map<char,long long>& mp,char c)
{
    mp[c]--;
    if(mp[c]==0){
        mp.erase(mp.find(c));
    }
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long t, ans = 0;
        cin >> t;
        string s;
        cin >> s;
        map<char, long long> dat, dat2;
        for (auto &it : s)
            dat[it]++;
        for (long long i = 0; i < t; i++)
        {
            dat2[s[i]]++;
            remove(dat,s[i]);
            ans= max(ans,(long long)(dat.size() +dat2.size()));
        }
        cout<<ans<<endl;
    }
}
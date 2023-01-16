#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, ansi, ansj, min = INT64_MAX;
    cin >> siz;
    vector<long long> dat(siz);
    map<long long, long long> da,firstSeen,lastSeen;
    for(long long i = 0; i < siz;i++)
    {
        cin>>dat[i];
        da[dat[i]]++;
        if(firstSeen[dat[i]]==0)firstSeen[dat[i]] = i+1;
        lastSeen[dat[i]] = i+1;
    }
    long long mx = 0;
    for (auto &it : da)
    {
        if (it.second > mx)
        {
            mx = it.second;
        }
    }
    for (auto &it : da)
    {
        if (it.second == mx)
        {
            if ( lastSeen[it.first]- firstSeen[it.first] < min)
            {
                ansi = firstSeen[it.first];
                ansj = lastSeen[it.first];
                min = lastSeen[it.first]- firstSeen[it.first];
            }
        }
    }
    cout << ansi  << " " << ansj << endl;
}
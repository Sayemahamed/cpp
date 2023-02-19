#include <bits/stdc++.h>
using namespace std;
vector<long long> getNum(string &s)
{
    vector<long long> dat;
    long long a = 0, i = 0;
    while (i < s.length())
    {
        if (s[i] == ' ')
        {
            dat.push_back(a);
            a = 0;
            i++;
        }
        if (i >= s.length())
            break;
        a *= 10;
        a += s[i++] - '0';
    }
    dat.push_back(a);
    return dat;
}
int main()
{
    long long test;
    cin >> test;
    // test++;
    for(long long i = 0;i<=test;i++)
    {
        string s;
        // cin.ignore();
        getline(cin, s);
        if(i==0)continue;
        long long ans=0;
        vector<long long> dat =  getNum(s);
        for(long long i=0; i<dat.size();i++)
        for(long long j=i+1; j<dat.size(); j++)
        ans=max(ans,__gcd(dat[i],dat[j]));
        cout<<ans<<endl;
    }
}
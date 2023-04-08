#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//

//----------------------------------------------------------------//
// helper functions //
void add(map<char, long long> &dat, char c)
{
    dat[c]++;
}
void remove(map<char, long long> &dat, char c)
{
    dat[c]--;
    if (dat[c] == 0)
        dat.erase(dat.find(c));
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    string s;
    cin >> s;
    long long ans=s.length()+1, j = 0;
    map<char, long long> dat;
    for(long long i=0;i<s.length();i++){
        while(dat.size()<3 and j<=s.length()){
            add(dat,s[j++]);
        }
        remove(dat,s[i]);
        if(j>s.length())break;
        ans=min(ans,j-i);
    }
    if(ans==s.length()+1)cout<<0<<endl;
    else cout<<ans<<endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}
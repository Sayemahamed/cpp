#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin >> s;
    long long ans=0;
    for(long long i=0;i<s.length();i++)
    {
        string s1 = s.substr(0,i/2);
        string s2 = s.substr(i/2,i/2);
        if(s1 == s2)ans=max(ans,i);
    }
    cout<<ans-1;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    char c='A';
    map<char, long long> m;
    for(auto&it:s)m[it]++;
    if(m.size()+m['?']-1>=26)
    {
        for(long long i=0;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                while(m.find(c)!=m.end() and m.size()<26)c++;
                if(m.size()<26){
                    s[i]=c;
                    m[c]++;
                }
                else s[i]='Z';
            }
        }
        cout<<s;
    }
    else cout<<-1;
}
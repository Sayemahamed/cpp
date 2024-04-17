#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,ans=0;
    cin >> t;
    string s;
    char flag='0';
    cin >> s;
    t--;
    if(s[0]=='0')
    flag='0';
    else
    flag='1';
    while (t--)
    {
        cin >> s;
        if(s[0]!=flag)
        {
            ans++;
            flag=s[0];
        }
    }
    cout << ans+1<<endl;
}
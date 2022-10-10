#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long ans,count=0;
        string s;
        cin >>s;
        for (long long i=0; i<s.length()-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b'||s[i+1]=='a' && s[i]=='b'){count++;count%=998244353;}
        }
        if(count==0)ans=1;
        else 
        ans=(count*2)%998244353;
        cout<<ans<<endl;
    }
}
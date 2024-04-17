#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,ans=0;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    for(auto it:s)
    {
        if(it=='1')ans+=a;
        if(it=='2')ans+=b;
        if(it=='3')ans+=c;
        if(it=='4')ans+=d;
    }
    cout<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ans=-2;
    string s;
    cin >>s;
    for( long long i = s.size()-1; i >= 0; --i )
    {
        if(s[i]=='a')
        {
            ans=i;
            break;
        }
    }
    cout<<ans+1<<endl;
}
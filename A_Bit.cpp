#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long test,ans=0;
    cin >> test;
    string s;
    while (test--) 
    {
        cin >> s;
        if(s[0]=='-' or s[2]=='-')
        ans--;
        else ans++;
    }
    cout << ans<<endl;
}
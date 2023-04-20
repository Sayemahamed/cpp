#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve()
{
    string s;cin >> s;
    long long ans = 0;
    if(s[s.length()-1]!='^'){ans++;s=s+'^';}
    if(s[0]!='^' or s.length()==1){ans++;s='^'+s;}
    for(long long i=1;i<s.length();i++){
        if(s[i]!='^' and s[i]==s[i-1] ) ans++;
    }
    cout<<ans<<endl;
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
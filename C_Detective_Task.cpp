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
    string s;cin>>s;
    long long ans=0;
    vector<bool>a(s.length()+1,false);
    vector<bool>b(s.length()+1,false);
    a[0]=b[s.length()]=true;
    for(int i=1;i<s.length();i++){
        a[i]=(a[i-1] and (s[i-1]=='1' or s[i-1]=='?'));
    }
    for(int i=s.length()-1;i>0;i--){
        b[i]=(b[i+1] and (s[i]=='?' or s[i]=='0'));
    }
    for(int i=0;i<s.length();i++)if(a[i]&&b[i])ans++;
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
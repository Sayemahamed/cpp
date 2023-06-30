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
    string str,m,l;cin >> str;
    long long siz,j=0;cin>>siz;
    cin>>m>>l;
    for(long long i=0;i<siz;i++){
        while(j<str.length() and (m[i]>str[j] or l[i]<str[j]))j++;
    }
    if(j>=str.length())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
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
long long bitCount(long long value){
    long long ans=0;
    while(value){
        if(value&1)ans++;
        value >>= 1;
    }
    return(ans);
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long n;
    cin>>n;
    if(bitCount(n)>1)cout<<"YES"<<endl;
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
#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//
map<long long ,long long>preCompute;

//----------------------------------------------------------------//
// helper functions //
long long bankExchange(long long n)
{
    if(n<12)return n;
    if(preCompute[n])return preCompute[n];
    long long ans=bankExchange(n/2)+bankExchange(n/3)+ bankExchange(n/4);
    preCompute[n]=ans;
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long n;
    while(cin>>n)
    {
        cout<<bankExchange(n)<<endl;
    }
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}
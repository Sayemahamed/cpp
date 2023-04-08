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
    long long n;cin >> n;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<(n-i)*2;j++)cout<<" ";
        for(long long j=0;j<=i;j++){cout<<j;if(i)cout<<' ';}
        for(long long j=i-1;j>=0;j--){cout<<j;if(j)cout<<" ";}
        cout<<endl;
    }
    for(long long i=0;i<=n;i++)cout<<i<<" ";
    for(long long i=n-1;i>=0;i--){cout<<i;if(i)cout<<" ";}
    cout<<endl;
    for(long long i=1;i<=n;i++){
        for(long long j=0;j<2*i;j++)cout<<" ";
        for(long long j=0;j<=(n-i);j++){cout<<j;if(i!=n)cout<<' ';}
        for(long long j=n-i-1;j>=0;j--){cout<<j;if(j)cout<<" ";}
        cout<<endl;
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
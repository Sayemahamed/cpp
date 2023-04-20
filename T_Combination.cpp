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
long long NCR(long long N,long long R){
    long long res=0;
    if(R==0)return 1;
    res=NCR(N,R-1)*(N-R+1)/R;
    return res;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long N ,R ;cin>>N>>R;
    cout<<NCR(N,R)<<endl;
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
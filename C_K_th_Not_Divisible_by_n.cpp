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
    long long n,nth;cin>>n>>nth;
    long long high=0,low=0,mid;
    while(high-high/n<nth)high+=nth;
    while(high-low>1){
        mid=(high+low)/2;
        if(mid-mid/n<nth)low=mid;
        else high=mid;
    }
    cout<<low+1<<endl;
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
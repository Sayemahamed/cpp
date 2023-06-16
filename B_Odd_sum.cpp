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
    long long siz,x,oddCount=0,ans=0;cin>>siz;
    vector<long long> odd;
    for(long long i=0;i<siz;i++){
        cin>>x;
        if(x&1){
            odd.push_back(x);
            
        }
        else ans+=x;
    }
    sort(odd.begin(),odd.end());
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
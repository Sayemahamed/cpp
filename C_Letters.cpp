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
    long long siz,letters;cin>>siz>>letters;
    vector<long long>dat(siz+1,0);
    for(long long i=1;i<=siz;i++){
        cin>>dat[i];
        dat[i]+=dat[i-1];
    }
    while(letters--){
        long long x;cin>>x;
        long long idx=lower_bound(dat.begin(),dat.end(),x)-dat.begin();
        cout<<idx<<" "<<x-dat[idx-1]<<endl;
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
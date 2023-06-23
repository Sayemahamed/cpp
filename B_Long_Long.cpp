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
    long long siz, ans = 0, diff = 0;cin >> siz;
    vector<long long>dat( siz );
    for (auto& it : dat) { cin >> it;ans += abs( it ); }
    long long mn=0,plu=0;
    for(long long i=0;i<siz;i++){
        if(dat[i]<0){
            mn++;
            while(dat[i]<=0 and i<siz)i++;
        }
    }
    cout<<ans<<' '<<mn<<endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}
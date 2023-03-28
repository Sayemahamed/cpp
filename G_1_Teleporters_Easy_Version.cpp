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
    long long siz,money,ans=0;
    cin >> siz >> money;
    vector<long long>dat(siz);
    for (long long i = 1; i <=siz;i++)
    {
        cin >> dat[i-1];
        dat[i-1]+=i;
    }
    sort(dat.begin(),dat.end());
    for(long i = 0;i<siz;i++){
        if(money>=dat[i]){
            money-=dat[i];
            ans++;
        }
        else break;
    }
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
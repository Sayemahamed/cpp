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
    long long siz;
    cin>>siz;
    vector<long long>dat(siz);
    set<long long>indicator[siz+1];
    for(long long i=0;i<siz;i++){
        cin>>dat[i];
        indicator[dat[i]].insert(i);
    }
    for(long long i=0;i<siz;i++){
        if(dat[i] and (*indicator[dat[i]].lower_bound(i)!= *indicator[dat[i]].rbegin())){
            long long end=*indicator[dat[i]].rbegin();
            for(long long j=*indicator[dat[i]].lower_bound(i);j<=end;j++){
                dat[j]=0;
            }
        }
    }
    long long ans=0;
    for(auto&it:dat)if(it==0)ans++;
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
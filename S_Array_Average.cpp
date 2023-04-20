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
double avg(vector<long long>&dat,long long i,double sum){
    if(i==dat.size()) return sum/i;
    return avg(dat,i+1,sum+dat[i]);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;cin>>siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    cout<<fixed<<setprecision(6)<<avg(dat,0,0)<<endl;
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
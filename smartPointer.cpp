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
auto get(){
    map<long long,long long >dat;
    dat[1]++;
    dat[1]++;
    dat[1]++;
    dat[2]++;
    dat[3]++;
    auto ref = make_shared<map<long long,long long >>(dat);
    return ref;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    auto a = get();
    for(auto&it:*a)cout<<it.first<<" "<<it.second<<endl;
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
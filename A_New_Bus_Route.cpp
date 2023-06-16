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
    long long cityCount;cin>>cityCount;
    vector<long long>cityDistances(cityCount);
    for(auto&it : cityDistances)cin>>it;
    sort(cityDistances.begin(), cityDistances.end());
    map<long long,long long>ans;
    if(cityCount>2)
    ans[abs(cityDistances[0]-cityDistances[cityCount-1])]++;
    for(long long i=0;i<cityCount-1;i++){
        ans[abs(cityDistances[i]-cityDistances[i+1])]++;
    }
    cout<<ans.begin()->first<<" "<<ans.begin()->second<<endl;
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
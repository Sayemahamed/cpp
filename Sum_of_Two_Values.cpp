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
    long long numbers,theNumber;cin>>numbers>>theNumber;
    multimap<long long,long long>dat;
    for (long long i=1;i<=numbers;i++)
    {
        long long x;cin>>x;
        dat.insert({x,i});
    }
    for(auto&it:dat)
    {
        if(dat.count(theNumber-it.first) and it.second!=dat.find(theNumber-it.first)->second)
        {
            cout<<it.second<<" "<<dat.find(theNumber-it.first)->second<<endl;
            return;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
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
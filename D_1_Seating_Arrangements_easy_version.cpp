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
    long long n,m,ans=0;cin>>n>>m;
    map<long long ,long long >people;
    for(long long i=0;i<m;i++)
    {
        long long x;cin>>x;
        people[x]++;
        auto it = people.find(x);
        auto start =people.begin();
        while(start!=it)
        {
            ans+=start->second;
            start++;
        }
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
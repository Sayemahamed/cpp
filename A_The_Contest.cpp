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
    long long problems,x,sum=0,y;
    cin>>problems;
    while(problems--){
        cin>>x;
        sum+=x;
    }
    long long intervals;
    cin>>intervals;
    while(intervals--){
        cin>>x>>y;
        if(sum <=y){
            cout<<max( sum,x)<<endl;
        return;
        }
    }
    cout<<-1<<endl;
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
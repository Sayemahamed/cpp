#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define all(x)  x.begin(), x.end()
#define rall(x)  x.rbegin(), x.rend()
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
    long long x1, y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    long long a,b;
    cin>>a>>b;
    if((x1-x2)%a==0 and (y1-y2)%b==0 and !(abs((abs(x1-x2)/a)-(abs(y1-y2)/b))&1))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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
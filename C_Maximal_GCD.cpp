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
    long long theSum,num;
    cin>>theSum>>num;
    if((num*(num+1))/2>theSum)cout<<-1<<endl;
    else {
        long long ans=1;
        for(long long i=2;i*i<=theSum;i++){
            if(theSum%i)continue;
            if(num*(num+1)*(i)/2>theSum)break;
            ans=max(ans,i);
            if(num*(num+1)*(theSum/i)/2<=theSum)ans=max(ans,theSum/i);
        }
        for(long long i=1;i<num;i++){
            cout<<ans*i<<' ';
            theSum-=ans*i;
        }
        cout<<theSum<<endl;
    }
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
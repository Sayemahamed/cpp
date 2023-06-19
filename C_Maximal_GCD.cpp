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
        long long ans=0,i=1;
        while((i*num*(num+1))/2<=theSum){
            if((theSum-(i*num*(num-1))/2)%i==0)
            ans=i;
            i++;
        }
        for(long long j=1; j<num; j++){
            cout<<ans*j<<' ';
            theSum-=ans*j;
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
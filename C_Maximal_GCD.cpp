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
        long long multiplier=theSum/((num*(num+1))/2),i=1;
        // while((num*multiplier*(num+1))/2<theSum)multiplier++;
        while (num-->1){
            cout<<multiplier*i<<" ";
            theSum-=multiplier*i;
            i++;
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
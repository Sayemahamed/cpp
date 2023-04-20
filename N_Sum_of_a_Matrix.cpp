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
long long  sizN,sizM;
long long datA[107][107],datB[107][107],ans[107][107];
void getSum(long long i ,long long j){
    if(i>=sizN or j>=sizM)return;
    if(ans[i][j]!=0)return;
    getSum(i,j+1);
    getSum(i+1,j);
    ans[i][j] =datA[i][j]+datB[i][j];
}

// solve function//
void solve()
{
    cin>>sizN>>sizM;
    for(long long i=0;i<sizN;i++){
        for(long long j=0;j<sizM;j++)cin>>datA[i][j];
    }
    for(long long i=0;i<sizN;i++){
        for(long long j=0;j<sizM;j++)cin>>datB[i][j];
    }
    getSum(0,0);
    for(long long i=0;i<sizN;i++){
        for(long long j=0;j<sizM;j++)cout<<ans[i][j]<<" ";
        cout<<endl;
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
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
    long long siz,num;cin>>siz;
    long long mat[2][siz];
    num=siz<<1;
    for(long long i=0;i<siz;i+=2){
        mat[0][i]=num--;
        mat[1][siz-i-1]=num--;
    }
        for(long long i=siz-1;i>=0;i-=2){
        mat[0][i]=num--;
        mat[1][siz-i-1]=num--;
    }
    for(long long i=0;i<2;i++){
        for(long long j=0;j<siz;j++){
            cout<<mat[i][j]<<" ";
        }
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
    cin >> test;
    while (test--)
    {
        solve();
    }
}
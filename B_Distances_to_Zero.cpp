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
void between(long long a, long long b,long long  arr[]){
    for(long long i=0;a+i<=b-i;i++){
        arr[a+i]=i;
        arr[b-i]=i;
    }
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;
    cin>>siz;
    long long arr[siz];
    long long x;
    vector<long long >zeroIndex;
    for(long long i=0;i<siz;i++)arr[i]=INT64_MAX;
    for(long long i=0; i<siz; i++){
        cin>>x;
        if(x==0)zeroIndex.push_back(i);
    }
    for(long long i=0; zeroIndex[zeroIndex.size()-1]+i<siz; i++)arr[zeroIndex[zeroIndex.size()-1]+i]=i;
    for(long long i=0;zeroIndex[0]-i>=0;i++)arr[zeroIndex[0]-i]=i;
    for(long long i=0;i<zeroIndex.size()-1;i++)between(zeroIndex[i],zeroIndex[i+1],arr);
    for(long long i=0;i<siz;i++)cout<<arr[i]<<' ';
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
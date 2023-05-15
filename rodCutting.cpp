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
int cut(vector<long long>&memoise,int price[],int n){
    if(memoise[n]!=-1)return memoise[n];
    int ans=0;
    for(int i=0; i<n; i++){
        if(i<n)
        ans=max(ans,cut(memoise,price,n-i-1)+price[i]);
    }
    return memoise[n] = ans;
}
int cutRod(int price[], int n){
    vector<long long >memoise(1007,-1);
    return cut(memoise,price,n);
}

//----------------------------------------------------------------//
// solve function//
void solve(){
    int siz,len,i=0;
    cin>>siz;
    int dat[siz];
    while(i<siz)cin>>dat[i++];
    cin>>len;
    cout<<cutRod(dat,len);
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
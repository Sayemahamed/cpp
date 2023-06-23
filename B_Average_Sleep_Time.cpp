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
long long getSum(vector<long long>&sleepPerDay,long long index,long long days){
    if(index==0)return sleepPerDay[index+days-1];
    return sleepPerDay[index+days-1] - sleepPerDay[index-1];
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long days ,daysPerWeek,weeks;
    cin>>days>>daysPerWeek;
    weeks=days-daysPerWeek+1;
    double ans=0;
    vector<long long>sleepPerDay(days,0);
    for(long long i=0;i<days;i++){
        cin>>sleepPerDay[i];
        if(i)sleepPerDay[i]+=sleepPerDay[i-1];
    }
    for(long long i=0; i<weeks; i++){
        ans+=getSum(sleepPerDay,i,daysPerWeek);
    }
    cout<<fixed<<setprecision(7)<<ans/weeks<<endl;
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
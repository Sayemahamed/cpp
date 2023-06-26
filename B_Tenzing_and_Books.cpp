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
bool hasConflicts(long long wish, long long num){
    if(num>wish)return true;
    while(wish){
        if((wish&1)<(num&1))return true;
        wish>>=1;
        num>>=1;
    }
    return false;
} 

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz,wish,x;cin>>siz;cin>>wish;
    queue<long long>a,b,c;
    bool hasConflict = false;
    for(long long i=0;i<siz;i++){
        cin>>x;
        a.push(x);
    }
    for(long long i=0;i<siz;i++){
        cin>>x;
        b.push(x);
    }
    for(long long i=0;i<siz;i++){
        cin>>x;
        c.push(x);
    }
    long long tmp=0;
    for(long long i=0;true;i++){
        if(tmp==wish)break;
        if(hasConflict)break;
        if(!a.empty() and !hasConflicts(wish,a.front())){
            tmp|=a.front();
            a.pop();
        }
        else if(!b.empty() and !hasConflicts(wish,b.front())){
            tmp|=b.front();
            b.pop();
        }
        else if(!c.empty() and !hasConflicts(wish,c.front())){
            tmp|=c.front(); 
            c.pop();
        }
        else hasConflict=true;
    }
    if(hasConflict or tmp!=wish)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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
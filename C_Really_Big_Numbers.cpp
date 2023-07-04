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
bool isPossible(unsigned long long value, unsigned long long limit){
    long long tmp=value,digitSum=0;
    while(tmp){
        digitSum+=tmp%10;
        tmp/=10;
    }
    return value-digitSum>=limit;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    unsigned long long upperLimit,difference;
    cin>>upperLimit>>difference;
    if(!isPossible(upperLimit,difference)){
        cout<<0<<endl;
    }else{
        unsigned long long low=0,high=upperLimit,mid;
        while(high-low>1){
            mid=(high+low)/2;
            if(!isPossible(mid,difference))low=mid;
            else high=mid;
        }
        cout<<upperLimit-low<<endl;
    }
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}
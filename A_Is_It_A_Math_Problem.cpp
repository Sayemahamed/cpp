#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define all(x)  x.begin(), x.end()
#define rall(x)  x.rbegin(), x.rend()
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//
//number theory //
template<typename T>
bool isPrime( T n ) { if (n <= 1)return false;for (long long i = 2;i * i <= n;++i) { if (!(n % i))return false; }return true; }
template<typename T>
long long factorial( T N ) { long long ans = 1;while (N > 1)ans *= N--;return ans; }
template<typename T, typename Y>
long long NCR( T N, Y R ) { if (R > N)return 0;long long ans = 1, MN = min( R, N - R ), MX = max( R, N - R );while (N > MX) { ans *= N--; }while (MN > 1)ans /= MN--;return ans; }
template<typename T, typename Y>
long long NPR( T N, Y R ) { long long ans = 1, tmp = N - R;while (N > tmp) { ans *= N--; }return ans; }
void sieve( vector<bool>& ans ) { ans[ 0 ] = ans[ 1 ] = false; long long tmp = sqrt( ans.size() ), till = ans.size();for (long long i = 2;i <= tmp;i++)if (ans[ i ])for (long long j = i * i;j < till;j += i)ans[ j ] = false; }
template<typename T>
map<long long, long long> primeFactors( T N ) { map<long long, long long> ans;long long till = sqrt( N );for (long long i = 2; i <= till; i++) { while (!(N % i)) { ans[ i ]++;N /= i; }if (i >= N)break; }if (N > 1)ans[ N ]++;return ans; }
//number theory//
//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    unsigned long long theNumber;cin >> theNumber;
    map<long long, long long>ans = primeFactors( theNumber );
    unsigned long long i = 2;
    for (;i * i <= theNumber;i++) {
        if (theNumber % i == 0) {
            for (auto& it : primeFactors( i ))ans[ it.first ] += it.second;
            if (i * i != theNumber)
                for (auto& it : primeFactors( theNumber / i ))ans[ it.first ] += it.second;
        }
    }
    unsigned long long mx = ans.begin()->second, Ans = 1;
    for (auto& it : ans)mx = gcd( mx, it.second );
    for (auto& it : ans)it.second /= mx;    for (auto& it : ans) {
        while (it.second--)Ans *= it.first;
    }
    cout << Ans << ' ' << mx << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}
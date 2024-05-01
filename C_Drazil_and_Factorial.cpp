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
void clean( map<long long, long long>& counter ) {
    vector<long long>tmp;
    for (auto& it : counter) {
        if (it.second <= 0)tmp.push_back( it.first );
    }
    for (auto& it : tmp)counter.erase( counter.find( it ) );
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberSize;cin >> numberSize;
    map<long long, long long >counter;
    while (numberSize--) {
        char a;cin >> a;
        long long tmp = a - '0';
        long long number = 1;
        for (int i = 2;i <= tmp;i++)number *= i;
        for (auto& it : primeFactors( number )) {
            counter[ it.first ] += it.second;
        }
    }
    for (auto it = counter.rbegin();it != counter.rend();it++) {
        for (int i = 0;i < it->second;i++)
        {
            cout << it->first;
            long long number = 1;
            for (int i = 2;i < it->first;i++)number *= i;
            for (auto& itr : primeFactors( number )) {
                counter[ itr.first ] -= itr.second;
            }
            clean( counter );
        }
    }
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    int test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}
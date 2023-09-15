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
long long getPowOfTwo( long long number ) {
    long long ans = 1;
    while (ans <= number)ans <<= 1;
    return ans >> 1;
}
void getTilPowOfTwo( vector<long long>& ans, long long number, long long powOfTwo ) {
    while (number > powOfTwo) {
        set<long long>tmp;
        for (auto& it : primeFactors( number ))tmp.insert( it.first * it.second );
        while (tmp.size() and number - *tmp.rbegin() < powOfTwo)tmp.erase( tmp.find( *tmp.rbegin() ) );
        if (tmp.size()) {
            ans.push_back( number - *tmp.rbegin() );
            number -= *tmp.rbegin();
        }
        else {
            ans.push_back( number - 1 );
            number--;
        }
    }
}
void getTillOne( vector<long long>& ans, long long number ) {
    while (number != 1) {
        number >>= 1;
        ans.push_back( number );
    }
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long givenNumber;cin >> givenNumber;
    long long powOfTwo = getPowOfTwo( givenNumber );
    vector<long long>ans;
    ans.push_back( givenNumber );
    if (givenNumber != powOfTwo)
        getTilPowOfTwo( ans, givenNumber, powOfTwo );
    // for (auto& it : primeFactors( givenNumber ))cout << it.first << " " << it.second << endl;
    // cout << endl;
    getTillOne( ans, powOfTwo );
    cout << ans.size() << endl;
    for (auto& it : ans)cout << it << ' ';
    cout << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}
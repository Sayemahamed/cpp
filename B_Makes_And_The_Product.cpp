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
bool isPrime(T n){if(n<=1)return false;for (long long i=2;i*i<=n;++i){if(!(n%i))return false;}return true;}
template<typename T>
long long factorial(T N){ long long ans=1;while(N>1)ans*=N--;return ans;}
template<typename T,typename Y>
long long NCR( T N, Y R ) { if (R > N)return 0;  long long ans = 1;Y i = 2, tmp = N - R;while (N > max( tmp, R )) { ans *= N--;}while (min( tmp, R ) >= i)ans /= i++; return ans; }
template<typename T,typename Y>
long long NPR(T N,Y R){ if(N<R)return 0; long long ans=1,tmp=N-R;while(N>1){ans*=N--;while(tmp>1 and !(ans%tmp))ans/=tmp--;}return ans;}
void sieve(vector<bool>&ans){ans[0]=ans[1]=false; long long tmp=sqrt(ans.size()),till=ans.size();for(long long i=2;i<=tmp;i++)if(ans[i])for(long long j=i*i;j<till;j+=i)ans[j]=false;}
template<typename T>
map<long long, long long> primeFactors(T N){map<long long, long long> ans;long long till = sqrt(N);for (long long i = 2; i <= till; i++){while (!(N % i)){ans[i]++;N /= i;}if (i >= N or i >= till)break;}if (N > 1)ans[N]++;return ans;}
//number theory//
//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;cin >> siz;
    vector<long long>dat( siz );
    for (auto& it : dat)cin >> it;
    map<long long, long long>counter;
    for (long long i = 0;i < siz;i++) {
        counter[ dat[ i ] ]++;
    }
    auto it = counter.begin();
    long long a, b, c;a = it->second;it++;
    if (counter.size() > 1)
        b = it->second;it++;
    if (counter.size() > 2)
        c = it->second;
    long long ans;
    if (a >= 3)ans = NCR( a, 3 );
    else if (a == 2)ans = b;
    else if (a == 1 and b >= 2)ans = NCR( b, 2 );
    else ans = c;
    cout << ans << endl;
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
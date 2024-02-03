#include <bits/stdc++.h>
using namespace std;
long long Dp( vector<long long>& data, long long idx, long long sum ) {
    if (idx == data.size())return sum;
    return min( Dp( data, idx + 1, abs( sum + data[ idx ] ) ), Dp( data, idx + 1, abs( sum - data[ idx ] ) ) );
}
int main()
{
    long long test;cin >> test;
    while (test--) {
        long long first, second, limit;cin >> first >> second >> limit;
        unsigned long long i = 1;long long sum = 0;
        vector<long long>Data;
        while (i <= first or i <= second) {
            if (first & i and second & i);
            else if (first & i)
                if (i <= limit)Data.push_back( i );
                else sum += i;
            else if (second & i)
                if (i <= limit)Data.push_back( i );
                else sum -= i;
            i <<= 1;
        }
        if (Data.size() == 0)cout << abs( first - second ) << endl;
        else {
            cout << Dp( Data, 0, sum ) << endl;
        }
    }
}
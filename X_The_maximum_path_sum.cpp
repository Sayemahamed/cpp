#include <bits/stdc++.h>
using namespace std;
long long crawl( vector<vector<long long>>& data, long long i, long long j ) {
    if (data.size() == i or data[ 0 ].size() == j)return 0;
    return max( data[ i ][ j ] + crawl( data, i + 1, j ), data[ i ][ j ] + crawl( data, i, j + 1 ) );
}
int main()
{
    long long m, n;
    cin >> m >> n;
    vector<vector<long long>>data( n, vector<long long>( m ) );
    for (auto& it : data)for (auto& i : it)cin >> i;
    cout << crawl( data, 0, 0 ) << endl;
}
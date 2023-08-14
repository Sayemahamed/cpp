#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum1 = 0, sum2 = 0;
    cin >> n;
    long long m = n * 2;
    long long arr[ m ];
    for (long long i = 0;i < m;i++)
    {
        cin >> arr[ i ];
    }
    sort( arr, arr + m );
    if (arr[ n - 1 ] < arr[ n ])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


}
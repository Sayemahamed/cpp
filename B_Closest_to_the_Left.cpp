#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers,query;
    cin >> numbers >> query;
    long long number[numbers];
    for (long long i = 0; i < numbers; ++i)cin >> number[i] ;
    while(query--)
    {
        long long x;
        cin >> x ;
        cout<lower_bound(number, number+numbers, x) <<endl;
    }
}
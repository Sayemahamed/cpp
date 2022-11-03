#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    // cout << test << endl;
    while (test--) 
    {
        long long n;
        cin >> n;
        for (long long i = 1; i <= n; i+=2)
        cout<<i<<" ";
        if(n&1)n--;
        for (long long j = n; j >0; j-=2)
        cout<<j<<" ";
        cout<<endl;
    }
}
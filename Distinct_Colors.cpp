#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while(test--)
    {
        long long n,mx=0;
        cin >> n;
        for(long long i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            if(x>mx)mx=x;
        }
        cout<<mx<<endl;
    }
}
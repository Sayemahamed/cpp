#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin >> test;
    while   (test--)
    {
        long long size;
        cin >> size;
        cout<<size<<endl;
        for(long long i=0; i<size; i++)
        {
            long long x,y=1;
            cin >> x;
            while(y<x)y<<=1;
            cout<<i+1<<' '<<y-x<<endl;
        }
    }
}
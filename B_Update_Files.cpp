#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,c,count=0;
        cin >> n >> c;
        long long i=1;
        n--;
        while(i<c&&n>0)
        {
            count++;
            n-=i;
            i*=2;
        }
        count+=n/c;
        if(n%c&&n>0)count++;
        cout<<count<<endl;
    }
}
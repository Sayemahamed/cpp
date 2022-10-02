#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n;
        cin >> n;
        if(n<4)
        cout <<-1;
        else if (n==4) cout<<"3 1 4 2"<<endl;
        else
        {
            for(long long i=1; i<=n; i+=2) cout<<i<<" ";
            for(long long i=2; i<=n; i+=2) cout<<i<<" ";
        }
        cout<<endl;
    }
}
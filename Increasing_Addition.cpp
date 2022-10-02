#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n,q;
        cin >> n >> q;
        long long  arr[n+1];
        for (long long i = 1; i <=n; i++) cin>>arr[i];
        for(long long i = 1; i <=q; i++)
        {
            long long mx=0;
            long long index,value;
            cin >> index >> value;
            long long ar[n+1];
            for(long long j = 1; j <=n; j++)
            {
                if(j==index)ar[j]=value;
                else ar[j]=arr[j];
                if(j>1)
                {
                    if(mx<(ar[j-1]-ar[j]))mx=ar[j-1]-ar[j];
                }
            }
            cout<<mx<<endl;
        } 
    }
}
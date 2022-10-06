#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long leftsum = -9999999,sum=0,rightsum = -9999999;
        long long a;
        cin>>a;
        long long arr[a];
        for(long long i = 0; i < a; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(sum>leftsum)leftsum=sum;
        }
        sum=0;
        for(long long i = 0; i < a; i++)
        {
            sum+=arr[a-1-i];
            if(sum>rightsum)rightsum=sum;
        }
        long long ans=max(leftsum,rightsum);
        long long b;
        cin>>b;
        vector<long long> arr1;
        for(long long i = 0; i < b; i++)
        {
            long long x;
            cin>>x;
            arr1.push_back(x);
        }
        while(arr1.size())
        {
            if(arr1[0]>0)
            {
                ans+=arr1[0];
            }
                arr1.erase(arr1.begin());
        }
        cout<<ans<<endl;
    }
}
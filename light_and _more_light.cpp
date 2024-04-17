#include<bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        map<long long,long long>data;
        long long x,ans=1;
        cin >> x;
        if(!x)break;
        for(long long i = 2; i*i <=x; i++)
        {
            while(!(x%i))
            {
                data[i]++;
                x/=i;
            }
        }
        if(x>1)data[x]++;
        for(auto it:data)
        {
            ans*=(it.second+1)%1000000007;
        }
        if(x&1)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,total,count=0;
    cin>>n>>total;
    for (long long i = 0; i < n; ++i)
    {
        char a;
        long long p;
        cin>>a>>p;
        if(a=='+')
        {
            total+=p;
        }
        else
        {
            if(p>total)count++;
            else
            total-=p;
        if(total<=0)total=0;
        }
    }
    cout<<total<<" "<<count<<endl;
}
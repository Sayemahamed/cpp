#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,d,count=0,t=0;
    cin>>n>>m>>d;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<=m)
        {
            t+=x;
            if(t>d)
            {
                t=0;
                count++;
            }
        }
    }  
    cout<<count<<endl;     
}
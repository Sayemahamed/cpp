#include<bits/stdc++.h>
using namespace std;
void val(vector<long long>&dat,long long start)
{
    long long temp=0;
    while(dat[start])
    {
        temp+=dat[start]%10;
        dat[start]/=10;
    }
    dat[start]=temp;
}
void replace(vector<long long>&dat,long long start,long long end) 
{
    for(long long i=start;i<end;i++)
    {
        val(dat,i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;cin >> test;
    while (test--)
    {
        long long nums,quer;cin >> nums>>quer;
        vector<long long>dat(nums);
        for(auto &it:dat)cin >> it;
        while(quer--)
        {
            int n;cin >> n;if (n==1)
            {
                long long x,y;cin >> x>>y;
                replace(dat,x-1,y);
            }
            else {
                long long x;cin >>x;
                cout<<dat[x-1]<<endl;
            }
        }
    }
}
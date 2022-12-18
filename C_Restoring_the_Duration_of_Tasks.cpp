#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long tasks;
        cin >> tasks;
        vector<long long>start(tasks),end(tasks);
        for(auto &it:start)cin>>it;
        for(auto &it:end)cin>>it;
        for(long long i=0;i<tasks;i++)
        {
            if(i)
            start[i]=max(start[i],end[i-1]);
        }
        for(long long i=0;i<tasks;i++)
        cout<<end[i]-start[i]<<' ';
        cout<<endl;
    }
}
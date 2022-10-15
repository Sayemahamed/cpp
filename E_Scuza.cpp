#include<bits/stdc++.h>
using namespace std;
const long long mx=1e6;
long long totalHights[mx];
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long stairs,query;
        cin >> stairs>> query;
        long long stair[stairs];
        for (long long i = 0; i <stairs ; ++i)
        {
            cin >> stair[i];
            totalHights[i] += stair[i];
            if(i>0)totalHights[i]+=totalHights[i-1];
        }
        for(long long i = 0; i < query; i++ )
        {
            long long x,j=0;
            cin >> x;
            while(stair[j]<=x&&j<stairs)j++;
            if(stair[0]>x)
            cout<<0<< ' ';
            else
            cout<<totalHights[j-1]<<" ";
        }
        if(test)
        for(long long i=0;i<stairs;i++)totalHights[i]=0;
        cout<<endl;
    }
}
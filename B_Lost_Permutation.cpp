#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        bool isGiven[1000],flag= true;
        memset(isGiven, 0, sizeof(isGiven));
        long long given,sum,mx=0;
        cin >> given    >> sum;
        for(long long i = 0; i < given;i++)
        {
            long long x;
            cin >> x;
            isGiven[x] =true;
            mx=max(mx,x);
        }
        for(long long i = 1; i <=mx;i++)
        {
            if(!isGiven[i])
            {
                if(sum>=i)
                {
                    sum-=i;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        while(sum>0)
        {
            mx++;
            if(!isGiven[mx])
            {
                if(sum>=mx)
                {
                    sum-=mx;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        cout<<"YES"<< endl;
        else
        cout<<"NO"<<endl;
    }
    
}
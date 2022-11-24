#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test; 
    while(test--)
    {
        long long friends,food=0,ans=0,sum=0,j=0;
        cin>> friends;
        long long money[friends];
        j=friends-1;
        for(long long i=0; i<friends;i++)
        {
            long long x;
            cin >> x;
            food += x;
        }
        for (auto &&it : money)
        {
            cin >> it;
        }
        sort(money,money +friends);
        for(long long i=0; i<friends;i++)
        {
            
        }
    }
}
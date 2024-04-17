#include<iostream>
using namespace std;
int main()
{
    long long p,h,cnt=0;
    cin>>p>>h;
    while(p--)
    {
        long long x;
        cin>>x;
        if(x>h)
            cnt+=2;
        else
            cnt++;
    }
    cout<<cnt;
}
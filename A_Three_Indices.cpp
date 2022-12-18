#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long size,flag = true;
        cin>>size;
        vector<long long> data(size+1);
        data[0]=0;
        for(long long i=1; i<=size; i++)cin>>data[i];
        for(long long i=2;i<size; i++)
        {
            if(data[i]>data[i-1]and(data[i]>data[i+1]))
            {
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<" "<<i+1<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<"NO"<< endl;
    }
}
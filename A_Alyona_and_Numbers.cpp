#include<bits/stdc++.h> 
using namespace std;
int main()
{
    long long a,b,count=0;
    cin >> a >> b;
    map<long long,long long>data1,data2;
    data1[1]=a/5;
    data1[2]=a/5;
    data1[3]=a/5;
    data1[4]=a/5;
    data1[0]=a/5;
    data2[1]=b/5;
    data2[2]=b/5;
    data2[3]=b/5;
    data2[4]=b/5;
    data2[0]=b/5;
    for(long long i=1;i<=a%5;i++) data1[i]++;
    for(long long i=1;i<=b%5;i++) data2[i]++;
    // for(long long i=1;i<=4;i++)cout<<i<<" "<<data1[i]<<" "<<data2[i]<<endl; 
    for(long long i=0;i<5;i++)
    {
        count+=data1[i]*data2[i==0?0:5-i];
    }
    cout<<count<<endl;
}
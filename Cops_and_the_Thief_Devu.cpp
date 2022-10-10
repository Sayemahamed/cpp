#include <iostream>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long house,speed,tim,count=0;
        cin>>house>>speed>>tim;
        bool arr[101];
        for(long long i=1; i<101;i++)
        arr[i]=true;
        for(long long j=0;j<house;j++)
        {
            long long x;
            cin>>x;
            long long start=x-speed*tim,end=x+speed*tim;
            if(start<1) start=1;
            if(end>100) end=100;
            for(long long i=start;i<=end;i++)
            arr[i]=false;
        }
        for(long long i=1;i<=100;i++)
        if(arr[i])
        count++;
        cout<<count<<endl;
    }
}

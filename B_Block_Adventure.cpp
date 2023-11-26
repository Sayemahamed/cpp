#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        unsigned long long colums,beginging,limit;
        bool isPossible=true;
        cin>>colums>>beginging>>limit;
        vector<unsigned long long>data(colums);
        for(auto&it:data)cin>>it;
        for(long long i=0; i<colums; i++)
        {
            if(i!=colums-1)
            {
                if(data[i]>data[i+1])
                {
                    beginging+=data[i]-data[i+1];
                    data[i]=data[i+1];
                }
                if(data[i]==data[i+1])
                {
                    beginging +=min(data[i],limit);
                }
                if(data[i]<data[i+1])
                {
                    if(data[i+1]>data[i]+limit +beginging)isPossible=false;
                    beginging-=data[i+1];
                    beginging+=limit+data[i];
                }
            }
        }
        if(isPossible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

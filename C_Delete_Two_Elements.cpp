#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long elements,total=0;
        cin>>elements;
        vector<long long>dat(elements);
        for(auto &it:dat)cin>>it,total+=it;
        total<<=1;
        if(total%elements!=0)
        {
            cout<<0<<endl;
        }
        else
        {
            long long ans=0,need=total/elements;
            map<long long, long long>datM;
            for(auto &it:dat)datM[it]++;
            for(auto &it:dat)
            {
                if(datM.find(need-it)!=datM.end())
                {
                    ans+=datM[need-it];
                    if(it*2==need)ans--;
                }
            }
            cout<<(ans>>1)<<endl;
        }
    }
}
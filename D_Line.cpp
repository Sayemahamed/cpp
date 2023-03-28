#include<bits/stdc++.h>
using namespace std;
struct uint{
    long long value,maxValue;
};
bool compare(uint& a, uint& b)
{
    return (a.maxValue-a.value)>(b.maxValue-b.value);
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;cin>>test;
    while(test--)
    {
        string s;
        long long n;cin>>n;
        long long cnt=0;
        cin>>s;
        vector<uint>dat(s.length());
        for(long long i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            dat[i].value=i;
            else 
            dat[i].value=s.length()-i-1;
            dat[i].maxValue=max(i,(long long)(s.length()-i-1));
            cnt+=dat[i].value;
        }
        sort(dat.begin(),dat.end(),compare);
        for(auto&it:dat){cnt+=it.maxValue-it.value;cout<<cnt<<' ';}
        cout<<endl;
    }
}
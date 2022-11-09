#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >>  test;
    while (test--)
    {
        long long n,a=0,longA=0,b=0,longB=0,temp1=0,temp2=0,mx=0;
        cin >> n;
        string s;
        cin >>  s;
        for(auto& it:s)
        {
            if (it=='1')
            {
                a++;
                temp1++;
                if(temp2>longB)longB=temp2;
                temp2=0;
            }
            else 
            {
                b++;
                temp2++;
                if(temp1>longA)longA=temp1;
                temp1=0;
            }
        }
                if(temp1>longA)longA=temp1;
                if(temp2>longB)longB=temp2;

        // cout<<longB<<endl;
        mx=max(longA*longB,longA*longA);
        mx=max(mx,longB*longB);
        mx=max(mx,a*b);
        if(b==0)mx=max(mx,a*a);        // cout<<s<<endl;
        if(a==0)mx=max(mx,b*b);
        cout<<mx<<endl;        // cout<<s<<endl;
    }
    
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        string s,a="",b="";
        cin >>s;
        // for()
        // cout<<s<<endl;
        for(long long i=0;i<n;i++)
        {
            if(i<n/2)
            a+=s[i];
            else
            b+=s[i];
        }
        // cout<<a<<" "<<b<<endl;
        if(a==b)
        cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long a, b, c,flag = false;
        cin >> a >> b >> c;
        if(a+b==c)flag = true;
        if(a+c==b)flag = true;
        if(c+b==a)flag = true;
        if(flag)
        cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
}
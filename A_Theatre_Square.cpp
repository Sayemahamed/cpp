#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,count=0,mul;
    cin >> a >> b >> c;
        count+=a/c;
        if(a%c)
        count++;
        mul=b/c;
        if(b%c)
        mul++;
        count*=mul;
    cout<<count<<endl; 
}
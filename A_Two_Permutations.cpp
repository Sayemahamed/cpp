#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while(test--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        if(a==b&&b==c)
        cout<<"Yes"<<endl;
        else if(a>(b+c+1))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
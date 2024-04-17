#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long dice,flag =true,top;
    cin >> dice>>top;
    while (dice--)
    {
        long long a,b;
        cin >> a >> b;
        if(a==top||b==top||7-a==top||7-b==top)flag=false;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
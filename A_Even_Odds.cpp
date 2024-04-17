#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long a,b;
    cin >>a>>b;
    if(a%2)
    {
        if(b<=(a/2)+1)
        cout<<b*2-1<<endl;
        else
        cout<<(b-(a/2)-1)*2<<endl;
    }
    else
    {
        if(b<=(a/2))
        cout<<b*2-1<<endl;
        else
        cout<<(b-a/2)*2<<endl;
    }
}

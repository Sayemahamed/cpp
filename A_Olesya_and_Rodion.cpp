#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin >> a >> b;
    if(b>(pow(10,a)-1))
    cout<<-1<<endl;
    else
    {
        long long x=pow(10,a)-1;
        while(x%b)x--;
        cout<<x<<endl;
    }
}
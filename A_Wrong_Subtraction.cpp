#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tim;
    cin>>n>>tim;
    while(tim--)
    {
        if(n%10)n--;
        else n/=10;
    }
    cout<<n<<endl;
}
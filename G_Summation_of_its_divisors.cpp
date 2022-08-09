#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    long long t,sum=0;
    cin >> t ;
    sum+=t;
    if(t>0)
    sum++;
for (int i=2; i<=sqrt(t); i++)
{
    if(t%i==0)
    {
    sum+=i;
    if (i!=t/i)
    sum+=t/i;
    }
}
cout << sum << endl;
}
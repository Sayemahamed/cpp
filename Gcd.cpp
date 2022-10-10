#include<bits/stdc++.h>
using namespace std;
long long Gcd(long long a, long long b)
{
    while (a)
    {
        b=b%a;
        swap(a,b);
    }
    return b;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout <<Gcd(a,b) <<endl;
}
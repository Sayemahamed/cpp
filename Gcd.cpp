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
    cout <<Gcd(4,0) <<endl;
}
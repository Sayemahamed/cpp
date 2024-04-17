#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,even,odd;
    cin >>n;
    odd=(n/2)+n%2;
    even=n/2;
    cout<<((even+1)*even)-(odd*odd)<<endl;
}
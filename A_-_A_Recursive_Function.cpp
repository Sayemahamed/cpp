#include<bits/stdc++.h>
using namespace std;
long long  fun(long long n)
{
    if(n==0)return 1;
    return n*fun(n-1);
}
int main()
{
    long long n;
    cin >> n ;
    cout <<fun(n)<<endl;
}
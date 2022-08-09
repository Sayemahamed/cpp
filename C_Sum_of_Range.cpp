#include <bits/stdc++.h>
using namespace std;
long long sum_odd(long long num)
{
long long res=(num+1)/2;
long long result=res*res;
return result;
}
long long sum_even(long long num)
{
long long res=(num+1)*num;
return res;
}
int main()
{
    long long start,end,oddSum,evenSum;
    cin >> start >> end ;
    if(start>end)swap(start,end);
    oddSum=sum_odd(end)-sum_odd(start-1);
    evenSum=sum_even(end/2)-sum_even((start-1)/2);
    cout<<oddSum+evenSum<<endl;
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;
}
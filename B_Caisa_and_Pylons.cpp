#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >>  test;
    long long pilons[test+1], ansArray[test+1],ans=0;
    pilons[0]=0;
    ansArray[0]=0;
    for (long long i = 1; i <= test; ++i)
    {
        cin >> pilons[i];
        ansArray[i-1]+=pilons[i-1]-pilons[i];
        ansArray[i]=ansArray[i-1];
        if(ansArray[i]<ans)ans=ansArray[i];
    }
cout<<abs(ans)<<endl;
}
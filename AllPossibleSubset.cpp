#include <bits/stdc++.h>
using namespace std;
long long arr[]={2,2,2,4,2};
long long getNumbers(long long Num)
{
    long long ret=0;
    for (long long i = 0; i < (1 << 5); i++)
    {
        long long odd=0;
            long long temp=0;
        for (long long j = 0; j < 5; j++)
        {
            if ((1 << j) & i)
            {
                odd++;
                temp+=(Num/arr[j]);
            }
        }
        if(odd&1)
        cout<<temp<<endl;
        // ret+=temp;
        else
        cout<<-temp<<endl;
        // ret-=temp;
    }
    return ret;
}
int main()
{
    cout<<getNumbers(10)<<endl;
}
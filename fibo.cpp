#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    unsigned long long fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    cout<<fibonacci[0]<<" "<<fibonacci[1]<<" "<<endl;
    for(long long i = 2; i < n;i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        if(i == n-1)
        cout<<fibonacci[i];
        else    cout<<fibonacci[i]<<" ";
    }
    cout<<endl;
}
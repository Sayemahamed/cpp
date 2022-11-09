#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test ;
    cin>>test;
    while (test--)
    {
        long long element,sum=0;
        cin >> element;
        long long elements[element];
        for(long long i=0; i<element; i++)
        {
            cin>>elements[i];
            sum +=elements[i];
        }
        cout <<abs(sum) <<endl;
    }
}
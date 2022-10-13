#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long money;
        cin >> money;
        if(money >100)
        money-=10;
        cout << money <<endl;   
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while (test--) 
    {
        float friends,slice;
        cin >> friends >> slice;
        cout << ceil((friends*slice)/4)<<endl;
    }
}
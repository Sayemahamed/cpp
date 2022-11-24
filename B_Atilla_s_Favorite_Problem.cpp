#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n,mx=0;
        cin >> n;
        string s;
        cin >>s;
        // cout<<s<<endl;
        for(auto&it:s)if(it>mx)mx=it;
        cout<<mx-'a'+1<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long n;
        cin >> n;
        set<long long>intData;
        set<char>charData;
        for(long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            intData.insert(x);
        }
        string s;
        cin >> s;
        // cout << s << endl;
        for(auto& it:s)
        charData.insert(it);
        if(charData.size() <= intData.size())
        cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
}
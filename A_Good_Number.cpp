#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,count=0;
    cin >> a >> b;
    // cin.ignore();
    for(long long i=0; i<a; i++)
    {
        string s;
        set<char>data;
        cin >> s;
        // cout << s << endl;
        for(long long j=0; j<s.length(); j++)
        {
            if(s[j]<=b+48)
            data.insert(s[j]);
        }
        if(data.size()>b)count++;
    }
    cout << count << endl;
}
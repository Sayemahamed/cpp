#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long ans = 0;
    string s;
    cin >> s;
    for (long long i = 0; i < s.size(); i++)
    {
        long long index =s.find("bear", i);
        if (index != string::npos)
            ans += s.size() - 3 - index;
    }
    cout<<ans<<endl;
}
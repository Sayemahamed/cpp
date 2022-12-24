#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        string s;
        vector<long long> dat;
        cin >> s;
        long long temp = 0;
        for (long long i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                temp++;
            }
            else if (temp)
            {
                dat.push_back(temp);
                temp = 0;
            }
        }
        if(temp)
        dat.push_back(temp);
        temp = 0;
        sort(dat.rbegin(), dat.rend());
        for(long long i = 0; i<dat.size();i++)
        {
            if(!(i&1))
            temp+=dat[i];
        }
        cout<<temp<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n,j=0;
        bool rFlag = false, bFlag = false, ans = true;
        cin >> n;
        string s;
        cin >> s;
        for (long long i = 0; i < n; i++)
        {
            if(i>j)j=i;
            while(s[j] != 'W' and j < n)
            {
                if (s[j]=='R')rFlag=true;
                if (s[j]=='B')bFlag=true;
                j++;
            }
            if(rFlag!=bFlag){ans=false;break;}
            rFlag=false;
            bFlag=false;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
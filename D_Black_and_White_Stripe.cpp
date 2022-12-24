#include <bits/stdc++.h>
using namespace std;
long long num;
void add(long long j, string &s)
{
    if (s[j] == 'W')
        num++;
}
void remove(long long i,string &s)
{
    if (s[i] == 'W')
    num--;
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        num = 0;
        long long size, span,ans=INTMAX_MAX,j=0;
        cin >> size >> span;
        string s;
        cin >> s;
        for(long long i=0; i<size; i++)
        {
            while(j-i<span and j<size)
            {
                add(j,s);
                j++;
            }
            if(j-i>=span)ans=min(ans,num);
            remove(i,s);
        }
        cout<<ans<<endl;
    }
}
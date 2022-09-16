#include<bits/stdc++.h>
using namespace std;    
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long a;
        cin>>a;
        string s;
        cin>>s;
        for (long long i = a; i >-1; i--)
        {
            if(s.substr(i,s.length())=="0")
            {
                cout<<(s.substr(i-2,s.length()-2))<<endl;
            s.erase(i-2,s.length());
            i-=3;
            }
            else
            s.erase(i,s.length());
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    long long length=s.length(),flag = true;
    for (long long i=0; i<length/2; i++)
    {
        if (s[i]!=s[length-1-i])flag=false;
    }
    return flag;
}
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long n,flag = true,onesCount=0;
        cin >> n;
        string s ;
        cin >> s ;
        for(auto & it:s)if (it=='1')onesCount++ ;
        flag=isPalindrome(s) ;
        // cout<<flag<<endl;
        if(flag){cout<<"YES"<<endl;continue;}
        else
        {
            if(n&1)cout<<"YES"<<endl;
            else if(!(onesCount&1))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        // cout << s << endl ;
    }
}
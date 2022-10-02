#include<bits/stdc++.h>
using namespace std;    
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long n ;
        string num;
        cin>>n;
        vector<char>ans;
        cin>>num;
        // cout<<num<<endl;
        for(long long i=num.length()-1; i>-1; i--)
        {
            if(num[i]!='0')
            ans.push_back(num[i]-48+'a'-1);
            // cout<<(char)(num[i]-'0'+'a');
            else
            {
                i--;
                // cout<<(num[i]-49)+((num[i-1]-49)*10)+'a';
                long long x=0;
                x+=(num[i]-48);
                x+=(num[--i]-48)*10+'a'-1;
                ans.push_back((char)x);
                // cout<<(char)((num[i]-'0')+(num[i-1]-'0')*10+'a');
            }
        }
        reverse(ans.begin(), ans.end());
        for (auto it:ans)
        cout<<it;
        cout<<endl;
    }
}
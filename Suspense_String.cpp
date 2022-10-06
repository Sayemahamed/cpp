#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        vector<char>data,ans;
        long long n;
        cin >> n;
        string s;
        cin >> s;
        for(auto& it:s)data.push_back(it);
        while(data.size())
        {
            if(data[0]=='1')
            ans.push_back(data[0]);
            else
            ans.insert(ans.begin(),data[0]);
            data.erase(data.begin());
            if(data.size())
            {
                if(data[data.size()-1]=='1')
                {
                    ans.insert(ans.begin(),data[data.size()-1]);
                }
                else
                    ans.push_back(data[data.size()-1]);
            data.erase(data.end()-1);

            }
        }
        for(auto& it :ans)cout<<it;
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while(test--)
    {
        long long strs;
        cin >> strs;
        map<string,bool>data;
        string str[strs];
        for (auto &&it : str)
        {
            cin >> it;
            data[it] = true;
        }
        
        for(long long i = 0; i < strs; i++)
        {
            bool doesExist = false;
            for(long long j = 1; j < str[i].size(); j++)
            if(data[str[i].substr(0,j)]&&data[str[i].substr(j,str[i].size()-j)])
            doesExist = true;
            cout<<doesExist;
        }
        cout<<endl;
    }
}